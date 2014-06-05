// $Id$

#include "Collection_T.h"
#include "Static_Assert.h"

namespace GAME
{
namespace Mga
{

namespace assertion
{

/**
 * @struct element_not_containable_in_model
 *
 * Assertion that determines if an implementation is containable in
 * a model. This will prevent clients from requesting children of type
 * Folder from a model.
 */
template <typename T>
struct element_not_containable_in_model;

template < >
struct element_not_containable_in_model <fco_tag_t>
{
  static const bool result_type = true;
};

template < >
struct element_not_containable_in_model <atom_tag_t>
{
  static const bool result_type = true;
};

template < >
struct element_not_containable_in_model <model_tag_t>
{
  static const bool result_type = true;
};

template < >
struct element_not_containable_in_model <reference_tag_t>
{
  static const bool result_type = true;
};

template < >
struct element_not_containable_in_model <set_tag_t>
{
  static const bool result_type = true;
};

template < >
struct element_not_containable_in_model <connection_tag_t>
{
  static const bool result_type = true;
};

}

/**
 * @struct get_children_t
 *
 * Functor that returns the children of a model. It is design to
 * support template specialization because different T types require
 * different implementations.
 */
template <typename T, bool EXTENSION_CLASS>
struct get_model_children_t
{
  size_t operator () (const Model_Impl * m, std::vector <T> & children) const
  {
    return m->children (T::impl_type::metaname, children);
  }

  Collection_T <T> operator () (const Model_Impl * m) const
  {
    CComPtr <IMgaFCOs> fcos;
    CComBSTR bstr (T::mimpl_typee::metaname.length (), T::impl_type::metaname.c_str ());
    VERIFY_HRESULT (m->impl ()->GetChildrenOfKind (bstr, &fcos));

    return Collection_T <T> (fcos.p);
  }
};

template <typename T>
struct get_model_children_t <T, false>
{
  size_t operator () (const Model_Impl * m, std::vector <FCO> & children) const
  {
    CComPtr <IMgaFCOs> fcos;
    VERIFY_HRESULT (m->impl ()->get_ChildFCOs (&fcos));

    return iter_to_collection (fcos.p, children);
  }

  Collection_T <T> operator () (const Model_Impl * m) const
  {
    CComPtr <IMgaFCOs> fcos;
    VERIFY_HRESULT (m->impl ()->get_ChildFCOs (&fcos));

    return Collection_T <T> (fcos.p);
  }
};

//
// children
//
template <typename T>
size_t Model_Impl::children (std::vector <T> & children) const
{
  typedef typename T::impl_type impl_type;
  assertion::element_not_containable_in_model <impl_type::type_tag>::result_type;

  return get_model_children_t <T, assertion::is_extension_class <T>::result_type> () (this, children);
}

//
// children
//
template <typename T>
Collection_T <T> Model_Impl::children (void) const
{
  typedef typename T::impl_type impl_type;
  assertion::element_not_containable_in_model <impl_type::type_tag>::result_type;

  return get_model_children_t <T, assertion::is_extension_class <T>::result_type> () (this);
}

//
// children
//
template <typename T>
size_t Model_Impl::
children (const std::string & type, std::vector <T> & children) const
{
  CComPtr <IMgaFCOs> fcos;
  CComBSTR bstr (type.length (), type.c_str ());
  VERIFY_HRESULT (this->impl ()->GetChildrenOfKind (bstr, &fcos));

  return iter_to_collection (fcos.p, children);
}

//
// children
//
template <typename T>
Collection_T <T> Model_Impl::children (const std::string & type) const
{
  CComPtr <IMgaFCOs> fcos;
  CComBSTR bstr (type.length (), type.c_str ());
  VERIFY_HRESULT (this->impl ()->GetChildrenOfKind (bstr, &fcos));

  return Collection_T <T> (fcos.p);
}

//
// children
//
template <typename T>
size_t Model_Impl::
children (const Meta::Aspect_in apsect, std::vector <T> & children) const
{
  // Let's get the list of children.
  std::vector <T> temp;
  this->children (temp);

  std::vector <T>::const_iterator
    iter = temp.begin (), iter_end = temp.end ();

  // Determine what FCO_Impl is part of the specified aspect.
  for (; iter != iter_end; ++ iter)
  {
    try
    {
      if (!(*iter)->part (apsect).is_nil ())
        children.push_back (*iter);
    }
    catch (const GAME::Mga::Failed_Result & ex)
    {
      if (ex.value () != 0x80731007)
        throw;
    }
  }

  return children.size ();
}

}
}
