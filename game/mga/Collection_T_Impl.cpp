// $Id: generate_cpp_class.py 3685 2012-09-26 14:45:04Z dfeiock $

#include "Exception.h"

namespace GAME
{
namespace Mga
{

// Struct to check if an object has the correct role
template <typename T>
struct correct_role
{
  template <typename T>
  bool operator () (T * obj, const std::string & role)
  {
    CComPtr <IMgaMetaBase> metabase;
    VERIFY_HRESULT (obj->get_MetaBase (&metabase));

    CComBSTR bstr;
    VERIFY_HRESULT (metabase->get_Name (&bstr));

    CW2A metaname (bstr);
    if (!role.compare (metaname.m_psz))
      return true;
    return false;
  }
};

// Any Mga types that do not extend IMgaObject do not have roles
// so they should always return true
template < >
struct correct_role <IMgaAttribute>
{
  template <typename T>
  bool operator () (T * obj, const std::string & role)
  {
    return true;
  }
};

template < >
struct correct_role <IMgaRegNode>
{
  template <typename T>
  bool operator () (T * obj, const std::string & role)
  {
    return true;
  }
};

template < >
struct correct_role <IMgaMetaAttribute>
{
  template <typename T>
  bool operator () (T * obj, const std::string & role)
  {
    return true;
  }
};

template < >
struct correct_role <IMgaMetaPart>
{
  template <typename T>
  bool operator () (T * obj, const std::string & role)
  {
    return true;
  }
};

template < >
struct correct_role <IMgaConstraint>
{
  template <typename T>
  bool operator () (T * obj, const std::string & role)
  {
    return true;
  }
};

template < >
struct correct_role <IMgaMetaConnJoint>
{
  template <typename T>
  bool operator () (T * obj, const std::string & role)
  {
    return true;
  }
};

template < >
struct correct_role <IMgaMetaRole>
{
  template <typename T>
  bool operator () (T * obj, const std::string & role)
  {
    return true;
  }
};

template < >
struct correct_role <IMgaMetaFolder>
{
  template <typename T>
  bool operator () (T * obj, const std::string & role)
  {
    return true;
  }
};

template < >
struct correct_role <IMgaMetaFCO>
{
  template <typename T>
  bool operator () (T * obj, const std::string & role)
  {
    return true;
  }
};

template < >
struct correct_role <IMgaMetaAspect>
{
  template <typename T>
  bool operator () (T * obj, const std::string & role)
  {
    return true;
  }
};

template < >
struct correct_role <IMgaComponent>
{
  template <typename T>
  bool operator () (T * obj, const std::string & role)
  {
    return true;
  }
};

template < >
struct correct_role <IMgaComponentEx>
{
  template <typename T>
  bool operator () (T * obj, const std::string & role)
  {
    return true;
  }
};

template <typename T, typename ITER>
inline
Collection_T_Impl <T, ITER>::Collection_T_Impl (void)
:  iter_ (0),
   role_ ("")
{

}

template <typename T, typename ITER>
inline
Collection_T_Impl <T, ITER>::Collection_T_Impl (ITER * iter)
: iter_ (iter),
  role_ ("")
{

}

template <typename T, typename ITER>
inline
Collection_T_Impl <T, ITER>::Collection_T_Impl (ITER * iter, const std::string & role)
: iter_ (iter),
  role_ (role)
{

}

template <typename T, typename ITER>
inline
Collection_T_Impl <T, ITER>::~Collection_T_Impl (void)
{

}

template <typename T, typename ITER>
inline
::ATL::CComPtr <T>
Collection_T_Impl <T, ITER>::get (long index)
{
  if (!this->iter_)
    throw Invalid_Extraction ();

  ATL::CComPtr <typename collection_traits <ITER *>::interface_type> temp;
  VERIFY_HRESULT (this->iter_->get_Item (index, &temp));

  ATL::CComPtr <T> item;
  VERIFY_HRESULT (temp.QueryInterface (&item));

  if (this->role_.length () && !correct_role <T> ()(item.p, this->role_))
    throw Invalid_Extraction ();

  return item;
}

template <typename T, typename ITER>
inline
ITER *
Collection_T_Impl <T, ITER>::impl (void)
{
  return this->iter_.p;
}

template <typename T, typename ITER>
inline
long
Collection_T_Impl <T, ITER>::count (void)
{
  if (!this->iter_)
    return 0;

  long count = 0;
  VERIFY_HRESULT (this->iter_.p->get_Count (&count));
  return count;
}

template <typename T, typename ITER>
inline
bool Collection_T_Impl <T, ITER>::operator == (const Collection_T_Impl & rhs) const
{
  return this == &rhs || (this->iter_.p == rhs.iter_.p && this->role_ == rhs.role_);
}

template <typename T, typename ITER>
inline
bool Collection_T_Impl <T, ITER>::operator != (const Collection_T_Impl & rhs) const
{
  return !(*this == rhs);
}

template < >
inline
ATL::CComPtr <IMgaConnection>
Collection_T_Impl <IMgaConnection, IMgaConnPoints>::get (long index)
{
  if (!this->iter_)
    throw Invalid_Extraction ();

  // Template specalization for getting Connections from ConnPoints
  ATL::CComPtr <IMgaConnPoint> temp;
  VERIFY_HRESULT (this->iter_->get_Item (index, &temp));

  // Check that we have the right role
  if (this->role_.length ())
  {
    CComBSTR bstr;
    VERIFY_HRESULT (temp->get_ConnRole (&bstr));

    CW2A connrole (bstr);
    if (this->role_.compare (connrole.m_psz) != 0)
      throw Invalid_Extraction ();
  }

  ATL::CComPtr <IMgaConnection> item;
  VERIFY_HRESULT (temp->get_Owner (&item));

  return item;
}

} // namespace GAME
} // namespace Mga
