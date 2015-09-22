#include "stdafx.h"
#include "If_Then_Else_Expr_Failure.h"

namespace GAME
{
namespace Ocl
{

//
// Default Constructor
//
If_Then_Else_Expr_Failure::If_Then_Else_Expr_Failure (void)
{
}

//
// If_Then_Else_Expr_Failure (Boolean_Expr *)
//
If_Then_Else_Expr_Failure::If_Then_Else_Expr_Failure (Boolean_Expr * expr)
: Expr_Failure (expr)
{
}

//
// Destructor
//
If_Then_Else_Expr_Failure::~If_Then_Else_Expr_Failure (void)
{
}

//
// accept (Expr_Failure_Visitor &)
//
void If_Then_Else_Expr_Failure::accept (Expr_Failure_Visitor & v)
{
  v.Visit_If_Then_Else_Expr_Failure (*this);
}

//
// get_origin (void)
//
If_Then_Else_Expr * If_Then_Else_Expr_Failure::get_origin (void) const
{
  return dynamic_cast <If_Then_Else_Expr *> (expr_);
}

}
}