// -*- C++ -*-

//=============================================================================
/**
 * @file        Config_List_Parser.hpp
 *
 * $Id$
 *
 * @author      James H. Hill
 */
//=============================================================================

#ifndef _PROPERTY_LIST_PARSER_HPP_
#define _PROPERTY_LIST_PARSER_HPP_

#include <algorithm>
#include <map>

#include "boost/shared_ptr.hpp"
#include "boost/fusion/include/std_pair.hpp"
#include "boost/spirit/include/phoenix.hpp"

#include "Property_Map.h"
#include "Property_Name.hpp"

/// Type definition of a propert map configuration. This mapping stores
/// different configurations by their name.
typedef std::map <std::string,
                  Property_Map *>
                  Property_Configuration_Map;

namespace qi = boost::spirit::qi;

namespace actors
{
struct lookup_bind
{
  template <typename Context>
  void operator()(const std::string & cmd, Context ctx, qi::unused_type) const
  {
    // Extract the variables from the Context
    Property_Map * map = boost::fusion::at_c <1> (ctx.attributes); // _r1
    const Property_Configuration_Map & config_map = boost::fusion::at_c <2> (ctx.attributes); // _r2
    const std::string & name = boost::fusion::at_c <0> (ctx.locals); // _a

    // If we found the same name as an entry in the property configuration map
    // join that property map to the current one we are working with.
    typedef Property_Configuration_Map::const_iterator const_iterator;
    const_iterator end = config_map.end ();
    const_iterator iter = std::find_if (config_map.begin (),
                                        end,
                                        [&name] (const Property_Configuration_Map::value_type & entry) -> bool {return entry.first == name;}
                                       );

    if (iter != end)
      map->join (*iter->second, true);
  }
};
};

/**
 * @class Property_Configuration
 *
 * Grammar for parsing a propery configuration. Given content and a
 * property configuration map, this grammar returns a new Property_Map
 * object. This grammar does not add the new Property_Map to the
 * existing property map configuration object. That is the responsibility
 * of the caller since we want the property configuration map to remain
 * immutable.
 */
template <typename IteratorT, typename SpaceT>
struct Property_Configuration :
  public boost::spirit::qi::grammar <IteratorT,
                                     std::pair <std::string, Property_Map *> (const Property_Configuration_Map &),
                                     boost::spirit::qi::ascii::space_type>
{
  /**
   * Initializing constructor.
   *
   * @param[in]         actor         Actor for handling events.
   */
  Property_Configuration (void)
    : Property_Configuration::base_type (config_, std::string ("Property_Configuration")),
      config_ (std::string ("config")),
      assignments_ (std::string ("assignment")),
      assign_ (std::string ("assign")),
      value_ (std::string ("value")),
      ident_ (std::string ("ident"))
  {
    namespace qi = boost::spirit::qi;
    namespace phoenix = boost::phoenix;

    using phoenix::arg_names::arg1;

    using namespace qi::labels;

    this->config_ =
      qi::lit ("config") > this->ident_[
        // Set the configuration's name, then create a new property map.
        phoenix::at_c <0> (_val) = _1,
        phoenix::at_c <1> (_val) = phoenix::new_ <Property_Map> ()] >
        - (qi::lit (':') >> this->base_list_ (phoenix::at_c <1> (_val), _r1)) >>
      qi::lit ('{') >>
      this->assignments_ (phoenix::at_c <1> (_val)) >>
      qi::lit ('}');

    this->base_list_ =
      this->ident_[_a = _1][actors::lookup_bind ()]
      >>
      *(qi::lit (',') >>
        this->ident_[_a = _1][actors::lookup_bind ()]
      );

    this->assignments_ =
      *(this->assign_[phoenix::bind (&Property_Map::set, _r1, _1)]);

    this->assign_  %= this->name_ > '=' > this->value_;

    this->value_   %= qi::lexeme[*(qi::char_ - qi::eol)];

    this->ident_   %= qi::lexeme[(qi::alpha > *(qi::alnum | qi::char_ ('_')))];

    using phoenix::construct;
    using phoenix::val;

    // Definition of the error handler.
    qi::on_error <qi::fail>
    (
      config_,
      std::cerr << phoenix::val ("*** syntax error: expecting ")
                << qi::labels::_4
                << phoenix::val(" here; \"")
                << construct <std::string> (qi::labels::_3, qi::labels::_2)
                << phoenix::val("\"")
                << std::endl
    );
  }

  void enable_debugging (void)
  {
    debug (config_);
    debug (assignments_);
    debug (assign_);
    debug (value_);
    debug (ident_);

    this->name_.enable_debugging ();
  }

private:
  ::boost::spirit::qi::rule <IteratorT,
                             std::pair <std::string, Property_Map *> (const Property_Configuration_Map &),
                             SpaceT> config_;

  ::boost::spirit::qi::rule <IteratorT,
                             void (Property_Map *, const Property_Configuration_Map &),
                             ::boost::spirit::qi::locals <std::string>,
                             SpaceT> base_list_;

  ::boost::spirit::qi::rule <IteratorT,
                             void (Property_Map *),
                             SpaceT> assignments_;

  ::boost::spirit::qi::rule <IteratorT,
                             std::pair <std::string, std::string> (),
                             SpaceT> assign_;

  ::Property_Name <IteratorT, SpaceT> name_;

  ::boost::spirit::qi::rule <IteratorT,
                             std::string (),
                             SpaceT> value_;

  ::boost::spirit::qi::rule <IteratorT,
                             std::string (),
                             SpaceT> ident_;
};

/**
 * @class Property_Configurations
 *
 * Grammar for parsing multiple property configuration definition as
 * seen in a file.
 */
template <typename IteratorT, typename SpaceT>
struct Property_Configurations :
  public boost::spirit::qi::grammar <IteratorT,
                                     void (Property_Configuration_Map &),
                                     boost::spirit::qi::ascii::space_type>
{
  /// Default constructor.
  Property_Configurations (void)
    : Property_Configurations::base_type (listing_),
      listing_ (std::string ("listing"))
  {
    namespace phoenix = boost::phoenix;
    namespace qi = boost::spirit::qi;

    using namespace qi::labels;

    using phoenix::at_c;
    using phoenix::val;

    this->listing_ =
      * (this->config_ (_r1)[
          // Add the configuration name to the property map, the
          // insert it into the configuration map.
          phoenix::bind (&Property_Map::set, at_c <1> (_1), val ("config.name"), at_c <0> (_1)),
          phoenix::insert (_r1, _1)]);

    using phoenix::construct;
    using phoenix::val;

    // Definition of the error handler.
    qi::on_error <qi::fail>
    (
      listing_,
      std::cerr << phoenix::val ("*** syntax error: expecting ")
                << qi::labels::_4
                << phoenix::val(" here; \"")
                << construct <std::string> (qi::labels::_3, qi::labels::_2)
                << phoenix::val("\"")
                << std::endl
    );
  }

  void enable_debugging (void)
  {
    debug (listing_);
    this->config_.enable_debugging ();
  }

private:
  ::boost::spirit::qi::rule <IteratorT,
                             void (Property_Configuration_Map &),
                             SpaceT> listing_;

  ::Property_Configuration <IteratorT, SpaceT> config_;
};


#endif  // !defined _PROPERTY_LIST_PARSER_HPP_
