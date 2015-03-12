
//=============================================================================
/**
 *  @file         Document.h
 *
 *  $Id$
 *
 *  @author       James H. Hill
 */
//=============================================================================


#ifndef _GAME_XML_DOCUMENT_H_
#define _GAME_XML_DOCUMENT_H_

#include "xercesc/dom/DOM.hpp"
#include "Fragment.h"

#include <memory>

namespace GAME
{
namespace Xml
{
class Fragment;

/**
 * @class Document
 */
class GAME_XML_Export Document
{
public:
  /**
   * Initializing constructor.
   *
   * @param[in]       doc         Source document
   */
  Document (xercesc::DOMDocument * doc);

  /**
   * Copy constructor.
   */
  Document (const Document & doc);

  /// Destructor.
  virtual ~Document (void);

protected:
  Document (const XMLCh * impl_type, const String & ns, const String & root);

public:
  /// Close the document.
  void close (void);

  /// Get the underlying implementation.
  xercesc::DOMDocument * operator -> (void) const;

  /// Get the underlying document.
  xercesc::DOMDocument * doc (void) const;

  /// Get the root element fore the document.
  Fragment root (void) const;

  /**
   * Append a fragment to the root of the document.
   *
   * @param[in]    fragment       Fragment to append
   */
  void append (const Fragment & fragment);

  /**
   * Create an element that can be appended to this fragment, or any
   * fragment in the document.
   *
   * @param[in]       name        Name of the element
   */
  Fragment create_element (const String & name);

  /**
   * Create an element that can be appended to this fragment, or any
   * fragment in the document.
   *
   * @param[in]       ns          Namespace of the element
   * @param[in]       name        Name of the element
   */
  Fragment create_element (const String & ns, const String & name);
   
  const Document & operator = (const Document & rhs);

  /// Get the underlying implementation.
  xercesc::DOMImplementation * impl (void) const;

protected:
  /// Contained document.
  xercesc::DOMDocument * doc_;

  /// Implementation for the document.
  xercesc::DOMImplementation * impl_;
};

/**
 * @class LS_Document
 */
class GAME_XML_Export LS_Document : public Document
{
public:
  /**
   * Initializing constructor.
   *
   * @param[in]     ns        Namespace of the document
   * @param[in]     root      Root element of document
   */
  LS_Document (const String & ns, const String & root);

  /**
   * Copy constructor.
   */
  LS_Document (const LS_Document & doc);

  /// Destructor.
  virtual ~LS_Document (void);

private:
  static const XMLCh LS[3];
};

}
}

#if defined (__GAME_INLINE__)
#include "Document.inl"
#endif

#endif  // !defined _GAME_XML_DOCUMENT_H_
