#include "stdafx.h"
#include "Lesser_Equal_Expr_Failure.h"

namespace GAME
{
namespace Ocl
{

//
// Default Constructor
//
Lesser_Equal_Expr_Failure::Lesser_Equal_Expr_Failure (void)
{
}

//
// Lesser_Equal_Expr_Failure (Lesser_Equal_Expr *)
//
Lesser_Equal_Expr_Failure::Lesser_Equal_Expr_Failure (Lesser_Equal_Expr * expr)
: Comparison_Expr_Failure (expr)
{
}

//
// Destructor
//
Lesser_Equal_Expr_Failure::~Lesser_Equal_Expr_Failure (void)
{
}

//
// accept (Expr_Failure_Visitor &)
//
void Lesser_Equal_Expr_Failure::accept (Expr_Failure_Visitor & v)
{
  v.Visit_Lesser_Equal_Expr_Failure (*this);
}

//
// get_origin (void)
//
Lesser_Equal_Expr * Lesser_Equal_Expr_Failure::get_origin (void) const
{
  return dynamic_cast<Lesser_Equal_Expr *> (expr_);
}

}
}