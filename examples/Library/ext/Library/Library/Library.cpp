// $Id$

#include "StdAfx.h"
#include "Library.h"

#if !defined (__GAME_INLINE__)
#include "Library.inl"
#endif

#include "Library/Visitor.h"
#include "Library/Library/Book.h"
#include "Library/Library/Patron.h"
#include "Library/Library/Borrow.h"
#include "game/mga/Functional_T.h"
#include "game/mga/MetaModel.h"
#include "game/mga/MetaFolder.h"


namespace Library
{
  //
  // metaname
  //
  const std::string Library_Impl::metaname ("Library");

  //
  // _create (const ::GAME::Mga::RootFolder_in)
  //
  Library Library_Impl::_create (const ::GAME::Mga::RootFolder_in parent)
  {
    return ::GAME::Mga::create_root_object <Library> (parent, Library_Impl::metaname);
  }

  //
  // accept
  //
  void Library_Impl::accept (::GAME::Mga::Visitor * v)
  {
    // See if this is a visitor we know.
    Visitor * this_visitor = dynamic_cast <Visitor *> (v);

    if (0 != this_visitor)
      this_visitor->visit_Library (this);
    else
      v->visit_Model (this);
  }

  //
  // parent_RootFolder (void)
  //
  RootFolder Library_Impl::parent_RootFolder (void)
  {
    return RootFolder::_narrow (this->parent ());
  }

  //
  // get_Books
  //
  size_t Library_Impl::get_Books (std::vector <Book> & items) const
  {
    return this->children (items);
  }

  //
  // get_Books
  //
  ::GAME::Mga::Collection_T <Book> Library_Impl::get_Books (void) const
  {
    return this->children <Book> ();
  }

  //
  // get_Patrons
  //
  size_t Library_Impl::get_Patrons (std::vector <Patron> & items) const
  {
    return this->children (items);
  }

  //
  // get_Patrons
  //
  ::GAME::Mga::Collection_T <Patron> Library_Impl::get_Patrons (void) const
  {
    return this->children <Patron> ();
  }

  //
  // get_Borrows
  //
  size_t Library_Impl::get_Borrows (std::vector <Borrow> & items) const
  {
    return this->children (items);
  }

  //
  // get_Borrows
  //
  ::GAME::Mga::Collection_T <Borrow> Library_Impl::get_Borrows (void) const
  {
    return this->children <Borrow> ();
  }
}

