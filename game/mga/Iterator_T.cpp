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
  this->end_index_ = rhs.end_index_;

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

template <typename T>
void Iterator <T>::find_last_item (void)
{
  // Starting with the end_index, iterate backwards
  // until we find an element with the correct type
  long original_index = this->index_;
  this->index_ = this->end_index_ - 1;

  while (this->index_ > 0)
  {
    try
    {
      // If this doesn't throw a cast exception,
      // we've found the last valid element.
      this->get_current_item ();
      this->end_index_ = this->index_ + 1;

      // In the case of collection.end (), we need
      // to reset the index to just past the last element,
      // not back to the end of the entire collection
      if (original_index > this->index_ + 1)
        this->index_++;
      else
        this->index_ = original_index;

      // Now the state is correct, so break out of this function
      return;
    }
    catch (GAME::Mga::Invalid_Cast &)
    {
      --this->index_;
    }
  }

  // There were no valid elements in the collection!
  this->index_ = 1;
  this->end_index_ = 1;
}

template <typename T>
void Iterator <T>::find_first_item (void)
{
  while (this->index_ < this->end_index_)
  {
    try
    {
      this->get_current_item ();
      return;
    }
    catch (GAME::Mga::Invalid_Cast &)
    {
      ++this->index_;
    }
  }
}

//
// operator *
//
template <typename T>
T & Iterator <T>::operator * (void)
{
  return this->item_;
}

//
// operator ->
//
template <typename T>
T * Iterator <T>::operator -> (void)
{
  return &this->item_;
}

//
// operator ++
//
template <typename T>
Iterator <T> Iterator <T>::operator ++ (int)
{
  Iterator iter (*this);

  // increment once before the loop in case we are on the last element
  // so we don't try to get an invalid index from Mga
  ++this->index_;

  // Since collections can have invalid types in them, search for the
  // next valid type before returning.
  while (this->index_ != this->end_index_)
  {
    try
    {
      this->get_current_item ();
      return iter;
    }
    catch (GAME::Mga::Exception & e)
    {
      ++this->index_;
    }
  }

  // We are at the end and didn't find a valid element
  // return to match collection.end ()
  return iter;
}

}
}
