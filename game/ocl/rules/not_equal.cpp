#include "StdAfx.h"
#include "not_equal_impl.hpp"

namespace GAME
{
namespace Ocl
{

void instantiate_not_equal_grammar (void)
{
  typedef std::string::const_iterator iterator_type;
  not_equal <iterator_type> g;
}

}
}