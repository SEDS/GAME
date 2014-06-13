// $Id$

#if !defined (__GAME_INLINE__)
#include "Iterator_T.inl"
#endif

#include "Exception.h"

namespace GAME
{
namespace Mga
{

template <typename T>
const Iterator <T> & Iterator <T>::operator = (const Iterator <T> & rhs)
{
  if (this == &rhs)
    return *this;

  this->iter_ = rhs.iter_;
  this->index_ = rhs.index_;
  this->item_ = rhs.item_;

  return *this;
}

template <typename T>
void Iterator <T>::get_current_item (void)
{
  ATL::CComPtr <typename collection_traits <iterator_type *>::interface_type> temp;
  VERIFY_HRESULT (this->iter_->get_Item (this->index_, &temp));

  // Store the members in a collection.
  ATL::CComPtr <typename T::interface_type> item;
  VERIFY_HRESULT (temp.QueryInterface (&item));

  this->item_ = item.p;
}

//
// operator *
//
template <typename T>
T & Iterator <T>::operator * (void)
{
  this->get_current_item ();
  return this->item_;
}

//
// operator ->
//
template <typename T>
T * Iterator <T>::operator -> (void)
{
  this->get_current_item ();
  return &this->item_;
}

//
// operator ++
//
template <typename T>
Iterator <T> Iterator <T>::operator ++ (int)
{
  Iterator iter (*this);
  ++ this->index_;

  return iter;
}

}
}
