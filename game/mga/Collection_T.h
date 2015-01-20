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

  /// Type definition of expected proxy
  typedef typename iterator_type::iterator_type proxy_type;
  typedef typename iterator_type::interface_type interface_type;

  /**
   * Initializing constructor
   *
   * @param[in]     iter        COM collection
   */
  Collection_T (proxy_type iter);

  /// Destructor.
  ~Collection_T (void);

  /// Get the begin iterator.
  iterator_type begin (void);
  
  /// Get the end iterator.
  iterator_type end (void);

  /// Number of valid elements in the collection
  size_t count (void);

  /// Estimated count of valid elements in the collection.
  /// This method has a lower cost than count () and can
  /// correctly identify if the collection contains any objects
  /// of type T.  To know how many valid elements are are, count
  /// must be used.
  size_t estimated_count (void);

  /// Size of the collection (max possible elements).
  size_t size (void) const;

  /// Get the first element in the collection.
  T first (void) const;

  /// Test if the collection is empty.
  bool is_empty (void) const;

  /// Get the underlying pointer to the collection
  /// Since it is abstracted by the proxy, the collection_t
  /// does not know the concrete type
  void * impl (void);

private:
  /// The collection proxy
  proxy_type iter_;

  /// Number of elements in collection.
  long size_;

  /// Number of <T> elements in the collection
  size_t count_;

  /// Initial value for count_ to trigger lazy loading
  static const size_t unknown_count;

  /// Index of the first valid value in the collection
  size_t begin_;

  /// Index of the last valid value in the collection
  size_t end_;
};

}
}

#include "Collection_T.cpp"

#endif  // !defined _GME_COLLECTION_T_H_
