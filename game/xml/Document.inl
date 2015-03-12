// $Id$

namespace GAME
{
namespace Xml
{

GAME_INLINE
Document::Document (xercesc::DOMDocument * doc)
: doc_ (doc),
  impl_ (0)
{

}

GAME_INLINE
Document::Document (const Document & copy)
: doc_ (copy.doc_),
  impl_ (copy.impl_)
{

}

GAME_INLINE
Document::~Document (void)
{

}

GAME_INLINE
const Document & Document::operator = (const Document & rhs)
{
  this->doc_ = rhs.doc_;
  this->impl_ = rhs.impl_;

  return *this;
}

GAME_INLINE
xercesc::DOMDocument * Document::operator -> (void) const
{
  return this->doc_;
}

GAME_INLINE
xercesc::DOMDocument * Document::doc (void) const
{
  return this->doc_;
}

GAME_INLINE
xercesc::DOMImplementation * Document::impl (void) const
{
  return this->impl_;
}

GAME_INLINE
Fragment Document::root (void) const
{
  return this->doc_->getDocumentElement ();
}

GAME_INLINE
void Document::append (const Fragment & fragment)
{
  this->root ().append (fragment);
}

GAME_INLINE
Fragment Document::create_element (const String & name)
{
  return this->doc_->createElement (name);
}

GAME_INLINE
Fragment Document::create_element (const String & ns, const String & name)
{
  return this->doc_->createElementNS (ns, name);
}

}
}
