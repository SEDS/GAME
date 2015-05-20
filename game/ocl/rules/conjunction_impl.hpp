#ifndef _CONJUNCTION_IMPL_H_
#define _CONJUNCTION_IMPL_H_

#include "conjunction.hpp"

namespace GAME
{
namespace Ocl
{

template <typename IteratorT>
conjunction <IteratorT>::conjunction (void)
  : conjunction::base_type (conjunction_)
{
  this->conjunction_ = ascii::string ("and") | ascii::string ("or");
}

}
}

#endif