// $Id$

#include "StdAfx.h"
#include "Patron.h"

#if !defined (__GAME_INLINE__)
#include "Patron.inl"
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
  const std::string Patron_Impl::metaname ("Patron");

  //
  // is_abstract
  //
  const bool Patron_Impl::is_abstract = false;

  //
  // _create (const Library_in)
  //
  Patron Patron_Impl::_create (const Library_in parent)
  {
    return ::GAME::Mga::create < Patron > (parent, Patron_Impl::metaname);
  }

  //
  // accept
  //
  void Patron_Impl::accept (::GAME::Mga::Visitor * v)
  {
    // See if this is a visitor we know.
    Visitor * this_visitor = dynamic_cast <Visitor *> (v);

    if (0 != this_visitor)
      this_visitor->visit_Patron (this);
    else
      v->visit_Atom (this);
  }

  //
  // parent_Library
  //
  Library Patron_Impl::parent_Library (void)
  {
    return Library::_narrow (this->parent ());
  }

  //
  // dst_of_Borrow
  //
  size_t Patron_Impl::dst_of_Borrow (std::vector <Borrow> & items) const
  {
    return this->in_connections <Borrow> (items);
  }

  //
  // dst_of_Borrow
  //
  GAME::Mga::Collection_T <Borrow> Patron_Impl::dst_of_Borrow (void) const
  {
    return this->in_connections <Borrow> ("dst");
  }
}

