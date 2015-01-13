namespace GAME
{
namespace Mga
{

//
// members
//
template <typename T>
Collection_T <T> Set_Impl::members (void) const
{
  // Get all the members in the set.
  CComPtr <IMgaFCOs> fcos;
  VERIFY_HRESULT (this->impl ()->get_Members (&fcos));

  Collection_T_Impl <typename T::interface_type, IMgaFCOs> impl (fcos.p);
  Collection_T_Impl_Proxy <typename T::interface_type> proxy (impl);

  return Collection_T <T> (proxy);
}

}
}