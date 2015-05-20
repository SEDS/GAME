#include "StdAfx.h"
#include "math_op_impl.hpp"

namespace GAME
{
namespace Ocl
{

void instantiate_math_op_grammar (void)
{
  typedef std::string::const_iterator iterator_type;
  math_op <iterator_type> g;
}

}
}