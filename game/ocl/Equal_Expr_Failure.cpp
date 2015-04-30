#include "stdafx.h"
#include "Equal_Expr_Failure.h"

//
// Default Constructor
//
Equal_Expr_Failure::Equal_Expr_Failure (void)
	: Comparison_Expr_Failure ()
{
}

//
// Equal_Expr_Failure (Equal_Expr *)
//
Equal_Expr_Failure::Equal_Expr_Failure (Equal_Expr * expr)
	: Comparison_Expr_Failure (expr)
{
}

//
// Destructor
//
Equal_Expr_Failure::~Equal_Expr_Failure (void)
{
}

//
// accept (Expr_Failure_Visitor &)
//
void Equal_Expr_Failure::accept (Expr_Failure_Visitor & v)
{
	v.Visit_Equal_Expr_Failure (*this);
}

//
// get_origin (void)
//
Equal_Expr * Equal_Expr_Failure::get_origin (void)
{
	return dynamic_cast <Equal_Expr *> (expr_);
}