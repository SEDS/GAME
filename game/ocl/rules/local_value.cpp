#include "StdAfx.h"
#include "local_value_impl.hpp"

namespace GAME
{
namespace Ocl
{

void instantiate_local_value_grammar (void)
{
  typedef std::string::const_iterator iterator_type;
  local_value <iterator_type> g;
}

}
}