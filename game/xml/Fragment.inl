// -*- C++ -*-

namespace GAME
{
namespace Xml
{

GAME_INLINE
Fragment::Fragment (xercesc::DOMElement * e)
: fragment_ (e)
{

}

GAME_INLINE
Fragment::Fragment (const Fragment & f)
: fragment_ (f.fragment_)
{

}

GAME_INLINE
Fragment::~Fragment (void)
{

}

GAME_INLINE
xercesc::DOMElement * Fragment::operator -> (void)
{
  return this->fragment_;
}

GAME_INLINE
xercesc::DOMElement * Fragment::ptr (void) const
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
Fragment Fragment::clone (void) const
{
  return dynamic_cast <xercesc::DOMElement *> (this->fragment_->cloneNode (true));
}

GAME_INLINE
void Fragment::append (const Fragment & fragment)
{
  this->fragment_->appendChild (fragment.fragment_);
}

GAME_INLINE
bool Fragment::operator < (const GAME::Xml::Fragment & rhs) const
{
  return this->fragment_ < rhs.fragment_;
}

GAME_INLINE
bool Fragment::operator <= (const GAME::Xml::Fragment & rhs) const
{
  return this->fragment_ <= rhs.fragment_;
}

GAME_INLINE
bool Fragment::operator > (const GAME::Xml::Fragment & rhs) const
{
  return this->fragment_ > rhs.fragment_;
}

GAME_INLINE
bool Fragment::operator >= (const GAME::Xml::Fragment & rhs) const
{
  return this->fragment_ >= rhs.fragment_;
}

GAME_INLINE
bool Fragment::operator == (const GAME::Xml::Fragment & rhs) const
{
  return this->fragment_ == rhs.fragment_;
}

GAME_INLINE
bool Fragment::operator != (const GAME::Xml::Fragment & rhs) const
{
  return this->fragment_ != rhs.fragment_;
}

}
}
