// $Id: Lesser_Expr.cpp 2908 2012-06-10 18:21:53Z tpati $

#include <memory>

#include "stdafx.h"
#include "Attribute_Expr.h"
#include "Lesser_Expr.h"
#include "Object_Value.h"
#include "Int_Value.h"

#include "game/mga/Atom.h"
#include "game/mga/Model.h"

//
// Constructor
//
Lesser_Expr::Lesser_Expr (Value_Expr * left, Value_Expr * right)
: lhs_ (left),
  rhs_ (right)
{
}

//
// Destructor
//
Lesser_Expr::~Lesser_Expr (void)
{
}

//
// evaluate
//
bool Lesser_Expr::evaluate (Ocl_Context & res)
{
	if ((this->lhs_->evaluate (res)->is_lesser (this->rhs_->evaluate (res)))==false)
	{
		res.failures.push_back(std::make_shared<Lesser_Than_Failure_Object>());
		return false;
	}
  return true;
}

//
// filter_evaluate
//
bool Lesser_Expr::filter_evaluate (Ocl_Context & res, GAME::Mga::FCO & current)
{
  // Updating the current FCO in model intelligence context
  res.cur_fco = current;
  bool ret = false;

  if (this->lhs_->is_filter () || this->rhs_->is_filter ())
  {
    if (this->lhs_->is_filter ())
    {
      double count;
      // Increment the value by one as the object being added is also considered
      Int_Value * lv = dynamic_cast <Int_Value *> (this->lhs_->filter_evaluate (res));
      if (lv != 0)
      {
        lv->get_sum (new Int_Value (1), count);
        Int_Value * left = new Int_Value (static_cast <int> (count));
        ret = left->is_lesser (this->rhs_->filter_evaluate (res));
      }
      else
        ret = this->lhs_->filter_evaluate (res)->is_lesser (this->rhs_->filter_evaluate (res));
    }
    else if (this->rhs_->is_filter ())
    {
      double count;
      // Increment the value by one as the object being added is also considered
      Int_Value * rv = dynamic_cast <Int_Value *> (this->rhs_->filter_evaluate (res));

      if (rv != 0)
      {
        rv->get_sum (new Int_Value (1), count);
        Int_Value * right = new Int_Value (static_cast <int> (count));
        ret = right->is_lesser (this->lhs_->filter_evaluate (res));
      }
      else
        ret = this->lhs_->filter_evaluate (res)->is_lesser (this->rhs_->filter_evaluate (res));
    }
  }

  return ret;
}

//
// is_association
//
bool Lesser_Expr::is_association (void)
{
  return (this->lhs_->is_association () && this->rhs_->is_association ());
}

//
// is_containment
//
bool Lesser_Expr::is_containment (void)
{
  if (this->lhs_->is_containment () && this->rhs_->is_containment ())
    return true;

  return false;
}

//
// is_reference
//
bool Lesser_Expr::is_reference (void)
{
  if (this->lhs_->is_reference () && this->rhs_->is_reference ())
    return true;

  return false;
}
