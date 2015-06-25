#include "StdAfx.h"
#include "quoted_string_impl.hpp"

namespace GAME
{
namespace Ocl
{

void instantiate_quoted_string_grammar (void)
{
  typedef std::string::const_iterator iterator_type;
  quoted_string <iterator_type> g;
}

}
}