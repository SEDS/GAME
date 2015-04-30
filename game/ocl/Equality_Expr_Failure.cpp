#include "stdafx.h"
#include "Equality_Expr_Failure.h"

//
// Default Constructor
//
Equality_Expr_Failure::Equality_Expr_Failure (void)
	: Expr_Failure ()
{
}

//
// Equality_Expr_Failure (Equality_Expr *)
//
Equality_Expr_Failure::Equality_Expr_Failure(Equality_Expr * expr)
	: Expr_Failure (expr)
{
}

//
// Destructor
//
Equality_Expr_Failure::~Equality_Expr_Failure (void)
{
}