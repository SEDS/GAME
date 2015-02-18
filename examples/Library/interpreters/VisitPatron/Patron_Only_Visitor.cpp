// $Id$

#include "StdAfx.h"
#include "Patron_Only_Visitor.h"

#include "Library/Library/Patron.h"
#include "Library/Library/Library.h"

#include "boost/bind.hpp"
#include <algorithm>

//
// Patron_Only_Visitor
//
Patron_Only_Visitor::Patron_Only_Visitor (void)
{

}

//
// ~Patron_Only_Visitor
//
Patron_Only_Visitor::~Patron_Only_Visitor (void)
{

}

//
// visit_RootFolder
//
void Patron_Only_Visitor::
visit_RootFolder (Library::RootFolder_in r)
{
  // Visit all the Libraries in the root folder.
  for (auto library : r->get_Library ())
    library->accept (this);
}


//
// visit_Patron
//
void Patron_Only_Visitor::visit_Library (Library::Library_in l)
{
  // Get all the patrons in this model.
  for (auto patron : l->get_Patrons ())
    patron->accept (this);
}

//
// visit_Patron
//
void Patron_Only_Visitor::visit_Patron (Library::Patron_in p)
{
  ::AfxMessageBox (p->path ("/").c_str ());
}
