// $Id$

#include "stdafx.h"
#include "RootFolder.h"
#include "Visitor.h"

#include "Library/Library/Library.h"

namespace Library
{
  const std::string RootFolder_Impl::metaname ("RootFolder");

  RootFolder_Impl::RootFolder_Impl (void)
  {
  }

  RootFolder_Impl::RootFolder_Impl (IMgaFolder * folder)
  : ::GAME::Mga::RootFolder_Impl (folder)
  {
  }

  RootFolder_Impl::~RootFolder_Impl (void)
  {
  }

  void RootFolder_Impl::accept (::GAME::Mga::Visitor * v)
  {
    Visitor * this_visitor = dynamic_cast <Visitor *> (v);

    if (0 != this_visitor)
      this_visitor->visit_RootFolder (this);
    else
      v->visit_Folder (this);
  }

  size_t RootFolder_Impl::get_Library (std::vector <Library> & items) const
  {
    return this->children (items);
  }

  ::GAME::Mga::Collection_T <Library> RootFolder_Impl::get_Library (void) const
  {
    return this->children <Library> ();
  }
}


