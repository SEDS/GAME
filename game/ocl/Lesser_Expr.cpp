// $Id: Lesser_Expr.cpp 2908 2012-06-10 18:21:53Z tpati $

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
  // flag to decide the case
  size_t flag = 0;
  bool ret = false;

  if (res.model_constraint)
  {

    // Checking if the local variables are mutable/non-mutable
    if (this->lhs_->is_mutable () && !this->rhs_->is_mutable ())
      flag = 1;
    else if (!this->lhs_->is_mutable () && this->rhs_->is_mutable ())
      flag = 2;
    else if (this->lhs_->is_mutable () && this->rhs_->is_mutable ())
      flag = 3;

    switch (flag) {

      case 1:
        {
          if (this->lhs_->evaluate (res)->is_greater (this->rhs_->evaluate (res)))
           {
             // Counting the number of objects to be deleted
             double count;
             this->rhs_->evaluate (res)->get_diff (this->lhs_->evaluate (res), count);

             // Calling the delete command
             ret = true;
           }
          break;
        }
      case 2:
        {
          if (this->lhs_->evaluate (res)->is_lesser (this->rhs_->evaluate (res)))
          {
            // Counting the number of objects to be deleted
            double count;
            this->lhs_->evaluate (res)->get_diff (this->rhs_->evaluate (res), count);

            // Calling the delete command
            ret = true;
          }
          break;
        }
      default:
        {
          //throw an exception
          ret = false;
        }
    }
  }
  else if (res.model_attributes)
  {
    // Assumption for now is that the attribute_expression is lhs and constant_value_expr
    // is rhs

    // Caller
    std::string obj = "";
    // Attribute name
    std::string name = "";

    // TODO

    // Performing the automated attribute value setting only if
    // the constraint contains attribute i.e. either lhs or rhs has attribute
    Attribute_Expr * left = dynamic_cast <Attribute_Expr *> (this->lhs_);
    Attribute_Expr * right = dynamic_cast <Attribute_Expr *> (this->rhs_);

    if (left != 0 || right != 0 )
    {
      if (left != 0)
      {
        name = left->attribute_name ();
        obj = left->caller ();
      }
      else
      {
        name = right->attribute_name ();
        obj = right->caller ();
      }

      GAME::Mga::FCO fco;

      // Checking the invoking object for the attribute
      if (obj == "self")
        fco = GAME::Mga::FCO::_narrow (res.self);
      else
      {
        // The object value associated with the local variable is taken from map
        // and is used for attribute value calculation
        Object_Value * iv = dynamic_cast <Object_Value *> (res.locals [obj]);
        fco = GAME::Mga::FCO::_narrow (iv->value ());
      }

      if (!this->lhs_->evaluate (res)->is_lesser (this->rhs_->evaluate (res)))
      {
        // TODO Add hook here for handling attribute commmand
        //
        //    Expr_Command *cmd = new Attribute_Add_Command (fco, name, new Int_Value (0));
        //    res.actions.push_back (cmd);
      }
      ret = true;
    }
    else
      ret = this->lhs_->evaluate (res)->is_lesser (this->rhs_->evaluate (res));

  }
  else if (res.checker)      // This section is used by Containment Check Handler only
  {
    // Checking if the local variables are mutable/non-mutable
    if (this->lhs_->is_mutable () && !this->rhs_->is_mutable ())
      flag = 1;
    else if (!this->lhs_->is_mutable () && this->rhs_->is_mutable ())
      flag = 2;
    else if (this->lhs_->is_mutable () && this->rhs_->is_mutable ())
      flag = 3;

    // Collecting the value and data of left hand side
    Value * v1 = this->lhs_->evaluate (res);
    Int_Value * iv = dynamic_cast <Int_Value * > (v1);
    int left_value = iv->value ();
    GAME::Mga::Meta::FCO left_metatype;
    GAME::Mga::Meta::Role left_metarole;
    if (flag == 1 || flag == 3)
    {
      left_metatype = res.target_metaroles[0]->kind ();
      left_metarole = res.target_metaroles[0];
    }

    if (flag == 3)
    {
      // Clearing the metaroles
      res.target_metaroles.clear ();
    }

    // Collecting the value and data of right hand side
    Value * v2 = this->rhs_->evaluate (res);
    Int_Value * iv2 = dynamic_cast <Int_Value * > (v2);
    int right_value = iv2->value ();

    GAME::Mga::Meta::FCO right_metatype;
    GAME::Mga::Meta::Role right_metarole;

    if (flag == 3 || flag == 2)
    {
      right_metatype = res.target_metaroles[0]->kind ();
      right_metarole = res.target_metaroles[0];
    }

    std::vector <std::string> options;
    double count;

    if (iv != 0 && iv2 != 0)
    {
      switch (flag) {
        case 1:
          {
            if (left_value >= right_value)
            {
             // This option is when the left side is greater than the constant right side
             // Counting the number of objects to be deleted
              double count = left_value - right_value;

              // TODO Pass control to callback to delete objects.
              ret = true;
            }
            break;
          }
        case 2:
          {
            if (right_value <= left_value)
            {
              // This option is when the right side is greater than the constant left side
              // Counting the number of objects to be deleted
              double count = left_value - right_value;

              // TODO Pass control to callback to add objects.
              ret = true;
            }
            break;
          }
        case 3:
          {
            // This option is used when both sides are variable
            if (this->lhs_->evaluate (res)->is_equal (this->rhs_->evaluate (res)))
            {
              ret = true;
            }
            else if (left_value > right_value)
            {
              count = left_value - right_value;

              // Options for the modeler if the right side is greater than left side
              /**
               * TODO Add callback method on Context here. We then need to
               * determine the proper action to take if there are options stored.
               *
               *    options.push_back ("Add " + right_metatype->name ());
               *    options.push_back ("Delete " + left_metatype->name ());
               */

              ret = true;
            }

            break;
          }
        default:
          {
            ret = false;
          }
        }
      }

  }
  else
    ret = this->lhs_->evaluate (res)->is_lesser (this->rhs_->evaluate (res));

  return ret;
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
