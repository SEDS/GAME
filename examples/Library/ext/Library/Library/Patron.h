// -*- C++ -*-

//============================================================================
/**
 * @file    Patron.h
 *
 * $Id$
 *
 * @author  Alhad Mokashi <amokashi at iupui dot edu>
 *          James H. Hill <hillj at cs dot iupui dot edu>
 */
//============================================================================

#ifndef _LIBRARY_LIBRARY_PATRON_H_
#define _LIBRARY_LIBRARY_PATRON_H_

#include "Library/Library_fwd.h"
#include "Library/Library_export.h"

#include "game/mga/Atom.h"

namespace Library
{
  // Forward decl. and type definitions
  class Patron_Impl;
  typedef Patron_Impl * Patron_in;
  typedef ::GAME::Mga::Smart_Ptr < Patron_Impl > Patron;

  // Forward decl.
  class Visitor;

  /**
   * @class Patron_Impl
   *
   * Implementation for the Patron model element.
   */
  class LIBRARY_Export Patron_Impl :
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
    static Patron _create (const Library_in parent);
    ///@}

    // Default constructor.
    Patron_Impl (void);

    // Initializing constructor.
    Patron_Impl (IMgaAtom * ptr);

    // Destructor.
    virtual ~Patron_Impl (void);

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

    /// Set the value of Name
    void Name (const std::string & val);

    /// Get the value of Name
    std::string Name (void) const;

    /// Set the value of SSN
    void SSN (double val);

    /// Get the value of SSN
    double SSN (void) const;

    /// Set the value of HomeAddress
    void HomeAddress (const std::string & val);

    /// Get the value of HomeAddress
    std::string HomeAddress (void) const;

    /// Set the value of Gender
    void Gender (const std::string & val);

    /// Get the value of Gender
    std::string Gender (void) const;

    /// Set the value of Age
    void Age (long val);

    /// Get the value of Age
    long Age (void) const;
    ///@}

    /**
     * @name Destination Connection Point Methods
     */
    ///@{

    /// Get the dst Borrow connection.
    size_t dst_of_Borrow (std::vector <Borrow> & items) const;
    GAME::Mga::Collection_T <Borrow> dst_of_Borrow (void) const;
    ///@}
  };
}

#if defined (__GAME_INLINE__)
#include "Patron.inl"
#endif

#endif  // !defined _LIBRARY_LIBRARY_PATRON
