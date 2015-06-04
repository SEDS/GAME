#include "stdafx.h"
#include "And_Expr_Failure.h"

//
// Default Constructor
//
And_Expr_Failure::And_Expr_Failure (void)
{
}

//
// And_Expr_Failure (And_Expr *)
//
And_Expr_Failure::And_Expr_Failure (And_Expr * expr)
: Conjunction_Expr_Failure (expr)
{
}

//
// Destructor
//
And_Expr_Failure::~And_Expr_Failure (void)
{
}

//
// accept (Expr_Failure_Visitor &)
//
void And_Expr_Failure::accept (Expr_Failure_Visitor & v)
{
  v.Visit_And_Expr_Failure (*this);
}

//
// get_origin (void)
//
And_Expr * And_Expr_Failure::get_origin (void) const
{
  return dynamic_cast <And_Expr *> (expr_);
}