#include "StdAfx.h"
#include "iterator_impl.hpp"

namespace GAME
{
namespace Ocl
{

void instantiate_iterator_grammar (void)
{
  typedef std::string::const_iterator iterator_type;
  iterator <iterator_type> g;
}

}
}