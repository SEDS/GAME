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

namespace GAME
{
namespace Mga
{

template <typename T>
struct iterator_type_t
{
  typedef T result_type;
};

template < >
struct iterator_type_t <IMgaObject>
{
  typedef IMgaObjects result_type;
};

template < >
struct iterator_type_t <IMgaFolder>
{
  typedef IMgaFolders result_type;
};

template < >
struct iterator_type_t <IMgaFCO>
{
  typedef IMgaFCOs result_type;
};

template < >
struct iterator_type_t <IMgaAtom>
{
  typedef IMgaFCOs result_type;
};

template < >
struct iterator_type_t <IMgaModel>
{
  typedef IMgaFCOs result_type;
};

template < >
struct iterator_type_t <IMgaSet>
{
  typedef IMgaFCOs result_type;
};

template < >
struct iterator_type_t <IMgaConnection>
{
  typedef IMgaFCOs result_type;
};

template < >
struct iterator_type_t <IMgaReference>
{
  typedef IMgaFCOs result_type;
};

template < >
struct iterator_type_t <IMgaAttribute>
{
  typedef IMgaAttributes result_type;
};

template < >
struct iterator_type_t <IMgaRegNode>
{
  typedef IMgaRegNodes result_type;
};

template < >
struct iterator_type_t <IMgaMetaAttribute>
{
  typedef IMgaMetaAttributes result_type;
};

template < >
struct iterator_type_t <IMgaMetaPart>
{
  typedef IMgaMetaParts result_type;
};

template < >
struct iterator_type_t <IMgaConstraint>
{
  typedef IMgaConstraints result_type;
};

template < >
struct iterator_type_t <IMgaMetaConnJoint>
{
  typedef IMgaMetaConnJoints result_type;
};

template < >
struct iterator_type_t <IMgaMetaRole>
{
  typedef IMgaMetaRoles result_type;
};

template < >
struct iterator_type_t <IMgaMetaFolder>
{
  typedef IMgaMetaFolders result_type;
};

template < >
struct iterator_type_t <IMgaMetaFCO>
{
  typedef IMgaMetaFCOs result_type;
};

template < >
struct iterator_type_t <IMgaMetaAspect>
{
  typedef IMgaMetaAspects result_type;
};

template < >
struct iterator_type_t <IMgaComponent>
{
  typedef IMgaComponents result_type;
};

template < >
struct iterator_type_t <IMgaComponentEx>
{
  typedef IMgaComponents result_type;
};

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

  /// Type definition of the COM iterator interface.
  typedef typename iterator_type_t < interface_type >::result_type iterator_type;

  Iterator (iterator_type * iter, long end_index);
  Iterator (iterator_type * iter, long index, long end_index);

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

  /// The underlying COM pointer.
  ::ATL::CComPtr <iterator_type> iter_;

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

  /// Type definition of the COM iterator interface.
  typedef typename iterator_type_t < interface_type >::result_type iterator_type;

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
