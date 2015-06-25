#include "stdafx.h"
#include "Lesser_Expr_Failure.h"

namespace GAME
{
namespace Ocl
{

//
// Default Constructor
//
Lesser_Expr_Failure::Lesser_Expr_Failure (void)
{
}

//
// Lesser_Expr_Failure (Lesser_Expr *)
//
Lesser_Expr_Failure::Lesser_Expr_Failure (Lesser_Expr * expr)
: Comparison_Expr_Failure (expr)
{
}

//
// Destructor
//
Lesser_Expr_Failure::~Lesser_Expr_Failure (void)
{
}

//
// accept (Expr_Failure_Visitor &)
//
void Lesser_Expr_Failure::accept (Expr_Failure_Visitor & v)
{
  v.Visit_Lesser_Expr_Failure (*this);
}

//
// get_origin (void)
//
Lesser_Expr * Lesser_Expr_Failure::get_origin (void) const
{
  return dynamic_cast <Lesser_Expr *> (expr_);
}

}
}