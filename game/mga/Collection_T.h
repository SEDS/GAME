// -*- C++ -*-

//=============================================================================
/**
 * @file        Collection_T.h
 *
 * Defines the collection container
 *
 * $Id$
 *
 * @author      James H. Hill
 */
//=============================================================================

#ifndef _GAME_MGA_COLLECTION_T_H_
#define _GAME_MGA_COLLECTION_T_H_

#include <vector>
#include "Iterator_T.h"
#include "Gme_fwd.h"

namespace GAME
{
namespace Mga
{

template <typename ITER, typename T>
size_t iter_to_collection (ITER iter, std::vector <T> & coll);

template <typename ITER, typename T>
size_t iter_to_collection (ITER iter, std::vector <FCO> & coll);

template <typename ITER, typename T>
size_t iter_to_collection (ITER iter, std::vector <T> & coll, long count);

/**
 * @class Collection_T
 *
 * Lightweight collection class designed to enable C++11 support for
 * the COM-based iterators in GME.
 */
template <typename T>
class Collection_T 
{
public:
  /// Type definition of the iterator type.
  typedef Iterator <T> iterator_type;

  /// Type definition of the COM interface.
  typedef typename iterator_type::iterator_type interface_type;

  /**
   * Initializing constructor
   *
   * @param[in]     iter        COM collection
   */
  Collection_T (interface_type * iter);

  /// Destructor.
  ~Collection_T (void);

  /// Get the begin iterator.
  iterator_type begin (void);
  
  /// Get the end iterator.
  iterator_type end (void);

  /// Number of valid elements in the collection
  long count (void);

  /// Size of the collection (max possible elements).
  long size (void) const;

  /// Get all the items in the collection.
  void items (std::vector <T> & out) const;

  /// Get the first element in the collection.
  T first (void) const;

private:
  /// Pointer to the collection.
  ::ATL::CComPtr <interface_type> iter_;

  /// Number of elements in collection.
  long size_;

  /// Number of <T> elements in the collection
  long count_;
};

}
}

#include "Collection_T.cpp"

#endif  // !defined _GME_COLLECTION_T_H_
