// $Id$

#include "StdAfx.h"
#include "Set_Class_Definition.h"

#if !defined (__GAME_INLINE__)
#include "Set_Class_Definition.inl"
#endif  // !defined __GAME_INLINE__

#include "Functors.h"
#include "Connection_Endpoint_Visitor.h"
#include "Object_Manager.h"

#include "game/mga/Connection.h"

/**
 * @class SetMembership_Visitor
 */
class SetMembership_Visitor : public Proxy_Visitor
{
public:
  //
  // SetMembership_Visitor
  //
  SetMembership_Visitor (Set_Class_Definition * set)
    : set_ (set)
  {

  }

  //
  // visit_Atom
  //
  void visit_Atom (GAME::Mga::Atom_in member)
  {
    if (this->is_false_self_membership (member))
      return;

    // Determine what containment collection the item belongs to. This
    // will detemrine what methods containment methods we need to generate
    // for the model element.
    Object_Class_Definition * definition = OBJECT_MANAGER->get (member);
    this->set_->insert_member (definition);
  }

  //
  // visit_Connection
  //
  void visit_Connection (GAME::Mga::Connection_in item)
  {
    // Visit the source object.
    this->dst_ = item->dst ();
    item->src ()->accept (this);
  }

private:
  bool is_false_self_membership (GAME::Mga::Atom_in member)
  {
    return
      member->is_equal_to (this->set_->get_object ()) &&
      !this->dst_->is_equal_to (this->set_->get_object ());
  }

  Set_Class_Definition * set_;
  GAME::Mga::FCO dst_;
};

//
// build
//
void Set_Class_Definition::build (GAME::Mga::FCO_in fco)
{
  // First, pass control to the base class.
  FCO_Class_Definition::build (fco);

  // Get all the members of this set definition.
  std::vector <GAME::Mga::Connection> set_memberships;
  fco->in_connections ("SetMembership", set_memberships);

  SetMembership_Visitor visitor (this);
  for (GAME::Mga::Connection set_membership : set_memberships)
    set_membership->accept (&visitor);
}

//
// generate_definition
//
void Set_Class_Definition::
generate_definition (const Generation_Context & ctx)
{
  // Pass control to the base class.
  FCO_Class_Definition::generate_definition (ctx);

  // Write the folders for this model element.
  ctx.hfile_
    << std::endl
    << "/**" << std::endl
    << " * @name Set Member Getters" << std::endl
    << " */" << std::endl
    << "///@{" << std::endl;

  for (Object_Class_Definition * def : this->members_)
    this->generate_member_containment (ctx, def);

  ctx.hfile_
    << "///@}"
    << std::endl;
}

//
// generate_member_containment
//
void Set_Class_Definition::
generate_member_containment (const Generation_Context & ctx, Object_Class_Definition * item)
{
  const std::string name = item->name ();
  const std::string method_name = "members_" + name;

  // Declare the functions.
  ctx.hfile_
    << std::endl
    << "::GAME::Mga::Collection_T <" << name << "> " << method_name << " (void);";

  // Implement the functions.
  ctx.sfile_
    << function_header_t (method_name)
    << "::GAME::Mga::Collection_T <" << name << "> " << this->classname_ << "::"
    << method_name << " (void)"
    << "{"
    << "return this->members <" << name << "> ();"
    << "}";
}
