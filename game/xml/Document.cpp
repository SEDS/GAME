#include "Document.h"

#if !defined (__GAME_INLINE__)
#include "Document.inl"
#endif

namespace GAME
{
namespace Xml
{

Document::Document (const XMLCh * impl_type, const String & ns, const String & root)
: impl_ (xercesc::DOMImplementationRegistry::getDOMImplementation (impl_type))
{
  this->doc_ = this->impl_->createDocument (ns, root, 0);

  // Set the XML version number.
  if (this->doc_)
    this->doc_->setXmlVersion (String ("1.0"));
}

void Document::close (void)
{
  if (0 != this->doc_)
  {
    this->doc_->release ();
    this->doc_ = 0;
  }
}

const XMLCh LS_Document::LS[3] = {xercesc::chLatin_L, xercesc::chLatin_S, xercesc::chNull};

LS_Document::LS_Document (const String & ns, const String & root)
: Document (LS, ns, root)
{

}

LS_Document::~LS_Document (void)
{

}

}
}
