#include "stdafx.h"
#include "Not_Equal_Expr_Failure.h"

//
// Default Constructor
//
Not_Equal_Expr_Failure::Not_Equal_Expr_Failure (void)
{
}

//
// Not_Equal_Expr_Failure (Not_Equal_Expr *)
//
Not_Equal_Expr_Failure::Not_Equal_Expr_Failure (Not_Equal_Expr * expr)
: Comparison_Expr_Failure (expr)
{
}

//
// Destructor
//
Not_Equal_Expr_Failure::~Not_Equal_Expr_Failure (void)
{
}

//
// accept (Expr_Failure_Visitor &)
//
void Not_Equal_Expr_Failure::accept (Expr_Failure_Visitor & v)
{
  v.Visit_Not_Equal_Expr_Failure (*this);
}

//
// get_origin (void)
//
Not_Equal_Expr * Not_Equal_Expr_Failure::get_origin (void) const
{
  return dynamic_cast <Not_Equal_Expr *> (expr_);
}