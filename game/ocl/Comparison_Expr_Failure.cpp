#include "stdafx.h"
#include "Comparison_Expr_Failure.h"

//
// Default Constructor
//
Comparison_Expr_Failure::Comparison_Expr_Failure (void)
	: Equality_Expr_Failure ()
{
}

//
// Comparison_Expr_Failure (Comparison_Expr *)
//
Comparison_Expr_Failure::Comparison_Expr_Failure (Comparison_Expr * expr)
	: Equality_Expr_Failure (expr)
{
}

//
// Destructor
//
Comparison_Expr_Failure::~Comparison_Expr_Failure (void)
{
}