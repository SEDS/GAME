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
 * @struct element_containable_in_folder
 */
template <typename T>
struct element_containable_in_folder
{
  static const bool result_type = true;
};

template < >
struct element_containable_in_folder <reference_tag_t>
{
  static const bool result_type = false;
};

template < >
struct element_containable_in_folder <set_tag_t>
{
  static const bool result_type = false;
};

/**
 * @struct element_is_not_folder
 */
template <typename T>
struct element_is_not_folder
{
  static const bool result_type = true;
};

template < >
struct element_is_not_folder <folder_tag_t>
{
  static const bool result_type = false;
};

/**
 * @struct element_is_folder
 */
template <typename T>
struct element_is_folder
{
  static const bool result_type = false;
};

template < >
struct element_is_folder <folder_tag_t>
{
  static const bool result_type = true;
};

}

/**
 * @struct get_folder_children_t
 *
 * Functor that returns the children of a folder. It is design to
 * support template specialization because different T types require
 * different implementations.
 */
template <typename T, bool EXTENSION_CLASS>
struct get_folder_children_t 
{
  typedef typename T::impl_type impl_type;
  Collection_T <T> operator () (const Folder_Impl * m) const
  {
    CComPtr <IMgaFCOs> fcos;
    CComBSTR bstr (impl_type::metaname.length (), impl_type::metaname.c_str ());
    VERIFY_HRESULT (m->impl ()->GetChildrenOfKind (bstr, &fcos));

    Collection_T_Impl <typename T::interface_type, IMgaFCOs> impl (fcos.p);
    Collection_T_Impl_Proxy <typename T::interface_type> proxy (impl);

    return Collection_T <T> (proxy);
  }
};

template <typename T>
struct get_folder_children_t <T, false>
{
  Collection_T <T> operator () (const Folder_Impl * m) const
  {
    CComPtr <IMgaFCOs> fcos;
    VERIFY_HRESULT (m->impl ()->get_ChildFCOs (&fcos));

    Collection_T_Impl <typename T::interface_type, IMgaFCOs> impl (fcos.p);
    Collection_T_Impl_Proxy <typename T::interface_type> proxy (impl);

    return Collection_T <T> (proxy);
  }
};

//
// children
//
template <typename T>
size_t Folder_Impl::children (std::vector <T> & children) const
{
  typedef typename T::impl_type impl_type;
  GAME::__static_assert < assertion::element_containable_in_folder <impl_type::type_tag>::result_type >::result_type;
  GAME::__static_assert < assertion::element_is_not_folder <impl_type::type_tag>::result_type >::result_type;

  CComPtr <IMgaFCOs> fcos;
  VERIFY_HRESULT (this->impl ()->get_ChildFCOs (&fcos));

  return iter_to_collection (fcos.p, children);
}

//
// children
//
template <typename T>
Collection_T <T> Folder_Impl::children (void) const
{
  typedef typename T::impl_type impl_type;
  GAME::__static_assert < assertion::element_containable_in_folder <impl_type::type_tag>::result_type >::result_type;
  GAME::__static_assert < assertion::element_is_not_folder <impl_type::type_tag>::result_type >::result_type;

  return get_folder_children_t <T, assertion::is_extension_class <T>::result_type> () (this);
}

//
// children
//
template <typename T>
Collection_T <T> Folder_Impl::children (const std::string & type) const
{
  typedef typename T::impl_type impl_type;
  GAME::__static_assert < assertion::element_containable_in_folder <impl_type::type_tag>::result_type >::result_type;
  GAME::__static_assert < assertion::element_is_not_folder <impl_type::type_tag>::result_type >::result_type;

  CComPtr <IMgaFCOs> fcos;
  CComBSTR bstr (type.length (), type.c_str ());
  VERIFY_HRESULT (this->impl ()->GetChildrenOfKind (bstr, &fcos));

  return Collection_T <T> (fcos.p);
}

//
// children
//
template <typename T>
size_t Folder_Impl::
children (const std::string & type, std::vector <T> & children) const
{
  typedef typename T::impl_type impl_type;
  GAME::__static_assert < assertion::element_containable_in_folder <impl_type::type_tag>::result_type >::result_type;
  GAME::__static_assert < assertion::element_is_not_folder <impl_type::type_tag>::result_type >::result_type;

  CComPtr <IMgaFCOs> fcos;
  CComBSTR bstr (type.length (), type.c_str ());
  VERIFY_HRESULT (this->impl ()->GetChildrenOfKind (bstr, &fcos));

  return iter_to_collection (fcos.p, children);
}

//
// folders
//
template <typename T>
Collection_T <T> Folder_Impl::folders (void) const
{
  typedef typename T::impl_type impl_type;
  GAME::__static_assert <assertion::element_is_folder <impl_type::type_tag>::result_type>::result_type;

  CComPtr <IMgaFolders> folders;
  VERIFY_HRESULT (this->impl ()->get_ChildFolders (&folders));

  Collection_T_Impl <typename T::interface_type, IMgaFolders> impl (folders.p);
  Collection_T_Impl_Proxy <typename T::interface_type> proxy (impl);

  return Collection_T <T> (proxy);
}

//
// folders
//
template <typename T>
size_t Folder_Impl::folders (std::vector <T> & children) const
{
  typedef typename T::impl_type impl_type;
  GAME::__static_assert <assertion::element_is_folder <impl_type::type_tag>::result_type>::result_type;

  CComPtr <IMgaFolders> folders;
  VERIFY_HRESULT (this->impl ()->get_ChildFolders (&folders));
  Collection_T_Impl <typename T::interface_type, IMgaFolders> impl (folders.p);
  Collection_T_Impl_Proxy <typename T::interface_type> proxy (impl);

  for (Folder folder : Collection_T <Folder> (proxy))
  {
    try
    {
      children.push_back (T::_narrow (folder));
    }
    catch (GAME::Mga::Exception &)
    {
    }
  }
  return children.size ();
}

//
// folders
//
template <typename T>
size_t Folder_Impl::
folders (const std::string & type, std::vector <T> & children) const
{
  typedef typename T::impl_type impl_type;
  GAME::__static_assert <assertion::element_is_folder <impl_type::type_tag>::result_type>::result_type;

  CComPtr <IMgaFolders> folders;
  VERIFY_HRESULT (this->impl ()->get_ChildFolders (&folders));

  for (Folder folder : Collection_T <Folder> (folders.p))
  {
    try
    {
      children.push_back (T::_narrow (folder));
    }
    catch (GAME::Mga::Invalid_Cast &)
    {
    }
  }

  return children.size ();
}

}
}
