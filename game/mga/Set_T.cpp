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

  return Collection_T <T> (fcos.p);
}

}
}