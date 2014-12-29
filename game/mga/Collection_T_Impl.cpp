// $Id: generate_cpp_class.py 3685 2012-09-26 14:45:04Z dfeiock $

#include "Exception.h"

namespace GAME
{
namespace Mga
{

template <typename T, typename ITER>
GAME_INLINE
Collection_T_Impl <T, ITER>::Collection_T_Impl (ITER * iter)
: iter_ (iter),
  role_ ("")
{

}

template <typename T, typename ITER>
GAME_INLINE
Collection_T_Impl <T, ITER>::Collection_T_Impl (ITER * iter, const std::string & role)
: iter_ (iter),
  role_ (role)
{

}

template <typename T, typename ITER>
GAME_INLINE
Collection_T_Impl <T, ITER>::~Collection_T_Impl (void)
{

}

template <typename T, typename ITER>
GAME_INLINE
::ATL::CComPtr <T>
Collection_T_Impl <T, ITER>::get (long index)
{
  ATL::CComPtr <typename collection_traits <ITER *>::interface_type> temp;
  VERIFY_HRESULT (this->iter_->get_Item (index, &temp));

  ATL::CComPtr <T> item;
  VERIFY_HRESULT (temp.QueryInterface (&item));

  if (this->role_.length () && !(this->correct_role (item.p)))
    throw Invalid_Extraction ();

  return item;
}

template <typename T, typename ITER>
GAME_INLINE
bool
Collection_T_Impl <T, ITER>::correct_role (T * obj)
{
  CComPtr <IMgaMetaBase> metabase;
  VERIFY_HRESULT (obj->get_MetaBase (&metabase));

  CComBSTR bstr;
  VERIFY_HRESULT (metabase->get_Name (&bstr));

  CW2A metaname (bstr);
  if (!this->role_.compare (metaname.m_psz))
    return true;
  return false;
}

template < >
GAME_INLINE
ATL::CComPtr <IMgaConnection>
Collection_T_Impl <IMgaConnection, IMgaConnPoints>::get (long index)
{
  // Template specalization for getting Connections from ConnPoints
  ATL::CComPtr <IMgaConnPoint> temp;
  VERIFY_HRESULT (this->iter_->get_Item (index, &temp));

  // Check that we have the right role
  if (this->role_.length ())
  {
    CComBSTR bstr;
    VERIFY_HRESULT (temp->get_ConnRole (&bstr));

    CW2A connrole (bstr);
    if (!this->role_.compare (connrole.m_psz))
      throw Invalid_Extraction ();
  }

  ATL::CComPtr <IMgaConnection> item;
  VERIFY_HRESULT (temp->get_Owner (&item));

  return item;
}

} // namespace GAME
} // namespace Mga
