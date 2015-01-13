// -*- C++ -*-

//==============================================================================
/**
 *  @file        Collection_T_Impl_Proxy.h
 *
 *  $Id: generate_cpp_class.py 3685 2012-09-26 14:45:04Z dfeiock $
 *
 *  @author      INSERT NAME HERE
 */
//==============================================================================

#ifndef _GAME_MGA_COLLECTION_T_IMPL_PROXY_H_
#define _GAME_MGA_COLLECTION_T_IMPL_PROXY_H_

#include "game/mga/Mga.h"
#include "game/mga/Collection_T_Impl.h"
#include "Gme_fwd.h"

namespace GAME
{
namespace Mga
{


template <typename T>
struct impl_type_t
{
  typedef T result_type;
};

template < >
struct impl_type_t <IMgaObject>
{
  typedef Collection_T_Impl <IMgaObject, IMgaObjects> result_type;
};

template < >
struct impl_type_t <IMgaFolder>
{
  typedef Collection_T_Impl <IMgaFolder, IMgaFolders> result_type;
};

template < >
struct impl_type_t <IMgaFCO>
{
  typedef Collection_T_Impl <IMgaFCO, IMgaFCOs> result_type;
};

template < >
struct impl_type_t <IMgaAtom>
{
  typedef Collection_T_Impl <IMgaAtom, IMgaFCOs> result_type;
};

template < >
struct impl_type_t <IMgaModel>
{
  typedef Collection_T_Impl <IMgaModel, IMgaFCOs> result_type;
};

template < >
struct impl_type_t <IMgaSet>
{
  typedef Collection_T_Impl <IMgaSet, IMgaFCOs> result_type;
};

template < >
struct impl_type_t <IMgaReference>
{
  typedef Collection_T_Impl <IMgaReference, IMgaFCOs> result_type;
};

template < >
struct impl_type_t <IMgaAttribute>
{
  typedef Collection_T_Impl <IMgaAttribute, IMgaAttributes> result_type;
};

template < >
struct impl_type_t <IMgaRegNode>
{
  typedef Collection_T_Impl <IMgaRegNode, IMgaRegNodes> result_type;
};

template < >
struct impl_type_t <IMgaMetaAttribute>
{
  typedef Collection_T_Impl <IMgaMetaAttribute, IMgaMetaAttributes> result_type;
};

template < >
struct impl_type_t <IMgaMetaPart>
{
  typedef Collection_T_Impl <IMgaMetaPart, IMgaMetaParts> result_type;
};

template < >
struct impl_type_t <IMgaConstraint>
{
  typedef Collection_T_Impl <IMgaConstraint, IMgaConstraints> result_type;
};

template < >
struct impl_type_t <IMgaMetaConnJoint>
{
  typedef Collection_T_Impl <IMgaMetaConnJoint, IMgaMetaConnJoints> result_type;
};

template < >
struct impl_type_t <IMgaMetaRole>
{
  typedef Collection_T_Impl <IMgaMetaRole, IMgaMetaRoles> result_type;
};

template < >
struct impl_type_t <IMgaMetaFolder>
{
  typedef Collection_T_Impl <IMgaMetaFolder, IMgaMetaFolders> result_type;
};

template < >
struct impl_type_t <IMgaMetaFCO>
{
  typedef Collection_T_Impl <IMgaMetaFCO, IMgaMetaFCOs> result_type;
};

template < >
struct impl_type_t <IMgaMetaAspect>
{
  typedef Collection_T_Impl <IMgaMetaAspect, IMgaMetaAspects> result_type;
};

template < >
struct impl_type_t <IMgaComponent>
{
  typedef Collection_T_Impl <IMgaComponent, IMgaComponents> result_type;
};

template < >
struct impl_type_t <IMgaComponentEx>
{
  typedef Collection_T_Impl <IMgaComponentEx, IMgaComponents> result_type;
};

/**
 * @class Collection_T_Impl_Proxy
 *
 * Proxy for Collection_T_Impl.  This hides the underlying
 * Mga iterable type from the Collection_T.  Class specializations
 * must be used when more than a single MGA collection type can be
 * used to access a single MGA type (i.e. IMgaConnection can come
 * from either IMgaFCOs or IMgaConnPoints).
 */
template <typename T>
class Collection_T_Impl_Proxy
{
public:
  // The Collection_T_Impl type
  typedef typename impl_type_t <T>::result_type impl_type;

  /// Default constructor.
  Collection_T_Impl_Proxy (impl_type impl);

  /// Destructor.
  ~Collection_T_Impl_Proxy (void);

  // The get method, passthrough to underlying Collection_T_Impl
  ::ATL::CComPtr <T> get (long length);

  long count (void);

  bool operator == (const Collection_T_Impl_Proxy & rhs) const;
  bool operator != (const Collection_T_Impl_Proxy & rhs) const;

private:
  impl_type impl_;
};

/**
 * Template specilization for getting Connections, which come from FCOs
 * when getting connections from a parent model or from ConnPoints when
 * getting them from an entity (atom, model, etc).
 */
template < >
class Collection_T_Impl_Proxy <IMgaConnection>
{
public:
  Collection_T_Impl_Proxy (Collection_T_Impl <IMgaConnection, IMgaFCOs> impl);
  Collection_T_Impl_Proxy (Collection_T_Impl <IMgaConnection, IMgaConnPoints> impl);
  ~Collection_T_Impl_Proxy (void);
  ::ATL::CComPtr <IMgaConnection> get (long length);

  long count (void);

  bool operator == (const Collection_T_Impl_Proxy & rhs) const;
  bool operator != (const Collection_T_Impl_Proxy & rhs) const;

private:
  bool use_fco_;
  Collection_T_Impl <IMgaConnection, IMgaFCOs> fco_impl_;
  Collection_T_Impl <IMgaConnection, IMgaConnPoints> point_impl_;
};

} // namespace GAME
} // namespace Mga

#include "Collection_T_Impl_Proxy.cpp"

#endif  // _GAME_MGA_COLLECTION_T_IMPL_PROXY_H_
