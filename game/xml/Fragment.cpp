// $Id$

#include "Fragment.h"

#if !defined (__GAME_INLINE__)
#include "Fragment.inl"
#endif

#include "Document.h"

#include <sstream>

namespace GAME
{
namespace Xml
{

Document Fragment::owner_document (void) const
{
  return this->fragment_->getOwnerDocument ();
}

Fragment Fragment::append_element (const String & name)
{
  using xercesc::DOMElement;
  using xercesc::DOMDocument;

  // Create the new element.
  DOMDocument * doc = this->fragment_->getOwnerDocument ();
  Fragment fragment = doc->createElement (name);

  // Append the fragment, and return.
  this->append (fragment);

  return fragment;
}

Fragment Fragment::append_element (const String & ns, const String & name)
{
  using xercesc::DOMElement;
  using xercesc::DOMDocument;

  // Create the new element.
  DOMDocument * doc = this->fragment_->getOwnerDocument ();
  Fragment fragment = doc->createElementNS (ns, name);

  // Append the fragment, and return.
  this->append (fragment);

  return fragment;
}

Fragment Fragment::
append_simple_content (const String & ns,
                       const String & name,
                       const String & value)
{
  using xercesc::DOMDocument;
  using xercesc::DOMElement;

  // Create the element.
  Fragment child = this->append_element (ns, name);

  // Create the text inside the child element.
  if (!value.empty ())
    child->setTextContent (value);

  return child;
}

Fragment Fragment::
append_simple_content (const String & name, const String & value)
{
  using xercesc::DOMDocument;
  using xercesc::DOMElement;

  // Create the element.
  Fragment child = this->append_element (name);

  // Create the text inside the child element.
  if (!value.empty ())
    child->setTextContent (value);

  return child;
}

void Fragment::set_attribute (const String & name, long value)
{
  std::ostringstream ostr;
  ostr << value;

  this->fragment_->setAttribute (name, String (ostr.str ()));
}

void Fragment::set_attribute (const String & name, double value)
{
  std::ostringstream ostr;
  ostr << value;

  this->fragment_->setAttribute (name, String (ostr.str ()));
}

}
}
