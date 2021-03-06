// $Id$

#include "stdafx.h"
#include "Attribute_Expr.h"
#include "Long_Value.h"
#include "Int_Value.h"
#include "Object_Value.h"
#include "String_Value.h"
#include "Boolean_Value.h"
#include "Double_Value.h"

#include "game/mga/MetaAttribute.h"

namespace GAME
{
namespace Ocl
{

//
// Constructor
//
Attribute_Expr::Attribute_Expr (std::string & var,
                                std::string & attr)
  : var_ (var),
    attribute_ (attr)
{
}

//
// Destructor
//
Attribute_Expr::~Attribute_Expr (void)
{
}

//
// evaluate
//
Value * Attribute_Expr::evaluate (Ocl_Context & res)
{
  res.model_constraint = false;
  GAME::Mga::FCO fco;

  // Checking the invoking object for the attribute
  if (this->var_ == "self")
    fco = GAME::Mga::FCO::_narrow (res.self);
  else
  {
    // The object value associated with the local variable is taken from map
    // and is used for attribute value calculation
    Object_Value * iv = dynamic_cast <Object_Value *> (res.locals [this->var_]);
    fco = GAME::Mga::FCO::_narrow (iv->value ());
  }

  GAME::Mga::Meta::FCO metafco = fco->meta ();

  // Collecting the attribute and returning its value
  std::string name = metafco->name ();
  GAME::Mga::Meta::Attribute meta_atr = metafco->attribute (this->attribute_, false);
  std::string atrname = meta_atr->name ();

  GAME::Mga::Attribute attr = fco->attribute (meta_atr);

  if (meta_atr->type () == ATTVAL_INTEGER)
  {
    long val = attr->int_value ();
    return new Int_Value (val);
  }
  else if (meta_atr->type () == ATTVAL_STRING)
  {
    std::string val = attr->string_value ();
    return new String_Value (val);
  }
  else if (meta_atr->type () == ATTVAL_BOOLEAN)
  {
    bool val = attr->bool_value ();
    return new Boolean_Value (val);
  }
  else if (meta_atr->type () == ATTVAL_DOUBLE)
  {
    double val = attr->double_value ();
    return new Double_Value (val);
  }
  else
    throw GAME::Mga::Exception ("invalid return type of attribute");
}

//
// filter_evaluate
//
Value * Attribute_Expr::filter_evaluate (Ocl_Context & res)
{
  res.model_constraint = false;
  GAME::Mga::FCO fco;

  // Checking the invoking object for the attribute
  if (this->var_ == "self")
    fco = GAME::Mga::FCO::_narrow (res.self);
  else
  {
    // The object value associated with the local variable is taken from map
    // and is used for attribute value calculation
    std::map <std::string, Value *>::iterator it;
    it = res.locals.find(this->var_);
    if (it == res.locals.end ())
      fco = res.cur_fco;
    else
    {
      Object_Value * iv = dynamic_cast <Object_Value *> (res.locals [this->var_]);
      fco = GAME::Mga::FCO::_narrow (iv->value ());
    }
  }

  // The current fco is used for attribute value computation
  GAME::Mga::Meta::FCO metafco = fco->meta ();

  std::string name = metafco->name ();
  GAME::Mga::Meta::Attribute meta_atr = metafco->attribute (this->attribute_, false);
  std::string atrname = meta_atr->name ();

  GAME::Mga::Attribute attr = fco->attribute (meta_atr);

  switch (meta_atr->type ())
  {
  case ATTVAL_INTEGER:
    return new Int_Value (attr->int_value ());

  case ATTVAL_STRING:
    return new String_Value (attr->string_value ());

  case ATTVAL_BOOLEAN:
    return new Boolean_Value (attr->bool_value ());

  case ATTVAL_DOUBLE:
    return new Double_Value (attr->double_value ());

  default:
    throw GAME::Mga::Exception ("invalid return type of Attribute");
  }
}

//
// is_mutable
//
bool Attribute_Expr::is_mutable (void)
{
  return true;
}

//
// is_filter
//
bool Attribute_Expr::is_filter (void)
{
  return true;
}

//
// attribute_name
//
std::string Attribute_Expr::attribute_name (void)
{
  return this->attribute_;
}

//
// caller
//
std::string Attribute_Expr::caller (void)
{
  return this->var_;
}

//
// is_association
//
bool Attribute_Expr::is_association (void)
{
  return true;
}

//
// is_containment
//
bool Attribute_Expr::is_containment (void)
{
  return false;
}

//
// is_reference
//
bool Attribute_Expr::is_reference (void)
{
  return true;
}

}
}