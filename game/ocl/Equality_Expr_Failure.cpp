#include "stdafx.h"
#include "Equality_Expr_Failure.h"

namespace GAME
{
namespace Ocl
{

//
// Default Constructor
//
Equality_Expr_Failure::Equality_Expr_Failure (void)
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

}
}