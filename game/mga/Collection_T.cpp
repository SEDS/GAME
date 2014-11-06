// $Id$

#include "Exception.h"

namespace GAME
{
namespace Mga
{

template <typename T>
struct collection_traits;

template < >
struct collection_traits <IMgaObjects *>
{
  typedef IMgaObject interface_type;
};

template < >
struct collection_traits <IMgaFCOs *>
{
  typedef IMgaFCO interface_type;
};

template < >
struct collection_traits <IMgaFolders *>
{
  typedef IMgaFolder interface_type;
};

template < >
struct collection_traits <IMgaAttributes *>
{
  typedef IMgaAttribute interface_type;
};

template < >
struct collection_traits <IMgaComponents *>
{
  typedef IMgaComponent interface_type;
};

template < >
struct collection_traits <IMgaConnPoints *>
{
  typedef IMgaConnPoint interface_type;
};

template < >
struct collection_traits <IMgaRegNodes *>
{
  typedef IMgaRegNode interface_type;
};

template < >
struct collection_traits <IMgaMetaFolders *>
{
  typedef IMgaMetaFolder interface_type;
};

template < >
struct collection_traits <IMgaMetaFCOs *>
{
  typedef IMgaMetaFCO interface_type;
};

template < >
struct collection_traits <IMgaMetaParts *>
{
  typedef IMgaMetaPart interface_type;
};

template < >
struct collection_traits <IMgaMetaRoles *>
{
  typedef IMgaMetaRole interface_type;
};

template < >
struct collection_traits <IMgaMetaAspects *>
{
  typedef IMgaMetaAspect interface_type;
};

template < >
struct collection_traits <IMgaMetaAttributes *>
{
  typedef IMgaMetaAttribute interface_type;
};

template < >
struct collection_traits <IMgaConstraints *>
{
  typedef IMgaConstraint interface_type;
};

template < >
struct collection_traits <IMgaMetaConnJoints *>
{
  typedef IMgaMetaConnJoint interface_type;
};

template <typename T>
const size_t Collection_T <T>::unknown_count = -1;

template <typename T>
GAME_INLINE
Collection_T <T>::Collection_T (interface_type * iter)
: iter_ (iter),
  size_ (0),
  count_ (Collection_T <T>::unknown_count),
  begin_ (0),
  end_ (0)
{
  VERIFY_HRESULT (this->iter_->get_Count (&this->size_));

  // Identify the location of the first and last valid values in the Collection
  iterator_type begin = iterator_type (this->iter_.p, 1L, this->size_ + 1);
  iterator_type end = iterator_type (this->iter_.p, this->size_ + 1, this->size_ + 1);
  this->begin_ = begin.index ();
  this->end_ = end.index ();

  if (this->begin_ == this->end_)
    this->count_ = 0;
}

template <typename T>
GAME_INLINE
Collection_T <T>::~Collection_T (void)
{

}

template <typename T>
GAME_INLINE
size_t Collection_T <T>::count (void)
{
  if (this->count_ != Collection_T <T>::unknown_count)
    return this->count_;

  // Find out how many valid elements are in the collection
  this->count_ = 0;
  for (auto valid : *this)
    ++this->count_;

  return this->count_;
}

template <typename T>
GAME_INLINE
size_t Collection_T <T>::estimated_count (void)
{
  return this->count_ == Collection_T <T>::unknown_count ? this->end_ - this->begin_ : this->count_;
}

template <typename T>
GAME_INLINE
size_t Collection_T <T>::size (void) const
{
  return this->size_;
}

template <typename T>
GAME_INLINE
bool Collection_T <T>::is_empty (void) const
{
  return this->size_ == 0;
}

template <typename T>
GAME_INLINE
typename Collection_T <T>::iterator_type Collection_T <T>::begin (void)
{
  return iterator_type (this->iter_.p, this->begin_, this->end_);
}

template <typename T>
GAME_INLINE
typename Collection_T <T>::iterator_type Collection_T <T>::end (void)
{
  return iterator_type (this->iter_.p, this->end_, this->end_);
}

template <typename T>
GAME_INLINE
void Collection_T <T>::items (std::vector <T> & out) const
{
  iter_to_collection (this->iter_.p, out, this->size_);
}

template <typename T>
GAME_INLINE
T Collection_T <T>::first (void) const
{
  return * iterator_type (this->iter_.p, this->begin_, this->end_);
}

template <typename ITER, typename T>
size_t iter_to_collection (ITER iter, std::vector <T> & coll)
{
  // Resize the collection.
  long size;
  iter->get_Count (&size);

  return iter_to_collection (iter, coll, size);
}

template <typename ITER, typename T>
size_t iter_to_collection (ITER iter, std::vector <FCO> & coll)
{
  long size;
  iter->get_Count (&size);

  // Make space for the elements, but set the collection's size
  // to zero. We will grow the collection as we insert elements.
  coll.reserve (size);
  coll.resize (0);

  if (size == 0)
    return 0;

  // Get the interface to all the members.
  typedef typename collection_traits <ITER>::interface_type interface_type;
  ATL::CComPtr <interface_type> * arr = new ATL::CComPtr <interface_type> [size];

  VERIFY_HRESULT (iter->GetAll (size, &(*arr)));

  // Store the members in a collection.
  ATL::CComPtr <T::interface_type> temp;

  for (long i = 0; i < size; i ++)
  {
    if (FAILED (arr[i].QueryInterface (&temp)))
      continue;

    FCO fco (temp.p);

    if (fco->type () == object_type_t <T::impl_type>::result_type)
      coll.push_back (temp.p);

    temp.Release ();
  }

  return coll.size ();
}

template <typename ITER, typename T>
size_t iter_to_collection (ITER iter, std::vector <T> & coll, long size)
{
  // Make space for the elements, but set the collection's size
  // to zero. We will grow the collection as we insert elements.
  coll.reserve (size);
  coll.resize (0);

  if (size == 0)
    return 0;

  // Get the interface to all the members.
  typedef typename collection_traits <ITER>::interface_type interface_type;
  ATL::CComPtr <interface_type> * arr = new ATL::CComPtr <interface_type> [size];

  VERIFY_HRESULT (iter->GetAll (size, &(*arr)));

  // Store the members in a collection.
  ATL::CComPtr <typename T::interface_type> temp;

  for (long i = 0; i < size; i ++)
  {
    if (FAILED (arr[i].QueryInterface (&temp)))
      continue;

    coll.push_back (temp.p);
    temp.Release ();
  }

  // Release the temp storage.
  delete [] arr;
  return coll.size ();
}

}
}
