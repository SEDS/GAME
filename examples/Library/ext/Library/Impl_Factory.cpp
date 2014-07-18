// $Id$

#include "stdafx.h"
#include "Impl_Factory.h"
#include "RootFolder.h"

#include "game/mga/RootFolder.h"
#include "game/mga/Functional_T.h"
#include "game/mga/Exception.h"

#include "Library/Library/Patron.h"
#include "Library/Library/Borrow.h"
#include "Library/Library/Book.h"
#include "Library/Library/Library.h"

namespace Library
{
  //
  // Impl_Factory
  //
  Impl_Factory::Impl_Factory (void)
  {
    this->map_.bind ("Patron", &::GAME::Mga::allocate_impl <Patron_Impl>);
    this->map_.bind ("Borrow", &::GAME::Mga::allocate_impl <Borrow_Impl>);
    this->map_.bind ("Book", &::GAME::Mga::allocate_impl <Book_Impl>);
    this->map_.bind ("Library", &::GAME::Mga::allocate_impl <Library_Impl>);
    this->map_.bind ("RootFolder", &::GAME::Mga::allocate_impl <RootFolder_Impl>);
  }

  //
  // ~Impl_Factory
  //
  Impl_Factory::~Impl_Factory (void)
  {
  }

  //
  // allocate
  //
  ::GAME::Mga::Object_Impl * Impl_Factory::allocate (IMgaObject * ptr)
  {
    if (0 == ptr)
      return 0;


    CComPtr <IMgaMetaBase> metabase;
    VERIFY_HRESULT (ptr->get_MetaBase (&metabase));

    CComBSTR bstr;
    VERIFY_HRESULT (metabase->get_Name (&bstr));

    CW2A metaname (bstr);
    FACTORY_METHOD factory_method = 0;

    if (0 == this->map_.find (metaname.m_psz, factory_method))
      return factory_method (ptr);
    else
      return Impl_Factory_Base::allocate (ptr);
  }
}

