// $Id: Containment_Handler.cpp 2907 2012-06-07 21:35:18Z tpati $

#include "StdAfx.h"
#include <vector>
#include <algorithm>
#include <cstring>

#include "Containment_Handler.h"
#include "game/mga/Model.h"
#include "game/mga/MetaModel.h"
#include "game/mga/Connection.h"
#include "game/mga/Atom.h"
#include "game/mga/Object_Filter.h"
#include "game/mga/MetaConstraint.h"
#include "game/mga/FCO.h"
#include "game/mga/MetaFCO.h"
#include "MetaPart.h"

#include "boost/bind.hpp"

#include "Boolean_Expr.h"
#include "OCL_Expr_Parser.h"
#include "Model_Intelligence_Context.h"
#include "Expr_Command.h"

//
// Containment_Handler
//
Containment_Handler::Containment_Handler (void)
: GAME::Model_Intelligence_Event_Handler (eventmask)
{

}

//
// ~Containment_Handler
//
Containment_Handler::~Containment_Handler (void)
{

}

//
// handle_object_created
//
int Containment_Handler::handle_object_created (GAME::Mga::Object_in obj)
{
  if (this->is_importing_)
    return 0;

  GAME::Mga::Model mod = GAME::Mga::Model::_narrow (obj);

  // Setting the model specific attributes in Model_Intelligence_Features for containment
  Ocl_Context res;
  res.model_constraint = true;
  res.model_attributes = false;
  res.self = obj;
  res.model_object = mod;
  res.checker = false;

  // Collecting all constraints on the entered model
  std::vector <GAME::Mga::Meta::Constraint> cs;
  mod->meta ()->constraints (cs);

  std::vector <std::string> all_cardinalities;
  for (const auto & item : cs)
    all_cardinalities.push_back (item->expression ());

  // Iterating over all the cardinalities one by one so as to
  // parse and evaluate them to generate a list of actions
  std::vector <std::string>::const_iterator
    iter = all_cardinalities.begin (), iter_end = all_cardinalities.end ();

  for (; iter != iter_end; ++ iter)
  {
    //reseting the constraint specific variables
    res.target_metaroles.clear ();
    res.locals.clear ();

    std::vector <Boolean_Expr *> ocl;
    OCL_Expr_Parser parser;

    // Checking if the constraint exists in cache
    bool exists = false;

    for (const auto & cached_item : this->cache_)
    {
      if (*iter == cached_item.first)
      {
        ocl = cached_item.second;
        exists = true;
        break;
      }
    }

    if (!exists)
    {
      // Parsing the constraint string
      parser.parse_string ((*iter), ocl);
      this->cache_[*iter] = ocl;
    }

    std::vector <Boolean_Expr *>::iterator
      cont = ocl.begin (), cont_end = ocl.end ();

    int counter = 0;

    // Checking if the constraint is containment constraint
    for (; cont != cont_end; ++cont)
    {
      if ((*cont)->is_containment ())
        counter++;
    }

    if (counter == ocl.size ())
    {
      // Iterating over the sub-expressions and evaluating them
      std::for_each (ocl.begin (),
                     ocl.end (),
                     boost::bind(&Boolean_Expr::evaluate, _1, boost::ref(res)));
    }

  }

  // Iterating over the list of actions and executing them
  std::for_each (res.actions.begin (),
                 res.actions.end (),
                 boost::bind(&Expr_Command::execute, _1));



  return 0;

}