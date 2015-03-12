// -*- C++ -*-

//=============================================================================
/**
 *  @file         Fragment.h
 *
 *  @author       James H. Hill
 */
//=============================================================================

#ifndef _GAME_XML_FRAGMENT_H_
#define _GAME_XML_FRAGMENT_H_

#include "xercesc/dom/DOMElement.hpp"
#include "String.h"

namespace GAME
{
namespace Xml
{

class Document;

/**
 * @class Fragment
 *
 * Wrapper class for a fragment of an XML document.
 */
class GAME_XML_Export Fragment
{
public:
  /// Default constructor
  Fragment (xercesc::DOMElement * e = 0);

  /// Copy constructor.
  Fragment (const Fragment & f);

  /// Destructor.
  virtual ~Fragment (void);

  /**
   * Append an element at the end of the current fragment.
   *
   * @param[in]       name        Name of the element.
   */
  Fragment append_element (const String & name);
  Fragment append_element (const String & ns, const String & name);

  /// Get the owner document.
  Document owner_document (void) const;

  /**
   * Create a simple content element at the end of the current
   * fragment.
   *
   * @param[in]       name        Name of the element.
   * @param[in]       value       Text value of the content.
   */
  Fragment append_simple_content (const String & name, const String & value);
  Fragment append_simple_content (const String & ns, const String & name, const String & value);

  /// Get a pointer to the fragment.
  xercesc::DOMElement * operator -> (void);

  /// Get a pointer to the fragment.
  xercesc::DOMElement * ptr (void) const;

  operator xercesc::DOMElement * (void);

  const Fragment & operator = (xercesc::DOMElement * e);
  const Fragment & operator = (const Fragment &);

  void set_attribute (const String & name, const String & value);
  void set_attribute (const String & name, bool value);
  void set_attribute (const String & name, double value);
  void set_attribute (const String & name, long value);

  /// Do a deep clone of the fragment.
  Fragment clone (void) const;

  /**
   * Append an existing fragment to this fragment.
   *
   * @param[in]       fragment        Fragment to append
   */
  void append (const Fragment & fragment);

  bool operator < (const GAME::Xml::Fragment & rhs) const;
  bool operator <= (const GAME::Xml::Fragment & rhs) const;

  bool operator > (const GAME::Xml::Fragment & rhs) const;
  bool operator >= (const GAME::Xml::Fragment & rhs) const;

  bool operator == (const GAME::Xml::Fragment & rhs) const;
  bool operator != (const GAME::Xml::Fragment & rhs) const;

protected:
  /// Pointer to the current fragment.
  xercesc::DOMElement * fragment_;
};

}
}

#if defined (__GAME_INLINE__)
#include "Fragment.inl"
#endif

#endif  // !defined _GAME_XML_FRAGMENT_H_
