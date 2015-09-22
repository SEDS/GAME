#include "StdAfx.h"
#include "reference_method_impl.hpp"

namespace GAME
{
namespace Ocl
{

void instantiate_reference_method_grammar (void)
{
  typedef std::string::const_iterator iterator_type;
  reference_method <iterator_type> g;
}

}
}