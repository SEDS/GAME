// -*- C++ -*-

//==============================================================================
/**
 *  @file        Collection_T_Impl_Proxy.h
 *
 *  $Id: generate_cpp_class.py 3685 2012-09-26 14:45:04Z dfeiock $
 *
 *  @author      INSERT NAME HERE
 */
//==============================================================================

#ifndef _GAME_MGA_COLLECTION_T_IMPL_PROXY_H_
#define _GAME_MGA_COLLECTION_T_IMPL_PROXY_H_

//#include "game/mga/Mga.h"
#include "game/mga/Collection_T_Impl.h"

namespace GAME
{
namespace Mga
{

/**
 * @class Collection_T_Impl_Proxy
 *
 * Proxy for Collection_T_Impl.  This hides the underlying
 * Mga iterable type from the Collection_T.  Class specializations
 * must be used to control the underlying Collection_T_Impl type.
 */
template <typename T>
class Collection_T_Impl_Proxy
{
public:
  /// Default constructor.
  Collection_T_Impl_Proxy (void);

  /// Destructor.
  ~Collection_T_Impl_Proxy (void);

  // The get method, passthrough to underlying Collection_T_Impl
  //::ATL::CComPtr <T> get (long length);
};

template < >
class Collection_T_Impl_Proxy <IMgaModel>
{
public:
  Collection_T_Impl_Proxy (Collection_T_Impl <IMgaModel, IMgaFCOs> & impl);
  ~Collection_T_Impl_Proxy (void);
  ::ATL::CComPtr <IMgaModel> get (long length);
private:
  Collection_T_Impl <IMgaModel, IMgaFCOs> & impl_;
};

} // namespace GAME
} // namespace Mga

#include "Collection_T_Impl_Proxy.cpp"

#endif  // _GAME_MGA_COLLECTION_T_IMPL_PROXY_H_
