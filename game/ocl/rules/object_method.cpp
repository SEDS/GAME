#include "StdAfx.h"
#include "object_method_impl.hpp"

namespace GAME
{
namespace Ocl
{

void instantiate_object_method_grammar (void)
{
  typedef std::string::const_iterator iterator_type;
  object_method <iterator_type> g;
}

}
}