#include "stdafx.h"
#include "Or_Expr_Failure.h"

//
// Default Constructor
//
Or_Expr_Failure ::Or_Expr_Failure (void)
{
}

//
// Or_Expr_Failure (Or_Expr *)
//
Or_Expr_Failure ::Or_Expr_Failure (Or_Expr * expr)
: Conjunction_Expr_Failure (expr)
{
}

//
// Destructor
//
Or_Expr_Failure ::~Or_Expr_Failure (void)
{
}

//
// accept (Expr_Failure_Visitor &)
//
void Or_Expr_Failure::accept (Expr_Failure_Visitor & v)
{
  v.Visit_Or_Expr_Failure (*this);
}

//
// get_origin (void)
//
Or_Expr * Or_Expr_Failure::get_origin (void) const
{
  return dynamic_cast <Or_Expr *> (expr_);
}