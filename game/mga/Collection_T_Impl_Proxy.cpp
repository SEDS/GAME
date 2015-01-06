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
Collection_T_Impl_Proxy <T>::Collection_T_Impl_Proxy (impl_type & impl)
: impl_ (impl)
{

}

//
// ~Collection_T_Impl_Proxy
//
template <typename T>
GAME_INLINE
Collection_T_Impl_Proxy <T>::~Collection_T_Impl_Proxy (void)
{

}

template <typename T>
GAME_INLINE
::ATL::CComPtr <T>
Collection_T_Impl_Proxy <T>::get (long length)
{
  return this->impl_.get (length);
}

GAME_INLINE
Collection_T_Impl_Proxy <IMgaConnection>::Collection_T_Impl_Proxy (Collection_T_Impl <IMgaConnection, IMgaFCOs> & impl)
: fco_impl_ (impl),
  use_fco_ (true)
{

}

GAME_INLINE
Collection_T_Impl_Proxy <IMgaConnection>::Collection_T_Impl_Proxy (Collection_T_Impl <IMgaConnection, IMgaConnPoints> & impl)
: point_impl_ (impl),
  use_fco_ (false)
{

}

GAME_INLINE
Collection_T_Impl_Proxy <IMgaConnection>::~Collection_T_Impl_Proxy (void)
{

}

GAME_INLINE
::ATL::CComPtr <IMgaConnection>
Collection_T_Impl_Proxy <IMgaConnection>::get (long length)
{
  if (this->use_fco_)
    return this->fco_impl_.get (length);
  return this->point_impl_.get (length);
}

} // namespace GAME
} // namespace Mga
