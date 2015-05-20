#include "StdAfx.h"
#include "declaratorlist_impl.hpp"

namespace GAME
{
namespace Ocl
{

void instantiate_declaratorlist_grammar (void)
{
  typedef std::string::const_iterator iterator_type;
  declaratorlist <iterator_type> g;
}

}
}