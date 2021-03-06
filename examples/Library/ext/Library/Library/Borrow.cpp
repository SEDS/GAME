// $Id$

#include "StdAfx.h"
#include "Borrow.h"

#if !defined (__GAME_INLINE__)
#include "Borrow.inl"
#endif

#include "Library/Visitor.h"
#include "Library/Library/Patron.h"
#include "Library/Library/Book.h"
#include "Library/Library/Library.h"
#include "game/mga/Functional_T.h"
#include "game/mga/MetaModel.h"
#include "game/mga/MetaFolder.h"


namespace Library
{
  //
  // metaname
  //
  const std::string Borrow_Impl::metaname ("Borrow");

  //
  // is_abstract
  //
  const bool Borrow_Impl::is_abstract = false;

  //
  // _create (const Library_in, Book_in src, Patron_in dst)
  //
  Borrow Borrow_Impl::_create (const Library_in parent, Book_in src, Patron_in dst)
  {
    return ::GAME::Mga::Connection_Impl::_create (parent, Borrow_Impl::metaname, src, dst);
  }

  //
  // accept
  //
  void Borrow_Impl::accept (::GAME::Mga::Visitor * v)
  {
    // See if this is a visitor we know.
    Visitor * this_visitor = dynamic_cast <Visitor *> (v);

    if (0 != this_visitor)
      this_visitor->visit_Borrow (this);
    else
      v->visit_Connection (this);
  }

  //
  // parent_Library
  //
  Library Borrow_Impl::parent_Library (void)
  {
    return Library::_narrow (this->parent ());
  }

  //
  // Book
  //
  Book Borrow_Impl::src_Book (void) const
  {
    return Book::_narrow (this->src ());
  }

  //
  // Patron
  //
  Patron Borrow_Impl::dst_Patron (void) const
  {
    return Patron::_narrow (this->dst ());
  }
}

