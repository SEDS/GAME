// $Id$

#include "stdafx.h"
#include "Visitor.h"

namespace Library
{
  Visitor::Visitor (void)
  {
  }

  Visitor::~Visitor (void)
  {
  }

  void Visitor::visit_RootFolder (RootFolder_in folder)
  {
  }

  //
  // visit_Patron
  //
  void Visitor::visit_Patron (Patron_in item)
  {
  }

  //
  // visit_Borrow
  //
  void Visitor::visit_Borrow (Borrow_in item)
  {
  }

  //
  // visit_Book
  //
  void Visitor::visit_Book (Book_in item)
  {
  }

  //
  // visit_Library
  //
  void Visitor::visit_Library (Library_in item)
  {
  }
}

