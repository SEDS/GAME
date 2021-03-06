// -*- C++ -*-

//============================================================================
/**
 * @file    Book.h
 *
 * $Id$
 *
 * @author  Alhad Mokashi <amokashi at iupui dot edu>
 *          James H. Hill <hillj at cs dot iupui dot edu>
 */
//============================================================================

#ifndef _LIBRARY_LIBRARY_BOOK_H_
#define _LIBRARY_LIBRARY_BOOK_H_

#include "Library/Library_fwd.h"
#include "Library/Library_export.h"

#include "game/mga/Atom.h"

namespace Library
{
  // Forward decl. and type definitions
  class Book_Impl;
  typedef Book_Impl * Book_in;
  typedef ::GAME::Mga::Smart_Ptr < Book_Impl > Book;

  // Forward decl.
  class Visitor;

  /**
   * @class Book_Impl
   *
   * Implementation for the Book model element.
   */
  class LIBRARY_Export Book_Impl :
    public virtual ::GAME::Mga::Atom_Impl
  {
    public:
    /// Tag type of this extension class.
    typedef ::GAME::Mga::atom_tag_t type_tag;

    /// Type definition of this class's interface.
    typedef IMgaAtom interface_type;

    /// Metaname for this extension class.
    static const std::string metaname;

    /// Identifier if this class is an abstract type in GME
    static const bool is_abstract;

    /**
     * @name Factory Methods
     */
    ///@{
    static Book _create (const Library_in parent);
    ///@}

    // Default constructor.
    Book_Impl (void);

    // Initializing constructor.
    Book_Impl (IMgaAtom * ptr);

    // Destructor.
    virtual ~Book_Impl (void);

    /// Accept a visitor for this model element.
    virtual void accept (::GAME::Mga::Visitor * v);

    /**
     * @name Parent Methods
     */
    ///@{
    Library parent_Library (void);
    ///@}

    /**
     * @name Attribute Methods
     */
    ///@{

    /// Set the value of Title
    void Title (const std::string & val);

    /// Get the value of Title
    std::string Title (void) const;

    /// Set the value of Author
    void Author (const std::string & val);

    /// Get the value of Author
    std::string Author (void) const;

    /// Set the value of Genre
    void Genre (const std::string & val);

    /// Get the value of Genre
    std::string Genre (void) const;

    /// Set the value of Quantity
    void Quantity (long val);

    /// Get the value of Quantity
    long Quantity (void) const;

    /// Set the value of ISBN
    void ISBN (double val);

    /// Get the value of ISBN
    double ISBN (void) const;
    ///@}

    /**
     * @name Source Connection Point Methods
     */
    ///@{

    /// Get the src Borrow connection.
    size_t src_of_Borrow (std::vector <Borrow> & items) const;
    GAME::Mga::Collection_T <Borrow> src_of_Borrow (void) const;
    ///@}
  };
}

#if defined (__GAME_INLINE__)
#include "Book.inl"
#endif

#endif  // !defined _LIBRARY_LIBRARY_BOOK
