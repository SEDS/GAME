// -*- C++ -*-
// $Id$

namespace GAME
{
namespace Mga
{

///////////////////////////////////////////////////////////////////////////////
// Iterator

template <typename T>
GAME_INLINE
Iterator <T>::Iterator (iterator_type * iter, long end_index)
: Iterator <T> (iter, 1, end_index)
{
}

template <typename T>
GAME_INLINE
Iterator <T>::Iterator (iterator_type * iter, long index, long end_index)
: iter_ (iter),
  index_ (index),
  end_index_ (end_index)
{
  this->find_last_item ();
  this->find_first_item ();
}

template <typename T>
GAME_INLINE
Iterator <T>::Iterator (const Iterator & copy)
: iter_ (copy.iter_),
  index_ (copy.index_),
  item_ (copy.item_),
  end_index_ (copy.end_index_)
{
}

template <typename T>
GAME_INLINE
Iterator <T>::~Iterator (void)
{
}

template <typename T>
GAME_INLINE
long Iterator <T>::index (void) const
{
  return this->index_;
}

//
// reset
//
template <typename T>
GAME_INLINE
void Iterator <T>::reset (void)
{
  this->index_ = 1;
}

template <typename T>
GAME_INLINE
void Iterator <T>::advance (void)
{
  ++ this->index_;
}

template <typename T>
GAME_INLINE
Iterator <T> & Iterator <T>::operator ++ (void)
{
  ++ this->index_;
  return *this;
}

template <typename T>
GAME_INLINE
bool Iterator <T>::operator == (const Iterator & rhs) const
{
  return this == &rhs || (this->iter_.p == rhs.iter_.p && this->index_ == rhs.index_ && this->end_index_ == rhs.end_index_);
}

template <typename T>
GAME_INLINE
bool Iterator <T>::operator != (const Iterator & rhs) const
{
  return !(*this == rhs);
}

///////////////////////////////////////////////////////////////////////////////
// Impl_Iterator

//
// Impl_Iterator
//
template <typename BASE>
GAME_INLINE
Impl_Iterator <BASE>::Impl_Iterator (void)
{

}

//
// Impl_Iterator
//
template <typename BASE>
GAME_INLINE
Impl_Iterator <BASE>::Impl_Iterator (const BASE & copy)
: BASE (copy)
{

}

//
// Impl_Iterator
//
template <typename BASE>
GAME_INLINE
Impl_Iterator <BASE>::Impl_Iterator (const Impl_Iterator & copy)
: BASE (copy)
{

}

//
// ~Impl_Iterator
//
template <typename BASE>
GAME_INLINE
Impl_Iterator <BASE>::~Impl_Iterator (void)
{

}

//
// operator *
//
template <typename BASE>
GAME_INLINE
typename Impl_Iterator <BASE>::impl_type *
Impl_Iterator <BASE>::operator * (void)
{
  BASE & base = *this;
  return *base;
}

//
// make_impl_iter
//
template <typename BASE>
GAME_INLINE
Impl_Iterator <BASE> make_impl_iter (const BASE & iter)
{
  return Impl_Iterator <BASE> (iter);
}

}
}

