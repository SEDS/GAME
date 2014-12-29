// $Id: generate_cpp_class.py 3685 2012-09-26 14:45:04Z dfeiock $

namespace GAME
{
namespace Mga
{
       
//
// Collection_T_Impl_Proxy
//
template <typename T>
GAME_INLINE
Collection_T_Impl_Proxy <T>::Collection_T_Impl_Proxy (void)
{
  // The default implementation should never be called,
  // since there is no way to know what template parameters
  // should be provided to the underlying Collection_T_Impl
  static_assert (false);
}

//
// ~Collection_T_Impl_Proxy
//
template <typename T>
GAME_INLINE
Collection_T_Impl_Proxy <T>::~Collection_T_Impl_Proxy (void)
{

}

GAME_INLINE
Collection_T_Impl_Proxy <IMgaModel>::Collection_T_Impl_Proxy (Collection_T_Impl <IMgaModel, IMgaFCOs> & impl)
: impl_ (impl)
{

}

GAME_INLINE
Collection_T_Impl_Proxy <IMgaModel>::~Collection_T_Impl_Proxy (void)
{

}

::ATL::CComPtr <IMgaModel>
Collection_T_Impl_Proxy <IMgaModel>::get (long length)
{
  return this->impl_.get (length);
}

} // namespace GAME
} // namespace Mga
