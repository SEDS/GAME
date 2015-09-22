#include "StdAfx.h"
#include "lesser_impl.hpp"

namespace GAME
{
namespace Ocl
{

void instantiate_lesser_grammar (void)
{
  typedef std::string::const_iterator iterator_type;
  lesser <iterator_type> g;
}

}
}