// -*- C++ -*-
// $Id$

namespace Library
{
  //
  // Borrow_Impl
  //
  GAME_INLINE Borrow_Impl::Borrow_Impl (void)
  {
  }

  //
  // Borrow_Impl
  //
  GAME_INLINE Borrow_Impl::Borrow_Impl (IMgaConnection * ptr)
  {
    this->object_ = ptr;
  }

  //
  // ~Borrow_Impl
  //
  GAME_INLINE Borrow_Impl::~Borrow_Impl (void)
  {
  }
}

