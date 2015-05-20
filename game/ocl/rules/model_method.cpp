#include "StdAfx.h"
#include "model_method_impl.hpp"

namespace GAME
{
namespace Ocl
{

void instantiate_model_method_grammar (void)
{
  typedef std::string::const_iterator iterator_type;
  model_method <iterator_type> g;
}

}
}