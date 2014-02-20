#include "stdafx.h"
#include "Evaluator.h"

#if !defined (__GAME_INLINE__)
#include "Evaluator.inl"
#endif

#include "Ocl_Parser.h"
#include "Context.h"

namespace GAME
{
namespace Ocl
{

bool Evaluator::evaluate (GAME::Mga::Object_in self, const std::string & expr)
{
  std::vector <Boolean_Expr *> compiled;

  if (!this->parser_.parse (expr, compiled))
    throw GAME::Mga::Exception ("failed to parse ocl expression", __FILE__, __LINE__);

  return this->evaluate (self, compiled);
}

bool Evaluator::evaluate (GAME::Mga::Object_in self, const std::vector <Boolean_Expr *> & ocl_expr)
{
  typedef std::vector <Boolean_Expr *>::const_iterator iterator;
  bool result = true;

  Ocl_Context context;
  context.self = self;

  for (iterator iter = ocl_expr.begin (), iter_end = ocl_expr.end (); iter != iter_end; ++ iter)
    result &= (*iter)->evaluate (context);

  return result;
}

}
}
