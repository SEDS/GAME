#include "stdafx.h"
#include "Greater_Expr_Failure.h"

//
// Default Constructor
//
Greater_Expr_Failure::Greater_Expr_Failure (void)
{
}

//
// Greater_Expr_Failure (Greater_Expr *)
//
Greater_Expr_Failure::Greater_Expr_Failure (Greater_Expr * expr)
: Comparison_Expr_Failure (expr)
{
}

//
// Destructor
//
Greater_Expr_Failure::~Greater_Expr_Failure (void)
{
}

//
// accept (Expr_Failure_Visitor &)
//
void Greater_Expr_Failure::accept (Expr_Failure_Visitor & v)
{
  v.Visit_Greater_Expr_Failure (*this);
}

//
// get_origin (void)
//
Greater_Expr * Greater_Expr_Failure::get_origin (void) const
{
  return dynamic_cast <Greater_Expr *> (expr_);
}