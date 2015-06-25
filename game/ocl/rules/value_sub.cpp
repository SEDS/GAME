#include "StdAfx.h"
#include "value_sub_impl.hpp"

namespace GAME
{
namespace Ocl
{

void instantiate_value_sub_grammar (void)
{
  typedef std::string::const_iterator iterator_type;
  value_sub <iterator_type> g;
}

}
}