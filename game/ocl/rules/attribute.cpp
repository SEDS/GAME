#include "StdAfx.h"
#include "attribute_impl.hpp"

namespace GAME
{
namespace Ocl
{

void instantiate_attribute_grammar (void)
{
  typedef std::string::const_iterator iterator_type;
  attribute <iterator_type> g;
}

}
}