#include "stdafx.h"
#include "Expr_Failure.h"
#include "Boolean_Expr.h"

//
// Default Constructor
//
Expr_Failure::Expr_Failure (void)
: expr_ (0)
{
}

//
// Expr_Failure (Boolean_Expr *)
//
Expr_Failure::Expr_Failure (Boolean_Expr * expr)
: expr_ (expr)
{
}

//
// Destructor
//
Expr_Failure::~Expr_Failure (void)
{
}

//
// get_origin (void)
//
Boolean_Expr * Expr_Failure::get_origin (void) const
{
  return expr_;
}