#include "StdAfx.h"
#include "equality_impl.hpp"

namespace GAME
{
namespace Ocl
{

void instantiate_equality_grammar (void)
{
  typedef std::string::const_iterator iterator_type;
  equality <iterator_type> g;
}

}
}