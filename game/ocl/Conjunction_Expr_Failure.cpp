#include "stdafx.h"
#include "Conjunction_Expr_Failure.h"

namespace GAME
{
namespace Ocl
{

//
// Default Constructor
//
Conjunction_Expr_Failure::Conjunction_Expr_Failure (void)
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

}
}