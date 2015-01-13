// $Id$

#include "stdafx.h"
#include "Mga.h"
#include "MetaModel.h"
#include "MetaRole.h"
#include "MetaAspect.h"
#include "MetaAttribute.h"

#if !defined (__GAME_INLINE__)
#include "MetaModel.inl"
#endif

#include "Collection_T.h"
#include "Exception.h"

namespace GAME
{
namespace Mga
{
namespace Meta
{

//
// impl
//
IMgaMetaModel * Model_Impl::impl (void) const
{
  // Optimize for the quick path.
  if (this->metamodel_.p == this->metabase_.p)
    return this->metamodel_;

  // So, we have to actually initalize the <meta_fco_>.
  if (this->metamodel_)
    this->metamodel_.Release ();

  VERIFY_HRESULT (this->metabase_.QueryInterface (&this->metamodel_));
  return this->metamodel_;
}

//
// role
//
Role Model_Impl::role (const std::string & name) const
{
  CComPtr <IMgaMetaRole> tempptr;
  CComBSTR bstr (name.c_str ());

  VERIFY_HRESULT (this->impl ()->get_RoleByName (bstr, &tempptr));

  return tempptr.p;
}

//
// roles
//
size_t Model_Impl::roles (std::vector <Role> & roles) const
{
  CComPtr <IMgaMetaRoles> temps;
  VERIFY_HRESULT (this->impl ()->get_Roles (&temps));

  return iter_to_collection (temps.p, roles);
}

//
// roles
//
Collection_T <Role> Model_Impl::roles (void) const
{
  CComPtr <IMgaMetaRoles> temps;
  VERIFY_HRESULT (this->impl ()->get_Roles (&temps));

  Collection_T_Impl <Role::interface_type, IMgaMetaRoles> impl (temps.p);
  Collection_T_Impl_Proxy <Role::interface_type> proxy (impl);

  return Collection_T <Role> (proxy);
}

//
// children
//
size_t Model_Impl::
children (std::vector <Meta::FCO> & fcos) const
{
  // Get a pointer to all the legal folders.
  CComPtr <IMgaMetaFCOs> metas;
  VERIFY_HRESULT (this->impl ()->get_DefinedFCOs (&metas));

  return iter_to_collection (metas.p, fcos);
}

//
// children
//
Collection_T <Meta::FCO> Model_Impl::
children (void) const
{
  // Get a pointer to all the legal folders.
  CComPtr <IMgaMetaFCOs> metas;
  VERIFY_HRESULT (this->impl ()->get_DefinedFCOs (&metas));

  Collection_T_Impl <Meta::FCO::interface_type, IMgaMetaFCOs> impl (metas.p);
  Collection_T_Impl_Proxy <Meta::FCO::interface_type> proxy (impl);

  return Collection_T <Meta::FCO> (proxy);
}

//
// aspect
//
Aspect Model_Impl::aspect (const std::string & name) const
{
  CComBSTR bstr (name.length (), name.c_str ());
  CComPtr <IMgaMetaAspect> aspect;

  VERIFY_HRESULT (this->impl ()->get_AspectByName (bstr, &aspect));
  return aspect.p;
}

//
// aspects
//
size_t Model_Impl::aspects (std::vector <Aspect> & aspects) const
{
  // Get a pointer to all the legal folders.
  CComPtr <IMgaMetaAspects> temp;
  VERIFY_HRESULT (this->impl ()->get_Aspects (&temp));

  return iter_to_collection (temp.p, aspects);
}

//
// aspects
//
Collection_T <Aspect> Model_Impl::aspects (void) const
{
  // Get a pointer to all the legal folders.
  CComPtr <IMgaMetaAspects> temp;
  VERIFY_HRESULT (this->impl ()->get_Aspects (&temp));

  Collection_T_Impl <Aspect::interface_type, IMgaMetaAspects> impl (temp.p);
  Collection_T_Impl_Proxy <Aspect::interface_type> proxy (impl);

  return Collection_T <Aspect> (proxy);
}

}
}
}
