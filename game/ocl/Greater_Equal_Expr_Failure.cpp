#include "stdafx.h"
#include "Greater_Equal_Expr_Failure.h"

//
// Default Constructor
//
Greater_Equal_Expr_Failure::Greater_Equal_Expr_Failure (void)
	: Comparison_Expr_Failure ()
{
}

//
// Greater_Equal_Expr_Failure (Greater_Equal_Expr *)
//
Greater_Equal_Expr_Failure::Greater_Equal_Expr_Failure (Greater_Equal_Expr * expr)
	: Comparison_Expr_Failure (expr)
{
}

//
// Destructor
//
Greater_Equal_Expr_Failure::~Greater_Equal_Expr_Failure (void)
{
}

//
// accept (Expr_Failure_Visitor &)
//
void Greater_Equal_Expr_Failure::accept (Expr_Failure_Visitor & v)
{
	v.Visit_Greater_Equal_Expr_Failure(*this);
}

//
// get_origin (void)
//
Greater_Equal_Expr * Greater_Equal_Expr_Failure::get_origin (void)
{
	return dynamic_cast <Greater_Equal_Expr *> (expr_);
}