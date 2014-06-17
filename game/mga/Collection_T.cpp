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
GAME_INLINE
Collection_T <T>::Collection_T (interface_type * iter)
: iter_ (iter),
  count_ (0)
{
  VERIFY_HRESULT (this->iter_->get_Count (&this->count_));
}

template <typename T>
GAME_INLINE
Collection_T <T>::~Collection_T (void)
{

}

template <typename T>
GAME_INLINE
long Collection_T <T>::count (void) const
{
  return this->count_;
}

template <typename T>
GAME_INLINE
typename Collection_T <T>::iterator_type Collection_T <T>::begin (void)
{
  return iterator_type (this->iter_.p, 1L);
}

template <typename T>
GAME_INLINE
typename Collection_T <T>::iterator_type Collection_T <T>::end (void)
{
  return iterator_type (this->iter_.p, this->count_ + 1);
}

template <typename T>
GAME_INLINE
void Collection_T <T>::items (std::vector <T> & out) const
{
  iter_to_collection (this->iter_.p, out, this->count_);
}

template <typename T>
GAME_INLINE
T Collection_T <T>::first (void) const
{
  return iter_.p;
}

template <typename ITER, typename T>
size_t iter_to_collection (ITER iter, std::vector <T> & coll)
{
  // Resize the collection.
  long count;
  iter->get_Count (&count);

  return iter_to_collection (iter, coll, count);
}

template <typename ITER, typename T>
size_t iter_to_collection (ITER iter, std::vector <FCO> & coll)
{
  long count;
  iter->get_Count (&count);

  // Make space for the elements, but set the collection's size
  // to zero. We will grow the collection as we insert elements.
  coll.reserve (count);
  coll.resize (0);

  if (count == 0)
    return 0;

  // Get the interface to all the members.
  typedef typename collection_traits <ITER>::interface_type interface_type;
  ATL::CComPtr <interface_type> * arr = new ATL::CComPtr <interface_type> [count];

  VERIFY_HRESULT (iter->GetAll (count, &(*arr)));

  // Store the members in a collection.
  ATL::CComPtr <T::interface_type> temp;

  for (long i = 0; i < count; i ++)
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
size_t iter_to_collection (ITER iter, std::vector <T> & coll, long count)
{
  // Make space for the elements, but set the collection's size
  // to zero. We will grow the collection as we insert elements.
  coll.reserve (count);
  coll.resize (0);

  if (count == 0)
    return 0;

  // Get the interface to all the members.
  typedef typename collection_traits <ITER>::interface_type interface_type;
  ATL::CComPtr <interface_type> * arr = new ATL::CComPtr <interface_type> [count];

  VERIFY_HRESULT (iter->GetAll (count, &(*arr)));

  // Store the members in a collection.
  ATL::CComPtr <typename T::interface_type> temp;

  for (long i = 0; i < count; i ++)
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
