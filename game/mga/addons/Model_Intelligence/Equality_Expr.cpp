// $Id: Equality_Expr.cpp 2902 2012-05-07 03:08:44Z tpati $

#include "StdAfx.h"
#include "Equality_Expr.h"

//
// Constructor
//
Equality_Expr::Equality_Expr (void)
{
}

//
// Destructor
//
Equality_Expr::~Equality_Expr (void)
{
}

//
// dummy method
//
bool Equality_Expr::evaluate (Ocl_Context &res)
{
  return true;
}

//
// dummy method
//
bool Equality_Expr::filter_evaluate (Ocl_Context &res, GAME::Mga::FCO &current)
{
  return true;
}

//
// dummy method
//
bool Equality_Expr::is_association (void)
{
  return true;
}

//
// dummy method
//
bool Equality_Expr::is_containment (void)
{
  return true;
}

//
// dummy method
//
bool Equality_Expr::is_reference (void)
{
  return true;
}