#include "StdAfx.h"
#include "greater_equal_impl.hpp"

namespace GAME
{
namespace Ocl
{

void instantiate_greater_equal_grammar (void)
{
  typedef std::string::const_iterator iterator_type;
  greater_equal <iterator_type> g;
}

}
}