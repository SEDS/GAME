// $Id$

#include "stdafx.h"
#include "If_Then_Else_Expr.h"
#include "Object_Value.h"
#include "If_Then_Else_Expr_Failure.h"

namespace GAME
{
namespace Ocl
{

//
// Constructor
//
If_Then_Else_Expr::If_Then_Else_Expr (Equality_Expr * cond, std::vector <Boolean_Expr *> & first, std::vector <Boolean_Expr *> & second)
: cond_ (cond),
  first_ (first),
  second_ (second)
{
}

//
// Destructor
//
If_Then_Else_Expr::~If_Then_Else_Expr (void)
{
}

//
// evaluate
//
bool If_Then_Else_Expr::evaluate (Ocl_Context & res)
{
  bool flag = true;

  if (this->cond_->evaluate (res))
  {
    // Iterating over the sub-expressions and evaluating them
    for (Boolean_Expr * expr : this->first_)
      flag = expr->evaluate (res);
  }
  else
  {
    // Iterating over the sub-expressions and evaluating them
    for (Boolean_Expr * expr : this->second_)
      flag = expr->evaluate (res);
  }

  if (flag == false)
    res.failures.push_back (std::make_shared <If_Then_Else_Expr_Failure> (this));

  return flag;
}

//
// filter_evaluate
//
bool If_Then_Else_Expr::filter_evaluate (Ocl_Context & res,
                                         GAME::Mga::FCO & current)
{
  res.cur_fco = current;
  bool flag = true;

  if (this->cond_->filter_evaluate (res, current))
  {
    // Iterating over the sub-expressions and evaluating them
    for (Boolean_Expr * expr : this->first_)
      flag = expr->filter_evaluate (res, current);
  }
  else
  {
    // Iterating over the sub-expressions and evaluating them
    for (Boolean_Expr * expr : this->second_)
      flag = expr->filter_evaluate (res, current);
  }

  return flag;
}

//
// is_association
//
bool If_Then_Else_Expr::is_association (void)
{
  return false;
}

//
// is_containment
//
bool If_Then_Else_Expr::is_containment (void)
{
  return false;
}

//
// is_reference
//
bool If_Then_Else_Expr::is_reference (void)
{
  return false;
}

}
}