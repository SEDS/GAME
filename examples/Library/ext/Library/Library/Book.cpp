// $Id$

#include "StdAfx.h"
#include "Book.h"

#if !defined (__GAME_INLINE__)
#include "Book.inl"
#endif

#include "Library/Visitor.h"
#include "Library/Library/Borrow.h"
#include "Library/Library/Library.h"
#include "game/mga/Functional_T.h"
#include "game/mga/MetaModel.h"
#include "game/mga/MetaFolder.h"


namespace Library
{
  //
  // metaname
  //
  const std::string Book_Impl::metaname ("Book");

  //
  // _create (const Library_in)
  //
  Book Book_Impl::_create (const Library_in parent)
  {
    return ::GAME::Mga::create_object < Book > (parent, Book_Impl::metaname);
  }

  //
  // accept
  //
  void Book_Impl::accept (::GAME::Mga::Visitor * v)
  {
    // See if this is a visitor we know.
    Visitor * this_visitor = dynamic_cast <Visitor *> (v);

    if (0 != this_visitor)
      this_visitor->visit_Book (this);
    else
      v->visit_Atom (this);
  }

  //
  // parent_Library
  //
  Library Book_Impl::parent_Library (void)
  {
    return Library::_narrow (this->parent ());
  }

  //
  // src_Borrow
  //
  size_t Book_Impl::src_Borrow (std::vector <Borrow> & items) const
  {
    return this->in_connections <Borrow> (items);
  }
}

