#include "stdafx.h"
#include "Conjunction_Expr_Failure.h"

//
// Default Constructor
//
Conjunction_Expr_Failure::Conjunction_Expr_Failure (void)
	: Equality_Expr_Failure ()
{
}

//
// Conjunction_Expr_Failure (Conjunction_Expr *)
//
Conjunction_Expr_Failure::Conjunction_Expr_Failure (Conjunction_Expr * expr)
	: Equality_Expr_Failure (expr)
{
}

//
// Destructor
//
Conjunction_Expr_Failure::~Conjunction_Expr_Failure (void)
{
}