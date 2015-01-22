// $Id$

//=============================================================================
/**
 * @file      Iterator_T.h
 *
 * $Id$
 *
 * @author    James H. Hill
 */
//=============================================================================

#ifndef _GAME_MGA_ITERATOR_T_H_
#define _GAME_MGA_ITERATOR_T_H_

#include <iterator>
#include "game/mga/Collection_T_Impl_Proxy.h"

namespace GAME
{
namespace Mga
{

/**
 * @class Iterator
 *
 * Wrapper class for COM iterator that is STL-compliant. The iterator
 * implements the input iterator iterface contract.
 */
template <typename T>
class Iterator : public std::iterator <std::input_iterator_tag, T, int, T *, T &>
{
public:
  /// Type definition of the iterator's element interface type.
  typedef typename T::interface_type interface_type;

  /// Type definition of the impl proxy
  typedef typename Collection_T_Impl_Proxy <interface_type> iterator_type;

  Iterator (iterator_type iter, long end_index);
  Iterator (iterator_type iter, long index, long end_index);

  /**
   * Copy constructor
   *
   * @param[in]       copy          Iterator to copy
   */
  Iterator (const Iterator & copy);

  /// Destructor.
  ~Iterator (void);

  /// Move the iterator to the next element.
  void advance (void);

  /// Reset the iterator to the first element
  void reset (void);

  /// Current 1-based index of iterator.
  long index (void) const;

  /// Assignment/copy operator
  const Iterator & operator = (const Iterator & rhs);

  /// Dereference the current item.
  T & operator * (void);

  /// Dereference the current item.
  T * operator -> (void);

  Iterator & operator ++ (void);
  Iterator operator ++ (int);

  /// Test the equality of two iterators.
  bool operator == (const Iterator & rhs) const;

  /// Test then inequality of two iterators.
  bool operator != (const Iterator & rhs) const;

private:
  /// Get the current item.
  void get_current_item (void);

  /// Find the last valid item
  void find_last_item (void);

  /// Find the first valid item
  void find_first_item (void);

  /// The Collection_Impl_Proxy the iterator uses
  iterator_type iter_;

  /// Current index for the iterator.
  long index_;

  /// Index one element beyond the last valid type
  long end_index_;

  /// The current item.
  T item_;
};

/**
 * @class Impl_Iterator
 *
 * Adapter class for accessing an iterator's implementation when it is
 * dereferenced.
 */
template <typename BASE>
class Impl_Iterator : public BASE
{
public:
  /// Type definition of the iterator's element type.
  typedef typename BASE::value_type value_type;

  /// Type definition of the iterator's element interface type.
  typedef typename value_type::interface_type interface_type;

  /// Type definition of the implementation type.
  typedef typename value_type::impl_type impl_type;

  /// Type definition of the impl proxy
  typedef typename Collection_T_Impl_Proxy <interface_type> iterator_type;

  /// Default constructor.
  Impl_Iterator (void);

  /**
   * Initializing constructor.
   *
   * @param[in]       iter          COM iterator pointer
   */
  Impl_Iterator (const BASE & copy);

  /**
   * Copy constructor
   *
   * @param[in]       copy          Iterator to copy
   */
  Impl_Iterator (const Impl_Iterator & copy);

  /// Destructor.
  ~Impl_Iterator (void);

  /// Dereference the iterator to access the implementation.
  impl_type * operator * (void);
};

template <typename BASE>
GAME_INLINE
Impl_Iterator <BASE> make_impl_iter (const BASE & iter);

}
}

#if defined (__GAME_INLINE__)
#include "Iterator_T.inl"
#endif

#include "Iterator_T.cpp"

#endif  // !defined _GAME_MGA_ERRORS_H_
