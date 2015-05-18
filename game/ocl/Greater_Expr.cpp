// $Id: Greater_Expr.cpp 2905 2012-05-17 21:55:36Z tpati $

#include "stdafx.h"

#include "Greater_Expr.h"
#include "Attribute_Expr.h"
#include "Object_Value.h"
#include "Int_Value.h"
#include "Greater_Expr_Failure.h"

//
// Constructor
//
Greater_Expr::Greater_Expr (Value_Expr * left, Value_Expr * right)
: lhs_ (left),
  rhs_ (right)
{
}

//
// Destructor
//
Greater_Expr::~Greater_Expr (void)
{
}

//
// evaluate (The user selection from dialog is not yet functional)
//
bool Greater_Expr::evaluate (Ocl_Context & res)
{
  if ((this->lhs_->evaluate (res)->is_greater (this->rhs_->evaluate (res)))==false)
  {
    res.failures.push_back (std::make_shared <Greater_Expr_Failure> (this));
    return false;
  }
  return true;
}

//
// filter_evaluate
//
bool Greater_Expr::filter_evaluate (Ocl_Context & res, GAME::Mga::FCO & current)
{
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
        ret = left->is_greater (this->rhs_->filter_evaluate (res));
      }
      else
        ret = this->lhs_->filter_evaluate (res)->is_greater (this->rhs_->filter_evaluate (res));
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
        ret = right->is_greater (this->lhs_->filter_evaluate (res));
      }
      else
        ret = this->lhs_->filter_evaluate (res)->is_greater (this->rhs_->filter_evaluate (res));
    }
  }

  return ret;
}

//
// is_association
//
bool Greater_Expr::is_association (void)
{
  return (this->lhs_->is_association () && this->rhs_->is_association ());
}

//
// is_containment
//
bool Greater_Expr::is_containment (void)
{
  return (this->lhs_->is_containment () && this->rhs_->is_containment ());
}

//
// is_reference
//
bool Greater_Expr::is_reference (void)
{
  return (this->lhs_->is_reference () && this->rhs_->is_reference ());
}
