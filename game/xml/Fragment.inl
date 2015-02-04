// -*- C++ -*-
// $Id$

namespace GAME
{
namespace Xml
{

GAME_INLINE
Fragment::Fragment (xercesc::DOMElement * e)
: fragment_ (e)
{

}

Fragment::Fragment (const Fragment & f)
: fragment_ (f.fragment_)
{

}

GAME_INLINE
Fragment::~Fragment (void)
{

}

GAME_INLINE
xercesc::DOMElement * Fragment::create_element (const String & name)
{
  return Fragment::create_element (this->fragment_, name);
}

GAME_INLINE
xercesc::DOMElement * Fragment::
create_element (const String & ns, const String & name)
{
  return Fragment::create_element (this->fragment_, ns, name);
}

GAME_INLINE
xercesc::DOMElement * Fragment::
create_simple_content (const String & name, const String & value)
{
  return Fragment::create_simple_content (this->fragment_, name, value);
}

GAME_INLINE
xercesc::DOMElement * Fragment::
create_simple_content (const String & ns, const String & name, const String & value)
{
  return Fragment::create_simple_content (this->fragment_, ns, name, value);
}

GAME_INLINE
xercesc::DOMElement * Fragment::operator -> (void)
{
  return this->fragment_;
}

GAME_INLINE
xercesc::DOMElement * Fragment::ptr (void)
{
  return this->fragment_;
}

GAME_INLINE
const Fragment & Fragment::operator = (xercesc::DOMElement * e)
{
  this->fragment_ = e;
  return *this;
}

GAME_INLINE
const Fragment & Fragment::operator = (const Fragment & f)
{
  this->fragment_ = f.fragment_;
  return *this;
}

GAME_INLINE
Fragment::operator xercesc::DOMElement * (void)
{
  return this->fragment_;
}

GAME_INLINE
void Fragment::set_attribute (const String & name, const String & value)
{
  this->fragment_->setAttribute (name, value);
}

GAME_INLINE
void Fragment::set_attribute (const String & name, bool value)
{
  static const String value_true ("true");
  static const String value_false ("false");
  this->fragment_->setAttribute (name, value ? value_true : value_false);
}

GAME_INLINE
Fragment Fragment::clone (void)
{
  return dynamic_cast <xercesc::DOMElement *> (this->fragment_->cloneNode (true));
}

}
}
