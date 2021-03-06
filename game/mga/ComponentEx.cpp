// $Id$

#include "stdafx.h"
#include "Mga.h"
#include "ComponentEx.h"

#if !defined (__GAME_INLINE__)
#include "ComponentEx.inl"
#endif

#include "FCO.h"

namespace GAME
{
namespace Mga
{

//
// _load
//
ComponentEx ComponentEx_Impl::_load (const std::string & progid)
{
  CComPtr <IMgaComponentEx> ptr;
  CA2W tempstr (progid.c_str ());

  VERIFY_HRESULT (ptr.CoCreateInstance (tempstr));
  return ptr.p;
}

//
// parameter
//
void ComponentEx_Impl::
parameter (const std::string & param, const std::string & value)
{
  CComBSTR bstr_param (param.length (), param.c_str ());
  CComVariant variant (value.c_str ());

  VERIFY_HRESULT (this->impl ()->put_ComponentParameter (bstr_param, variant));
}

//
// invoke
//
void ComponentEx_Impl::invoke (Project project,
                               FCO_in current,
                               Collection_T <FCO> & selected,
                               long param)
{
  VERIFY_HRESULT (this->impl ()->InvokeEx (project.impl (),
                                           current != 0 ? current->impl () : 0,
                                           (IMgaFCOs *) selected.impl (),
                                           param));
}

//
// progid
//
std::string ComponentEx_Impl::progid (void) const
{
  CComBSTR bstr;
  VERIFY_HRESULT (this->impl ()->get_ComponentProgID (&bstr));

  CW2A temp (bstr);
  return temp.m_psz;
}


//
// impl
//
IMgaComponentEx * ComponentEx_Impl::impl (void) const
{
  if (this->component_ex_.p != this->component_.p)
    VERIFY_HRESULT (this->component_.QueryInterface (&this->component_ex_));

  return this->component_ex_;
}

}
}
