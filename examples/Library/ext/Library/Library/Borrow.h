// -*- C++ -*-

//============================================================================
/**
 * @file    Borrow.h
 *
 * $Id$
 *
 * @author  Alhad Mokashi <amokashi at iupui dot edu>
 *          James H. Hill <hillj at cs dot iupui dot edu>
 */
//============================================================================

#ifndef _LIBRARY_LIBRARY_BORROW_H_
#define _LIBRARY_LIBRARY_BORROW_H_

#include "Library/Library_fwd.h"
#include "Library/Library_export.h"

#include "game/mga/Connection.h"

namespace Library
{
  // Forward decl. and type definitions
  class Borrow_Impl;
  typedef Borrow_Impl * Borrow_in;
  typedef ::GAME::Mga::Smart_Ptr < Borrow_Impl > Borrow;

  // Forward decl.
  class Visitor;

  /**
   * @class Borrow_Impl
   *
   * Implementation for the Borrow model element.
   */
  class LIBRARY_Export Borrow_Impl :
    public virtual ::GAME::Mga::Connection_Impl
  {
    public:
    /// Tag type of this extension class.
    typedef ::GAME::Mga::connection_tag_t type_tag;

    /// Type definition of this class's interface.
    typedef IMgaConnection interface_type;

    /// Metaname for this extension class.
    static const std::string metaname;

    /**
     * @name Factory Methods
     */
    ///@{
    static Borrow _create (const Library_in parent);
    ///@}

    // Default constructor.
    Borrow_Impl (void);

    // Initializing constructor.
    Borrow_Impl (IMgaConnection * ptr);

    // Destructor.
    virtual ~Borrow_Impl (void);

    /// Accept a visitor for this model element.
    virtual void accept (::GAME::Mga::Visitor * v);

    /**
     * @name Parent Methods
     */
    ///@{
    Library parent_Library (void);
    ///@}
    Book src_Book (void) const;
    Patron dst_Patron (void) const;
  };
}

#if defined (__GAME_INLINE__)
#include "Borrow.inl"
#endif

#endif  // !defined _LIBRARY_LIBRARY_BORROW
