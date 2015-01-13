// $Id: generate_cpp_class.py 3685 2012-09-26 14:45:04Z dfeiock $

namespace GAME
{
namespace Mga
{
       
//
// Collection_T_Impl_Proxy
//
template <typename T>
inline
Collection_T_Impl_Proxy <T>::Collection_T_Impl_Proxy (impl_type impl)
: impl_ (impl)
{

}

//
// ~Collection_T_Impl_Proxy
//
template <typename T>
inline
Collection_T_Impl_Proxy <T>::~Collection_T_Impl_Proxy (void)
{

}

template <typename T>
inline
::ATL::CComPtr <T>
Collection_T_Impl_Proxy <T>::get (long length)
{
  return this->impl_.get (length);
}

template <typename T>
inline
long
Collection_T_Impl_Proxy <T>::count (void)
{
  return this->impl_.count ();
}

template <typename T>
inline
bool
Collection_T_Impl_Proxy <T>::operator == (const Collection_T_Impl_Proxy & rhs) const
{
  return this == &rhs || (this->impl_ == rhs.impl_);
}

template <typename T>
inline
bool Collection_T_Impl_Proxy <T>::operator != (const Collection_T_Impl_Proxy & rhs) const
{
  return !(*this == rhs);
}

inline
Collection_T_Impl_Proxy <IMgaConnection>::Collection_T_Impl_Proxy (Collection_T_Impl <IMgaConnection, IMgaFCOs> impl)
: fco_impl_ (impl),
  use_fco_ (true)
{

}

inline
Collection_T_Impl_Proxy <IMgaConnection>::Collection_T_Impl_Proxy (Collection_T_Impl <IMgaConnection, IMgaConnPoints> impl)
: point_impl_ (impl),
  use_fco_ (false)
{

}

inline
Collection_T_Impl_Proxy <IMgaConnection>::~Collection_T_Impl_Proxy (void)
{

}

inline
::ATL::CComPtr <IMgaConnection>
Collection_T_Impl_Proxy <IMgaConnection>::get (long length)
{
  if (this->use_fco_)
    return this->fco_impl_.get (length);
  return this->point_impl_.get (length);
}

inline
long
Collection_T_Impl_Proxy <IMgaConnection>::count (void)
{
  if (this->use_fco_)
    return this->fco_impl_.count ();
  return this->point_impl_.count ();
}

inline
bool Collection_T_Impl_Proxy <IMgaConnection>::operator == (const Collection_T_Impl_Proxy <IMgaConnection> & rhs) const
{
  return this == &rhs || (this->fco_impl_ == rhs.fco_impl_ && this->point_impl_ == rhs.point_impl_);
}

inline
bool Collection_T_Impl_Proxy <IMgaConnection>::operator != (const Collection_T_Impl_Proxy <IMgaConnection> & rhs) const
{
  return !(*this == rhs);
}

} // namespace GAME
} // namespace Mga
