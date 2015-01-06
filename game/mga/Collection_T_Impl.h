// -*- C++ -*-

//==============================================================================
/**
 *  @file        Collection_T_Impl.h
 *
 *  $Id: generate_cpp_class.py 3685 2012-09-26 14:45:04Z dfeiock $
 *
 *  @author      INSERT NAME HERE
 */
//==============================================================================

#ifndef _GAME_MGA_COLLECTION_T_IMPL_H_
#define _GAME_MGA_COLLECTION_T_IMPL_H_

#include <string>

namespace GAME
{
namespace Mga
{

/**
 * @class Collection_T_Impl
 *
 * Implementation class that extracts single Mga entities
 * from various Mga iterable types
 */
template <typename T, typename ITER>
class Collection_T_Impl
{
public:
  Collection_T_Impl (void);
  Collection_T_Impl (ITER * iter);
  Collection_T_Impl (ITER * iter, const std::string & role);

  /// Destructor.
  ~Collection_T_Impl (void);

  ::ATL::CComPtr <T> get (long index);

private:
  /// Identify if the provided element has the right role
  bool correct_role (T * obj);

  /// The underlying COM pointer.
  ::ATL::CComPtr <ITER> iter_;

  /// The required role
  std::string role_;
};

} // namespace GAME
} // namespace Mga

#include "Collection_T_Impl.cpp"

#endif  // _GAME_MGA_COLLECTION_T_IMPL_H_
