

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 8.00.0595 */
/* at Mon May 11 19:18:50 2015
 */
/* Compiler settings for C:\Program Files (x86)\GME\Interfaces\Meta.idl:
    Oicf, W1, Zp8, env=Win32 (32b run), target_arch=X86 8.00.0595 
    protocol : dce , ms_ext, c_ext, robust
    error checks: allocation ref bounds_check enum stub_data 
    VC __declspec() decoration level: 
         __declspec(uuid()), __declspec(selectany), __declspec(novtable)
         DECLSPEC_UUID(), MIDL_INTERFACE()
*/
/* @@MIDL_FILE_HEADING(  ) */

#pragma warning( disable: 4049 )  /* more than 64k source lines */


/* verify that the <rpcndr.h> version is high enough to compile this file*/
#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 475
#endif

#include "rpc.h"
#include "rpcndr.h"

#ifndef __RPCNDR_H_VERSION__
#error this stub requires an updated version of <rpcndr.h>
#endif // __RPCNDR_H_VERSION__

#ifndef COM_NO_WINDOWS_H
#include "windows.h"
#include "ole2.h"
#endif /*COM_NO_WINDOWS_H*/

#ifndef __Meta_h__
#define __Meta_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef __IMgaMetaRegNode_FWD_DEFINED__
#define __IMgaMetaRegNode_FWD_DEFINED__
typedef interface IMgaMetaRegNode IMgaMetaRegNode;

#endif 	/* __IMgaMetaRegNode_FWD_DEFINED__ */


#ifndef __IMgaConstraint_FWD_DEFINED__
#define __IMgaConstraint_FWD_DEFINED__
typedef interface IMgaConstraint IMgaConstraint;

#endif 	/* __IMgaConstraint_FWD_DEFINED__ */


#ifndef __IMgaMetaProject_FWD_DEFINED__
#define __IMgaMetaProject_FWD_DEFINED__
typedef interface IMgaMetaProject IMgaMetaProject;

#endif 	/* __IMgaMetaProject_FWD_DEFINED__ */


#ifndef __IMgaMetaBase_FWD_DEFINED__
#define __IMgaMetaBase_FWD_DEFINED__
typedef interface IMgaMetaBase IMgaMetaBase;

#endif 	/* __IMgaMetaBase_FWD_DEFINED__ */


#ifndef __IMgaMetaFolder_FWD_DEFINED__
#define __IMgaMetaFolder_FWD_DEFINED__
typedef interface IMgaMetaFolder IMgaMetaFolder;

#endif 	/* __IMgaMetaFolder_FWD_DEFINED__ */


#ifndef __IMgaMetaFCO_FWD_DEFINED__
#define __IMgaMetaFCO_FWD_DEFINED__
typedef interface IMgaMetaFCO IMgaMetaFCO;

#endif 	/* __IMgaMetaFCO_FWD_DEFINED__ */


#ifndef __IMgaMetaModel_FWD_DEFINED__
#define __IMgaMetaModel_FWD_DEFINED__
typedef interface IMgaMetaModel IMgaMetaModel;

#endif 	/* __IMgaMetaModel_FWD_DEFINED__ */


#ifndef __IMgaMetaAspect_FWD_DEFINED__
#define __IMgaMetaAspect_FWD_DEFINED__
typedef interface IMgaMetaAspect IMgaMetaAspect;

#endif 	/* __IMgaMetaAspect_FWD_DEFINED__ */


#ifndef __IMgaMetaRole_FWD_DEFINED__
#define __IMgaMetaRole_FWD_DEFINED__
typedef interface IMgaMetaRole IMgaMetaRole;

#endif 	/* __IMgaMetaRole_FWD_DEFINED__ */


#ifndef __IMgaMetaPart_FWD_DEFINED__
#define __IMgaMetaPart_FWD_DEFINED__
typedef interface IMgaMetaPart IMgaMetaPart;

#endif 	/* __IMgaMetaPart_FWD_DEFINED__ */


#ifndef __IMgaMetaAtom_FWD_DEFINED__
#define __IMgaMetaAtom_FWD_DEFINED__
typedef interface IMgaMetaAtom IMgaMetaAtom;

#endif 	/* __IMgaMetaAtom_FWD_DEFINED__ */


#ifndef __IMgaMetaAttribute_FWD_DEFINED__
#define __IMgaMetaAttribute_FWD_DEFINED__
typedef interface IMgaMetaAttribute IMgaMetaAttribute;

#endif 	/* __IMgaMetaAttribute_FWD_DEFINED__ */


#ifndef __IMgaMetaEnumItem_FWD_DEFINED__
#define __IMgaMetaEnumItem_FWD_DEFINED__
typedef interface IMgaMetaEnumItem IMgaMetaEnumItem;

#endif 	/* __IMgaMetaEnumItem_FWD_DEFINED__ */


#ifndef __IMgaMetaReference_FWD_DEFINED__
#define __IMgaMetaReference_FWD_DEFINED__
typedef interface IMgaMetaReference IMgaMetaReference;

#endif 	/* __IMgaMetaReference_FWD_DEFINED__ */


#ifndef __IMgaMetaSet_FWD_DEFINED__
#define __IMgaMetaSet_FWD_DEFINED__
typedef interface IMgaMetaSet IMgaMetaSet;

#endif 	/* __IMgaMetaSet_FWD_DEFINED__ */


#ifndef __IMgaMetaConnection_FWD_DEFINED__
#define __IMgaMetaConnection_FWD_DEFINED__
typedef interface IMgaMetaConnection IMgaMetaConnection;

#endif 	/* __IMgaMetaConnection_FWD_DEFINED__ */


#ifndef __IMgaMetaConnJoint_FWD_DEFINED__
#define __IMgaMetaConnJoint_FWD_DEFINED__
typedef interface IMgaMetaConnJoint IMgaMetaConnJoint;

#endif 	/* __IMgaMetaConnJoint_FWD_DEFINED__ */


#ifndef __IMgaMetaPointerSpec_FWD_DEFINED__
#define __IMgaMetaPointerSpec_FWD_DEFINED__
typedef interface IMgaMetaPointerSpec IMgaMetaPointerSpec;

#endif 	/* __IMgaMetaPointerSpec_FWD_DEFINED__ */


#ifndef __IMgaMetaPointerItem_FWD_DEFINED__
#define __IMgaMetaPointerItem_FWD_DEFINED__
typedef interface IMgaMetaPointerItem IMgaMetaPointerItem;

#endif 	/* __IMgaMetaPointerItem_FWD_DEFINED__ */


#ifndef __IMgaMetaAspects_FWD_DEFINED__
#define __IMgaMetaAspects_FWD_DEFINED__
typedef interface IMgaMetaAspects IMgaMetaAspects;

#endif 	/* __IMgaMetaAspects_FWD_DEFINED__ */


#ifndef __IMgaMetaRoles_FWD_DEFINED__
#define __IMgaMetaRoles_FWD_DEFINED__
typedef interface IMgaMetaRoles IMgaMetaRoles;

#endif 	/* __IMgaMetaRoles_FWD_DEFINED__ */


#ifndef __IMgaMetaFCOs_FWD_DEFINED__
#define __IMgaMetaFCOs_FWD_DEFINED__
typedef interface IMgaMetaFCOs IMgaMetaFCOs;

#endif 	/* __IMgaMetaFCOs_FWD_DEFINED__ */


#ifndef __IMgaMetaAttributes_FWD_DEFINED__
#define __IMgaMetaAttributes_FWD_DEFINED__
typedef interface IMgaMetaAttributes IMgaMetaAttributes;

#endif 	/* __IMgaMetaAttributes_FWD_DEFINED__ */


#ifndef __IMgaMetaFolders_FWD_DEFINED__
#define __IMgaMetaFolders_FWD_DEFINED__
typedef interface IMgaMetaFolders IMgaMetaFolders;

#endif 	/* __IMgaMetaFolders_FWD_DEFINED__ */


#ifndef __IMgaMetaPointerSpecs_FWD_DEFINED__
#define __IMgaMetaPointerSpecs_FWD_DEFINED__
typedef interface IMgaMetaPointerSpecs IMgaMetaPointerSpecs;

#endif 	/* __IMgaMetaPointerSpecs_FWD_DEFINED__ */


#ifndef __IMgaMetaRegNodes_FWD_DEFINED__
#define __IMgaMetaRegNodes_FWD_DEFINED__
typedef interface IMgaMetaRegNodes IMgaMetaRegNodes;

#endif 	/* __IMgaMetaRegNodes_FWD_DEFINED__ */


#ifndef __IMgaConstraints_FWD_DEFINED__
#define __IMgaConstraints_FWD_DEFINED__
typedef interface IMgaConstraints IMgaConstraints;

#endif 	/* __IMgaConstraints_FWD_DEFINED__ */


#ifndef __IMgaMetaParts_FWD_DEFINED__
#define __IMgaMetaParts_FWD_DEFINED__
typedef interface IMgaMetaParts IMgaMetaParts;

#endif 	/* __IMgaMetaParts_FWD_DEFINED__ */


#ifndef __IMgaMetaModels_FWD_DEFINED__
#define __IMgaMetaModels_FWD_DEFINED__
typedef interface IMgaMetaModels IMgaMetaModels;

#endif 	/* __IMgaMetaModels_FWD_DEFINED__ */


#ifndef __IMgaMetaConnJoints_FWD_DEFINED__
#define __IMgaMetaConnJoints_FWD_DEFINED__
typedef interface IMgaMetaConnJoints IMgaMetaConnJoints;

#endif 	/* __IMgaMetaConnJoints_FWD_DEFINED__ */


#ifndef __IMgaMetaPointerItems_FWD_DEFINED__
#define __IMgaMetaPointerItems_FWD_DEFINED__
typedef interface IMgaMetaPointerItems IMgaMetaPointerItems;

#endif 	/* __IMgaMetaPointerItems_FWD_DEFINED__ */


#ifndef __IMgaMetaEnumItems_FWD_DEFINED__
#define __IMgaMetaEnumItems_FWD_DEFINED__
typedef interface IMgaMetaEnumItems IMgaMetaEnumItems;

#endif 	/* __IMgaMetaEnumItems_FWD_DEFINED__ */


/* header files for imported files */
#include "oaidl.h"
#include "ocidl.h"

#ifdef __cplusplus
extern "C"{
#endif 


/* interface __MIDL_itf_Meta_0000_0000 */
/* [local] */ 

#ifndef INTERFACECOLL_INCLUDED
#define INTERFACECOLL_INCLUDED
extern "C++"											
{														
	template<class COLL> struct TypeName_MgaColl2Elem		
	{														
		typedef IUnknown element_type;						
		typedef IUnknown collection_type;					
	};														
	template<class ELEM> struct TypeName_MgaElem2Coll		
	{														
		typedef IUnknown element_type;						
		typedef IUnknown collection_type;					
	};														
}														
#define TYPENAME_COLL2ELEM(COLL) typename ::TypeName_MgaColl2Elem<COLL>::element_type
#define TYPENAME_ELEM2COLL(ELEM) typename ::TypeName_MgaElem2Coll<ELEM>::collection_type
#endif
#ifndef INTERFACE_VERSION
#define INTERFACE_VERSION 0x000200E6
#endif //INTERFACE_VERSION
typedef long metaref_type;

typedef 
enum objtype_enum
    {
        OBJTYPE_NULL	= 0,
        OBJTYPE_MODEL	= 1,
        OBJTYPE_ATOM	= 2,
        OBJTYPE_REFERENCE	= 3,
        OBJTYPE_CONNECTION	= 4,
        OBJTYPE_SET	= 5,
        OBJTYPE_FOLDER	= 6,
        OBJTYPE_ASPECT	= ( OBJTYPE_FOLDER + 1 ) ,
        OBJTYPE_ROLE	= ( OBJTYPE_ASPECT + 1 ) ,
        OBJTYPE_ATTRIBUTE	= ( OBJTYPE_ROLE + 1 ) ,
        OBJTYPE_PART	= ( OBJTYPE_ATTRIBUTE + 1 ) 
    } 	objtype_enum;

typedef 
enum attval_enum
    {
        ATTVAL_NULL	= 0,
        ATTVAL_STRING	= 1,
        ATTVAL_INTEGER	= 2,
        ATTVAL_DOUBLE	= 3,
        ATTVAL_BOOLEAN	= 4,
        ATTVAL_REFERENCE	= 5,
        ATTVAL_ENUM	= ( ATTVAL_REFERENCE + 1 ) ,
        ATTVAL_DYNAMIC	= ( ATTVAL_ENUM + 1 ) 
    } 	attval_enum;

typedef 
enum constraint_depth_enum
    {
        CONSTRAINT_DEPTH_ZERO	= 0,
        CONSTRAINT_DEPTH_ONE	= ( CONSTRAINT_DEPTH_ZERO + 1 ) ,
        CONSTRAINT_DEPTH_ANY	= ( CONSTRAINT_DEPTH_ONE + 1 ) 
    } 	constraint_depth_enum;

typedef 
enum constraint_type_enum
    {
        CONSTRAINT_TYPE_EVENTBASED	= 0,
        CONSTRAINT_TYPE_ONDEMAND	= ( CONSTRAINT_TYPE_EVENTBASED + 1 ) ,
        CONSTRAINT_TYPE_FUNCTION	= ( CONSTRAINT_TYPE_ONDEMAND + 1 ) 
    } 	constraint_type_enum;

































extern RPC_IF_HANDLE __MIDL_itf_Meta_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_Meta_0000_0000_v0_0_s_ifspec;

#ifndef __IMgaMetaRegNode_INTERFACE_DEFINED__
#define __IMgaMetaRegNode_INTERFACE_DEFINED__

/* interface IMgaMetaRegNode */
/* [unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_IMgaMetaRegNode;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("83BA323D-B758-11D3-ABAE-000002387500")
    IMgaMetaRegNode : public IDispatch
    {
    public:
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Name( 
            /* [retval][out] */ BSTR *p) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Value( 
            /* [retval][out] */ BSTR *p) = 0;
        
        virtual /* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_Value( 
            /* [in] */ BSTR p) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Delete( void) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_RegistryNodes( 
            /* [retval][out] */ IMgaMetaRegNodes **p) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_RegistryNode( 
            /* [in] */ BSTR path,
            /* [retval][out] */ IMgaMetaRegNode **p) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetRegistryNodeDisp( 
            /* [in] */ BSTR path,
            /* [retval][out] */ IMgaMetaRegNode **p) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_RegistryValue( 
            /* [in] */ BSTR path,
            /* [retval][out] */ BSTR *p) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetRegistryValueDisp( 
            /* [in] */ BSTR path,
            /* [retval][out] */ BSTR *p) = 0;
        
        virtual /* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_RegistryValue( 
            /* [in] */ BSTR path,
            /* [in] */ BSTR p) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE SetRegistryValueDisp( 
            /* [in] */ BSTR path,
            /* [in] */ BSTR p) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IMgaMetaRegNodeVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IMgaMetaRegNode * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IMgaMetaRegNode * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IMgaMetaRegNode * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IMgaMetaRegNode * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IMgaMetaRegNode * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IMgaMetaRegNode * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IMgaMetaRegNode * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Name )( 
            IMgaMetaRegNode * This,
            /* [retval][out] */ BSTR *p);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Value )( 
            IMgaMetaRegNode * This,
            /* [retval][out] */ BSTR *p);
        
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Value )( 
            IMgaMetaRegNode * This,
            /* [in] */ BSTR p);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Delete )( 
            IMgaMetaRegNode * This);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_RegistryNodes )( 
            IMgaMetaRegNode * This,
            /* [retval][out] */ IMgaMetaRegNodes **p);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_RegistryNode )( 
            IMgaMetaRegNode * This,
            /* [in] */ BSTR path,
            /* [retval][out] */ IMgaMetaRegNode **p);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetRegistryNodeDisp )( 
            IMgaMetaRegNode * This,
            /* [in] */ BSTR path,
            /* [retval][out] */ IMgaMetaRegNode **p);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_RegistryValue )( 
            IMgaMetaRegNode * This,
            /* [in] */ BSTR path,
            /* [retval][out] */ BSTR *p);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetRegistryValueDisp )( 
            IMgaMetaRegNode * This,
            /* [in] */ BSTR path,
            /* [retval][out] */ BSTR *p);
        
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_RegistryValue )( 
            IMgaMetaRegNode * This,
            /* [in] */ BSTR path,
            /* [in] */ BSTR p);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *SetRegistryValueDisp )( 
            IMgaMetaRegNode * This,
            /* [in] */ BSTR path,
            /* [in] */ BSTR p);
        
        END_INTERFACE
    } IMgaMetaRegNodeVtbl;

    interface IMgaMetaRegNode
    {
        CONST_VTBL struct IMgaMetaRegNodeVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IMgaMetaRegNode_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IMgaMetaRegNode_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IMgaMetaRegNode_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IMgaMetaRegNode_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IMgaMetaRegNode_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IMgaMetaRegNode_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IMgaMetaRegNode_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IMgaMetaRegNode_get_Name(This,p)	\
    ( (This)->lpVtbl -> get_Name(This,p) ) 

#define IMgaMetaRegNode_get_Value(This,p)	\
    ( (This)->lpVtbl -> get_Value(This,p) ) 

#define IMgaMetaRegNode_put_Value(This,p)	\
    ( (This)->lpVtbl -> put_Value(This,p) ) 

#define IMgaMetaRegNode_Delete(This)	\
    ( (This)->lpVtbl -> Delete(This) ) 

#define IMgaMetaRegNode_get_RegistryNodes(This,p)	\
    ( (This)->lpVtbl -> get_RegistryNodes(This,p) ) 

#define IMgaMetaRegNode_get_RegistryNode(This,path,p)	\
    ( (This)->lpVtbl -> get_RegistryNode(This,path,p) ) 

#define IMgaMetaRegNode_GetRegistryNodeDisp(This,path,p)	\
    ( (This)->lpVtbl -> GetRegistryNodeDisp(This,path,p) ) 

#define IMgaMetaRegNode_get_RegistryValue(This,path,p)	\
    ( (This)->lpVtbl -> get_RegistryValue(This,path,p) ) 

#define IMgaMetaRegNode_GetRegistryValueDisp(This,path,p)	\
    ( (This)->lpVtbl -> GetRegistryValueDisp(This,path,p) ) 

#define IMgaMetaRegNode_put_RegistryValue(This,path,p)	\
    ( (This)->lpVtbl -> put_RegistryValue(This,path,p) ) 

#define IMgaMetaRegNode_SetRegistryValueDisp(This,path,p)	\
    ( (This)->lpVtbl -> SetRegistryValueDisp(This,path,p) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IMgaMetaRegNode_INTERFACE_DEFINED__ */


#ifndef __IMgaConstraint_INTERFACE_DEFINED__
#define __IMgaConstraint_INTERFACE_DEFINED__

/* interface IMgaConstraint */
/* [unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_IMgaConstraint;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("83BA3241-B758-11D3-ABAE-000000000000")
    IMgaConstraint : public IDispatch
    {
    public:
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Name( 
            /* [retval][out] */ BSTR *p) = 0;
        
        virtual /* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_Name( 
            /* [in] */ BSTR p) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_DisplayedName( 
            /* [retval][out] */ BSTR *p) = 0;
        
        virtual /* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_DisplayedName( 
            /* [in] */ BSTR p) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Expression( 
            /* [retval][out] */ BSTR *p) = 0;
        
        virtual /* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_Expression( 
            /* [in] */ BSTR p) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_EventMask( 
            /* [retval][out] */ unsigned long *p) = 0;
        
        virtual /* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_EventMask( 
            /* [in] */ unsigned long p) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Depth( 
            /* [retval][out] */ constraint_depth_enum *p) = 0;
        
        virtual /* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_Depth( 
            /* [in] */ constraint_depth_enum p) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Priority( 
            /* [retval][out] */ long *p) = 0;
        
        virtual /* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_Priority( 
            /* [in] */ long p) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Type( 
            /* [retval][out] */ constraint_type_enum *p) = 0;
        
        virtual /* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_Type( 
            /* [in] */ constraint_type_enum p) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Remove( void) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE SetDefinedForNamespace( 
            /* [in] */ BSTR pStr) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetDefinedForNamespace( 
            /* [retval][out] */ BSTR *pStr) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IMgaConstraintVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IMgaConstraint * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IMgaConstraint * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IMgaConstraint * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IMgaConstraint * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IMgaConstraint * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IMgaConstraint * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IMgaConstraint * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Name )( 
            IMgaConstraint * This,
            /* [retval][out] */ BSTR *p);
        
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Name )( 
            IMgaConstraint * This,
            /* [in] */ BSTR p);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_DisplayedName )( 
            IMgaConstraint * This,
            /* [retval][out] */ BSTR *p);
        
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_DisplayedName )( 
            IMgaConstraint * This,
            /* [in] */ BSTR p);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Expression )( 
            IMgaConstraint * This,
            /* [retval][out] */ BSTR *p);
        
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Expression )( 
            IMgaConstraint * This,
            /* [in] */ BSTR p);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_EventMask )( 
            IMgaConstraint * This,
            /* [retval][out] */ unsigned long *p);
        
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_EventMask )( 
            IMgaConstraint * This,
            /* [in] */ unsigned long p);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Depth )( 
            IMgaConstraint * This,
            /* [retval][out] */ constraint_depth_enum *p);
        
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Depth )( 
            IMgaConstraint * This,
            /* [in] */ constraint_depth_enum p);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Priority )( 
            IMgaConstraint * This,
            /* [retval][out] */ long *p);
        
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Priority )( 
            IMgaConstraint * This,
            /* [in] */ long p);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Type )( 
            IMgaConstraint * This,
            /* [retval][out] */ constraint_type_enum *p);
        
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Type )( 
            IMgaConstraint * This,
            /* [in] */ constraint_type_enum p);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Remove )( 
            IMgaConstraint * This);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *SetDefinedForNamespace )( 
            IMgaConstraint * This,
            /* [in] */ BSTR pStr);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetDefinedForNamespace )( 
            IMgaConstraint * This,
            /* [retval][out] */ BSTR *pStr);
        
        END_INTERFACE
    } IMgaConstraintVtbl;

    interface IMgaConstraint
    {
        CONST_VTBL struct IMgaConstraintVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IMgaConstraint_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IMgaConstraint_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IMgaConstraint_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IMgaConstraint_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IMgaConstraint_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IMgaConstraint_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IMgaConstraint_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IMgaConstraint_get_Name(This,p)	\
    ( (This)->lpVtbl -> get_Name(This,p) ) 

#define IMgaConstraint_put_Name(This,p)	\
    ( (This)->lpVtbl -> put_Name(This,p) ) 

#define IMgaConstraint_get_DisplayedName(This,p)	\
    ( (This)->lpVtbl -> get_DisplayedName(This,p) ) 

#define IMgaConstraint_put_DisplayedName(This,p)	\
    ( (This)->lpVtbl -> put_DisplayedName(This,p) ) 

#define IMgaConstraint_get_Expression(This,p)	\
    ( (This)->lpVtbl -> get_Expression(This,p) ) 

#define IMgaConstraint_put_Expression(This,p)	\
    ( (This)->lpVtbl -> put_Expression(This,p) ) 

#define IMgaConstraint_get_EventMask(This,p)	\
    ( (This)->lpVtbl -> get_EventMask(This,p) ) 

#define IMgaConstraint_put_EventMask(This,p)	\
    ( (This)->lpVtbl -> put_EventMask(This,p) ) 

#define IMgaConstraint_get_Depth(This,p)	\
    ( (This)->lpVtbl -> get_Depth(This,p) ) 

#define IMgaConstraint_put_Depth(This,p)	\
    ( (This)->lpVtbl -> put_Depth(This,p) ) 

#define IMgaConstraint_get_Priority(This,p)	\
    ( (This)->lpVtbl -> get_Priority(This,p) ) 

#define IMgaConstraint_put_Priority(This,p)	\
    ( (This)->lpVtbl -> put_Priority(This,p) ) 

#define IMgaConstraint_get_Type(This,p)	\
    ( (This)->lpVtbl -> get_Type(This,p) ) 

#define IMgaConstraint_put_Type(This,p)	\
    ( (This)->lpVtbl -> put_Type(This,p) ) 

#define IMgaConstraint_Remove(This)	\
    ( (This)->lpVtbl -> Remove(This) ) 

#define IMgaConstraint_SetDefinedForNamespace(This,pStr)	\
    ( (This)->lpVtbl -> SetDefinedForNamespace(This,pStr) ) 

#define IMgaConstraint_GetDefinedForNamespace(This,pStr)	\
    ( (This)->lpVtbl -> GetDefinedForNamespace(This,pStr) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IMgaConstraint_INTERFACE_DEFINED__ */


#ifndef __IMgaMetaProject_INTERFACE_DEFINED__
#define __IMgaMetaProject_INTERFACE_DEFINED__

/* interface IMgaMetaProject */
/* [unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_IMgaMetaProject;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("83BA3243-B758-11D3-ABAE-000000000000")
    IMgaMetaProject : public IDispatch
    {
    public:
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Open( 
            /* [in] */ BSTR connection) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Close( void) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Create( 
            /* [in] */ BSTR connection) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE BeginTransaction( void) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE CommitTransaction( void) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE AbortTransaction( void) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_GUID( 
            /* [retval][out] */ VARIANT *p) = 0;
        
        virtual /* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_GUID( 
            /* [in] */ VARIANT p) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Name( 
            /* [retval][out] */ BSTR *p) = 0;
        
        virtual /* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_Name( 
            /* [in] */ BSTR p) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_DisplayedName( 
            /* [retval][out] */ BSTR *p) = 0;
        
        virtual /* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_DisplayedName( 
            /* [in] */ BSTR p) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Version( 
            /* [retval][out] */ BSTR *p) = 0;
        
        virtual /* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_Version( 
            /* [in] */ BSTR p) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Author( 
            /* [retval][out] */ BSTR *p) = 0;
        
        virtual /* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_Author( 
            /* [in] */ BSTR p) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Comment( 
            /* [retval][out] */ BSTR *p) = 0;
        
        virtual /* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_Comment( 
            /* [in] */ BSTR p) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_CreatedAt( 
            /* [retval][out] */ BSTR *p) = 0;
        
        virtual /* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_CreatedAt( 
            /* [in] */ BSTR p) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_ModifiedAt( 
            /* [retval][out] */ BSTR *p) = 0;
        
        virtual /* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_ModifiedAt( 
            /* [in] */ BSTR p) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_RootFolder( 
            /* [retval][out] */ IMgaMetaFolder **p) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_FindObject( 
            /* [in] */ metaref_type mref,
            /* [retval][out] */ IMgaMetaBase **p) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE DoFindObjectDisp( 
            /* [in] */ metaref_type mref,
            /* [retval][out] */ IMgaMetaBase **p) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE SetNmspc( 
            /* [in] */ BSTR pStr) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetNmspc( 
            /* [retval][out] */ BSTR *pStr) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IMgaMetaProjectVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IMgaMetaProject * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IMgaMetaProject * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IMgaMetaProject * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IMgaMetaProject * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IMgaMetaProject * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IMgaMetaProject * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IMgaMetaProject * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Open )( 
            IMgaMetaProject * This,
            /* [in] */ BSTR connection);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Close )( 
            IMgaMetaProject * This);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Create )( 
            IMgaMetaProject * This,
            /* [in] */ BSTR connection);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *BeginTransaction )( 
            IMgaMetaProject * This);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *CommitTransaction )( 
            IMgaMetaProject * This);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *AbortTransaction )( 
            IMgaMetaProject * This);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_GUID )( 
            IMgaMetaProject * This,
            /* [retval][out] */ VARIANT *p);
        
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_GUID )( 
            IMgaMetaProject * This,
            /* [in] */ VARIANT p);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Name )( 
            IMgaMetaProject * This,
            /* [retval][out] */ BSTR *p);
        
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Name )( 
            IMgaMetaProject * This,
            /* [in] */ BSTR p);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_DisplayedName )( 
            IMgaMetaProject * This,
            /* [retval][out] */ BSTR *p);
        
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_DisplayedName )( 
            IMgaMetaProject * This,
            /* [in] */ BSTR p);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Version )( 
            IMgaMetaProject * This,
            /* [retval][out] */ BSTR *p);
        
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Version )( 
            IMgaMetaProject * This,
            /* [in] */ BSTR p);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Author )( 
            IMgaMetaProject * This,
            /* [retval][out] */ BSTR *p);
        
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Author )( 
            IMgaMetaProject * This,
            /* [in] */ BSTR p);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Comment )( 
            IMgaMetaProject * This,
            /* [retval][out] */ BSTR *p);
        
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Comment )( 
            IMgaMetaProject * This,
            /* [in] */ BSTR p);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_CreatedAt )( 
            IMgaMetaProject * This,
            /* [retval][out] */ BSTR *p);
        
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_CreatedAt )( 
            IMgaMetaProject * This,
            /* [in] */ BSTR p);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ModifiedAt )( 
            IMgaMetaProject * This,
            /* [retval][out] */ BSTR *p);
        
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ModifiedAt )( 
            IMgaMetaProject * This,
            /* [in] */ BSTR p);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_RootFolder )( 
            IMgaMetaProject * This,
            /* [retval][out] */ IMgaMetaFolder **p);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_FindObject )( 
            IMgaMetaProject * This,
            /* [in] */ metaref_type mref,
            /* [retval][out] */ IMgaMetaBase **p);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *DoFindObjectDisp )( 
            IMgaMetaProject * This,
            /* [in] */ metaref_type mref,
            /* [retval][out] */ IMgaMetaBase **p);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *SetNmspc )( 
            IMgaMetaProject * This,
            /* [in] */ BSTR pStr);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetNmspc )( 
            IMgaMetaProject * This,
            /* [retval][out] */ BSTR *pStr);
        
        END_INTERFACE
    } IMgaMetaProjectVtbl;

    interface IMgaMetaProject
    {
        CONST_VTBL struct IMgaMetaProjectVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IMgaMetaProject_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IMgaMetaProject_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IMgaMetaProject_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IMgaMetaProject_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IMgaMetaProject_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IMgaMetaProject_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IMgaMetaProject_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IMgaMetaProject_Open(This,connection)	\
    ( (This)->lpVtbl -> Open(This,connection) ) 

#define IMgaMetaProject_Close(This)	\
    ( (This)->lpVtbl -> Close(This) ) 

#define IMgaMetaProject_Create(This,connection)	\
    ( (This)->lpVtbl -> Create(This,connection) ) 

#define IMgaMetaProject_BeginTransaction(This)	\
    ( (This)->lpVtbl -> BeginTransaction(This) ) 

#define IMgaMetaProject_CommitTransaction(This)	\
    ( (This)->lpVtbl -> CommitTransaction(This) ) 

#define IMgaMetaProject_AbortTransaction(This)	\
    ( (This)->lpVtbl -> AbortTransaction(This) ) 

#define IMgaMetaProject_get_GUID(This,p)	\
    ( (This)->lpVtbl -> get_GUID(This,p) ) 

#define IMgaMetaProject_put_GUID(This,p)	\
    ( (This)->lpVtbl -> put_GUID(This,p) ) 

#define IMgaMetaProject_get_Name(This,p)	\
    ( (This)->lpVtbl -> get_Name(This,p) ) 

#define IMgaMetaProject_put_Name(This,p)	\
    ( (This)->lpVtbl -> put_Name(This,p) ) 

#define IMgaMetaProject_get_DisplayedName(This,p)	\
    ( (This)->lpVtbl -> get_DisplayedName(This,p) ) 

#define IMgaMetaProject_put_DisplayedName(This,p)	\
    ( (This)->lpVtbl -> put_DisplayedName(This,p) ) 

#define IMgaMetaProject_get_Version(This,p)	\
    ( (This)->lpVtbl -> get_Version(This,p) ) 

#define IMgaMetaProject_put_Version(This,p)	\
    ( (This)->lpVtbl -> put_Version(This,p) ) 

#define IMgaMetaProject_get_Author(This,p)	\
    ( (This)->lpVtbl -> get_Author(This,p) ) 

#define IMgaMetaProject_put_Author(This,p)	\
    ( (This)->lpVtbl -> put_Author(This,p) ) 

#define IMgaMetaProject_get_Comment(This,p)	\
    ( (This)->lpVtbl -> get_Comment(This,p) ) 

#define IMgaMetaProject_put_Comment(This,p)	\
    ( (This)->lpVtbl -> put_Comment(This,p) ) 

#define IMgaMetaProject_get_CreatedAt(This,p)	\
    ( (This)->lpVtbl -> get_CreatedAt(This,p) ) 

#define IMgaMetaProject_put_CreatedAt(This,p)	\
    ( (This)->lpVtbl -> put_CreatedAt(This,p) ) 

#define IMgaMetaProject_get_ModifiedAt(This,p)	\
    ( (This)->lpVtbl -> get_ModifiedAt(This,p) ) 

#define IMgaMetaProject_put_ModifiedAt(This,p)	\
    ( (This)->lpVtbl -> put_ModifiedAt(This,p) ) 

#define IMgaMetaProject_get_RootFolder(This,p)	\
    ( (This)->lpVtbl -> get_RootFolder(This,p) ) 

#define IMgaMetaProject_get_FindObject(This,mref,p)	\
    ( (This)->lpVtbl -> get_FindObject(This,mref,p) ) 

#define IMgaMetaProject_DoFindObjectDisp(This,mref,p)	\
    ( (This)->lpVtbl -> DoFindObjectDisp(This,mref,p) ) 

#define IMgaMetaProject_SetNmspc(This,pStr)	\
    ( (This)->lpVtbl -> SetNmspc(This,pStr) ) 

#define IMgaMetaProject_GetNmspc(This,pStr)	\
    ( (This)->lpVtbl -> GetNmspc(This,pStr) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IMgaMetaProject_INTERFACE_DEFINED__ */


#ifndef __IMgaMetaBase_INTERFACE_DEFINED__
#define __IMgaMetaBase_INTERFACE_DEFINED__

/* interface IMgaMetaBase */
/* [unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_IMgaMetaBase;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("DB1E0FB7-C9CB-11D3-9AD2-00AA00B6FE26")
    IMgaMetaBase : public IDispatch
    {
    public:
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_MetaRef( 
            /* [retval][out] */ metaref_type *p) = 0;
        
        virtual /* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_MetaRef( 
            /* [in] */ metaref_type p) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_MetaProject( 
            /* [retval][out] */ IMgaMetaProject **p) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Name( 
            /* [retval][out] */ BSTR *p) = 0;
        
        virtual /* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_Name( 
            /* [in] */ BSTR p) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_DisplayedName( 
            /* [retval][out] */ BSTR *p) = 0;
        
        virtual /* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_DisplayedName( 
            /* [in] */ BSTR p) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_ObjType( 
            /* [retval][out] */ objtype_enum *p) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Delete( void) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_RegistryNodes( 
            /* [retval][out] */ IMgaMetaRegNodes **p) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_RegistryNode( 
            /* [in] */ BSTR path,
            /* [retval][out] */ IMgaMetaRegNode **p) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetRegistryNodeDisp( 
            /* [in] */ BSTR path,
            /* [retval][out] */ IMgaMetaRegNode **p) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_RegistryValue( 
            /* [in] */ BSTR path,
            /* [retval][out] */ BSTR *p) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetRegistryValueDisp( 
            /* [in] */ BSTR path,
            /* [retval][out] */ BSTR *p) = 0;
        
        virtual /* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_RegistryValue( 
            /* [in] */ BSTR path,
            /* [in] */ BSTR p) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE SetRegistryValueDisp( 
            /* [in] */ BSTR path,
            /* [in] */ BSTR p) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Constraints( 
            /* [retval][out] */ IMgaConstraints **p) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE CreateConstraint( 
            /* [retval][out] */ IMgaConstraint **p) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IMgaMetaBaseVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IMgaMetaBase * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IMgaMetaBase * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IMgaMetaBase * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IMgaMetaBase * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IMgaMetaBase * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IMgaMetaBase * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IMgaMetaBase * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_MetaRef )( 
            IMgaMetaBase * This,
            /* [retval][out] */ metaref_type *p);
        
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_MetaRef )( 
            IMgaMetaBase * This,
            /* [in] */ metaref_type p);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_MetaProject )( 
            IMgaMetaBase * This,
            /* [retval][out] */ IMgaMetaProject **p);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Name )( 
            IMgaMetaBase * This,
            /* [retval][out] */ BSTR *p);
        
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Name )( 
            IMgaMetaBase * This,
            /* [in] */ BSTR p);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_DisplayedName )( 
            IMgaMetaBase * This,
            /* [retval][out] */ BSTR *p);
        
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_DisplayedName )( 
            IMgaMetaBase * This,
            /* [in] */ BSTR p);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ObjType )( 
            IMgaMetaBase * This,
            /* [retval][out] */ objtype_enum *p);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Delete )( 
            IMgaMetaBase * This);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_RegistryNodes )( 
            IMgaMetaBase * This,
            /* [retval][out] */ IMgaMetaRegNodes **p);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_RegistryNode )( 
            IMgaMetaBase * This,
            /* [in] */ BSTR path,
            /* [retval][out] */ IMgaMetaRegNode **p);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetRegistryNodeDisp )( 
            IMgaMetaBase * This,
            /* [in] */ BSTR path,
            /* [retval][out] */ IMgaMetaRegNode **p);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_RegistryValue )( 
            IMgaMetaBase * This,
            /* [in] */ BSTR path,
            /* [retval][out] */ BSTR *p);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetRegistryValueDisp )( 
            IMgaMetaBase * This,
            /* [in] */ BSTR path,
            /* [retval][out] */ BSTR *p);
        
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_RegistryValue )( 
            IMgaMetaBase * This,
            /* [in] */ BSTR path,
            /* [in] */ BSTR p);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *SetRegistryValueDisp )( 
            IMgaMetaBase * This,
            /* [in] */ BSTR path,
            /* [in] */ BSTR p);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Constraints )( 
            IMgaMetaBase * This,
            /* [retval][out] */ IMgaConstraints **p);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *CreateConstraint )( 
            IMgaMetaBase * This,
            /* [retval][out] */ IMgaConstraint **p);
        
        END_INTERFACE
    } IMgaMetaBaseVtbl;

    interface IMgaMetaBase
    {
        CONST_VTBL struct IMgaMetaBaseVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IMgaMetaBase_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IMgaMetaBase_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IMgaMetaBase_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IMgaMetaBase_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IMgaMetaBase_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IMgaMetaBase_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IMgaMetaBase_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IMgaMetaBase_get_MetaRef(This,p)	\
    ( (This)->lpVtbl -> get_MetaRef(This,p) ) 

#define IMgaMetaBase_put_MetaRef(This,p)	\
    ( (This)->lpVtbl -> put_MetaRef(This,p) ) 

#define IMgaMetaBase_get_MetaProject(This,p)	\
    ( (This)->lpVtbl -> get_MetaProject(This,p) ) 

#define IMgaMetaBase_get_Name(This,p)	\
    ( (This)->lpVtbl -> get_Name(This,p) ) 

#define IMgaMetaBase_put_Name(This,p)	\
    ( (This)->lpVtbl -> put_Name(This,p) ) 

#define IMgaMetaBase_get_DisplayedName(This,p)	\
    ( (This)->lpVtbl -> get_DisplayedName(This,p) ) 

#define IMgaMetaBase_put_DisplayedName(This,p)	\
    ( (This)->lpVtbl -> put_DisplayedName(This,p) ) 

#define IMgaMetaBase_get_ObjType(This,p)	\
    ( (This)->lpVtbl -> get_ObjType(This,p) ) 

#define IMgaMetaBase_Delete(This)	\
    ( (This)->lpVtbl -> Delete(This) ) 

#define IMgaMetaBase_get_RegistryNodes(This,p)	\
    ( (This)->lpVtbl -> get_RegistryNodes(This,p) ) 

#define IMgaMetaBase_get_RegistryNode(This,path,p)	\
    ( (This)->lpVtbl -> get_RegistryNode(This,path,p) ) 

#define IMgaMetaBase_GetRegistryNodeDisp(This,path,p)	\
    ( (This)->lpVtbl -> GetRegistryNodeDisp(This,path,p) ) 

#define IMgaMetaBase_get_RegistryValue(This,path,p)	\
    ( (This)->lpVtbl -> get_RegistryValue(This,path,p) ) 

#define IMgaMetaBase_GetRegistryValueDisp(This,path,p)	\
    ( (This)->lpVtbl -> GetRegistryValueDisp(This,path,p) ) 

#define IMgaMetaBase_put_RegistryValue(This,path,p)	\
    ( (This)->lpVtbl -> put_RegistryValue(This,path,p) ) 

#define IMgaMetaBase_SetRegistryValueDisp(This,path,p)	\
    ( (This)->lpVtbl -> SetRegistryValueDisp(This,path,p) ) 

#define IMgaMetaBase_get_Constraints(This,p)	\
    ( (This)->lpVtbl -> get_Constraints(This,p) ) 

#define IMgaMetaBase_CreateConstraint(This,p)	\
    ( (This)->lpVtbl -> CreateConstraint(This,p) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IMgaMetaBase_INTERFACE_DEFINED__ */


#ifndef __IMgaMetaFolder_INTERFACE_DEFINED__
#define __IMgaMetaFolder_INTERFACE_DEFINED__

/* interface IMgaMetaFolder */
/* [unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_IMgaMetaFolder;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("83BA3245-B758-11D3-ABAE-000000000000")
    IMgaMetaFolder : public IMgaMetaBase
    {
    public:
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_DefinedIn( 
            /* [retval][out] */ IMgaMetaFolder **p) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_DefinedFolders( 
            /* [retval][out] */ IMgaMetaFolders **p) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_DefinedFolderByName( 
            /* [in] */ BSTR name,
            /* [in] */ VARIANT_BOOL inscope,
            /* [retval][out] */ IMgaMetaFolder **p) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetDefinedFolderByNameDisp( 
            /* [in] */ BSTR name,
            /* [in] */ VARIANT_BOOL inscope,
            /* [retval][out] */ IMgaMetaFolder **p) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_DefinedFCOs( 
            /* [retval][out] */ IMgaMetaFCOs **p) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_DefinedFCOByName( 
            /* [in] */ BSTR name,
            /* [in] */ VARIANT_BOOL inscope,
            /* [retval][out] */ IMgaMetaFCO **p) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetDefinedFCOByNameDisp( 
            /* [in] */ BSTR name,
            /* [in] */ VARIANT_BOOL inscope,
            /* [retval][out] */ IMgaMetaFCO **p) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_DefinedAttributes( 
            /* [retval][out] */ IMgaMetaAttributes **p) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_DefinedAttributeByName( 
            /* [in] */ BSTR name,
            /* [in] */ VARIANT_BOOL inscope,
            /* [retval][out] */ IMgaMetaAttribute **p) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetDefinedAttributeByNameDisp( 
            /* [in] */ BSTR name,
            /* [in] */ VARIANT_BOOL inscope,
            /* [retval][out] */ IMgaMetaAttribute **p) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE DefineFolder( 
            /* [retval][out] */ IMgaMetaFolder **p) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE DefineModel( 
            /* [retval][out] */ IMgaMetaModel **p) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE DefineAtom( 
            /* [retval][out] */ IMgaMetaAtom **p) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE DefineReference( 
            /* [retval][out] */ IMgaMetaReference **p) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE DefineSet( 
            /* [retval][out] */ IMgaMetaSet **p) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE DefineConnection( 
            /* [retval][out] */ IMgaMetaConnection **p) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE DefineAttribute( 
            /* [retval][out] */ IMgaMetaAttribute **p) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_LegalChildFolders( 
            /* [retval][out] */ IMgaMetaFolders **p) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_LegalChildFolderByName( 
            /* [in] */ BSTR name,
            /* [retval][out] */ IMgaMetaFolder **p) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetLegalChildFolderByNameDisp( 
            /* [in] */ BSTR name,
            /* [retval][out] */ IMgaMetaFolder **p) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_LegalRootObjects( 
            /* [retval][out] */ IMgaMetaFCOs **p) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_LegalRootObjectByName( 
            /* [in] */ BSTR name,
            /* [retval][out] */ IMgaMetaFCO **p) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetLegalRootObjectByNameDisp( 
            /* [in] */ BSTR name,
            /* [retval][out] */ IMgaMetaFCO **p) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_UsedInFolders( 
            /* [retval][out] */ IMgaMetaFolders **p) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE AddLegalChildFolder( 
            /* [in] */ IMgaMetaFolder *p) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE RemoveLegalChildFolder( 
            /* [in] */ IMgaMetaFolder *p) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE AddLegalRootObject( 
            /* [in] */ IMgaMetaFCO *p) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE RemoveLegalRootObject( 
            /* [in] */ IMgaMetaFCO *p) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IMgaMetaFolderVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IMgaMetaFolder * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IMgaMetaFolder * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IMgaMetaFolder * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IMgaMetaFolder * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IMgaMetaFolder * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IMgaMetaFolder * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IMgaMetaFolder * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_MetaRef )( 
            IMgaMetaFolder * This,
            /* [retval][out] */ metaref_type *p);
        
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_MetaRef )( 
            IMgaMetaFolder * This,
            /* [in] */ metaref_type p);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_MetaProject )( 
            IMgaMetaFolder * This,
            /* [retval][out] */ IMgaMetaProject **p);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Name )( 
            IMgaMetaFolder * This,
            /* [retval][out] */ BSTR *p);
        
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Name )( 
            IMgaMetaFolder * This,
            /* [in] */ BSTR p);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_DisplayedName )( 
            IMgaMetaFolder * This,
            /* [retval][out] */ BSTR *p);
        
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_DisplayedName )( 
            IMgaMetaFolder * This,
            /* [in] */ BSTR p);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ObjType )( 
            IMgaMetaFolder * This,
            /* [retval][out] */ objtype_enum *p);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Delete )( 
            IMgaMetaFolder * This);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_RegistryNodes )( 
            IMgaMetaFolder * This,
            /* [retval][out] */ IMgaMetaRegNodes **p);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_RegistryNode )( 
            IMgaMetaFolder * This,
            /* [in] */ BSTR path,
            /* [retval][out] */ IMgaMetaRegNode **p);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetRegistryNodeDisp )( 
            IMgaMetaFolder * This,
            /* [in] */ BSTR path,
            /* [retval][out] */ IMgaMetaRegNode **p);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_RegistryValue )( 
            IMgaMetaFolder * This,
            /* [in] */ BSTR path,
            /* [retval][out] */ BSTR *p);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetRegistryValueDisp )( 
            IMgaMetaFolder * This,
            /* [in] */ BSTR path,
            /* [retval][out] */ BSTR *p);
        
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_RegistryValue )( 
            IMgaMetaFolder * This,
            /* [in] */ BSTR path,
            /* [in] */ BSTR p);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *SetRegistryValueDisp )( 
            IMgaMetaFolder * This,
            /* [in] */ BSTR path,
            /* [in] */ BSTR p);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Constraints )( 
            IMgaMetaFolder * This,
            /* [retval][out] */ IMgaConstraints **p);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *CreateConstraint )( 
            IMgaMetaFolder * This,
            /* [retval][out] */ IMgaConstraint **p);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_DefinedIn )( 
            IMgaMetaFolder * This,
            /* [retval][out] */ IMgaMetaFolder **p);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_DefinedFolders )( 
            IMgaMetaFolder * This,
            /* [retval][out] */ IMgaMetaFolders **p);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_DefinedFolderByName )( 
            IMgaMetaFolder * This,
            /* [in] */ BSTR name,
            /* [in] */ VARIANT_BOOL inscope,
            /* [retval][out] */ IMgaMetaFolder **p);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetDefinedFolderByNameDisp )( 
            IMgaMetaFolder * This,
            /* [in] */ BSTR name,
            /* [in] */ VARIANT_BOOL inscope,
            /* [retval][out] */ IMgaMetaFolder **p);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_DefinedFCOs )( 
            IMgaMetaFolder * This,
            /* [retval][out] */ IMgaMetaFCOs **p);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_DefinedFCOByName )( 
            IMgaMetaFolder * This,
            /* [in] */ BSTR name,
            /* [in] */ VARIANT_BOOL inscope,
            /* [retval][out] */ IMgaMetaFCO **p);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetDefinedFCOByNameDisp )( 
            IMgaMetaFolder * This,
            /* [in] */ BSTR name,
            /* [in] */ VARIANT_BOOL inscope,
            /* [retval][out] */ IMgaMetaFCO **p);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_DefinedAttributes )( 
            IMgaMetaFolder * This,
            /* [retval][out] */ IMgaMetaAttributes **p);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_DefinedAttributeByName )( 
            IMgaMetaFolder * This,
            /* [in] */ BSTR name,
            /* [in] */ VARIANT_BOOL inscope,
            /* [retval][out] */ IMgaMetaAttribute **p);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetDefinedAttributeByNameDisp )( 
            IMgaMetaFolder * This,
            /* [in] */ BSTR name,
            /* [in] */ VARIANT_BOOL inscope,
            /* [retval][out] */ IMgaMetaAttribute **p);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *DefineFolder )( 
            IMgaMetaFolder * This,
            /* [retval][out] */ IMgaMetaFolder **p);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *DefineModel )( 
            IMgaMetaFolder * This,
            /* [retval][out] */ IMgaMetaModel **p);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *DefineAtom )( 
            IMgaMetaFolder * This,
            /* [retval][out] */ IMgaMetaAtom **p);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *DefineReference )( 
            IMgaMetaFolder * This,
            /* [retval][out] */ IMgaMetaReference **p);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *DefineSet )( 
            IMgaMetaFolder * This,
            /* [retval][out] */ IMgaMetaSet **p);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *DefineConnection )( 
            IMgaMetaFolder * This,
            /* [retval][out] */ IMgaMetaConnection **p);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *DefineAttribute )( 
            IMgaMetaFolder * This,
            /* [retval][out] */ IMgaMetaAttribute **p);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_LegalChildFolders )( 
            IMgaMetaFolder * This,
            /* [retval][out] */ IMgaMetaFolders **p);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_LegalChildFolderByName )( 
            IMgaMetaFolder * This,
            /* [in] */ BSTR name,
            /* [retval][out] */ IMgaMetaFolder **p);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetLegalChildFolderByNameDisp )( 
            IMgaMetaFolder * This,
            /* [in] */ BSTR name,
            /* [retval][out] */ IMgaMetaFolder **p);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_LegalRootObjects )( 
            IMgaMetaFolder * This,
            /* [retval][out] */ IMgaMetaFCOs **p);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_LegalRootObjectByName )( 
            IMgaMetaFolder * This,
            /* [in] */ BSTR name,
            /* [retval][out] */ IMgaMetaFCO **p);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetLegalRootObjectByNameDisp )( 
            IMgaMetaFolder * This,
            /* [in] */ BSTR name,
            /* [retval][out] */ IMgaMetaFCO **p);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_UsedInFolders )( 
            IMgaMetaFolder * This,
            /* [retval][out] */ IMgaMetaFolders **p);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *AddLegalChildFolder )( 
            IMgaMetaFolder * This,
            /* [in] */ IMgaMetaFolder *p);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *RemoveLegalChildFolder )( 
            IMgaMetaFolder * This,
            /* [in] */ IMgaMetaFolder *p);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *AddLegalRootObject )( 
            IMgaMetaFolder * This,
            /* [in] */ IMgaMetaFCO *p);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *RemoveLegalRootObject )( 
            IMgaMetaFolder * This,
            /* [in] */ IMgaMetaFCO *p);
        
        END_INTERFACE
    } IMgaMetaFolderVtbl;

    interface IMgaMetaFolder
    {
        CONST_VTBL struct IMgaMetaFolderVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IMgaMetaFolder_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IMgaMetaFolder_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IMgaMetaFolder_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IMgaMetaFolder_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IMgaMetaFolder_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IMgaMetaFolder_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IMgaMetaFolder_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IMgaMetaFolder_get_MetaRef(This,p)	\
    ( (This)->lpVtbl -> get_MetaRef(This,p) ) 

#define IMgaMetaFolder_put_MetaRef(This,p)	\
    ( (This)->lpVtbl -> put_MetaRef(This,p) ) 

#define IMgaMetaFolder_get_MetaProject(This,p)	\
    ( (This)->lpVtbl -> get_MetaProject(This,p) ) 

#define IMgaMetaFolder_get_Name(This,p)	\
    ( (This)->lpVtbl -> get_Name(This,p) ) 

#define IMgaMetaFolder_put_Name(This,p)	\
    ( (This)->lpVtbl -> put_Name(This,p) ) 

#define IMgaMetaFolder_get_DisplayedName(This,p)	\
    ( (This)->lpVtbl -> get_DisplayedName(This,p) ) 

#define IMgaMetaFolder_put_DisplayedName(This,p)	\
    ( (This)->lpVtbl -> put_DisplayedName(This,p) ) 

#define IMgaMetaFolder_get_ObjType(This,p)	\
    ( (This)->lpVtbl -> get_ObjType(This,p) ) 

#define IMgaMetaFolder_Delete(This)	\
    ( (This)->lpVtbl -> Delete(This) ) 

#define IMgaMetaFolder_get_RegistryNodes(This,p)	\
    ( (This)->lpVtbl -> get_RegistryNodes(This,p) ) 

#define IMgaMetaFolder_get_RegistryNode(This,path,p)	\
    ( (This)->lpVtbl -> get_RegistryNode(This,path,p) ) 

#define IMgaMetaFolder_GetRegistryNodeDisp(This,path,p)	\
    ( (This)->lpVtbl -> GetRegistryNodeDisp(This,path,p) ) 

#define IMgaMetaFolder_get_RegistryValue(This,path,p)	\
    ( (This)->lpVtbl -> get_RegistryValue(This,path,p) ) 

#define IMgaMetaFolder_GetRegistryValueDisp(This,path,p)	\
    ( (This)->lpVtbl -> GetRegistryValueDisp(This,path,p) ) 

#define IMgaMetaFolder_put_RegistryValue(This,path,p)	\
    ( (This)->lpVtbl -> put_RegistryValue(This,path,p) ) 

#define IMgaMetaFolder_SetRegistryValueDisp(This,path,p)	\
    ( (This)->lpVtbl -> SetRegistryValueDisp(This,path,p) ) 

#define IMgaMetaFolder_get_Constraints(This,p)	\
    ( (This)->lpVtbl -> get_Constraints(This,p) ) 

#define IMgaMetaFolder_CreateConstraint(This,p)	\
    ( (This)->lpVtbl -> CreateConstraint(This,p) ) 


#define IMgaMetaFolder_get_DefinedIn(This,p)	\
    ( (This)->lpVtbl -> get_DefinedIn(This,p) ) 

#define IMgaMetaFolder_get_DefinedFolders(This,p)	\
    ( (This)->lpVtbl -> get_DefinedFolders(This,p) ) 

#define IMgaMetaFolder_get_DefinedFolderByName(This,name,inscope,p)	\
    ( (This)->lpVtbl -> get_DefinedFolderByName(This,name,inscope,p) ) 

#define IMgaMetaFolder_GetDefinedFolderByNameDisp(This,name,inscope,p)	\
    ( (This)->lpVtbl -> GetDefinedFolderByNameDisp(This,name,inscope,p) ) 

#define IMgaMetaFolder_get_DefinedFCOs(This,p)	\
    ( (This)->lpVtbl -> get_DefinedFCOs(This,p) ) 

#define IMgaMetaFolder_get_DefinedFCOByName(This,name,inscope,p)	\
    ( (This)->lpVtbl -> get_DefinedFCOByName(This,name,inscope,p) ) 

#define IMgaMetaFolder_GetDefinedFCOByNameDisp(This,name,inscope,p)	\
    ( (This)->lpVtbl -> GetDefinedFCOByNameDisp(This,name,inscope,p) ) 

#define IMgaMetaFolder_get_DefinedAttributes(This,p)	\
    ( (This)->lpVtbl -> get_DefinedAttributes(This,p) ) 

#define IMgaMetaFolder_get_DefinedAttributeByName(This,name,inscope,p)	\
    ( (This)->lpVtbl -> get_DefinedAttributeByName(This,name,inscope,p) ) 

#define IMgaMetaFolder_GetDefinedAttributeByNameDisp(This,name,inscope,p)	\
    ( (This)->lpVtbl -> GetDefinedAttributeByNameDisp(This,name,inscope,p) ) 

#define IMgaMetaFolder_DefineFolder(This,p)	\
    ( (This)->lpVtbl -> DefineFolder(This,p) ) 

#define IMgaMetaFolder_DefineModel(This,p)	\
    ( (This)->lpVtbl -> DefineModel(This,p) ) 

#define IMgaMetaFolder_DefineAtom(This,p)	\
    ( (This)->lpVtbl -> DefineAtom(This,p) ) 

#define IMgaMetaFolder_DefineReference(This,p)	\
    ( (This)->lpVtbl -> DefineReference(This,p) ) 

#define IMgaMetaFolder_DefineSet(This,p)	\
    ( (This)->lpVtbl -> DefineSet(This,p) ) 

#define IMgaMetaFolder_DefineConnection(This,p)	\
    ( (This)->lpVtbl -> DefineConnection(This,p) ) 

#define IMgaMetaFolder_DefineAttribute(This,p)	\
    ( (This)->lpVtbl -> DefineAttribute(This,p) ) 

#define IMgaMetaFolder_get_LegalChildFolders(This,p)	\
    ( (This)->lpVtbl -> get_LegalChildFolders(This,p) ) 

#define IMgaMetaFolder_get_LegalChildFolderByName(This,name,p)	\
    ( (This)->lpVtbl -> get_LegalChildFolderByName(This,name,p) ) 

#define IMgaMetaFolder_GetLegalChildFolderByNameDisp(This,name,p)	\
    ( (This)->lpVtbl -> GetLegalChildFolderByNameDisp(This,name,p) ) 

#define IMgaMetaFolder_get_LegalRootObjects(This,p)	\
    ( (This)->lpVtbl -> get_LegalRootObjects(This,p) ) 

#define IMgaMetaFolder_get_LegalRootObjectByName(This,name,p)	\
    ( (This)->lpVtbl -> get_LegalRootObjectByName(This,name,p) ) 

#define IMgaMetaFolder_GetLegalRootObjectByNameDisp(This,name,p)	\
    ( (This)->lpVtbl -> GetLegalRootObjectByNameDisp(This,name,p) ) 

#define IMgaMetaFolder_get_UsedInFolders(This,p)	\
    ( (This)->lpVtbl -> get_UsedInFolders(This,p) ) 

#define IMgaMetaFolder_AddLegalChildFolder(This,p)	\
    ( (This)->lpVtbl -> AddLegalChildFolder(This,p) ) 

#define IMgaMetaFolder_RemoveLegalChildFolder(This,p)	\
    ( (This)->lpVtbl -> RemoveLegalChildFolder(This,p) ) 

#define IMgaMetaFolder_AddLegalRootObject(This,p)	\
    ( (This)->lpVtbl -> AddLegalRootObject(This,p) ) 

#define IMgaMetaFolder_RemoveLegalRootObject(This,p)	\
    ( (This)->lpVtbl -> RemoveLegalRootObject(This,p) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IMgaMetaFolder_INTERFACE_DEFINED__ */


#ifndef __IMgaMetaFCO_INTERFACE_DEFINED__
#define __IMgaMetaFCO_INTERFACE_DEFINED__

/* interface IMgaMetaFCO */
/* [unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_IMgaMetaFCO;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("83BA3247-B758-11D3-ABAE-000000000000")
    IMgaMetaFCO : public IMgaMetaBase
    {
    public:
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_DefinedIn( 
            /* [retval][out] */ IMgaMetaBase **p) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_DefinedAttributes( 
            /* [retval][out] */ IMgaMetaAttributes **p) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_DefinedAttributeByName( 
            /* [in] */ BSTR name,
            /* [in] */ VARIANT_BOOL inscope,
            /* [retval][out] */ IMgaMetaAttribute **p) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetDefinedAttributeByNameDisp( 
            /* [in] */ BSTR name,
            /* [in] */ VARIANT_BOOL inscope,
            /* [retval][out] */ IMgaMetaAttribute **p) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE DefineAttribute( 
            /* [retval][out] */ IMgaMetaAttribute **p) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_UsedInRoles( 
            /* [retval][out] */ IMgaMetaRoles **p) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_UsedInFolders( 
            /* [retval][out] */ IMgaMetaFolders **p) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Attributes( 
            /* [retval][out] */ IMgaMetaAttributes **p) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_AttributeByName( 
            /* [in] */ BSTR name,
            /* [retval][out] */ IMgaMetaAttribute **p) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetAttributeByNameDisp( 
            /* [in] */ BSTR name,
            /* [retval][out] */ IMgaMetaAttribute **p) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_AttributeByRef( 
            /* [in] */ metaref_type mref,
            /* [retval][out] */ IMgaMetaAttribute **p) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetAttributeByRefDisp( 
            /* [in] */ metaref_type mref,
            /* [retval][out] */ IMgaMetaAttribute **p) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_AliasingEnabled( 
            /* [retval][out] */ VARIANT_BOOL *pVal) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE AddAttribute( 
            /* [in] */ IMgaMetaAttribute *p) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE RemoveAttribute( 
            /* [in] */ IMgaMetaAttribute *p) = 0;
        
        virtual /* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_AliasingEnabled( 
            /* [in] */ VARIANT_BOOL newVal) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IMgaMetaFCOVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IMgaMetaFCO * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IMgaMetaFCO * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IMgaMetaFCO * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IMgaMetaFCO * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IMgaMetaFCO * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IMgaMetaFCO * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IMgaMetaFCO * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_MetaRef )( 
            IMgaMetaFCO * This,
            /* [retval][out] */ metaref_type *p);
        
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_MetaRef )( 
            IMgaMetaFCO * This,
            /* [in] */ metaref_type p);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_MetaProject )( 
            IMgaMetaFCO * This,
            /* [retval][out] */ IMgaMetaProject **p);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Name )( 
            IMgaMetaFCO * This,
            /* [retval][out] */ BSTR *p);
        
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Name )( 
            IMgaMetaFCO * This,
            /* [in] */ BSTR p);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_DisplayedName )( 
            IMgaMetaFCO * This,
            /* [retval][out] */ BSTR *p);
        
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_DisplayedName )( 
            IMgaMetaFCO * This,
            /* [in] */ BSTR p);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ObjType )( 
            IMgaMetaFCO * This,
            /* [retval][out] */ objtype_enum *p);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Delete )( 
            IMgaMetaFCO * This);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_RegistryNodes )( 
            IMgaMetaFCO * This,
            /* [retval][out] */ IMgaMetaRegNodes **p);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_RegistryNode )( 
            IMgaMetaFCO * This,
            /* [in] */ BSTR path,
            /* [retval][out] */ IMgaMetaRegNode **p);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetRegistryNodeDisp )( 
            IMgaMetaFCO * This,
            /* [in] */ BSTR path,
            /* [retval][out] */ IMgaMetaRegNode **p);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_RegistryValue )( 
            IMgaMetaFCO * This,
            /* [in] */ BSTR path,
            /* [retval][out] */ BSTR *p);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetRegistryValueDisp )( 
            IMgaMetaFCO * This,
            /* [in] */ BSTR path,
            /* [retval][out] */ BSTR *p);
        
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_RegistryValue )( 
            IMgaMetaFCO * This,
            /* [in] */ BSTR path,
            /* [in] */ BSTR p);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *SetRegistryValueDisp )( 
            IMgaMetaFCO * This,
            /* [in] */ BSTR path,
            /* [in] */ BSTR p);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Constraints )( 
            IMgaMetaFCO * This,
            /* [retval][out] */ IMgaConstraints **p);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *CreateConstraint )( 
            IMgaMetaFCO * This,
            /* [retval][out] */ IMgaConstraint **p);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_DefinedIn )( 
            IMgaMetaFCO * This,
            /* [retval][out] */ IMgaMetaBase **p);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_DefinedAttributes )( 
            IMgaMetaFCO * This,
            /* [retval][out] */ IMgaMetaAttributes **p);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_DefinedAttributeByName )( 
            IMgaMetaFCO * This,
            /* [in] */ BSTR name,
            /* [in] */ VARIANT_BOOL inscope,
            /* [retval][out] */ IMgaMetaAttribute **p);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetDefinedAttributeByNameDisp )( 
            IMgaMetaFCO * This,
            /* [in] */ BSTR name,
            /* [in] */ VARIANT_BOOL inscope,
            /* [retval][out] */ IMgaMetaAttribute **p);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *DefineAttribute )( 
            IMgaMetaFCO * This,
            /* [retval][out] */ IMgaMetaAttribute **p);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_UsedInRoles )( 
            IMgaMetaFCO * This,
            /* [retval][out] */ IMgaMetaRoles **p);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_UsedInFolders )( 
            IMgaMetaFCO * This,
            /* [retval][out] */ IMgaMetaFolders **p);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Attributes )( 
            IMgaMetaFCO * This,
            /* [retval][out] */ IMgaMetaAttributes **p);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_AttributeByName )( 
            IMgaMetaFCO * This,
            /* [in] */ BSTR name,
            /* [retval][out] */ IMgaMetaAttribute **p);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetAttributeByNameDisp )( 
            IMgaMetaFCO * This,
            /* [in] */ BSTR name,
            /* [retval][out] */ IMgaMetaAttribute **p);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_AttributeByRef )( 
            IMgaMetaFCO * This,
            /* [in] */ metaref_type mref,
            /* [retval][out] */ IMgaMetaAttribute **p);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetAttributeByRefDisp )( 
            IMgaMetaFCO * This,
            /* [in] */ metaref_type mref,
            /* [retval][out] */ IMgaMetaAttribute **p);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_AliasingEnabled )( 
            IMgaMetaFCO * This,
            /* [retval][out] */ VARIANT_BOOL *pVal);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *AddAttribute )( 
            IMgaMetaFCO * This,
            /* [in] */ IMgaMetaAttribute *p);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *RemoveAttribute )( 
            IMgaMetaFCO * This,
            /* [in] */ IMgaMetaAttribute *p);
        
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_AliasingEnabled )( 
            IMgaMetaFCO * This,
            /* [in] */ VARIANT_BOOL newVal);
        
        END_INTERFACE
    } IMgaMetaFCOVtbl;

    interface IMgaMetaFCO
    {
        CONST_VTBL struct IMgaMetaFCOVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IMgaMetaFCO_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IMgaMetaFCO_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IMgaMetaFCO_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IMgaMetaFCO_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IMgaMetaFCO_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IMgaMetaFCO_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IMgaMetaFCO_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IMgaMetaFCO_get_MetaRef(This,p)	\
    ( (This)->lpVtbl -> get_MetaRef(This,p) ) 

#define IMgaMetaFCO_put_MetaRef(This,p)	\
    ( (This)->lpVtbl -> put_MetaRef(This,p) ) 

#define IMgaMetaFCO_get_MetaProject(This,p)	\
    ( (This)->lpVtbl -> get_MetaProject(This,p) ) 

#define IMgaMetaFCO_get_Name(This,p)	\
    ( (This)->lpVtbl -> get_Name(This,p) ) 

#define IMgaMetaFCO_put_Name(This,p)	\
    ( (This)->lpVtbl -> put_Name(This,p) ) 

#define IMgaMetaFCO_get_DisplayedName(This,p)	\
    ( (This)->lpVtbl -> get_DisplayedName(This,p) ) 

#define IMgaMetaFCO_put_DisplayedName(This,p)	\
    ( (This)->lpVtbl -> put_DisplayedName(This,p) ) 

#define IMgaMetaFCO_get_ObjType(This,p)	\
    ( (This)->lpVtbl -> get_ObjType(This,p) ) 

#define IMgaMetaFCO_Delete(This)	\
    ( (This)->lpVtbl -> Delete(This) ) 

#define IMgaMetaFCO_get_RegistryNodes(This,p)	\
    ( (This)->lpVtbl -> get_RegistryNodes(This,p) ) 

#define IMgaMetaFCO_get_RegistryNode(This,path,p)	\
    ( (This)->lpVtbl -> get_RegistryNode(This,path,p) ) 

#define IMgaMetaFCO_GetRegistryNodeDisp(This,path,p)	\
    ( (This)->lpVtbl -> GetRegistryNodeDisp(This,path,p) ) 

#define IMgaMetaFCO_get_RegistryValue(This,path,p)	\
    ( (This)->lpVtbl -> get_RegistryValue(This,path,p) ) 

#define IMgaMetaFCO_GetRegistryValueDisp(This,path,p)	\
    ( (This)->lpVtbl -> GetRegistryValueDisp(This,path,p) ) 

#define IMgaMetaFCO_put_RegistryValue(This,path,p)	\
    ( (This)->lpVtbl -> put_RegistryValue(This,path,p) ) 

#define IMgaMetaFCO_SetRegistryValueDisp(This,path,p)	\
    ( (This)->lpVtbl -> SetRegistryValueDisp(This,path,p) ) 

#define IMgaMetaFCO_get_Constraints(This,p)	\
    ( (This)->lpVtbl -> get_Constraints(This,p) ) 

#define IMgaMetaFCO_CreateConstraint(This,p)	\
    ( (This)->lpVtbl -> CreateConstraint(This,p) ) 


#define IMgaMetaFCO_get_DefinedIn(This,p)	\
    ( (This)->lpVtbl -> get_DefinedIn(This,p) ) 

#define IMgaMetaFCO_get_DefinedAttributes(This,p)	\
    ( (This)->lpVtbl -> get_DefinedAttributes(This,p) ) 

#define IMgaMetaFCO_get_DefinedAttributeByName(This,name,inscope,p)	\
    ( (This)->lpVtbl -> get_DefinedAttributeByName(This,name,inscope,p) ) 

#define IMgaMetaFCO_GetDefinedAttributeByNameDisp(This,name,inscope,p)	\
    ( (This)->lpVtbl -> GetDefinedAttributeByNameDisp(This,name,inscope,p) ) 

#define IMgaMetaFCO_DefineAttribute(This,p)	\
    ( (This)->lpVtbl -> DefineAttribute(This,p) ) 

#define IMgaMetaFCO_get_UsedInRoles(This,p)	\
    ( (This)->lpVtbl -> get_UsedInRoles(This,p) ) 

#define IMgaMetaFCO_get_UsedInFolders(This,p)	\
    ( (This)->lpVtbl -> get_UsedInFolders(This,p) ) 

#define IMgaMetaFCO_get_Attributes(This,p)	\
    ( (This)->lpVtbl -> get_Attributes(This,p) ) 

#define IMgaMetaFCO_get_AttributeByName(This,name,p)	\
    ( (This)->lpVtbl -> get_AttributeByName(This,name,p) ) 

#define IMgaMetaFCO_GetAttributeByNameDisp(This,name,p)	\
    ( (This)->lpVtbl -> GetAttributeByNameDisp(This,name,p) ) 

#define IMgaMetaFCO_get_AttributeByRef(This,mref,p)	\
    ( (This)->lpVtbl -> get_AttributeByRef(This,mref,p) ) 

#define IMgaMetaFCO_GetAttributeByRefDisp(This,mref,p)	\
    ( (This)->lpVtbl -> GetAttributeByRefDisp(This,mref,p) ) 

#define IMgaMetaFCO_get_AliasingEnabled(This,pVal)	\
    ( (This)->lpVtbl -> get_AliasingEnabled(This,pVal) ) 

#define IMgaMetaFCO_AddAttribute(This,p)	\
    ( (This)->lpVtbl -> AddAttribute(This,p) ) 

#define IMgaMetaFCO_RemoveAttribute(This,p)	\
    ( (This)->lpVtbl -> RemoveAttribute(This,p) ) 

#define IMgaMetaFCO_put_AliasingEnabled(This,newVal)	\
    ( (This)->lpVtbl -> put_AliasingEnabled(This,newVal) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IMgaMetaFCO_INTERFACE_DEFINED__ */


#ifndef __IMgaMetaModel_INTERFACE_DEFINED__
#define __IMgaMetaModel_INTERFACE_DEFINED__

/* interface IMgaMetaModel */
/* [unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_IMgaMetaModel;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("83BA3249-B758-11D3-ABAE-000000000000")
    IMgaMetaModel : public IMgaMetaFCO
    {
    public:
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_DefinedFCOs( 
            /* [retval][out] */ IMgaMetaFCOs **p) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_DefinedFCOByName( 
            /* [in] */ BSTR name,
            /* [in] */ VARIANT_BOOL inscope,
            /* [retval][out] */ IMgaMetaFCO **p) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetDefinedFCOByNameDisp( 
            /* [in] */ BSTR name,
            /* [in] */ VARIANT_BOOL inscope,
            /* [retval][out] */ IMgaMetaFCO **p) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE DefineModel( 
            /* [retval][out] */ IMgaMetaModel **p) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE DefineAtom( 
            /* [retval][out] */ IMgaMetaAtom **p) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE DefineReference( 
            /* [retval][out] */ IMgaMetaReference **p) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE DefineSet( 
            /* [retval][out] */ IMgaMetaSet **p) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE DefineConnection( 
            /* [retval][out] */ IMgaMetaConnection **p) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Roles( 
            /* [retval][out] */ IMgaMetaRoles **p) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_RoleByName( 
            /* [in] */ BSTR name,
            /* [retval][out] */ IMgaMetaRole **p) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetRoleByNameDisp( 
            /* [in] */ BSTR name,
            /* [retval][out] */ IMgaMetaRole **p) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Aspects( 
            /* [retval][out] */ IMgaMetaAspects **p) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_AspectByName( 
            /* [in] */ BSTR name,
            /* [retval][out] */ IMgaMetaAspect **p) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetAspectByNameDisp( 
            /* [in] */ BSTR name,
            /* [retval][out] */ IMgaMetaAspect **p) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE CreateRole( 
            /* [in] */ IMgaMetaFCO *Kind,
            /* [retval][out] */ IMgaMetaRole **p) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE CreateAspect( 
            /* [retval][out] */ IMgaMetaAspect **p) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE LegalConnectionRoles( 
            /* [in] */ BSTR paths,
            /* [retval][out] */ IMgaMetaRoles **p) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE LegalReferenceRoles( 
            /* [in] */ BSTR path,
            /* [retval][out] */ IMgaMetaRoles **p) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE LegalSetRoles( 
            /* [in] */ BSTR path,
            /* [retval][out] */ IMgaMetaRoles **p) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE LegalRoles( 
            /* [in] */ IMgaMetaFCO *k,
            /* [retval][out] */ IMgaMetaRoles **p) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IMgaMetaModelVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IMgaMetaModel * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IMgaMetaModel * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IMgaMetaModel * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IMgaMetaModel * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IMgaMetaModel * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IMgaMetaModel * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IMgaMetaModel * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_MetaRef )( 
            IMgaMetaModel * This,
            /* [retval][out] */ metaref_type *p);
        
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_MetaRef )( 
            IMgaMetaModel * This,
            /* [in] */ metaref_type p);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_MetaProject )( 
            IMgaMetaModel * This,
            /* [retval][out] */ IMgaMetaProject **p);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Name )( 
            IMgaMetaModel * This,
            /* [retval][out] */ BSTR *p);
        
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Name )( 
            IMgaMetaModel * This,
            /* [in] */ BSTR p);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_DisplayedName )( 
            IMgaMetaModel * This,
            /* [retval][out] */ BSTR *p);
        
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_DisplayedName )( 
            IMgaMetaModel * This,
            /* [in] */ BSTR p);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ObjType )( 
            IMgaMetaModel * This,
            /* [retval][out] */ objtype_enum *p);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Delete )( 
            IMgaMetaModel * This);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_RegistryNodes )( 
            IMgaMetaModel * This,
            /* [retval][out] */ IMgaMetaRegNodes **p);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_RegistryNode )( 
            IMgaMetaModel * This,
            /* [in] */ BSTR path,
            /* [retval][out] */ IMgaMetaRegNode **p);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetRegistryNodeDisp )( 
            IMgaMetaModel * This,
            /* [in] */ BSTR path,
            /* [retval][out] */ IMgaMetaRegNode **p);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_RegistryValue )( 
            IMgaMetaModel * This,
            /* [in] */ BSTR path,
            /* [retval][out] */ BSTR *p);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetRegistryValueDisp )( 
            IMgaMetaModel * This,
            /* [in] */ BSTR path,
            /* [retval][out] */ BSTR *p);
        
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_RegistryValue )( 
            IMgaMetaModel * This,
            /* [in] */ BSTR path,
            /* [in] */ BSTR p);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *SetRegistryValueDisp )( 
            IMgaMetaModel * This,
            /* [in] */ BSTR path,
            /* [in] */ BSTR p);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Constraints )( 
            IMgaMetaModel * This,
            /* [retval][out] */ IMgaConstraints **p);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *CreateConstraint )( 
            IMgaMetaModel * This,
            /* [retval][out] */ IMgaConstraint **p);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_DefinedIn )( 
            IMgaMetaModel * This,
            /* [retval][out] */ IMgaMetaBase **p);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_DefinedAttributes )( 
            IMgaMetaModel * This,
            /* [retval][out] */ IMgaMetaAttributes **p);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_DefinedAttributeByName )( 
            IMgaMetaModel * This,
            /* [in] */ BSTR name,
            /* [in] */ VARIANT_BOOL inscope,
            /* [retval][out] */ IMgaMetaAttribute **p);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetDefinedAttributeByNameDisp )( 
            IMgaMetaModel * This,
            /* [in] */ BSTR name,
            /* [in] */ VARIANT_BOOL inscope,
            /* [retval][out] */ IMgaMetaAttribute **p);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *DefineAttribute )( 
            IMgaMetaModel * This,
            /* [retval][out] */ IMgaMetaAttribute **p);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_UsedInRoles )( 
            IMgaMetaModel * This,
            /* [retval][out] */ IMgaMetaRoles **p);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_UsedInFolders )( 
            IMgaMetaModel * This,
            /* [retval][out] */ IMgaMetaFolders **p);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Attributes )( 
            IMgaMetaModel * This,
            /* [retval][out] */ IMgaMetaAttributes **p);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_AttributeByName )( 
            IMgaMetaModel * This,
            /* [in] */ BSTR name,
            /* [retval][out] */ IMgaMetaAttribute **p);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetAttributeByNameDisp )( 
            IMgaMetaModel * This,
            /* [in] */ BSTR name,
            /* [retval][out] */ IMgaMetaAttribute **p);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_AttributeByRef )( 
            IMgaMetaModel * This,
            /* [in] */ metaref_type mref,
            /* [retval][out] */ IMgaMetaAttribute **p);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetAttributeByRefDisp )( 
            IMgaMetaModel * This,
            /* [in] */ metaref_type mref,
            /* [retval][out] */ IMgaMetaAttribute **p);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_AliasingEnabled )( 
            IMgaMetaModel * This,
            /* [retval][out] */ VARIANT_BOOL *pVal);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *AddAttribute )( 
            IMgaMetaModel * This,
            /* [in] */ IMgaMetaAttribute *p);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *RemoveAttribute )( 
            IMgaMetaModel * This,
            /* [in] */ IMgaMetaAttribute *p);
        
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_AliasingEnabled )( 
            IMgaMetaModel * This,
            /* [in] */ VARIANT_BOOL newVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_DefinedFCOs )( 
            IMgaMetaModel * This,
            /* [retval][out] */ IMgaMetaFCOs **p);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_DefinedFCOByName )( 
            IMgaMetaModel * This,
            /* [in] */ BSTR name,
            /* [in] */ VARIANT_BOOL inscope,
            /* [retval][out] */ IMgaMetaFCO **p);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetDefinedFCOByNameDisp )( 
            IMgaMetaModel * This,
            /* [in] */ BSTR name,
            /* [in] */ VARIANT_BOOL inscope,
            /* [retval][out] */ IMgaMetaFCO **p);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *DefineModel )( 
            IMgaMetaModel * This,
            /* [retval][out] */ IMgaMetaModel **p);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *DefineAtom )( 
            IMgaMetaModel * This,
            /* [retval][out] */ IMgaMetaAtom **p);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *DefineReference )( 
            IMgaMetaModel * This,
            /* [retval][out] */ IMgaMetaReference **p);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *DefineSet )( 
            IMgaMetaModel * This,
            /* [retval][out] */ IMgaMetaSet **p);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *DefineConnection )( 
            IMgaMetaModel * This,
            /* [retval][out] */ IMgaMetaConnection **p);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Roles )( 
            IMgaMetaModel * This,
            /* [retval][out] */ IMgaMetaRoles **p);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_RoleByName )( 
            IMgaMetaModel * This,
            /* [in] */ BSTR name,
            /* [retval][out] */ IMgaMetaRole **p);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetRoleByNameDisp )( 
            IMgaMetaModel * This,
            /* [in] */ BSTR name,
            /* [retval][out] */ IMgaMetaRole **p);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Aspects )( 
            IMgaMetaModel * This,
            /* [retval][out] */ IMgaMetaAspects **p);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_AspectByName )( 
            IMgaMetaModel * This,
            /* [in] */ BSTR name,
            /* [retval][out] */ IMgaMetaAspect **p);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetAspectByNameDisp )( 
            IMgaMetaModel * This,
            /* [in] */ BSTR name,
            /* [retval][out] */ IMgaMetaAspect **p);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *CreateRole )( 
            IMgaMetaModel * This,
            /* [in] */ IMgaMetaFCO *Kind,
            /* [retval][out] */ IMgaMetaRole **p);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *CreateAspect )( 
            IMgaMetaModel * This,
            /* [retval][out] */ IMgaMetaAspect **p);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *LegalConnectionRoles )( 
            IMgaMetaModel * This,
            /* [in] */ BSTR paths,
            /* [retval][out] */ IMgaMetaRoles **p);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *LegalReferenceRoles )( 
            IMgaMetaModel * This,
            /* [in] */ BSTR path,
            /* [retval][out] */ IMgaMetaRoles **p);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *LegalSetRoles )( 
            IMgaMetaModel * This,
            /* [in] */ BSTR path,
            /* [retval][out] */ IMgaMetaRoles **p);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *LegalRoles )( 
            IMgaMetaModel * This,
            /* [in] */ IMgaMetaFCO *k,
            /* [retval][out] */ IMgaMetaRoles **p);
        
        END_INTERFACE
    } IMgaMetaModelVtbl;

    interface IMgaMetaModel
    {
        CONST_VTBL struct IMgaMetaModelVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IMgaMetaModel_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IMgaMetaModel_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IMgaMetaModel_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IMgaMetaModel_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IMgaMetaModel_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IMgaMetaModel_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IMgaMetaModel_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IMgaMetaModel_get_MetaRef(This,p)	\
    ( (This)->lpVtbl -> get_MetaRef(This,p) ) 

#define IMgaMetaModel_put_MetaRef(This,p)	\
    ( (This)->lpVtbl -> put_MetaRef(This,p) ) 

#define IMgaMetaModel_get_MetaProject(This,p)	\
    ( (This)->lpVtbl -> get_MetaProject(This,p) ) 

#define IMgaMetaModel_get_Name(This,p)	\
    ( (This)->lpVtbl -> get_Name(This,p) ) 

#define IMgaMetaModel_put_Name(This,p)	\
    ( (This)->lpVtbl -> put_Name(This,p) ) 

#define IMgaMetaModel_get_DisplayedName(This,p)	\
    ( (This)->lpVtbl -> get_DisplayedName(This,p) ) 

#define IMgaMetaModel_put_DisplayedName(This,p)	\
    ( (This)->lpVtbl -> put_DisplayedName(This,p) ) 

#define IMgaMetaModel_get_ObjType(This,p)	\
    ( (This)->lpVtbl -> get_ObjType(This,p) ) 

#define IMgaMetaModel_Delete(This)	\
    ( (This)->lpVtbl -> Delete(This) ) 

#define IMgaMetaModel_get_RegistryNodes(This,p)	\
    ( (This)->lpVtbl -> get_RegistryNodes(This,p) ) 

#define IMgaMetaModel_get_RegistryNode(This,path,p)	\
    ( (This)->lpVtbl -> get_RegistryNode(This,path,p) ) 

#define IMgaMetaModel_GetRegistryNodeDisp(This,path,p)	\
    ( (This)->lpVtbl -> GetRegistryNodeDisp(This,path,p) ) 

#define IMgaMetaModel_get_RegistryValue(This,path,p)	\
    ( (This)->lpVtbl -> get_RegistryValue(This,path,p) ) 

#define IMgaMetaModel_GetRegistryValueDisp(This,path,p)	\
    ( (This)->lpVtbl -> GetRegistryValueDisp(This,path,p) ) 

#define IMgaMetaModel_put_RegistryValue(This,path,p)	\
    ( (This)->lpVtbl -> put_RegistryValue(This,path,p) ) 

#define IMgaMetaModel_SetRegistryValueDisp(This,path,p)	\
    ( (This)->lpVtbl -> SetRegistryValueDisp(This,path,p) ) 

#define IMgaMetaModel_get_Constraints(This,p)	\
    ( (This)->lpVtbl -> get_Constraints(This,p) ) 

#define IMgaMetaModel_CreateConstraint(This,p)	\
    ( (This)->lpVtbl -> CreateConstraint(This,p) ) 


#define IMgaMetaModel_get_DefinedIn(This,p)	\
    ( (This)->lpVtbl -> get_DefinedIn(This,p) ) 

#define IMgaMetaModel_get_DefinedAttributes(This,p)	\
    ( (This)->lpVtbl -> get_DefinedAttributes(This,p) ) 

#define IMgaMetaModel_get_DefinedAttributeByName(This,name,inscope,p)	\
    ( (This)->lpVtbl -> get_DefinedAttributeByName(This,name,inscope,p) ) 

#define IMgaMetaModel_GetDefinedAttributeByNameDisp(This,name,inscope,p)	\
    ( (This)->lpVtbl -> GetDefinedAttributeByNameDisp(This,name,inscope,p) ) 

#define IMgaMetaModel_DefineAttribute(This,p)	\
    ( (This)->lpVtbl -> DefineAttribute(This,p) ) 

#define IMgaMetaModel_get_UsedInRoles(This,p)	\
    ( (This)->lpVtbl -> get_UsedInRoles(This,p) ) 

#define IMgaMetaModel_get_UsedInFolders(This,p)	\
    ( (This)->lpVtbl -> get_UsedInFolders(This,p) ) 

#define IMgaMetaModel_get_Attributes(This,p)	\
    ( (This)->lpVtbl -> get_Attributes(This,p) ) 

#define IMgaMetaModel_get_AttributeByName(This,name,p)	\
    ( (This)->lpVtbl -> get_AttributeByName(This,name,p) ) 

#define IMgaMetaModel_GetAttributeByNameDisp(This,name,p)	\
    ( (This)->lpVtbl -> GetAttributeByNameDisp(This,name,p) ) 

#define IMgaMetaModel_get_AttributeByRef(This,mref,p)	\
    ( (This)->lpVtbl -> get_AttributeByRef(This,mref,p) ) 

#define IMgaMetaModel_GetAttributeByRefDisp(This,mref,p)	\
    ( (This)->lpVtbl -> GetAttributeByRefDisp(This,mref,p) ) 

#define IMgaMetaModel_get_AliasingEnabled(This,pVal)	\
    ( (This)->lpVtbl -> get_AliasingEnabled(This,pVal) ) 

#define IMgaMetaModel_AddAttribute(This,p)	\
    ( (This)->lpVtbl -> AddAttribute(This,p) ) 

#define IMgaMetaModel_RemoveAttribute(This,p)	\
    ( (This)->lpVtbl -> RemoveAttribute(This,p) ) 

#define IMgaMetaModel_put_AliasingEnabled(This,newVal)	\
    ( (This)->lpVtbl -> put_AliasingEnabled(This,newVal) ) 


#define IMgaMetaModel_get_DefinedFCOs(This,p)	\
    ( (This)->lpVtbl -> get_DefinedFCOs(This,p) ) 

#define IMgaMetaModel_get_DefinedFCOByName(This,name,inscope,p)	\
    ( (This)->lpVtbl -> get_DefinedFCOByName(This,name,inscope,p) ) 

#define IMgaMetaModel_GetDefinedFCOByNameDisp(This,name,inscope,p)	\
    ( (This)->lpVtbl -> GetDefinedFCOByNameDisp(This,name,inscope,p) ) 

#define IMgaMetaModel_DefineModel(This,p)	\
    ( (This)->lpVtbl -> DefineModel(This,p) ) 

#define IMgaMetaModel_DefineAtom(This,p)	\
    ( (This)->lpVtbl -> DefineAtom(This,p) ) 

#define IMgaMetaModel_DefineReference(This,p)	\
    ( (This)->lpVtbl -> DefineReference(This,p) ) 

#define IMgaMetaModel_DefineSet(This,p)	\
    ( (This)->lpVtbl -> DefineSet(This,p) ) 

#define IMgaMetaModel_DefineConnection(This,p)	\
    ( (This)->lpVtbl -> DefineConnection(This,p) ) 

#define IMgaMetaModel_get_Roles(This,p)	\
    ( (This)->lpVtbl -> get_Roles(This,p) ) 

#define IMgaMetaModel_get_RoleByName(This,name,p)	\
    ( (This)->lpVtbl -> get_RoleByName(This,name,p) ) 

#define IMgaMetaModel_GetRoleByNameDisp(This,name,p)	\
    ( (This)->lpVtbl -> GetRoleByNameDisp(This,name,p) ) 

#define IMgaMetaModel_get_Aspects(This,p)	\
    ( (This)->lpVtbl -> get_Aspects(This,p) ) 

#define IMgaMetaModel_get_AspectByName(This,name,p)	\
    ( (This)->lpVtbl -> get_AspectByName(This,name,p) ) 

#define IMgaMetaModel_GetAspectByNameDisp(This,name,p)	\
    ( (This)->lpVtbl -> GetAspectByNameDisp(This,name,p) ) 

#define IMgaMetaModel_CreateRole(This,Kind,p)	\
    ( (This)->lpVtbl -> CreateRole(This,Kind,p) ) 

#define IMgaMetaModel_CreateAspect(This,p)	\
    ( (This)->lpVtbl -> CreateAspect(This,p) ) 

#define IMgaMetaModel_LegalConnectionRoles(This,paths,p)	\
    ( (This)->lpVtbl -> LegalConnectionRoles(This,paths,p) ) 

#define IMgaMetaModel_LegalReferenceRoles(This,path,p)	\
    ( (This)->lpVtbl -> LegalReferenceRoles(This,path,p) ) 

#define IMgaMetaModel_LegalSetRoles(This,path,p)	\
    ( (This)->lpVtbl -> LegalSetRoles(This,path,p) ) 

#define IMgaMetaModel_LegalRoles(This,k,p)	\
    ( (This)->lpVtbl -> LegalRoles(This,k,p) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IMgaMetaModel_INTERFACE_DEFINED__ */


#ifndef __IMgaMetaAspect_INTERFACE_DEFINED__
#define __IMgaMetaAspect_INTERFACE_DEFINED__

/* interface IMgaMetaAspect */
/* [unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_IMgaMetaAspect;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("83BA324B-B758-11D3-ABAE-000000000000")
    IMgaMetaAspect : public IMgaMetaBase
    {
    public:
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_ParentModel( 
            /* [retval][out] */ IMgaMetaModel **p) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Parts( 
            /* [retval][out] */ IMgaMetaParts **p) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Attributes( 
            /* [retval][out] */ IMgaMetaAttributes **p) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE CreatePart( 
            /* [in] */ IMgaMetaRole *r,
            /* [retval][out] */ IMgaMetaPart **p) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE AddAttribute( 
            /* [in] */ IMgaMetaAttribute *p) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE RemoveAttribute( 
            /* [in] */ IMgaMetaAttribute *p) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IMgaMetaAspectVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IMgaMetaAspect * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IMgaMetaAspect * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IMgaMetaAspect * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IMgaMetaAspect * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IMgaMetaAspect * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IMgaMetaAspect * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IMgaMetaAspect * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_MetaRef )( 
            IMgaMetaAspect * This,
            /* [retval][out] */ metaref_type *p);
        
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_MetaRef )( 
            IMgaMetaAspect * This,
            /* [in] */ metaref_type p);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_MetaProject )( 
            IMgaMetaAspect * This,
            /* [retval][out] */ IMgaMetaProject **p);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Name )( 
            IMgaMetaAspect * This,
            /* [retval][out] */ BSTR *p);
        
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Name )( 
            IMgaMetaAspect * This,
            /* [in] */ BSTR p);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_DisplayedName )( 
            IMgaMetaAspect * This,
            /* [retval][out] */ BSTR *p);
        
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_DisplayedName )( 
            IMgaMetaAspect * This,
            /* [in] */ BSTR p);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ObjType )( 
            IMgaMetaAspect * This,
            /* [retval][out] */ objtype_enum *p);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Delete )( 
            IMgaMetaAspect * This);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_RegistryNodes )( 
            IMgaMetaAspect * This,
            /* [retval][out] */ IMgaMetaRegNodes **p);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_RegistryNode )( 
            IMgaMetaAspect * This,
            /* [in] */ BSTR path,
            /* [retval][out] */ IMgaMetaRegNode **p);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetRegistryNodeDisp )( 
            IMgaMetaAspect * This,
            /* [in] */ BSTR path,
            /* [retval][out] */ IMgaMetaRegNode **p);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_RegistryValue )( 
            IMgaMetaAspect * This,
            /* [in] */ BSTR path,
            /* [retval][out] */ BSTR *p);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetRegistryValueDisp )( 
            IMgaMetaAspect * This,
            /* [in] */ BSTR path,
            /* [retval][out] */ BSTR *p);
        
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_RegistryValue )( 
            IMgaMetaAspect * This,
            /* [in] */ BSTR path,
            /* [in] */ BSTR p);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *SetRegistryValueDisp )( 
            IMgaMetaAspect * This,
            /* [in] */ BSTR path,
            /* [in] */ BSTR p);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Constraints )( 
            IMgaMetaAspect * This,
            /* [retval][out] */ IMgaConstraints **p);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *CreateConstraint )( 
            IMgaMetaAspect * This,
            /* [retval][out] */ IMgaConstraint **p);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ParentModel )( 
            IMgaMetaAspect * This,
            /* [retval][out] */ IMgaMetaModel **p);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Parts )( 
            IMgaMetaAspect * This,
            /* [retval][out] */ IMgaMetaParts **p);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Attributes )( 
            IMgaMetaAspect * This,
            /* [retval][out] */ IMgaMetaAttributes **p);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *CreatePart )( 
            IMgaMetaAspect * This,
            /* [in] */ IMgaMetaRole *r,
            /* [retval][out] */ IMgaMetaPart **p);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *AddAttribute )( 
            IMgaMetaAspect * This,
            /* [in] */ IMgaMetaAttribute *p);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *RemoveAttribute )( 
            IMgaMetaAspect * This,
            /* [in] */ IMgaMetaAttribute *p);
        
        END_INTERFACE
    } IMgaMetaAspectVtbl;

    interface IMgaMetaAspect
    {
        CONST_VTBL struct IMgaMetaAspectVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IMgaMetaAspect_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IMgaMetaAspect_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IMgaMetaAspect_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IMgaMetaAspect_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IMgaMetaAspect_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IMgaMetaAspect_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IMgaMetaAspect_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IMgaMetaAspect_get_MetaRef(This,p)	\
    ( (This)->lpVtbl -> get_MetaRef(This,p) ) 

#define IMgaMetaAspect_put_MetaRef(This,p)	\
    ( (This)->lpVtbl -> put_MetaRef(This,p) ) 

#define IMgaMetaAspect_get_MetaProject(This,p)	\
    ( (This)->lpVtbl -> get_MetaProject(This,p) ) 

#define IMgaMetaAspect_get_Name(This,p)	\
    ( (This)->lpVtbl -> get_Name(This,p) ) 

#define IMgaMetaAspect_put_Name(This,p)	\
    ( (This)->lpVtbl -> put_Name(This,p) ) 

#define IMgaMetaAspect_get_DisplayedName(This,p)	\
    ( (This)->lpVtbl -> get_DisplayedName(This,p) ) 

#define IMgaMetaAspect_put_DisplayedName(This,p)	\
    ( (This)->lpVtbl -> put_DisplayedName(This,p) ) 

#define IMgaMetaAspect_get_ObjType(This,p)	\
    ( (This)->lpVtbl -> get_ObjType(This,p) ) 

#define IMgaMetaAspect_Delete(This)	\
    ( (This)->lpVtbl -> Delete(This) ) 

#define IMgaMetaAspect_get_RegistryNodes(This,p)	\
    ( (This)->lpVtbl -> get_RegistryNodes(This,p) ) 

#define IMgaMetaAspect_get_RegistryNode(This,path,p)	\
    ( (This)->lpVtbl -> get_RegistryNode(This,path,p) ) 

#define IMgaMetaAspect_GetRegistryNodeDisp(This,path,p)	\
    ( (This)->lpVtbl -> GetRegistryNodeDisp(This,path,p) ) 

#define IMgaMetaAspect_get_RegistryValue(This,path,p)	\
    ( (This)->lpVtbl -> get_RegistryValue(This,path,p) ) 

#define IMgaMetaAspect_GetRegistryValueDisp(This,path,p)	\
    ( (This)->lpVtbl -> GetRegistryValueDisp(This,path,p) ) 

#define IMgaMetaAspect_put_RegistryValue(This,path,p)	\
    ( (This)->lpVtbl -> put_RegistryValue(This,path,p) ) 

#define IMgaMetaAspect_SetRegistryValueDisp(This,path,p)	\
    ( (This)->lpVtbl -> SetRegistryValueDisp(This,path,p) ) 

#define IMgaMetaAspect_get_Constraints(This,p)	\
    ( (This)->lpVtbl -> get_Constraints(This,p) ) 

#define IMgaMetaAspect_CreateConstraint(This,p)	\
    ( (This)->lpVtbl -> CreateConstraint(This,p) ) 


#define IMgaMetaAspect_get_ParentModel(This,p)	\
    ( (This)->lpVtbl -> get_ParentModel(This,p) ) 

#define IMgaMetaAspect_get_Parts(This,p)	\
    ( (This)->lpVtbl -> get_Parts(This,p) ) 

#define IMgaMetaAspect_get_Attributes(This,p)	\
    ( (This)->lpVtbl -> get_Attributes(This,p) ) 

#define IMgaMetaAspect_CreatePart(This,r,p)	\
    ( (This)->lpVtbl -> CreatePart(This,r,p) ) 

#define IMgaMetaAspect_AddAttribute(This,p)	\
    ( (This)->lpVtbl -> AddAttribute(This,p) ) 

#define IMgaMetaAspect_RemoveAttribute(This,p)	\
    ( (This)->lpVtbl -> RemoveAttribute(This,p) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IMgaMetaAspect_INTERFACE_DEFINED__ */


#ifndef __IMgaMetaRole_INTERFACE_DEFINED__
#define __IMgaMetaRole_INTERFACE_DEFINED__

/* interface IMgaMetaRole */
/* [unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_IMgaMetaRole;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("83BA324D-B758-11D3-ABAE-000000000000")
    IMgaMetaRole : public IMgaMetaBase
    {
    public:
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_ParentModel( 
            /* [retval][out] */ IMgaMetaModel **p) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Parts( 
            /* [retval][out] */ IMgaMetaParts **p) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Kind( 
            /* [retval][out] */ IMgaMetaFCO **p) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IMgaMetaRoleVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IMgaMetaRole * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IMgaMetaRole * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IMgaMetaRole * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IMgaMetaRole * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IMgaMetaRole * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IMgaMetaRole * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IMgaMetaRole * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_MetaRef )( 
            IMgaMetaRole * This,
            /* [retval][out] */ metaref_type *p);
        
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_MetaRef )( 
            IMgaMetaRole * This,
            /* [in] */ metaref_type p);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_MetaProject )( 
            IMgaMetaRole * This,
            /* [retval][out] */ IMgaMetaProject **p);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Name )( 
            IMgaMetaRole * This,
            /* [retval][out] */ BSTR *p);
        
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Name )( 
            IMgaMetaRole * This,
            /* [in] */ BSTR p);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_DisplayedName )( 
            IMgaMetaRole * This,
            /* [retval][out] */ BSTR *p);
        
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_DisplayedName )( 
            IMgaMetaRole * This,
            /* [in] */ BSTR p);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ObjType )( 
            IMgaMetaRole * This,
            /* [retval][out] */ objtype_enum *p);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Delete )( 
            IMgaMetaRole * This);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_RegistryNodes )( 
            IMgaMetaRole * This,
            /* [retval][out] */ IMgaMetaRegNodes **p);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_RegistryNode )( 
            IMgaMetaRole * This,
            /* [in] */ BSTR path,
            /* [retval][out] */ IMgaMetaRegNode **p);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetRegistryNodeDisp )( 
            IMgaMetaRole * This,
            /* [in] */ BSTR path,
            /* [retval][out] */ IMgaMetaRegNode **p);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_RegistryValue )( 
            IMgaMetaRole * This,
            /* [in] */ BSTR path,
            /* [retval][out] */ BSTR *p);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetRegistryValueDisp )( 
            IMgaMetaRole * This,
            /* [in] */ BSTR path,
            /* [retval][out] */ BSTR *p);
        
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_RegistryValue )( 
            IMgaMetaRole * This,
            /* [in] */ BSTR path,
            /* [in] */ BSTR p);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *SetRegistryValueDisp )( 
            IMgaMetaRole * This,
            /* [in] */ BSTR path,
            /* [in] */ BSTR p);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Constraints )( 
            IMgaMetaRole * This,
            /* [retval][out] */ IMgaConstraints **p);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *CreateConstraint )( 
            IMgaMetaRole * This,
            /* [retval][out] */ IMgaConstraint **p);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ParentModel )( 
            IMgaMetaRole * This,
            /* [retval][out] */ IMgaMetaModel **p);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Parts )( 
            IMgaMetaRole * This,
            /* [retval][out] */ IMgaMetaParts **p);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Kind )( 
            IMgaMetaRole * This,
            /* [retval][out] */ IMgaMetaFCO **p);
        
        END_INTERFACE
    } IMgaMetaRoleVtbl;

    interface IMgaMetaRole
    {
        CONST_VTBL struct IMgaMetaRoleVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IMgaMetaRole_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IMgaMetaRole_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IMgaMetaRole_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IMgaMetaRole_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IMgaMetaRole_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IMgaMetaRole_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IMgaMetaRole_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IMgaMetaRole_get_MetaRef(This,p)	\
    ( (This)->lpVtbl -> get_MetaRef(This,p) ) 

#define IMgaMetaRole_put_MetaRef(This,p)	\
    ( (This)->lpVtbl -> put_MetaRef(This,p) ) 

#define IMgaMetaRole_get_MetaProject(This,p)	\
    ( (This)->lpVtbl -> get_MetaProject(This,p) ) 

#define IMgaMetaRole_get_Name(This,p)	\
    ( (This)->lpVtbl -> get_Name(This,p) ) 

#define IMgaMetaRole_put_Name(This,p)	\
    ( (This)->lpVtbl -> put_Name(This,p) ) 

#define IMgaMetaRole_get_DisplayedName(This,p)	\
    ( (This)->lpVtbl -> get_DisplayedName(This,p) ) 

#define IMgaMetaRole_put_DisplayedName(This,p)	\
    ( (This)->lpVtbl -> put_DisplayedName(This,p) ) 

#define IMgaMetaRole_get_ObjType(This,p)	\
    ( (This)->lpVtbl -> get_ObjType(This,p) ) 

#define IMgaMetaRole_Delete(This)	\
    ( (This)->lpVtbl -> Delete(This) ) 

#define IMgaMetaRole_get_RegistryNodes(This,p)	\
    ( (This)->lpVtbl -> get_RegistryNodes(This,p) ) 

#define IMgaMetaRole_get_RegistryNode(This,path,p)	\
    ( (This)->lpVtbl -> get_RegistryNode(This,path,p) ) 

#define IMgaMetaRole_GetRegistryNodeDisp(This,path,p)	\
    ( (This)->lpVtbl -> GetRegistryNodeDisp(This,path,p) ) 

#define IMgaMetaRole_get_RegistryValue(This,path,p)	\
    ( (This)->lpVtbl -> get_RegistryValue(This,path,p) ) 

#define IMgaMetaRole_GetRegistryValueDisp(This,path,p)	\
    ( (This)->lpVtbl -> GetRegistryValueDisp(This,path,p) ) 

#define IMgaMetaRole_put_RegistryValue(This,path,p)	\
    ( (This)->lpVtbl -> put_RegistryValue(This,path,p) ) 

#define IMgaMetaRole_SetRegistryValueDisp(This,path,p)	\
    ( (This)->lpVtbl -> SetRegistryValueDisp(This,path,p) ) 

#define IMgaMetaRole_get_Constraints(This,p)	\
    ( (This)->lpVtbl -> get_Constraints(This,p) ) 

#define IMgaMetaRole_CreateConstraint(This,p)	\
    ( (This)->lpVtbl -> CreateConstraint(This,p) ) 


#define IMgaMetaRole_get_ParentModel(This,p)	\
    ( (This)->lpVtbl -> get_ParentModel(This,p) ) 

#define IMgaMetaRole_get_Parts(This,p)	\
    ( (This)->lpVtbl -> get_Parts(This,p) ) 

#define IMgaMetaRole_get_Kind(This,p)	\
    ( (This)->lpVtbl -> get_Kind(This,p) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IMgaMetaRole_INTERFACE_DEFINED__ */


#ifndef __IMgaMetaPart_INTERFACE_DEFINED__
#define __IMgaMetaPart_INTERFACE_DEFINED__

/* interface IMgaMetaPart */
/* [unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_IMgaMetaPart;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("A70CAB45-DD94-11D3-9308-444553540000")
    IMgaMetaPart : public IMgaMetaBase
    {
    public:
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Role( 
            /* [retval][out] */ IMgaMetaRole **p) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_ParentAspect( 
            /* [retval][out] */ IMgaMetaAspect **p) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_IsPrimary( 
            /* [retval][out] */ VARIANT_BOOL *p) = 0;
        
        virtual /* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_IsPrimary( 
            /* [in] */ VARIANT_BOOL p) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_IsLinked( 
            /* [retval][out] */ VARIANT_BOOL *p) = 0;
        
        virtual /* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_IsLinked( 
            /* [in] */ VARIANT_BOOL p) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_KindAspect( 
            /* [retval][out] */ BSTR *p) = 0;
        
        virtual /* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_KindAspect( 
            /* [in] */ BSTR p) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IMgaMetaPartVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IMgaMetaPart * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IMgaMetaPart * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IMgaMetaPart * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IMgaMetaPart * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IMgaMetaPart * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IMgaMetaPart * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IMgaMetaPart * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_MetaRef )( 
            IMgaMetaPart * This,
            /* [retval][out] */ metaref_type *p);
        
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_MetaRef )( 
            IMgaMetaPart * This,
            /* [in] */ metaref_type p);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_MetaProject )( 
            IMgaMetaPart * This,
            /* [retval][out] */ IMgaMetaProject **p);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Name )( 
            IMgaMetaPart * This,
            /* [retval][out] */ BSTR *p);
        
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Name )( 
            IMgaMetaPart * This,
            /* [in] */ BSTR p);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_DisplayedName )( 
            IMgaMetaPart * This,
            /* [retval][out] */ BSTR *p);
        
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_DisplayedName )( 
            IMgaMetaPart * This,
            /* [in] */ BSTR p);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ObjType )( 
            IMgaMetaPart * This,
            /* [retval][out] */ objtype_enum *p);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Delete )( 
            IMgaMetaPart * This);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_RegistryNodes )( 
            IMgaMetaPart * This,
            /* [retval][out] */ IMgaMetaRegNodes **p);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_RegistryNode )( 
            IMgaMetaPart * This,
            /* [in] */ BSTR path,
            /* [retval][out] */ IMgaMetaRegNode **p);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetRegistryNodeDisp )( 
            IMgaMetaPart * This,
            /* [in] */ BSTR path,
            /* [retval][out] */ IMgaMetaRegNode **p);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_RegistryValue )( 
            IMgaMetaPart * This,
            /* [in] */ BSTR path,
            /* [retval][out] */ BSTR *p);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetRegistryValueDisp )( 
            IMgaMetaPart * This,
            /* [in] */ BSTR path,
            /* [retval][out] */ BSTR *p);
        
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_RegistryValue )( 
            IMgaMetaPart * This,
            /* [in] */ BSTR path,
            /* [in] */ BSTR p);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *SetRegistryValueDisp )( 
            IMgaMetaPart * This,
            /* [in] */ BSTR path,
            /* [in] */ BSTR p);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Constraints )( 
            IMgaMetaPart * This,
            /* [retval][out] */ IMgaConstraints **p);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *CreateConstraint )( 
            IMgaMetaPart * This,
            /* [retval][out] */ IMgaConstraint **p);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Role )( 
            IMgaMetaPart * This,
            /* [retval][out] */ IMgaMetaRole **p);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ParentAspect )( 
            IMgaMetaPart * This,
            /* [retval][out] */ IMgaMetaAspect **p);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_IsPrimary )( 
            IMgaMetaPart * This,
            /* [retval][out] */ VARIANT_BOOL *p);
        
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_IsPrimary )( 
            IMgaMetaPart * This,
            /* [in] */ VARIANT_BOOL p);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_IsLinked )( 
            IMgaMetaPart * This,
            /* [retval][out] */ VARIANT_BOOL *p);
        
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_IsLinked )( 
            IMgaMetaPart * This,
            /* [in] */ VARIANT_BOOL p);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_KindAspect )( 
            IMgaMetaPart * This,
            /* [retval][out] */ BSTR *p);
        
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_KindAspect )( 
            IMgaMetaPart * This,
            /* [in] */ BSTR p);
        
        END_INTERFACE
    } IMgaMetaPartVtbl;

    interface IMgaMetaPart
    {
        CONST_VTBL struct IMgaMetaPartVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IMgaMetaPart_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IMgaMetaPart_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IMgaMetaPart_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IMgaMetaPart_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IMgaMetaPart_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IMgaMetaPart_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IMgaMetaPart_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IMgaMetaPart_get_MetaRef(This,p)	\
    ( (This)->lpVtbl -> get_MetaRef(This,p) ) 

#define IMgaMetaPart_put_MetaRef(This,p)	\
    ( (This)->lpVtbl -> put_MetaRef(This,p) ) 

#define IMgaMetaPart_get_MetaProject(This,p)	\
    ( (This)->lpVtbl -> get_MetaProject(This,p) ) 

#define IMgaMetaPart_get_Name(This,p)	\
    ( (This)->lpVtbl -> get_Name(This,p) ) 

#define IMgaMetaPart_put_Name(This,p)	\
    ( (This)->lpVtbl -> put_Name(This,p) ) 

#define IMgaMetaPart_get_DisplayedName(This,p)	\
    ( (This)->lpVtbl -> get_DisplayedName(This,p) ) 

#define IMgaMetaPart_put_DisplayedName(This,p)	\
    ( (This)->lpVtbl -> put_DisplayedName(This,p) ) 

#define IMgaMetaPart_get_ObjType(This,p)	\
    ( (This)->lpVtbl -> get_ObjType(This,p) ) 

#define IMgaMetaPart_Delete(This)	\
    ( (This)->lpVtbl -> Delete(This) ) 

#define IMgaMetaPart_get_RegistryNodes(This,p)	\
    ( (This)->lpVtbl -> get_RegistryNodes(This,p) ) 

#define IMgaMetaPart_get_RegistryNode(This,path,p)	\
    ( (This)->lpVtbl -> get_RegistryNode(This,path,p) ) 

#define IMgaMetaPart_GetRegistryNodeDisp(This,path,p)	\
    ( (This)->lpVtbl -> GetRegistryNodeDisp(This,path,p) ) 

#define IMgaMetaPart_get_RegistryValue(This,path,p)	\
    ( (This)->lpVtbl -> get_RegistryValue(This,path,p) ) 

#define IMgaMetaPart_GetRegistryValueDisp(This,path,p)	\
    ( (This)->lpVtbl -> GetRegistryValueDisp(This,path,p) ) 

#define IMgaMetaPart_put_RegistryValue(This,path,p)	\
    ( (This)->lpVtbl -> put_RegistryValue(This,path,p) ) 

#define IMgaMetaPart_SetRegistryValueDisp(This,path,p)	\
    ( (This)->lpVtbl -> SetRegistryValueDisp(This,path,p) ) 

#define IMgaMetaPart_get_Constraints(This,p)	\
    ( (This)->lpVtbl -> get_Constraints(This,p) ) 

#define IMgaMetaPart_CreateConstraint(This,p)	\
    ( (This)->lpVtbl -> CreateConstraint(This,p) ) 


#define IMgaMetaPart_get_Role(This,p)	\
    ( (This)->lpVtbl -> get_Role(This,p) ) 

#define IMgaMetaPart_get_ParentAspect(This,p)	\
    ( (This)->lpVtbl -> get_ParentAspect(This,p) ) 

#define IMgaMetaPart_get_IsPrimary(This,p)	\
    ( (This)->lpVtbl -> get_IsPrimary(This,p) ) 

#define IMgaMetaPart_put_IsPrimary(This,p)	\
    ( (This)->lpVtbl -> put_IsPrimary(This,p) ) 

#define IMgaMetaPart_get_IsLinked(This,p)	\
    ( (This)->lpVtbl -> get_IsLinked(This,p) ) 

#define IMgaMetaPart_put_IsLinked(This,p)	\
    ( (This)->lpVtbl -> put_IsLinked(This,p) ) 

#define IMgaMetaPart_get_KindAspect(This,p)	\
    ( (This)->lpVtbl -> get_KindAspect(This,p) ) 

#define IMgaMetaPart_put_KindAspect(This,p)	\
    ( (This)->lpVtbl -> put_KindAspect(This,p) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IMgaMetaPart_INTERFACE_DEFINED__ */


#ifndef __IMgaMetaAtom_INTERFACE_DEFINED__
#define __IMgaMetaAtom_INTERFACE_DEFINED__

/* interface IMgaMetaAtom */
/* [unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_IMgaMetaAtom;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("83BA324F-B758-11D3-ABAE-000000000000")
    IMgaMetaAtom : public IMgaMetaFCO
    {
    public:
    };
    
    
#else 	/* C style interface */

    typedef struct IMgaMetaAtomVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IMgaMetaAtom * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IMgaMetaAtom * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IMgaMetaAtom * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IMgaMetaAtom * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IMgaMetaAtom * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IMgaMetaAtom * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IMgaMetaAtom * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_MetaRef )( 
            IMgaMetaAtom * This,
            /* [retval][out] */ metaref_type *p);
        
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_MetaRef )( 
            IMgaMetaAtom * This,
            /* [in] */ metaref_type p);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_MetaProject )( 
            IMgaMetaAtom * This,
            /* [retval][out] */ IMgaMetaProject **p);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Name )( 
            IMgaMetaAtom * This,
            /* [retval][out] */ BSTR *p);
        
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Name )( 
            IMgaMetaAtom * This,
            /* [in] */ BSTR p);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_DisplayedName )( 
            IMgaMetaAtom * This,
            /* [retval][out] */ BSTR *p);
        
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_DisplayedName )( 
            IMgaMetaAtom * This,
            /* [in] */ BSTR p);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ObjType )( 
            IMgaMetaAtom * This,
            /* [retval][out] */ objtype_enum *p);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Delete )( 
            IMgaMetaAtom * This);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_RegistryNodes )( 
            IMgaMetaAtom * This,
            /* [retval][out] */ IMgaMetaRegNodes **p);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_RegistryNode )( 
            IMgaMetaAtom * This,
            /* [in] */ BSTR path,
            /* [retval][out] */ IMgaMetaRegNode **p);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetRegistryNodeDisp )( 
            IMgaMetaAtom * This,
            /* [in] */ BSTR path,
            /* [retval][out] */ IMgaMetaRegNode **p);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_RegistryValue )( 
            IMgaMetaAtom * This,
            /* [in] */ BSTR path,
            /* [retval][out] */ BSTR *p);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetRegistryValueDisp )( 
            IMgaMetaAtom * This,
            /* [in] */ BSTR path,
            /* [retval][out] */ BSTR *p);
        
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_RegistryValue )( 
            IMgaMetaAtom * This,
            /* [in] */ BSTR path,
            /* [in] */ BSTR p);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *SetRegistryValueDisp )( 
            IMgaMetaAtom * This,
            /* [in] */ BSTR path,
            /* [in] */ BSTR p);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Constraints )( 
            IMgaMetaAtom * This,
            /* [retval][out] */ IMgaConstraints **p);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *CreateConstraint )( 
            IMgaMetaAtom * This,
            /* [retval][out] */ IMgaConstraint **p);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_DefinedIn )( 
            IMgaMetaAtom * This,
            /* [retval][out] */ IMgaMetaBase **p);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_DefinedAttributes )( 
            IMgaMetaAtom * This,
            /* [retval][out] */ IMgaMetaAttributes **p);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_DefinedAttributeByName )( 
            IMgaMetaAtom * This,
            /* [in] */ BSTR name,
            /* [in] */ VARIANT_BOOL inscope,
            /* [retval][out] */ IMgaMetaAttribute **p);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetDefinedAttributeByNameDisp )( 
            IMgaMetaAtom * This,
            /* [in] */ BSTR name,
            /* [in] */ VARIANT_BOOL inscope,
            /* [retval][out] */ IMgaMetaAttribute **p);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *DefineAttribute )( 
            IMgaMetaAtom * This,
            /* [retval][out] */ IMgaMetaAttribute **p);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_UsedInRoles )( 
            IMgaMetaAtom * This,
            /* [retval][out] */ IMgaMetaRoles **p);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_UsedInFolders )( 
            IMgaMetaAtom * This,
            /* [retval][out] */ IMgaMetaFolders **p);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Attributes )( 
            IMgaMetaAtom * This,
            /* [retval][out] */ IMgaMetaAttributes **p);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_AttributeByName )( 
            IMgaMetaAtom * This,
            /* [in] */ BSTR name,
            /* [retval][out] */ IMgaMetaAttribute **p);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetAttributeByNameDisp )( 
            IMgaMetaAtom * This,
            /* [in] */ BSTR name,
            /* [retval][out] */ IMgaMetaAttribute **p);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_AttributeByRef )( 
            IMgaMetaAtom * This,
            /* [in] */ metaref_type mref,
            /* [retval][out] */ IMgaMetaAttribute **p);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetAttributeByRefDisp )( 
            IMgaMetaAtom * This,
            /* [in] */ metaref_type mref,
            /* [retval][out] */ IMgaMetaAttribute **p);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_AliasingEnabled )( 
            IMgaMetaAtom * This,
            /* [retval][out] */ VARIANT_BOOL *pVal);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *AddAttribute )( 
            IMgaMetaAtom * This,
            /* [in] */ IMgaMetaAttribute *p);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *RemoveAttribute )( 
            IMgaMetaAtom * This,
            /* [in] */ IMgaMetaAttribute *p);
        
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_AliasingEnabled )( 
            IMgaMetaAtom * This,
            /* [in] */ VARIANT_BOOL newVal);
        
        END_INTERFACE
    } IMgaMetaAtomVtbl;

    interface IMgaMetaAtom
    {
        CONST_VTBL struct IMgaMetaAtomVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IMgaMetaAtom_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IMgaMetaAtom_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IMgaMetaAtom_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IMgaMetaAtom_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IMgaMetaAtom_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IMgaMetaAtom_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IMgaMetaAtom_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IMgaMetaAtom_get_MetaRef(This,p)	\
    ( (This)->lpVtbl -> get_MetaRef(This,p) ) 

#define IMgaMetaAtom_put_MetaRef(This,p)	\
    ( (This)->lpVtbl -> put_MetaRef(This,p) ) 

#define IMgaMetaAtom_get_MetaProject(This,p)	\
    ( (This)->lpVtbl -> get_MetaProject(This,p) ) 

#define IMgaMetaAtom_get_Name(This,p)	\
    ( (This)->lpVtbl -> get_Name(This,p) ) 

#define IMgaMetaAtom_put_Name(This,p)	\
    ( (This)->lpVtbl -> put_Name(This,p) ) 

#define IMgaMetaAtom_get_DisplayedName(This,p)	\
    ( (This)->lpVtbl -> get_DisplayedName(This,p) ) 

#define IMgaMetaAtom_put_DisplayedName(This,p)	\
    ( (This)->lpVtbl -> put_DisplayedName(This,p) ) 

#define IMgaMetaAtom_get_ObjType(This,p)	\
    ( (This)->lpVtbl -> get_ObjType(This,p) ) 

#define IMgaMetaAtom_Delete(This)	\
    ( (This)->lpVtbl -> Delete(This) ) 

#define IMgaMetaAtom_get_RegistryNodes(This,p)	\
    ( (This)->lpVtbl -> get_RegistryNodes(This,p) ) 

#define IMgaMetaAtom_get_RegistryNode(This,path,p)	\
    ( (This)->lpVtbl -> get_RegistryNode(This,path,p) ) 

#define IMgaMetaAtom_GetRegistryNodeDisp(This,path,p)	\
    ( (This)->lpVtbl -> GetRegistryNodeDisp(This,path,p) ) 

#define IMgaMetaAtom_get_RegistryValue(This,path,p)	\
    ( (This)->lpVtbl -> get_RegistryValue(This,path,p) ) 

#define IMgaMetaAtom_GetRegistryValueDisp(This,path,p)	\
    ( (This)->lpVtbl -> GetRegistryValueDisp(This,path,p) ) 

#define IMgaMetaAtom_put_RegistryValue(This,path,p)	\
    ( (This)->lpVtbl -> put_RegistryValue(This,path,p) ) 

#define IMgaMetaAtom_SetRegistryValueDisp(This,path,p)	\
    ( (This)->lpVtbl -> SetRegistryValueDisp(This,path,p) ) 

#define IMgaMetaAtom_get_Constraints(This,p)	\
    ( (This)->lpVtbl -> get_Constraints(This,p) ) 

#define IMgaMetaAtom_CreateConstraint(This,p)	\
    ( (This)->lpVtbl -> CreateConstraint(This,p) ) 


#define IMgaMetaAtom_get_DefinedIn(This,p)	\
    ( (This)->lpVtbl -> get_DefinedIn(This,p) ) 

#define IMgaMetaAtom_get_DefinedAttributes(This,p)	\
    ( (This)->lpVtbl -> get_DefinedAttributes(This,p) ) 

#define IMgaMetaAtom_get_DefinedAttributeByName(This,name,inscope,p)	\
    ( (This)->lpVtbl -> get_DefinedAttributeByName(This,name,inscope,p) ) 

#define IMgaMetaAtom_GetDefinedAttributeByNameDisp(This,name,inscope,p)	\
    ( (This)->lpVtbl -> GetDefinedAttributeByNameDisp(This,name,inscope,p) ) 

#define IMgaMetaAtom_DefineAttribute(This,p)	\
    ( (This)->lpVtbl -> DefineAttribute(This,p) ) 

#define IMgaMetaAtom_get_UsedInRoles(This,p)	\
    ( (This)->lpVtbl -> get_UsedInRoles(This,p) ) 

#define IMgaMetaAtom_get_UsedInFolders(This,p)	\
    ( (This)->lpVtbl -> get_UsedInFolders(This,p) ) 

#define IMgaMetaAtom_get_Attributes(This,p)	\
    ( (This)->lpVtbl -> get_Attributes(This,p) ) 

#define IMgaMetaAtom_get_AttributeByName(This,name,p)	\
    ( (This)->lpVtbl -> get_AttributeByName(This,name,p) ) 

#define IMgaMetaAtom_GetAttributeByNameDisp(This,name,p)	\
    ( (This)->lpVtbl -> GetAttributeByNameDisp(This,name,p) ) 

#define IMgaMetaAtom_get_AttributeByRef(This,mref,p)	\
    ( (This)->lpVtbl -> get_AttributeByRef(This,mref,p) ) 

#define IMgaMetaAtom_GetAttributeByRefDisp(This,mref,p)	\
    ( (This)->lpVtbl -> GetAttributeByRefDisp(This,mref,p) ) 

#define IMgaMetaAtom_get_AliasingEnabled(This,pVal)	\
    ( (This)->lpVtbl -> get_AliasingEnabled(This,pVal) ) 

#define IMgaMetaAtom_AddAttribute(This,p)	\
    ( (This)->lpVtbl -> AddAttribute(This,p) ) 

#define IMgaMetaAtom_RemoveAttribute(This,p)	\
    ( (This)->lpVtbl -> RemoveAttribute(This,p) ) 

#define IMgaMetaAtom_put_AliasingEnabled(This,newVal)	\
    ( (This)->lpVtbl -> put_AliasingEnabled(This,newVal) ) 


#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IMgaMetaAtom_INTERFACE_DEFINED__ */


#ifndef __IMgaMetaAttribute_INTERFACE_DEFINED__
#define __IMgaMetaAttribute_INTERFACE_DEFINED__

/* interface IMgaMetaAttribute */
/* [unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_IMgaMetaAttribute;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("83BA3259-B758-11D3-ABAE-000000000000")
    IMgaMetaAttribute : public IMgaMetaBase
    {
    public:
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_DefinedIn( 
            /* [retval][out] */ IMgaMetaBase **p) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_UsedIn( 
            /* [retval][out] */ IMgaMetaFCOs **p) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Viewable( 
            /* [retval][out] */ VARIANT_BOOL *p) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_DefaultValue( 
            /* [retval][out] */ VARIANT *p) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_ValueType( 
            /* [retval][out] */ attval_enum *attval) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_EnumItems( 
            /* [retval][out] */ IMgaMetaEnumItems **p) = 0;
        
        virtual /* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_Viewable( 
            /* [in] */ VARIANT_BOOL p) = 0;
        
        virtual /* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_DefaultValue( 
            /* [in] */ BSTR p) = 0;
        
        virtual /* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_ValueType( 
            /* [in] */ attval_enum attval) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE CreateEnumItem( 
            /* [retval][out] */ IMgaMetaEnumItem **p) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IMgaMetaAttributeVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IMgaMetaAttribute * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IMgaMetaAttribute * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IMgaMetaAttribute * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IMgaMetaAttribute * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IMgaMetaAttribute * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IMgaMetaAttribute * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IMgaMetaAttribute * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_MetaRef )( 
            IMgaMetaAttribute * This,
            /* [retval][out] */ metaref_type *p);
        
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_MetaRef )( 
            IMgaMetaAttribute * This,
            /* [in] */ metaref_type p);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_MetaProject )( 
            IMgaMetaAttribute * This,
            /* [retval][out] */ IMgaMetaProject **p);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Name )( 
            IMgaMetaAttribute * This,
            /* [retval][out] */ BSTR *p);
        
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Name )( 
            IMgaMetaAttribute * This,
            /* [in] */ BSTR p);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_DisplayedName )( 
            IMgaMetaAttribute * This,
            /* [retval][out] */ BSTR *p);
        
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_DisplayedName )( 
            IMgaMetaAttribute * This,
            /* [in] */ BSTR p);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ObjType )( 
            IMgaMetaAttribute * This,
            /* [retval][out] */ objtype_enum *p);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Delete )( 
            IMgaMetaAttribute * This);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_RegistryNodes )( 
            IMgaMetaAttribute * This,
            /* [retval][out] */ IMgaMetaRegNodes **p);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_RegistryNode )( 
            IMgaMetaAttribute * This,
            /* [in] */ BSTR path,
            /* [retval][out] */ IMgaMetaRegNode **p);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetRegistryNodeDisp )( 
            IMgaMetaAttribute * This,
            /* [in] */ BSTR path,
            /* [retval][out] */ IMgaMetaRegNode **p);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_RegistryValue )( 
            IMgaMetaAttribute * This,
            /* [in] */ BSTR path,
            /* [retval][out] */ BSTR *p);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetRegistryValueDisp )( 
            IMgaMetaAttribute * This,
            /* [in] */ BSTR path,
            /* [retval][out] */ BSTR *p);
        
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_RegistryValue )( 
            IMgaMetaAttribute * This,
            /* [in] */ BSTR path,
            /* [in] */ BSTR p);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *SetRegistryValueDisp )( 
            IMgaMetaAttribute * This,
            /* [in] */ BSTR path,
            /* [in] */ BSTR p);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Constraints )( 
            IMgaMetaAttribute * This,
            /* [retval][out] */ IMgaConstraints **p);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *CreateConstraint )( 
            IMgaMetaAttribute * This,
            /* [retval][out] */ IMgaConstraint **p);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_DefinedIn )( 
            IMgaMetaAttribute * This,
            /* [retval][out] */ IMgaMetaBase **p);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_UsedIn )( 
            IMgaMetaAttribute * This,
            /* [retval][out] */ IMgaMetaFCOs **p);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Viewable )( 
            IMgaMetaAttribute * This,
            /* [retval][out] */ VARIANT_BOOL *p);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_DefaultValue )( 
            IMgaMetaAttribute * This,
            /* [retval][out] */ VARIANT *p);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ValueType )( 
            IMgaMetaAttribute * This,
            /* [retval][out] */ attval_enum *attval);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_EnumItems )( 
            IMgaMetaAttribute * This,
            /* [retval][out] */ IMgaMetaEnumItems **p);
        
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Viewable )( 
            IMgaMetaAttribute * This,
            /* [in] */ VARIANT_BOOL p);
        
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_DefaultValue )( 
            IMgaMetaAttribute * This,
            /* [in] */ BSTR p);
        
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ValueType )( 
            IMgaMetaAttribute * This,
            /* [in] */ attval_enum attval);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *CreateEnumItem )( 
            IMgaMetaAttribute * This,
            /* [retval][out] */ IMgaMetaEnumItem **p);
        
        END_INTERFACE
    } IMgaMetaAttributeVtbl;

    interface IMgaMetaAttribute
    {
        CONST_VTBL struct IMgaMetaAttributeVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IMgaMetaAttribute_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IMgaMetaAttribute_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IMgaMetaAttribute_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IMgaMetaAttribute_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IMgaMetaAttribute_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IMgaMetaAttribute_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IMgaMetaAttribute_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IMgaMetaAttribute_get_MetaRef(This,p)	\
    ( (This)->lpVtbl -> get_MetaRef(This,p) ) 

#define IMgaMetaAttribute_put_MetaRef(This,p)	\
    ( (This)->lpVtbl -> put_MetaRef(This,p) ) 

#define IMgaMetaAttribute_get_MetaProject(This,p)	\
    ( (This)->lpVtbl -> get_MetaProject(This,p) ) 

#define IMgaMetaAttribute_get_Name(This,p)	\
    ( (This)->lpVtbl -> get_Name(This,p) ) 

#define IMgaMetaAttribute_put_Name(This,p)	\
    ( (This)->lpVtbl -> put_Name(This,p) ) 

#define IMgaMetaAttribute_get_DisplayedName(This,p)	\
    ( (This)->lpVtbl -> get_DisplayedName(This,p) ) 

#define IMgaMetaAttribute_put_DisplayedName(This,p)	\
    ( (This)->lpVtbl -> put_DisplayedName(This,p) ) 

#define IMgaMetaAttribute_get_ObjType(This,p)	\
    ( (This)->lpVtbl -> get_ObjType(This,p) ) 

#define IMgaMetaAttribute_Delete(This)	\
    ( (This)->lpVtbl -> Delete(This) ) 

#define IMgaMetaAttribute_get_RegistryNodes(This,p)	\
    ( (This)->lpVtbl -> get_RegistryNodes(This,p) ) 

#define IMgaMetaAttribute_get_RegistryNode(This,path,p)	\
    ( (This)->lpVtbl -> get_RegistryNode(This,path,p) ) 

#define IMgaMetaAttribute_GetRegistryNodeDisp(This,path,p)	\
    ( (This)->lpVtbl -> GetRegistryNodeDisp(This,path,p) ) 

#define IMgaMetaAttribute_get_RegistryValue(This,path,p)	\
    ( (This)->lpVtbl -> get_RegistryValue(This,path,p) ) 

#define IMgaMetaAttribute_GetRegistryValueDisp(This,path,p)	\
    ( (This)->lpVtbl -> GetRegistryValueDisp(This,path,p) ) 

#define IMgaMetaAttribute_put_RegistryValue(This,path,p)	\
    ( (This)->lpVtbl -> put_RegistryValue(This,path,p) ) 

#define IMgaMetaAttribute_SetRegistryValueDisp(This,path,p)	\
    ( (This)->lpVtbl -> SetRegistryValueDisp(This,path,p) ) 

#define IMgaMetaAttribute_get_Constraints(This,p)	\
    ( (This)->lpVtbl -> get_Constraints(This,p) ) 

#define IMgaMetaAttribute_CreateConstraint(This,p)	\
    ( (This)->lpVtbl -> CreateConstraint(This,p) ) 


#define IMgaMetaAttribute_get_DefinedIn(This,p)	\
    ( (This)->lpVtbl -> get_DefinedIn(This,p) ) 

#define IMgaMetaAttribute_get_UsedIn(This,p)	\
    ( (This)->lpVtbl -> get_UsedIn(This,p) ) 

#define IMgaMetaAttribute_get_Viewable(This,p)	\
    ( (This)->lpVtbl -> get_Viewable(This,p) ) 

#define IMgaMetaAttribute_get_DefaultValue(This,p)	\
    ( (This)->lpVtbl -> get_DefaultValue(This,p) ) 

#define IMgaMetaAttribute_get_ValueType(This,attval)	\
    ( (This)->lpVtbl -> get_ValueType(This,attval) ) 

#define IMgaMetaAttribute_get_EnumItems(This,p)	\
    ( (This)->lpVtbl -> get_EnumItems(This,p) ) 

#define IMgaMetaAttribute_put_Viewable(This,p)	\
    ( (This)->lpVtbl -> put_Viewable(This,p) ) 

#define IMgaMetaAttribute_put_DefaultValue(This,p)	\
    ( (This)->lpVtbl -> put_DefaultValue(This,p) ) 

#define IMgaMetaAttribute_put_ValueType(This,attval)	\
    ( (This)->lpVtbl -> put_ValueType(This,attval) ) 

#define IMgaMetaAttribute_CreateEnumItem(This,p)	\
    ( (This)->lpVtbl -> CreateEnumItem(This,p) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IMgaMetaAttribute_INTERFACE_DEFINED__ */


#ifndef __IMgaMetaEnumItem_INTERFACE_DEFINED__
#define __IMgaMetaEnumItem_INTERFACE_DEFINED__

/* interface IMgaMetaEnumItem */
/* [unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_IMgaMetaEnumItem;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("83254259-B758-21D3-7BAE-000000000000")
    IMgaMetaEnumItem : public IDispatch
    {
    public:
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Parent( 
            /* [retval][out] */ IMgaMetaAttribute **p) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_DisplayedName( 
            /* [retval][out] */ BSTR *p) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Value( 
            /* [retval][out] */ BSTR *p) = 0;
        
        virtual /* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_DisplayedName( 
            /* [in] */ BSTR p) = 0;
        
        virtual /* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_Value( 
            /* [in] */ BSTR p) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IMgaMetaEnumItemVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IMgaMetaEnumItem * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IMgaMetaEnumItem * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IMgaMetaEnumItem * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IMgaMetaEnumItem * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IMgaMetaEnumItem * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IMgaMetaEnumItem * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IMgaMetaEnumItem * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Parent )( 
            IMgaMetaEnumItem * This,
            /* [retval][out] */ IMgaMetaAttribute **p);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_DisplayedName )( 
            IMgaMetaEnumItem * This,
            /* [retval][out] */ BSTR *p);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Value )( 
            IMgaMetaEnumItem * This,
            /* [retval][out] */ BSTR *p);
        
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_DisplayedName )( 
            IMgaMetaEnumItem * This,
            /* [in] */ BSTR p);
        
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Value )( 
            IMgaMetaEnumItem * This,
            /* [in] */ BSTR p);
        
        END_INTERFACE
    } IMgaMetaEnumItemVtbl;

    interface IMgaMetaEnumItem
    {
        CONST_VTBL struct IMgaMetaEnumItemVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IMgaMetaEnumItem_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IMgaMetaEnumItem_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IMgaMetaEnumItem_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IMgaMetaEnumItem_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IMgaMetaEnumItem_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IMgaMetaEnumItem_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IMgaMetaEnumItem_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IMgaMetaEnumItem_get_Parent(This,p)	\
    ( (This)->lpVtbl -> get_Parent(This,p) ) 

#define IMgaMetaEnumItem_get_DisplayedName(This,p)	\
    ( (This)->lpVtbl -> get_DisplayedName(This,p) ) 

#define IMgaMetaEnumItem_get_Value(This,p)	\
    ( (This)->lpVtbl -> get_Value(This,p) ) 

#define IMgaMetaEnumItem_put_DisplayedName(This,p)	\
    ( (This)->lpVtbl -> put_DisplayedName(This,p) ) 

#define IMgaMetaEnumItem_put_Value(This,p)	\
    ( (This)->lpVtbl -> put_Value(This,p) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IMgaMetaEnumItem_INTERFACE_DEFINED__ */


#ifndef __IMgaMetaReference_INTERFACE_DEFINED__
#define __IMgaMetaReference_INTERFACE_DEFINED__

/* interface IMgaMetaReference */
/* [unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_IMgaMetaReference;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("83BA3251-B758-11D3-ABAE-000000000000")
    IMgaMetaReference : public IMgaMetaFCO
    {
    public:
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_RefSpec( 
            /* [retval][out] */ IMgaMetaPointerSpec **p) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE CheckPath( 
            /* [in] */ BSTR path,
            /* [retval][out] */ VARIANT_BOOL *p) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IMgaMetaReferenceVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IMgaMetaReference * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IMgaMetaReference * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IMgaMetaReference * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IMgaMetaReference * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IMgaMetaReference * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IMgaMetaReference * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IMgaMetaReference * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_MetaRef )( 
            IMgaMetaReference * This,
            /* [retval][out] */ metaref_type *p);
        
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_MetaRef )( 
            IMgaMetaReference * This,
            /* [in] */ metaref_type p);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_MetaProject )( 
            IMgaMetaReference * This,
            /* [retval][out] */ IMgaMetaProject **p);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Name )( 
            IMgaMetaReference * This,
            /* [retval][out] */ BSTR *p);
        
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Name )( 
            IMgaMetaReference * This,
            /* [in] */ BSTR p);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_DisplayedName )( 
            IMgaMetaReference * This,
            /* [retval][out] */ BSTR *p);
        
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_DisplayedName )( 
            IMgaMetaReference * This,
            /* [in] */ BSTR p);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ObjType )( 
            IMgaMetaReference * This,
            /* [retval][out] */ objtype_enum *p);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Delete )( 
            IMgaMetaReference * This);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_RegistryNodes )( 
            IMgaMetaReference * This,
            /* [retval][out] */ IMgaMetaRegNodes **p);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_RegistryNode )( 
            IMgaMetaReference * This,
            /* [in] */ BSTR path,
            /* [retval][out] */ IMgaMetaRegNode **p);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetRegistryNodeDisp )( 
            IMgaMetaReference * This,
            /* [in] */ BSTR path,
            /* [retval][out] */ IMgaMetaRegNode **p);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_RegistryValue )( 
            IMgaMetaReference * This,
            /* [in] */ BSTR path,
            /* [retval][out] */ BSTR *p);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetRegistryValueDisp )( 
            IMgaMetaReference * This,
            /* [in] */ BSTR path,
            /* [retval][out] */ BSTR *p);
        
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_RegistryValue )( 
            IMgaMetaReference * This,
            /* [in] */ BSTR path,
            /* [in] */ BSTR p);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *SetRegistryValueDisp )( 
            IMgaMetaReference * This,
            /* [in] */ BSTR path,
            /* [in] */ BSTR p);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Constraints )( 
            IMgaMetaReference * This,
            /* [retval][out] */ IMgaConstraints **p);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *CreateConstraint )( 
            IMgaMetaReference * This,
            /* [retval][out] */ IMgaConstraint **p);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_DefinedIn )( 
            IMgaMetaReference * This,
            /* [retval][out] */ IMgaMetaBase **p);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_DefinedAttributes )( 
            IMgaMetaReference * This,
            /* [retval][out] */ IMgaMetaAttributes **p);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_DefinedAttributeByName )( 
            IMgaMetaReference * This,
            /* [in] */ BSTR name,
            /* [in] */ VARIANT_BOOL inscope,
            /* [retval][out] */ IMgaMetaAttribute **p);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetDefinedAttributeByNameDisp )( 
            IMgaMetaReference * This,
            /* [in] */ BSTR name,
            /* [in] */ VARIANT_BOOL inscope,
            /* [retval][out] */ IMgaMetaAttribute **p);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *DefineAttribute )( 
            IMgaMetaReference * This,
            /* [retval][out] */ IMgaMetaAttribute **p);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_UsedInRoles )( 
            IMgaMetaReference * This,
            /* [retval][out] */ IMgaMetaRoles **p);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_UsedInFolders )( 
            IMgaMetaReference * This,
            /* [retval][out] */ IMgaMetaFolders **p);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Attributes )( 
            IMgaMetaReference * This,
            /* [retval][out] */ IMgaMetaAttributes **p);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_AttributeByName )( 
            IMgaMetaReference * This,
            /* [in] */ BSTR name,
            /* [retval][out] */ IMgaMetaAttribute **p);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetAttributeByNameDisp )( 
            IMgaMetaReference * This,
            /* [in] */ BSTR name,
            /* [retval][out] */ IMgaMetaAttribute **p);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_AttributeByRef )( 
            IMgaMetaReference * This,
            /* [in] */ metaref_type mref,
            /* [retval][out] */ IMgaMetaAttribute **p);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetAttributeByRefDisp )( 
            IMgaMetaReference * This,
            /* [in] */ metaref_type mref,
            /* [retval][out] */ IMgaMetaAttribute **p);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_AliasingEnabled )( 
            IMgaMetaReference * This,
            /* [retval][out] */ VARIANT_BOOL *pVal);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *AddAttribute )( 
            IMgaMetaReference * This,
            /* [in] */ IMgaMetaAttribute *p);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *RemoveAttribute )( 
            IMgaMetaReference * This,
            /* [in] */ IMgaMetaAttribute *p);
        
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_AliasingEnabled )( 
            IMgaMetaReference * This,
            /* [in] */ VARIANT_BOOL newVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_RefSpec )( 
            IMgaMetaReference * This,
            /* [retval][out] */ IMgaMetaPointerSpec **p);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *CheckPath )( 
            IMgaMetaReference * This,
            /* [in] */ BSTR path,
            /* [retval][out] */ VARIANT_BOOL *p);
        
        END_INTERFACE
    } IMgaMetaReferenceVtbl;

    interface IMgaMetaReference
    {
        CONST_VTBL struct IMgaMetaReferenceVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IMgaMetaReference_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IMgaMetaReference_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IMgaMetaReference_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IMgaMetaReference_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IMgaMetaReference_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IMgaMetaReference_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IMgaMetaReference_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IMgaMetaReference_get_MetaRef(This,p)	\
    ( (This)->lpVtbl -> get_MetaRef(This,p) ) 

#define IMgaMetaReference_put_MetaRef(This,p)	\
    ( (This)->lpVtbl -> put_MetaRef(This,p) ) 

#define IMgaMetaReference_get_MetaProject(This,p)	\
    ( (This)->lpVtbl -> get_MetaProject(This,p) ) 

#define IMgaMetaReference_get_Name(This,p)	\
    ( (This)->lpVtbl -> get_Name(This,p) ) 

#define IMgaMetaReference_put_Name(This,p)	\
    ( (This)->lpVtbl -> put_Name(This,p) ) 

#define IMgaMetaReference_get_DisplayedName(This,p)	\
    ( (This)->lpVtbl -> get_DisplayedName(This,p) ) 

#define IMgaMetaReference_put_DisplayedName(This,p)	\
    ( (This)->lpVtbl -> put_DisplayedName(This,p) ) 

#define IMgaMetaReference_get_ObjType(This,p)	\
    ( (This)->lpVtbl -> get_ObjType(This,p) ) 

#define IMgaMetaReference_Delete(This)	\
    ( (This)->lpVtbl -> Delete(This) ) 

#define IMgaMetaReference_get_RegistryNodes(This,p)	\
    ( (This)->lpVtbl -> get_RegistryNodes(This,p) ) 

#define IMgaMetaReference_get_RegistryNode(This,path,p)	\
    ( (This)->lpVtbl -> get_RegistryNode(This,path,p) ) 

#define IMgaMetaReference_GetRegistryNodeDisp(This,path,p)	\
    ( (This)->lpVtbl -> GetRegistryNodeDisp(This,path,p) ) 

#define IMgaMetaReference_get_RegistryValue(This,path,p)	\
    ( (This)->lpVtbl -> get_RegistryValue(This,path,p) ) 

#define IMgaMetaReference_GetRegistryValueDisp(This,path,p)	\
    ( (This)->lpVtbl -> GetRegistryValueDisp(This,path,p) ) 

#define IMgaMetaReference_put_RegistryValue(This,path,p)	\
    ( (This)->lpVtbl -> put_RegistryValue(This,path,p) ) 

#define IMgaMetaReference_SetRegistryValueDisp(This,path,p)	\
    ( (This)->lpVtbl -> SetRegistryValueDisp(This,path,p) ) 

#define IMgaMetaReference_get_Constraints(This,p)	\
    ( (This)->lpVtbl -> get_Constraints(This,p) ) 

#define IMgaMetaReference_CreateConstraint(This,p)	\
    ( (This)->lpVtbl -> CreateConstraint(This,p) ) 


#define IMgaMetaReference_get_DefinedIn(This,p)	\
    ( (This)->lpVtbl -> get_DefinedIn(This,p) ) 

#define IMgaMetaReference_get_DefinedAttributes(This,p)	\
    ( (This)->lpVtbl -> get_DefinedAttributes(This,p) ) 

#define IMgaMetaReference_get_DefinedAttributeByName(This,name,inscope,p)	\
    ( (This)->lpVtbl -> get_DefinedAttributeByName(This,name,inscope,p) ) 

#define IMgaMetaReference_GetDefinedAttributeByNameDisp(This,name,inscope,p)	\
    ( (This)->lpVtbl -> GetDefinedAttributeByNameDisp(This,name,inscope,p) ) 

#define IMgaMetaReference_DefineAttribute(This,p)	\
    ( (This)->lpVtbl -> DefineAttribute(This,p) ) 

#define IMgaMetaReference_get_UsedInRoles(This,p)	\
    ( (This)->lpVtbl -> get_UsedInRoles(This,p) ) 

#define IMgaMetaReference_get_UsedInFolders(This,p)	\
    ( (This)->lpVtbl -> get_UsedInFolders(This,p) ) 

#define IMgaMetaReference_get_Attributes(This,p)	\
    ( (This)->lpVtbl -> get_Attributes(This,p) ) 

#define IMgaMetaReference_get_AttributeByName(This,name,p)	\
    ( (This)->lpVtbl -> get_AttributeByName(This,name,p) ) 

#define IMgaMetaReference_GetAttributeByNameDisp(This,name,p)	\
    ( (This)->lpVtbl -> GetAttributeByNameDisp(This,name,p) ) 

#define IMgaMetaReference_get_AttributeByRef(This,mref,p)	\
    ( (This)->lpVtbl -> get_AttributeByRef(This,mref,p) ) 

#define IMgaMetaReference_GetAttributeByRefDisp(This,mref,p)	\
    ( (This)->lpVtbl -> GetAttributeByRefDisp(This,mref,p) ) 

#define IMgaMetaReference_get_AliasingEnabled(This,pVal)	\
    ( (This)->lpVtbl -> get_AliasingEnabled(This,pVal) ) 

#define IMgaMetaReference_AddAttribute(This,p)	\
    ( (This)->lpVtbl -> AddAttribute(This,p) ) 

#define IMgaMetaReference_RemoveAttribute(This,p)	\
    ( (This)->lpVtbl -> RemoveAttribute(This,p) ) 

#define IMgaMetaReference_put_AliasingEnabled(This,newVal)	\
    ( (This)->lpVtbl -> put_AliasingEnabled(This,newVal) ) 


#define IMgaMetaReference_get_RefSpec(This,p)	\
    ( (This)->lpVtbl -> get_RefSpec(This,p) ) 

#define IMgaMetaReference_CheckPath(This,path,p)	\
    ( (This)->lpVtbl -> CheckPath(This,path,p) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IMgaMetaReference_INTERFACE_DEFINED__ */


#ifndef __IMgaMetaSet_INTERFACE_DEFINED__
#define __IMgaMetaSet_INTERFACE_DEFINED__

/* interface IMgaMetaSet */
/* [unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_IMgaMetaSet;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("83BA3253-B758-11D3-ABAE-000000000000")
    IMgaMetaSet : public IMgaMetaFCO
    {
    public:
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_MemberSpec( 
            /* [retval][out] */ IMgaMetaPointerSpec **p) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE CheckPath( 
            /* [in] */ BSTR path,
            /* [retval][out] */ VARIANT_BOOL *p) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IMgaMetaSetVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IMgaMetaSet * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IMgaMetaSet * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IMgaMetaSet * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IMgaMetaSet * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IMgaMetaSet * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IMgaMetaSet * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IMgaMetaSet * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_MetaRef )( 
            IMgaMetaSet * This,
            /* [retval][out] */ metaref_type *p);
        
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_MetaRef )( 
            IMgaMetaSet * This,
            /* [in] */ metaref_type p);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_MetaProject )( 
            IMgaMetaSet * This,
            /* [retval][out] */ IMgaMetaProject **p);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Name )( 
            IMgaMetaSet * This,
            /* [retval][out] */ BSTR *p);
        
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Name )( 
            IMgaMetaSet * This,
            /* [in] */ BSTR p);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_DisplayedName )( 
            IMgaMetaSet * This,
            /* [retval][out] */ BSTR *p);
        
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_DisplayedName )( 
            IMgaMetaSet * This,
            /* [in] */ BSTR p);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ObjType )( 
            IMgaMetaSet * This,
            /* [retval][out] */ objtype_enum *p);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Delete )( 
            IMgaMetaSet * This);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_RegistryNodes )( 
            IMgaMetaSet * This,
            /* [retval][out] */ IMgaMetaRegNodes **p);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_RegistryNode )( 
            IMgaMetaSet * This,
            /* [in] */ BSTR path,
            /* [retval][out] */ IMgaMetaRegNode **p);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetRegistryNodeDisp )( 
            IMgaMetaSet * This,
            /* [in] */ BSTR path,
            /* [retval][out] */ IMgaMetaRegNode **p);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_RegistryValue )( 
            IMgaMetaSet * This,
            /* [in] */ BSTR path,
            /* [retval][out] */ BSTR *p);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetRegistryValueDisp )( 
            IMgaMetaSet * This,
            /* [in] */ BSTR path,
            /* [retval][out] */ BSTR *p);
        
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_RegistryValue )( 
            IMgaMetaSet * This,
            /* [in] */ BSTR path,
            /* [in] */ BSTR p);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *SetRegistryValueDisp )( 
            IMgaMetaSet * This,
            /* [in] */ BSTR path,
            /* [in] */ BSTR p);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Constraints )( 
            IMgaMetaSet * This,
            /* [retval][out] */ IMgaConstraints **p);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *CreateConstraint )( 
            IMgaMetaSet * This,
            /* [retval][out] */ IMgaConstraint **p);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_DefinedIn )( 
            IMgaMetaSet * This,
            /* [retval][out] */ IMgaMetaBase **p);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_DefinedAttributes )( 
            IMgaMetaSet * This,
            /* [retval][out] */ IMgaMetaAttributes **p);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_DefinedAttributeByName )( 
            IMgaMetaSet * This,
            /* [in] */ BSTR name,
            /* [in] */ VARIANT_BOOL inscope,
            /* [retval][out] */ IMgaMetaAttribute **p);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetDefinedAttributeByNameDisp )( 
            IMgaMetaSet * This,
            /* [in] */ BSTR name,
            /* [in] */ VARIANT_BOOL inscope,
            /* [retval][out] */ IMgaMetaAttribute **p);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *DefineAttribute )( 
            IMgaMetaSet * This,
            /* [retval][out] */ IMgaMetaAttribute **p);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_UsedInRoles )( 
            IMgaMetaSet * This,
            /* [retval][out] */ IMgaMetaRoles **p);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_UsedInFolders )( 
            IMgaMetaSet * This,
            /* [retval][out] */ IMgaMetaFolders **p);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Attributes )( 
            IMgaMetaSet * This,
            /* [retval][out] */ IMgaMetaAttributes **p);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_AttributeByName )( 
            IMgaMetaSet * This,
            /* [in] */ BSTR name,
            /* [retval][out] */ IMgaMetaAttribute **p);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetAttributeByNameDisp )( 
            IMgaMetaSet * This,
            /* [in] */ BSTR name,
            /* [retval][out] */ IMgaMetaAttribute **p);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_AttributeByRef )( 
            IMgaMetaSet * This,
            /* [in] */ metaref_type mref,
            /* [retval][out] */ IMgaMetaAttribute **p);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetAttributeByRefDisp )( 
            IMgaMetaSet * This,
            /* [in] */ metaref_type mref,
            /* [retval][out] */ IMgaMetaAttribute **p);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_AliasingEnabled )( 
            IMgaMetaSet * This,
            /* [retval][out] */ VARIANT_BOOL *pVal);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *AddAttribute )( 
            IMgaMetaSet * This,
            /* [in] */ IMgaMetaAttribute *p);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *RemoveAttribute )( 
            IMgaMetaSet * This,
            /* [in] */ IMgaMetaAttribute *p);
        
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_AliasingEnabled )( 
            IMgaMetaSet * This,
            /* [in] */ VARIANT_BOOL newVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_MemberSpec )( 
            IMgaMetaSet * This,
            /* [retval][out] */ IMgaMetaPointerSpec **p);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *CheckPath )( 
            IMgaMetaSet * This,
            /* [in] */ BSTR path,
            /* [retval][out] */ VARIANT_BOOL *p);
        
        END_INTERFACE
    } IMgaMetaSetVtbl;

    interface IMgaMetaSet
    {
        CONST_VTBL struct IMgaMetaSetVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IMgaMetaSet_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IMgaMetaSet_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IMgaMetaSet_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IMgaMetaSet_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IMgaMetaSet_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IMgaMetaSet_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IMgaMetaSet_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IMgaMetaSet_get_MetaRef(This,p)	\
    ( (This)->lpVtbl -> get_MetaRef(This,p) ) 

#define IMgaMetaSet_put_MetaRef(This,p)	\
    ( (This)->lpVtbl -> put_MetaRef(This,p) ) 

#define IMgaMetaSet_get_MetaProject(This,p)	\
    ( (This)->lpVtbl -> get_MetaProject(This,p) ) 

#define IMgaMetaSet_get_Name(This,p)	\
    ( (This)->lpVtbl -> get_Name(This,p) ) 

#define IMgaMetaSet_put_Name(This,p)	\
    ( (This)->lpVtbl -> put_Name(This,p) ) 

#define IMgaMetaSet_get_DisplayedName(This,p)	\
    ( (This)->lpVtbl -> get_DisplayedName(This,p) ) 

#define IMgaMetaSet_put_DisplayedName(This,p)	\
    ( (This)->lpVtbl -> put_DisplayedName(This,p) ) 

#define IMgaMetaSet_get_ObjType(This,p)	\
    ( (This)->lpVtbl -> get_ObjType(This,p) ) 

#define IMgaMetaSet_Delete(This)	\
    ( (This)->lpVtbl -> Delete(This) ) 

#define IMgaMetaSet_get_RegistryNodes(This,p)	\
    ( (This)->lpVtbl -> get_RegistryNodes(This,p) ) 

#define IMgaMetaSet_get_RegistryNode(This,path,p)	\
    ( (This)->lpVtbl -> get_RegistryNode(This,path,p) ) 

#define IMgaMetaSet_GetRegistryNodeDisp(This,path,p)	\
    ( (This)->lpVtbl -> GetRegistryNodeDisp(This,path,p) ) 

#define IMgaMetaSet_get_RegistryValue(This,path,p)	\
    ( (This)->lpVtbl -> get_RegistryValue(This,path,p) ) 

#define IMgaMetaSet_GetRegistryValueDisp(This,path,p)	\
    ( (This)->lpVtbl -> GetRegistryValueDisp(This,path,p) ) 

#define IMgaMetaSet_put_RegistryValue(This,path,p)	\
    ( (This)->lpVtbl -> put_RegistryValue(This,path,p) ) 

#define IMgaMetaSet_SetRegistryValueDisp(This,path,p)	\
    ( (This)->lpVtbl -> SetRegistryValueDisp(This,path,p) ) 

#define IMgaMetaSet_get_Constraints(This,p)	\
    ( (This)->lpVtbl -> get_Constraints(This,p) ) 

#define IMgaMetaSet_CreateConstraint(This,p)	\
    ( (This)->lpVtbl -> CreateConstraint(This,p) ) 


#define IMgaMetaSet_get_DefinedIn(This,p)	\
    ( (This)->lpVtbl -> get_DefinedIn(This,p) ) 

#define IMgaMetaSet_get_DefinedAttributes(This,p)	\
    ( (This)->lpVtbl -> get_DefinedAttributes(This,p) ) 

#define IMgaMetaSet_get_DefinedAttributeByName(This,name,inscope,p)	\
    ( (This)->lpVtbl -> get_DefinedAttributeByName(This,name,inscope,p) ) 

#define IMgaMetaSet_GetDefinedAttributeByNameDisp(This,name,inscope,p)	\
    ( (This)->lpVtbl -> GetDefinedAttributeByNameDisp(This,name,inscope,p) ) 

#define IMgaMetaSet_DefineAttribute(This,p)	\
    ( (This)->lpVtbl -> DefineAttribute(This,p) ) 

#define IMgaMetaSet_get_UsedInRoles(This,p)	\
    ( (This)->lpVtbl -> get_UsedInRoles(This,p) ) 

#define IMgaMetaSet_get_UsedInFolders(This,p)	\
    ( (This)->lpVtbl -> get_UsedInFolders(This,p) ) 

#define IMgaMetaSet_get_Attributes(This,p)	\
    ( (This)->lpVtbl -> get_Attributes(This,p) ) 

#define IMgaMetaSet_get_AttributeByName(This,name,p)	\
    ( (This)->lpVtbl -> get_AttributeByName(This,name,p) ) 

#define IMgaMetaSet_GetAttributeByNameDisp(This,name,p)	\
    ( (This)->lpVtbl -> GetAttributeByNameDisp(This,name,p) ) 

#define IMgaMetaSet_get_AttributeByRef(This,mref,p)	\
    ( (This)->lpVtbl -> get_AttributeByRef(This,mref,p) ) 

#define IMgaMetaSet_GetAttributeByRefDisp(This,mref,p)	\
    ( (This)->lpVtbl -> GetAttributeByRefDisp(This,mref,p) ) 

#define IMgaMetaSet_get_AliasingEnabled(This,pVal)	\
    ( (This)->lpVtbl -> get_AliasingEnabled(This,pVal) ) 

#define IMgaMetaSet_AddAttribute(This,p)	\
    ( (This)->lpVtbl -> AddAttribute(This,p) ) 

#define IMgaMetaSet_RemoveAttribute(This,p)	\
    ( (This)->lpVtbl -> RemoveAttribute(This,p) ) 

#define IMgaMetaSet_put_AliasingEnabled(This,newVal)	\
    ( (This)->lpVtbl -> put_AliasingEnabled(This,newVal) ) 


#define IMgaMetaSet_get_MemberSpec(This,p)	\
    ( (This)->lpVtbl -> get_MemberSpec(This,p) ) 

#define IMgaMetaSet_CheckPath(This,path,p)	\
    ( (This)->lpVtbl -> CheckPath(This,path,p) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IMgaMetaSet_INTERFACE_DEFINED__ */


#ifndef __IMgaMetaConnection_INTERFACE_DEFINED__
#define __IMgaMetaConnection_INTERFACE_DEFINED__

/* interface IMgaMetaConnection */
/* [unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_IMgaMetaConnection;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("83BA3255-B758-11D3-ABAE-000000000000")
    IMgaMetaConnection : public IMgaMetaFCO
    {
    public:
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Joints( 
            /* [retval][out] */ IMgaMetaConnJoints **p) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE CheckPaths( 
            /* [in] */ BSTR paths,
            /* [retval][out] */ VARIANT_BOOL *p) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_IsSimple( 
            /* [retval][out] */ VARIANT_BOOL *p) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE CreateJoint( 
            /* [retval][out] */ IMgaMetaConnJoint **p) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IMgaMetaConnectionVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IMgaMetaConnection * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IMgaMetaConnection * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IMgaMetaConnection * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IMgaMetaConnection * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IMgaMetaConnection * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IMgaMetaConnection * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IMgaMetaConnection * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_MetaRef )( 
            IMgaMetaConnection * This,
            /* [retval][out] */ metaref_type *p);
        
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_MetaRef )( 
            IMgaMetaConnection * This,
            /* [in] */ metaref_type p);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_MetaProject )( 
            IMgaMetaConnection * This,
            /* [retval][out] */ IMgaMetaProject **p);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Name )( 
            IMgaMetaConnection * This,
            /* [retval][out] */ BSTR *p);
        
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Name )( 
            IMgaMetaConnection * This,
            /* [in] */ BSTR p);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_DisplayedName )( 
            IMgaMetaConnection * This,
            /* [retval][out] */ BSTR *p);
        
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_DisplayedName )( 
            IMgaMetaConnection * This,
            /* [in] */ BSTR p);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ObjType )( 
            IMgaMetaConnection * This,
            /* [retval][out] */ objtype_enum *p);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Delete )( 
            IMgaMetaConnection * This);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_RegistryNodes )( 
            IMgaMetaConnection * This,
            /* [retval][out] */ IMgaMetaRegNodes **p);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_RegistryNode )( 
            IMgaMetaConnection * This,
            /* [in] */ BSTR path,
            /* [retval][out] */ IMgaMetaRegNode **p);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetRegistryNodeDisp )( 
            IMgaMetaConnection * This,
            /* [in] */ BSTR path,
            /* [retval][out] */ IMgaMetaRegNode **p);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_RegistryValue )( 
            IMgaMetaConnection * This,
            /* [in] */ BSTR path,
            /* [retval][out] */ BSTR *p);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetRegistryValueDisp )( 
            IMgaMetaConnection * This,
            /* [in] */ BSTR path,
            /* [retval][out] */ BSTR *p);
        
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_RegistryValue )( 
            IMgaMetaConnection * This,
            /* [in] */ BSTR path,
            /* [in] */ BSTR p);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *SetRegistryValueDisp )( 
            IMgaMetaConnection * This,
            /* [in] */ BSTR path,
            /* [in] */ BSTR p);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Constraints )( 
            IMgaMetaConnection * This,
            /* [retval][out] */ IMgaConstraints **p);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *CreateConstraint )( 
            IMgaMetaConnection * This,
            /* [retval][out] */ IMgaConstraint **p);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_DefinedIn )( 
            IMgaMetaConnection * This,
            /* [retval][out] */ IMgaMetaBase **p);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_DefinedAttributes )( 
            IMgaMetaConnection * This,
            /* [retval][out] */ IMgaMetaAttributes **p);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_DefinedAttributeByName )( 
            IMgaMetaConnection * This,
            /* [in] */ BSTR name,
            /* [in] */ VARIANT_BOOL inscope,
            /* [retval][out] */ IMgaMetaAttribute **p);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetDefinedAttributeByNameDisp )( 
            IMgaMetaConnection * This,
            /* [in] */ BSTR name,
            /* [in] */ VARIANT_BOOL inscope,
            /* [retval][out] */ IMgaMetaAttribute **p);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *DefineAttribute )( 
            IMgaMetaConnection * This,
            /* [retval][out] */ IMgaMetaAttribute **p);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_UsedInRoles )( 
            IMgaMetaConnection * This,
            /* [retval][out] */ IMgaMetaRoles **p);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_UsedInFolders )( 
            IMgaMetaConnection * This,
            /* [retval][out] */ IMgaMetaFolders **p);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Attributes )( 
            IMgaMetaConnection * This,
            /* [retval][out] */ IMgaMetaAttributes **p);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_AttributeByName )( 
            IMgaMetaConnection * This,
            /* [in] */ BSTR name,
            /* [retval][out] */ IMgaMetaAttribute **p);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetAttributeByNameDisp )( 
            IMgaMetaConnection * This,
            /* [in] */ BSTR name,
            /* [retval][out] */ IMgaMetaAttribute **p);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_AttributeByRef )( 
            IMgaMetaConnection * This,
            /* [in] */ metaref_type mref,
            /* [retval][out] */ IMgaMetaAttribute **p);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetAttributeByRefDisp )( 
            IMgaMetaConnection * This,
            /* [in] */ metaref_type mref,
            /* [retval][out] */ IMgaMetaAttribute **p);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_AliasingEnabled )( 
            IMgaMetaConnection * This,
            /* [retval][out] */ VARIANT_BOOL *pVal);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *AddAttribute )( 
            IMgaMetaConnection * This,
            /* [in] */ IMgaMetaAttribute *p);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *RemoveAttribute )( 
            IMgaMetaConnection * This,
            /* [in] */ IMgaMetaAttribute *p);
        
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_AliasingEnabled )( 
            IMgaMetaConnection * This,
            /* [in] */ VARIANT_BOOL newVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Joints )( 
            IMgaMetaConnection * This,
            /* [retval][out] */ IMgaMetaConnJoints **p);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *CheckPaths )( 
            IMgaMetaConnection * This,
            /* [in] */ BSTR paths,
            /* [retval][out] */ VARIANT_BOOL *p);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_IsSimple )( 
            IMgaMetaConnection * This,
            /* [retval][out] */ VARIANT_BOOL *p);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *CreateJoint )( 
            IMgaMetaConnection * This,
            /* [retval][out] */ IMgaMetaConnJoint **p);
        
        END_INTERFACE
    } IMgaMetaConnectionVtbl;

    interface IMgaMetaConnection
    {
        CONST_VTBL struct IMgaMetaConnectionVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IMgaMetaConnection_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IMgaMetaConnection_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IMgaMetaConnection_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IMgaMetaConnection_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IMgaMetaConnection_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IMgaMetaConnection_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IMgaMetaConnection_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IMgaMetaConnection_get_MetaRef(This,p)	\
    ( (This)->lpVtbl -> get_MetaRef(This,p) ) 

#define IMgaMetaConnection_put_MetaRef(This,p)	\
    ( (This)->lpVtbl -> put_MetaRef(This,p) ) 

#define IMgaMetaConnection_get_MetaProject(This,p)	\
    ( (This)->lpVtbl -> get_MetaProject(This,p) ) 

#define IMgaMetaConnection_get_Name(This,p)	\
    ( (This)->lpVtbl -> get_Name(This,p) ) 

#define IMgaMetaConnection_put_Name(This,p)	\
    ( (This)->lpVtbl -> put_Name(This,p) ) 

#define IMgaMetaConnection_get_DisplayedName(This,p)	\
    ( (This)->lpVtbl -> get_DisplayedName(This,p) ) 

#define IMgaMetaConnection_put_DisplayedName(This,p)	\
    ( (This)->lpVtbl -> put_DisplayedName(This,p) ) 

#define IMgaMetaConnection_get_ObjType(This,p)	\
    ( (This)->lpVtbl -> get_ObjType(This,p) ) 

#define IMgaMetaConnection_Delete(This)	\
    ( (This)->lpVtbl -> Delete(This) ) 

#define IMgaMetaConnection_get_RegistryNodes(This,p)	\
    ( (This)->lpVtbl -> get_RegistryNodes(This,p) ) 

#define IMgaMetaConnection_get_RegistryNode(This,path,p)	\
    ( (This)->lpVtbl -> get_RegistryNode(This,path,p) ) 

#define IMgaMetaConnection_GetRegistryNodeDisp(This,path,p)	\
    ( (This)->lpVtbl -> GetRegistryNodeDisp(This,path,p) ) 

#define IMgaMetaConnection_get_RegistryValue(This,path,p)	\
    ( (This)->lpVtbl -> get_RegistryValue(This,path,p) ) 

#define IMgaMetaConnection_GetRegistryValueDisp(This,path,p)	\
    ( (This)->lpVtbl -> GetRegistryValueDisp(This,path,p) ) 

#define IMgaMetaConnection_put_RegistryValue(This,path,p)	\
    ( (This)->lpVtbl -> put_RegistryValue(This,path,p) ) 

#define IMgaMetaConnection_SetRegistryValueDisp(This,path,p)	\
    ( (This)->lpVtbl -> SetRegistryValueDisp(This,path,p) ) 

#define IMgaMetaConnection_get_Constraints(This,p)	\
    ( (This)->lpVtbl -> get_Constraints(This,p) ) 

#define IMgaMetaConnection_CreateConstraint(This,p)	\
    ( (This)->lpVtbl -> CreateConstraint(This,p) ) 


#define IMgaMetaConnection_get_DefinedIn(This,p)	\
    ( (This)->lpVtbl -> get_DefinedIn(This,p) ) 

#define IMgaMetaConnection_get_DefinedAttributes(This,p)	\
    ( (This)->lpVtbl -> get_DefinedAttributes(This,p) ) 

#define IMgaMetaConnection_get_DefinedAttributeByName(This,name,inscope,p)	\
    ( (This)->lpVtbl -> get_DefinedAttributeByName(This,name,inscope,p) ) 

#define IMgaMetaConnection_GetDefinedAttributeByNameDisp(This,name,inscope,p)	\
    ( (This)->lpVtbl -> GetDefinedAttributeByNameDisp(This,name,inscope,p) ) 

#define IMgaMetaConnection_DefineAttribute(This,p)	\
    ( (This)->lpVtbl -> DefineAttribute(This,p) ) 

#define IMgaMetaConnection_get_UsedInRoles(This,p)	\
    ( (This)->lpVtbl -> get_UsedInRoles(This,p) ) 

#define IMgaMetaConnection_get_UsedInFolders(This,p)	\
    ( (This)->lpVtbl -> get_UsedInFolders(This,p) ) 

#define IMgaMetaConnection_get_Attributes(This,p)	\
    ( (This)->lpVtbl -> get_Attributes(This,p) ) 

#define IMgaMetaConnection_get_AttributeByName(This,name,p)	\
    ( (This)->lpVtbl -> get_AttributeByName(This,name,p) ) 

#define IMgaMetaConnection_GetAttributeByNameDisp(This,name,p)	\
    ( (This)->lpVtbl -> GetAttributeByNameDisp(This,name,p) ) 

#define IMgaMetaConnection_get_AttributeByRef(This,mref,p)	\
    ( (This)->lpVtbl -> get_AttributeByRef(This,mref,p) ) 

#define IMgaMetaConnection_GetAttributeByRefDisp(This,mref,p)	\
    ( (This)->lpVtbl -> GetAttributeByRefDisp(This,mref,p) ) 

#define IMgaMetaConnection_get_AliasingEnabled(This,pVal)	\
    ( (This)->lpVtbl -> get_AliasingEnabled(This,pVal) ) 

#define IMgaMetaConnection_AddAttribute(This,p)	\
    ( (This)->lpVtbl -> AddAttribute(This,p) ) 

#define IMgaMetaConnection_RemoveAttribute(This,p)	\
    ( (This)->lpVtbl -> RemoveAttribute(This,p) ) 

#define IMgaMetaConnection_put_AliasingEnabled(This,newVal)	\
    ( (This)->lpVtbl -> put_AliasingEnabled(This,newVal) ) 


#define IMgaMetaConnection_get_Joints(This,p)	\
    ( (This)->lpVtbl -> get_Joints(This,p) ) 

#define IMgaMetaConnection_CheckPaths(This,paths,p)	\
    ( (This)->lpVtbl -> CheckPaths(This,paths,p) ) 

#define IMgaMetaConnection_get_IsSimple(This,p)	\
    ( (This)->lpVtbl -> get_IsSimple(This,p) ) 

#define IMgaMetaConnection_CreateJoint(This,p)	\
    ( (This)->lpVtbl -> CreateJoint(This,p) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IMgaMetaConnection_INTERFACE_DEFINED__ */


#ifndef __IMgaMetaConnJoint_INTERFACE_DEFINED__
#define __IMgaMetaConnJoint_INTERFACE_DEFINED__

/* interface IMgaMetaConnJoint */
/* [unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_IMgaMetaConnJoint;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("83BA3257-B758-11D3-ABAE-000000000000")
    IMgaMetaConnJoint : public IDispatch
    {
    public:
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Parent( 
            /* [retval][out] */ IMgaMetaConnection **p) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_PointerSpecs( 
            /* [retval][out] */ IMgaMetaPointerSpecs **p) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_PointerSpecByName( 
            /* [in] */ BSTR name,
            /* [retval][out] */ IMgaMetaPointerSpec **p) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetPointerSpecByNameDisp( 
            /* [in] */ BSTR name,
            /* [retval][out] */ IMgaMetaPointerSpec **p) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE CreatePointerSpec( 
            /* [retval][out] */ IMgaMetaPointerSpec **p) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IMgaMetaConnJointVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IMgaMetaConnJoint * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IMgaMetaConnJoint * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IMgaMetaConnJoint * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IMgaMetaConnJoint * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IMgaMetaConnJoint * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IMgaMetaConnJoint * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IMgaMetaConnJoint * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Parent )( 
            IMgaMetaConnJoint * This,
            /* [retval][out] */ IMgaMetaConnection **p);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_PointerSpecs )( 
            IMgaMetaConnJoint * This,
            /* [retval][out] */ IMgaMetaPointerSpecs **p);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_PointerSpecByName )( 
            IMgaMetaConnJoint * This,
            /* [in] */ BSTR name,
            /* [retval][out] */ IMgaMetaPointerSpec **p);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetPointerSpecByNameDisp )( 
            IMgaMetaConnJoint * This,
            /* [in] */ BSTR name,
            /* [retval][out] */ IMgaMetaPointerSpec **p);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *CreatePointerSpec )( 
            IMgaMetaConnJoint * This,
            /* [retval][out] */ IMgaMetaPointerSpec **p);
        
        END_INTERFACE
    } IMgaMetaConnJointVtbl;

    interface IMgaMetaConnJoint
    {
        CONST_VTBL struct IMgaMetaConnJointVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IMgaMetaConnJoint_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IMgaMetaConnJoint_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IMgaMetaConnJoint_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IMgaMetaConnJoint_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IMgaMetaConnJoint_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IMgaMetaConnJoint_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IMgaMetaConnJoint_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IMgaMetaConnJoint_get_Parent(This,p)	\
    ( (This)->lpVtbl -> get_Parent(This,p) ) 

#define IMgaMetaConnJoint_get_PointerSpecs(This,p)	\
    ( (This)->lpVtbl -> get_PointerSpecs(This,p) ) 

#define IMgaMetaConnJoint_get_PointerSpecByName(This,name,p)	\
    ( (This)->lpVtbl -> get_PointerSpecByName(This,name,p) ) 

#define IMgaMetaConnJoint_GetPointerSpecByNameDisp(This,name,p)	\
    ( (This)->lpVtbl -> GetPointerSpecByNameDisp(This,name,p) ) 

#define IMgaMetaConnJoint_CreatePointerSpec(This,p)	\
    ( (This)->lpVtbl -> CreatePointerSpec(This,p) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IMgaMetaConnJoint_INTERFACE_DEFINED__ */


#ifndef __IMgaMetaPointerSpec_INTERFACE_DEFINED__
#define __IMgaMetaPointerSpec_INTERFACE_DEFINED__

/* interface IMgaMetaPointerSpec */
/* [unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_IMgaMetaPointerSpec;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("83BA325B-B758-11D3-ABAE-000000000000")
    IMgaMetaPointerSpec : public IDispatch
    {
    public:
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Parent( 
            /* [retval][out] */ IDispatch **p) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Name( 
            /* [retval][out] */ BSTR *p) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Items( 
            /* [retval][out] */ IMgaMetaPointerItems **p) = 0;
        
        virtual /* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_Name( 
            /* [in] */ BSTR p) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE CreateItem( 
            /* [retval][out] */ IMgaMetaPointerItem **p) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IMgaMetaPointerSpecVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IMgaMetaPointerSpec * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IMgaMetaPointerSpec * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IMgaMetaPointerSpec * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IMgaMetaPointerSpec * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IMgaMetaPointerSpec * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IMgaMetaPointerSpec * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IMgaMetaPointerSpec * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Parent )( 
            IMgaMetaPointerSpec * This,
            /* [retval][out] */ IDispatch **p);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Name )( 
            IMgaMetaPointerSpec * This,
            /* [retval][out] */ BSTR *p);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Items )( 
            IMgaMetaPointerSpec * This,
            /* [retval][out] */ IMgaMetaPointerItems **p);
        
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Name )( 
            IMgaMetaPointerSpec * This,
            /* [in] */ BSTR p);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *CreateItem )( 
            IMgaMetaPointerSpec * This,
            /* [retval][out] */ IMgaMetaPointerItem **p);
        
        END_INTERFACE
    } IMgaMetaPointerSpecVtbl;

    interface IMgaMetaPointerSpec
    {
        CONST_VTBL struct IMgaMetaPointerSpecVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IMgaMetaPointerSpec_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IMgaMetaPointerSpec_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IMgaMetaPointerSpec_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IMgaMetaPointerSpec_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IMgaMetaPointerSpec_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IMgaMetaPointerSpec_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IMgaMetaPointerSpec_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IMgaMetaPointerSpec_get_Parent(This,p)	\
    ( (This)->lpVtbl -> get_Parent(This,p) ) 

#define IMgaMetaPointerSpec_get_Name(This,p)	\
    ( (This)->lpVtbl -> get_Name(This,p) ) 

#define IMgaMetaPointerSpec_get_Items(This,p)	\
    ( (This)->lpVtbl -> get_Items(This,p) ) 

#define IMgaMetaPointerSpec_put_Name(This,p)	\
    ( (This)->lpVtbl -> put_Name(This,p) ) 

#define IMgaMetaPointerSpec_CreateItem(This,p)	\
    ( (This)->lpVtbl -> CreateItem(This,p) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IMgaMetaPointerSpec_INTERFACE_DEFINED__ */


#ifndef __IMgaMetaPointerItem_INTERFACE_DEFINED__
#define __IMgaMetaPointerItem_INTERFACE_DEFINED__

/* interface IMgaMetaPointerItem */
/* [unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_IMgaMetaPointerItem;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("83518A5B-B758-11D3-ABAE-006928360000")
    IMgaMetaPointerItem : public IDispatch
    {
    public:
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Parent( 
            /* [retval][out] */ IMgaMetaPointerSpec **p) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Desc( 
            /* [retval][out] */ BSTR *p) = 0;
        
        virtual /* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_Desc( 
            /* [in] */ BSTR p) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IMgaMetaPointerItemVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IMgaMetaPointerItem * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IMgaMetaPointerItem * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IMgaMetaPointerItem * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IMgaMetaPointerItem * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IMgaMetaPointerItem * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IMgaMetaPointerItem * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IMgaMetaPointerItem * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Parent )( 
            IMgaMetaPointerItem * This,
            /* [retval][out] */ IMgaMetaPointerSpec **p);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Desc )( 
            IMgaMetaPointerItem * This,
            /* [retval][out] */ BSTR *p);
        
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Desc )( 
            IMgaMetaPointerItem * This,
            /* [in] */ BSTR p);
        
        END_INTERFACE
    } IMgaMetaPointerItemVtbl;

    interface IMgaMetaPointerItem
    {
        CONST_VTBL struct IMgaMetaPointerItemVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IMgaMetaPointerItem_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IMgaMetaPointerItem_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IMgaMetaPointerItem_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IMgaMetaPointerItem_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IMgaMetaPointerItem_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IMgaMetaPointerItem_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IMgaMetaPointerItem_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IMgaMetaPointerItem_get_Parent(This,p)	\
    ( (This)->lpVtbl -> get_Parent(This,p) ) 

#define IMgaMetaPointerItem_get_Desc(This,p)	\
    ( (This)->lpVtbl -> get_Desc(This,p) ) 

#define IMgaMetaPointerItem_put_Desc(This,p)	\
    ( (This)->lpVtbl -> put_Desc(This,p) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IMgaMetaPointerItem_INTERFACE_DEFINED__ */


#ifndef __IMgaMetaAspects_INTERFACE_DEFINED__
#define __IMgaMetaAspects_INTERFACE_DEFINED__

/* interface IMgaMetaAspects */
/* [unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_IMgaMetaAspects;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("c61352b0-c1fd-11d3-9ad2-00aa00b6fe26")
    IMgaMetaAspects : public IDispatch
    {
    public:
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Count( 
            /* [retval][out] */ long *p) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Item( 
            /* [in] */ long n,
            /* [retval][out] */ IMgaMetaAspect **p) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get__NewEnum( 
            /* [retval][out] */ IUnknown **p) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetAll( 
            /* [in] */ long count,
            /* [size_is][out] */ IMgaMetaAspect **p) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Insert( 
            /* [in] */ IMgaMetaAspect *p,
            /* [in] */ long at) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Append( 
            /* [in] */ IMgaMetaAspect *p) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Find( 
            /* [in] */ IMgaMetaAspect *p,
            /* [in] */ long start,
            /* [retval][out] */ long *res) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Remove( 
            /* [in] */ long n) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IMgaMetaAspectsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IMgaMetaAspects * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IMgaMetaAspects * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IMgaMetaAspects * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IMgaMetaAspects * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IMgaMetaAspects * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IMgaMetaAspects * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IMgaMetaAspects * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Count )( 
            IMgaMetaAspects * This,
            /* [retval][out] */ long *p);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Item )( 
            IMgaMetaAspects * This,
            /* [in] */ long n,
            /* [retval][out] */ IMgaMetaAspect **p);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get__NewEnum )( 
            IMgaMetaAspects * This,
            /* [retval][out] */ IUnknown **p);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetAll )( 
            IMgaMetaAspects * This,
            /* [in] */ long count,
            /* [size_is][out] */ IMgaMetaAspect **p);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Insert )( 
            IMgaMetaAspects * This,
            /* [in] */ IMgaMetaAspect *p,
            /* [in] */ long at);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Append )( 
            IMgaMetaAspects * This,
            /* [in] */ IMgaMetaAspect *p);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Find )( 
            IMgaMetaAspects * This,
            /* [in] */ IMgaMetaAspect *p,
            /* [in] */ long start,
            /* [retval][out] */ long *res);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Remove )( 
            IMgaMetaAspects * This,
            /* [in] */ long n);
        
        END_INTERFACE
    } IMgaMetaAspectsVtbl;

    interface IMgaMetaAspects
    {
        CONST_VTBL struct IMgaMetaAspectsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IMgaMetaAspects_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IMgaMetaAspects_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IMgaMetaAspects_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IMgaMetaAspects_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IMgaMetaAspects_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IMgaMetaAspects_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IMgaMetaAspects_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IMgaMetaAspects_get_Count(This,p)	\
    ( (This)->lpVtbl -> get_Count(This,p) ) 

#define IMgaMetaAspects_get_Item(This,n,p)	\
    ( (This)->lpVtbl -> get_Item(This,n,p) ) 

#define IMgaMetaAspects_get__NewEnum(This,p)	\
    ( (This)->lpVtbl -> get__NewEnum(This,p) ) 

#define IMgaMetaAspects_GetAll(This,count,p)	\
    ( (This)->lpVtbl -> GetAll(This,count,p) ) 

#define IMgaMetaAspects_Insert(This,p,at)	\
    ( (This)->lpVtbl -> Insert(This,p,at) ) 

#define IMgaMetaAspects_Append(This,p)	\
    ( (This)->lpVtbl -> Append(This,p) ) 

#define IMgaMetaAspects_Find(This,p,start,res)	\
    ( (This)->lpVtbl -> Find(This,p,start,res) ) 

#define IMgaMetaAspects_Remove(This,n)	\
    ( (This)->lpVtbl -> Remove(This,n) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IMgaMetaAspects_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_Meta_0000_0020 */
/* [local] */ 

#ifdef __cplusplus
extern "C++"    
{            
template<> struct ::TypeName_MgaColl2Elem<IMgaMetaAspects>
{ typedef IMgaMetaAspects collection_type; typedef IMgaMetaAspect element_type; };
template<> struct ::TypeName_MgaElem2Coll<IMgaMetaAspect>
{ typedef IMgaMetaAspects collection_type; typedef IMgaMetaAspect element_type; };
}            
#endif


extern RPC_IF_HANDLE __MIDL_itf_Meta_0000_0020_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_Meta_0000_0020_v0_0_s_ifspec;

#ifndef __IMgaMetaRoles_INTERFACE_DEFINED__
#define __IMgaMetaRoles_INTERFACE_DEFINED__

/* interface IMgaMetaRoles */
/* [unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_IMgaMetaRoles;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("c851e130-c1fd-11d3-9ad2-00aa00b6fe26")
    IMgaMetaRoles : public IDispatch
    {
    public:
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Count( 
            /* [retval][out] */ long *p) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Item( 
            /* [in] */ long n,
            /* [retval][out] */ IMgaMetaRole **p) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get__NewEnum( 
            /* [retval][out] */ IUnknown **p) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetAll( 
            /* [in] */ long count,
            /* [size_is][out] */ IMgaMetaRole **p) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Insert( 
            /* [in] */ IMgaMetaRole *p,
            /* [in] */ long at) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Append( 
            /* [in] */ IMgaMetaRole *p) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Find( 
            /* [in] */ IMgaMetaRole *p,
            /* [in] */ long start,
            /* [retval][out] */ long *res) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Remove( 
            /* [in] */ long n) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IMgaMetaRolesVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IMgaMetaRoles * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IMgaMetaRoles * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IMgaMetaRoles * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IMgaMetaRoles * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IMgaMetaRoles * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IMgaMetaRoles * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IMgaMetaRoles * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Count )( 
            IMgaMetaRoles * This,
            /* [retval][out] */ long *p);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Item )( 
            IMgaMetaRoles * This,
            /* [in] */ long n,
            /* [retval][out] */ IMgaMetaRole **p);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get__NewEnum )( 
            IMgaMetaRoles * This,
            /* [retval][out] */ IUnknown **p);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetAll )( 
            IMgaMetaRoles * This,
            /* [in] */ long count,
            /* [size_is][out] */ IMgaMetaRole **p);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Insert )( 
            IMgaMetaRoles * This,
            /* [in] */ IMgaMetaRole *p,
            /* [in] */ long at);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Append )( 
            IMgaMetaRoles * This,
            /* [in] */ IMgaMetaRole *p);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Find )( 
            IMgaMetaRoles * This,
            /* [in] */ IMgaMetaRole *p,
            /* [in] */ long start,
            /* [retval][out] */ long *res);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Remove )( 
            IMgaMetaRoles * This,
            /* [in] */ long n);
        
        END_INTERFACE
    } IMgaMetaRolesVtbl;

    interface IMgaMetaRoles
    {
        CONST_VTBL struct IMgaMetaRolesVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IMgaMetaRoles_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IMgaMetaRoles_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IMgaMetaRoles_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IMgaMetaRoles_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IMgaMetaRoles_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IMgaMetaRoles_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IMgaMetaRoles_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IMgaMetaRoles_get_Count(This,p)	\
    ( (This)->lpVtbl -> get_Count(This,p) ) 

#define IMgaMetaRoles_get_Item(This,n,p)	\
    ( (This)->lpVtbl -> get_Item(This,n,p) ) 

#define IMgaMetaRoles_get__NewEnum(This,p)	\
    ( (This)->lpVtbl -> get__NewEnum(This,p) ) 

#define IMgaMetaRoles_GetAll(This,count,p)	\
    ( (This)->lpVtbl -> GetAll(This,count,p) ) 

#define IMgaMetaRoles_Insert(This,p,at)	\
    ( (This)->lpVtbl -> Insert(This,p,at) ) 

#define IMgaMetaRoles_Append(This,p)	\
    ( (This)->lpVtbl -> Append(This,p) ) 

#define IMgaMetaRoles_Find(This,p,start,res)	\
    ( (This)->lpVtbl -> Find(This,p,start,res) ) 

#define IMgaMetaRoles_Remove(This,n)	\
    ( (This)->lpVtbl -> Remove(This,n) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IMgaMetaRoles_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_Meta_0000_0021 */
/* [local] */ 

#ifdef __cplusplus
extern "C++"    
{            
template<> struct ::TypeName_MgaColl2Elem<IMgaMetaRoles>
{ typedef IMgaMetaRoles collection_type; typedef IMgaMetaRole element_type; };
template<> struct ::TypeName_MgaElem2Coll<IMgaMetaRole>
{ typedef IMgaMetaRoles collection_type; typedef IMgaMetaRole element_type; };
}            
#endif


extern RPC_IF_HANDLE __MIDL_itf_Meta_0000_0021_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_Meta_0000_0021_v0_0_s_ifspec;

#ifndef __IMgaMetaFCOs_INTERFACE_DEFINED__
#define __IMgaMetaFCOs_INTERFACE_DEFINED__

/* interface IMgaMetaFCOs */
/* [unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_IMgaMetaFCOs;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("c66a6c60-c1fd-11d3-9ad2-00aa00b6fe26")
    IMgaMetaFCOs : public IDispatch
    {
    public:
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Count( 
            /* [retval][out] */ long *p) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Item( 
            /* [in] */ long n,
            /* [retval][out] */ IMgaMetaFCO **p) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get__NewEnum( 
            /* [retval][out] */ IUnknown **p) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetAll( 
            /* [in] */ long count,
            /* [size_is][out] */ IMgaMetaFCO **p) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Insert( 
            /* [in] */ IMgaMetaFCO *p,
            /* [in] */ long at) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Append( 
            /* [in] */ IMgaMetaFCO *p) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Find( 
            /* [in] */ IMgaMetaFCO *p,
            /* [in] */ long start,
            /* [retval][out] */ long *res) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Remove( 
            /* [in] */ long n) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IMgaMetaFCOsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IMgaMetaFCOs * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IMgaMetaFCOs * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IMgaMetaFCOs * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IMgaMetaFCOs * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IMgaMetaFCOs * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IMgaMetaFCOs * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IMgaMetaFCOs * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Count )( 
            IMgaMetaFCOs * This,
            /* [retval][out] */ long *p);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Item )( 
            IMgaMetaFCOs * This,
            /* [in] */ long n,
            /* [retval][out] */ IMgaMetaFCO **p);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get__NewEnum )( 
            IMgaMetaFCOs * This,
            /* [retval][out] */ IUnknown **p);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetAll )( 
            IMgaMetaFCOs * This,
            /* [in] */ long count,
            /* [size_is][out] */ IMgaMetaFCO **p);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Insert )( 
            IMgaMetaFCOs * This,
            /* [in] */ IMgaMetaFCO *p,
            /* [in] */ long at);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Append )( 
            IMgaMetaFCOs * This,
            /* [in] */ IMgaMetaFCO *p);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Find )( 
            IMgaMetaFCOs * This,
            /* [in] */ IMgaMetaFCO *p,
            /* [in] */ long start,
            /* [retval][out] */ long *res);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Remove )( 
            IMgaMetaFCOs * This,
            /* [in] */ long n);
        
        END_INTERFACE
    } IMgaMetaFCOsVtbl;

    interface IMgaMetaFCOs
    {
        CONST_VTBL struct IMgaMetaFCOsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IMgaMetaFCOs_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IMgaMetaFCOs_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IMgaMetaFCOs_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IMgaMetaFCOs_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IMgaMetaFCOs_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IMgaMetaFCOs_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IMgaMetaFCOs_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IMgaMetaFCOs_get_Count(This,p)	\
    ( (This)->lpVtbl -> get_Count(This,p) ) 

#define IMgaMetaFCOs_get_Item(This,n,p)	\
    ( (This)->lpVtbl -> get_Item(This,n,p) ) 

#define IMgaMetaFCOs_get__NewEnum(This,p)	\
    ( (This)->lpVtbl -> get__NewEnum(This,p) ) 

#define IMgaMetaFCOs_GetAll(This,count,p)	\
    ( (This)->lpVtbl -> GetAll(This,count,p) ) 

#define IMgaMetaFCOs_Insert(This,p,at)	\
    ( (This)->lpVtbl -> Insert(This,p,at) ) 

#define IMgaMetaFCOs_Append(This,p)	\
    ( (This)->lpVtbl -> Append(This,p) ) 

#define IMgaMetaFCOs_Find(This,p,start,res)	\
    ( (This)->lpVtbl -> Find(This,p,start,res) ) 

#define IMgaMetaFCOs_Remove(This,n)	\
    ( (This)->lpVtbl -> Remove(This,n) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IMgaMetaFCOs_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_Meta_0000_0022 */
/* [local] */ 

#ifdef __cplusplus
extern "C++"    
{            
template<> struct ::TypeName_MgaColl2Elem<IMgaMetaFCOs>
{ typedef IMgaMetaFCOs collection_type; typedef IMgaMetaFCO element_type; };
template<> struct ::TypeName_MgaElem2Coll<IMgaMetaFCO>
{ typedef IMgaMetaFCOs collection_type; typedef IMgaMetaFCO element_type; };
}            
#endif


extern RPC_IF_HANDLE __MIDL_itf_Meta_0000_0022_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_Meta_0000_0022_v0_0_s_ifspec;

#ifndef __IMgaMetaAttributes_INTERFACE_DEFINED__
#define __IMgaMetaAttributes_INTERFACE_DEFINED__

/* interface IMgaMetaAttributes */
/* [unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_IMgaMetaAttributes;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("c6922740-c1fd-11d3-9ad2-00aa00b6fe26")
    IMgaMetaAttributes : public IDispatch
    {
    public:
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Count( 
            /* [retval][out] */ long *p) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Item( 
            /* [in] */ long n,
            /* [retval][out] */ IMgaMetaAttribute **p) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get__NewEnum( 
            /* [retval][out] */ IUnknown **p) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetAll( 
            /* [in] */ long count,
            /* [size_is][out] */ IMgaMetaAttribute **p) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Insert( 
            /* [in] */ IMgaMetaAttribute *p,
            /* [in] */ long at) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Append( 
            /* [in] */ IMgaMetaAttribute *p) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Find( 
            /* [in] */ IMgaMetaAttribute *p,
            /* [in] */ long start,
            /* [retval][out] */ long *res) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Remove( 
            /* [in] */ long n) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IMgaMetaAttributesVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IMgaMetaAttributes * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IMgaMetaAttributes * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IMgaMetaAttributes * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IMgaMetaAttributes * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IMgaMetaAttributes * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IMgaMetaAttributes * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IMgaMetaAttributes * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Count )( 
            IMgaMetaAttributes * This,
            /* [retval][out] */ long *p);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Item )( 
            IMgaMetaAttributes * This,
            /* [in] */ long n,
            /* [retval][out] */ IMgaMetaAttribute **p);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get__NewEnum )( 
            IMgaMetaAttributes * This,
            /* [retval][out] */ IUnknown **p);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetAll )( 
            IMgaMetaAttributes * This,
            /* [in] */ long count,
            /* [size_is][out] */ IMgaMetaAttribute **p);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Insert )( 
            IMgaMetaAttributes * This,
            /* [in] */ IMgaMetaAttribute *p,
            /* [in] */ long at);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Append )( 
            IMgaMetaAttributes * This,
            /* [in] */ IMgaMetaAttribute *p);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Find )( 
            IMgaMetaAttributes * This,
            /* [in] */ IMgaMetaAttribute *p,
            /* [in] */ long start,
            /* [retval][out] */ long *res);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Remove )( 
            IMgaMetaAttributes * This,
            /* [in] */ long n);
        
        END_INTERFACE
    } IMgaMetaAttributesVtbl;

    interface IMgaMetaAttributes
    {
        CONST_VTBL struct IMgaMetaAttributesVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IMgaMetaAttributes_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IMgaMetaAttributes_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IMgaMetaAttributes_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IMgaMetaAttributes_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IMgaMetaAttributes_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IMgaMetaAttributes_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IMgaMetaAttributes_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IMgaMetaAttributes_get_Count(This,p)	\
    ( (This)->lpVtbl -> get_Count(This,p) ) 

#define IMgaMetaAttributes_get_Item(This,n,p)	\
    ( (This)->lpVtbl -> get_Item(This,n,p) ) 

#define IMgaMetaAttributes_get__NewEnum(This,p)	\
    ( (This)->lpVtbl -> get__NewEnum(This,p) ) 

#define IMgaMetaAttributes_GetAll(This,count,p)	\
    ( (This)->lpVtbl -> GetAll(This,count,p) ) 

#define IMgaMetaAttributes_Insert(This,p,at)	\
    ( (This)->lpVtbl -> Insert(This,p,at) ) 

#define IMgaMetaAttributes_Append(This,p)	\
    ( (This)->lpVtbl -> Append(This,p) ) 

#define IMgaMetaAttributes_Find(This,p,start,res)	\
    ( (This)->lpVtbl -> Find(This,p,start,res) ) 

#define IMgaMetaAttributes_Remove(This,n)	\
    ( (This)->lpVtbl -> Remove(This,n) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IMgaMetaAttributes_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_Meta_0000_0023 */
/* [local] */ 

#ifdef __cplusplus
extern "C++"    
{            
template<> struct ::TypeName_MgaColl2Elem<IMgaMetaAttributes>
{ typedef IMgaMetaAttributes collection_type; typedef IMgaMetaAttribute element_type; };
template<> struct ::TypeName_MgaElem2Coll<IMgaMetaAttribute>
{ typedef IMgaMetaAttributes collection_type; typedef IMgaMetaAttribute element_type; };
}            
#endif


extern RPC_IF_HANDLE __MIDL_itf_Meta_0000_0023_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_Meta_0000_0023_v0_0_s_ifspec;

#ifndef __IMgaMetaFolders_INTERFACE_DEFINED__
#define __IMgaMetaFolders_INTERFACE_DEFINED__

/* interface IMgaMetaFolders */
/* [unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_IMgaMetaFolders;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("c6b85af0-c1fd-11d3-9ad2-00aa00b6fe26")
    IMgaMetaFolders : public IDispatch
    {
    public:
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Count( 
            /* [retval][out] */ long *p) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Item( 
            /* [in] */ long n,
            /* [retval][out] */ IMgaMetaFolder **p) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get__NewEnum( 
            /* [retval][out] */ IUnknown **p) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetAll( 
            /* [in] */ long count,
            /* [size_is][out] */ IMgaMetaFolder **p) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Insert( 
            /* [in] */ IMgaMetaFolder *p,
            /* [in] */ long at) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Append( 
            /* [in] */ IMgaMetaFolder *p) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Find( 
            /* [in] */ IMgaMetaFolder *p,
            /* [in] */ long start,
            /* [retval][out] */ long *res) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Remove( 
            /* [in] */ long n) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IMgaMetaFoldersVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IMgaMetaFolders * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IMgaMetaFolders * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IMgaMetaFolders * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IMgaMetaFolders * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IMgaMetaFolders * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IMgaMetaFolders * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IMgaMetaFolders * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Count )( 
            IMgaMetaFolders * This,
            /* [retval][out] */ long *p);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Item )( 
            IMgaMetaFolders * This,
            /* [in] */ long n,
            /* [retval][out] */ IMgaMetaFolder **p);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get__NewEnum )( 
            IMgaMetaFolders * This,
            /* [retval][out] */ IUnknown **p);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetAll )( 
            IMgaMetaFolders * This,
            /* [in] */ long count,
            /* [size_is][out] */ IMgaMetaFolder **p);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Insert )( 
            IMgaMetaFolders * This,
            /* [in] */ IMgaMetaFolder *p,
            /* [in] */ long at);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Append )( 
            IMgaMetaFolders * This,
            /* [in] */ IMgaMetaFolder *p);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Find )( 
            IMgaMetaFolders * This,
            /* [in] */ IMgaMetaFolder *p,
            /* [in] */ long start,
            /* [retval][out] */ long *res);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Remove )( 
            IMgaMetaFolders * This,
            /* [in] */ long n);
        
        END_INTERFACE
    } IMgaMetaFoldersVtbl;

    interface IMgaMetaFolders
    {
        CONST_VTBL struct IMgaMetaFoldersVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IMgaMetaFolders_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IMgaMetaFolders_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IMgaMetaFolders_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IMgaMetaFolders_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IMgaMetaFolders_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IMgaMetaFolders_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IMgaMetaFolders_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IMgaMetaFolders_get_Count(This,p)	\
    ( (This)->lpVtbl -> get_Count(This,p) ) 

#define IMgaMetaFolders_get_Item(This,n,p)	\
    ( (This)->lpVtbl -> get_Item(This,n,p) ) 

#define IMgaMetaFolders_get__NewEnum(This,p)	\
    ( (This)->lpVtbl -> get__NewEnum(This,p) ) 

#define IMgaMetaFolders_GetAll(This,count,p)	\
    ( (This)->lpVtbl -> GetAll(This,count,p) ) 

#define IMgaMetaFolders_Insert(This,p,at)	\
    ( (This)->lpVtbl -> Insert(This,p,at) ) 

#define IMgaMetaFolders_Append(This,p)	\
    ( (This)->lpVtbl -> Append(This,p) ) 

#define IMgaMetaFolders_Find(This,p,start,res)	\
    ( (This)->lpVtbl -> Find(This,p,start,res) ) 

#define IMgaMetaFolders_Remove(This,n)	\
    ( (This)->lpVtbl -> Remove(This,n) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IMgaMetaFolders_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_Meta_0000_0024 */
/* [local] */ 

#ifdef __cplusplus
extern "C++"    
{            
template<> struct ::TypeName_MgaColl2Elem<IMgaMetaFolders>
{ typedef IMgaMetaFolders collection_type; typedef IMgaMetaFolder element_type; };
template<> struct ::TypeName_MgaElem2Coll<IMgaMetaFolder>
{ typedef IMgaMetaFolders collection_type; typedef IMgaMetaFolder element_type; };
}            
#endif


extern RPC_IF_HANDLE __MIDL_itf_Meta_0000_0024_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_Meta_0000_0024_v0_0_s_ifspec;

#ifndef __IMgaMetaPointerSpecs_INTERFACE_DEFINED__
#define __IMgaMetaPointerSpecs_INTERFACE_DEFINED__

/* interface IMgaMetaPointerSpecs */
/* [unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_IMgaMetaPointerSpecs;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("c761f8c0-c1fd-11d3-9ad2-00aa00b6fe26")
    IMgaMetaPointerSpecs : public IDispatch
    {
    public:
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Count( 
            /* [retval][out] */ long *p) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Item( 
            /* [in] */ long n,
            /* [retval][out] */ IMgaMetaPointerSpec **p) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get__NewEnum( 
            /* [retval][out] */ IUnknown **p) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetAll( 
            /* [in] */ long count,
            /* [size_is][out] */ IMgaMetaPointerSpec **p) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Insert( 
            /* [in] */ IMgaMetaPointerSpec *p,
            /* [in] */ long at) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Append( 
            /* [in] */ IMgaMetaPointerSpec *p) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Find( 
            /* [in] */ IMgaMetaPointerSpec *p,
            /* [in] */ long start,
            /* [retval][out] */ long *res) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Remove( 
            /* [in] */ long n) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IMgaMetaPointerSpecsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IMgaMetaPointerSpecs * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IMgaMetaPointerSpecs * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IMgaMetaPointerSpecs * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IMgaMetaPointerSpecs * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IMgaMetaPointerSpecs * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IMgaMetaPointerSpecs * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IMgaMetaPointerSpecs * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Count )( 
            IMgaMetaPointerSpecs * This,
            /* [retval][out] */ long *p);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Item )( 
            IMgaMetaPointerSpecs * This,
            /* [in] */ long n,
            /* [retval][out] */ IMgaMetaPointerSpec **p);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get__NewEnum )( 
            IMgaMetaPointerSpecs * This,
            /* [retval][out] */ IUnknown **p);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetAll )( 
            IMgaMetaPointerSpecs * This,
            /* [in] */ long count,
            /* [size_is][out] */ IMgaMetaPointerSpec **p);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Insert )( 
            IMgaMetaPointerSpecs * This,
            /* [in] */ IMgaMetaPointerSpec *p,
            /* [in] */ long at);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Append )( 
            IMgaMetaPointerSpecs * This,
            /* [in] */ IMgaMetaPointerSpec *p);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Find )( 
            IMgaMetaPointerSpecs * This,
            /* [in] */ IMgaMetaPointerSpec *p,
            /* [in] */ long start,
            /* [retval][out] */ long *res);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Remove )( 
            IMgaMetaPointerSpecs * This,
            /* [in] */ long n);
        
        END_INTERFACE
    } IMgaMetaPointerSpecsVtbl;

    interface IMgaMetaPointerSpecs
    {
        CONST_VTBL struct IMgaMetaPointerSpecsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IMgaMetaPointerSpecs_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IMgaMetaPointerSpecs_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IMgaMetaPointerSpecs_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IMgaMetaPointerSpecs_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IMgaMetaPointerSpecs_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IMgaMetaPointerSpecs_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IMgaMetaPointerSpecs_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IMgaMetaPointerSpecs_get_Count(This,p)	\
    ( (This)->lpVtbl -> get_Count(This,p) ) 

#define IMgaMetaPointerSpecs_get_Item(This,n,p)	\
    ( (This)->lpVtbl -> get_Item(This,n,p) ) 

#define IMgaMetaPointerSpecs_get__NewEnum(This,p)	\
    ( (This)->lpVtbl -> get__NewEnum(This,p) ) 

#define IMgaMetaPointerSpecs_GetAll(This,count,p)	\
    ( (This)->lpVtbl -> GetAll(This,count,p) ) 

#define IMgaMetaPointerSpecs_Insert(This,p,at)	\
    ( (This)->lpVtbl -> Insert(This,p,at) ) 

#define IMgaMetaPointerSpecs_Append(This,p)	\
    ( (This)->lpVtbl -> Append(This,p) ) 

#define IMgaMetaPointerSpecs_Find(This,p,start,res)	\
    ( (This)->lpVtbl -> Find(This,p,start,res) ) 

#define IMgaMetaPointerSpecs_Remove(This,n)	\
    ( (This)->lpVtbl -> Remove(This,n) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IMgaMetaPointerSpecs_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_Meta_0000_0025 */
/* [local] */ 

#ifdef __cplusplus
extern "C++"    
{            
template<> struct ::TypeName_MgaColl2Elem<IMgaMetaPointerSpecs>
{ typedef IMgaMetaPointerSpecs collection_type; typedef IMgaMetaPointerSpec element_type; };
template<> struct ::TypeName_MgaElem2Coll<IMgaMetaPointerSpec>
{ typedef IMgaMetaPointerSpecs collection_type; typedef IMgaMetaPointerSpec element_type; };
}            
#endif


extern RPC_IF_HANDLE __MIDL_itf_Meta_0000_0025_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_Meta_0000_0025_v0_0_s_ifspec;

#ifndef __IMgaMetaRegNodes_INTERFACE_DEFINED__
#define __IMgaMetaRegNodes_INTERFACE_DEFINED__

/* interface IMgaMetaRegNodes */
/* [unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_IMgaMetaRegNodes;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("c795ed20-c1fd-11d3-9ad2-00aa00b6fe27")
    IMgaMetaRegNodes : public IDispatch
    {
    public:
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Count( 
            /* [retval][out] */ long *p) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Item( 
            /* [in] */ long n,
            /* [retval][out] */ IMgaMetaRegNode **p) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get__NewEnum( 
            /* [retval][out] */ IUnknown **p) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetAll( 
            /* [in] */ long count,
            /* [size_is][out] */ IMgaMetaRegNode **p) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Insert( 
            /* [in] */ IMgaMetaRegNode *p,
            /* [in] */ long at) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Append( 
            /* [in] */ IMgaMetaRegNode *p) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Find( 
            /* [in] */ IMgaMetaRegNode *p,
            /* [in] */ long start,
            /* [retval][out] */ long *res) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Remove( 
            /* [in] */ long n) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IMgaMetaRegNodesVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IMgaMetaRegNodes * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IMgaMetaRegNodes * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IMgaMetaRegNodes * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IMgaMetaRegNodes * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IMgaMetaRegNodes * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IMgaMetaRegNodes * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IMgaMetaRegNodes * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Count )( 
            IMgaMetaRegNodes * This,
            /* [retval][out] */ long *p);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Item )( 
            IMgaMetaRegNodes * This,
            /* [in] */ long n,
            /* [retval][out] */ IMgaMetaRegNode **p);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get__NewEnum )( 
            IMgaMetaRegNodes * This,
            /* [retval][out] */ IUnknown **p);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetAll )( 
            IMgaMetaRegNodes * This,
            /* [in] */ long count,
            /* [size_is][out] */ IMgaMetaRegNode **p);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Insert )( 
            IMgaMetaRegNodes * This,
            /* [in] */ IMgaMetaRegNode *p,
            /* [in] */ long at);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Append )( 
            IMgaMetaRegNodes * This,
            /* [in] */ IMgaMetaRegNode *p);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Find )( 
            IMgaMetaRegNodes * This,
            /* [in] */ IMgaMetaRegNode *p,
            /* [in] */ long start,
            /* [retval][out] */ long *res);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Remove )( 
            IMgaMetaRegNodes * This,
            /* [in] */ long n);
        
        END_INTERFACE
    } IMgaMetaRegNodesVtbl;

    interface IMgaMetaRegNodes
    {
        CONST_VTBL struct IMgaMetaRegNodesVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IMgaMetaRegNodes_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IMgaMetaRegNodes_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IMgaMetaRegNodes_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IMgaMetaRegNodes_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IMgaMetaRegNodes_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IMgaMetaRegNodes_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IMgaMetaRegNodes_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IMgaMetaRegNodes_get_Count(This,p)	\
    ( (This)->lpVtbl -> get_Count(This,p) ) 

#define IMgaMetaRegNodes_get_Item(This,n,p)	\
    ( (This)->lpVtbl -> get_Item(This,n,p) ) 

#define IMgaMetaRegNodes_get__NewEnum(This,p)	\
    ( (This)->lpVtbl -> get__NewEnum(This,p) ) 

#define IMgaMetaRegNodes_GetAll(This,count,p)	\
    ( (This)->lpVtbl -> GetAll(This,count,p) ) 

#define IMgaMetaRegNodes_Insert(This,p,at)	\
    ( (This)->lpVtbl -> Insert(This,p,at) ) 

#define IMgaMetaRegNodes_Append(This,p)	\
    ( (This)->lpVtbl -> Append(This,p) ) 

#define IMgaMetaRegNodes_Find(This,p,start,res)	\
    ( (This)->lpVtbl -> Find(This,p,start,res) ) 

#define IMgaMetaRegNodes_Remove(This,n)	\
    ( (This)->lpVtbl -> Remove(This,n) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IMgaMetaRegNodes_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_Meta_0000_0026 */
/* [local] */ 

#ifdef __cplusplus
extern "C++"    
{            
template<> struct ::TypeName_MgaColl2Elem<IMgaMetaRegNodes>
{ typedef IMgaMetaRegNodes collection_type; typedef IMgaMetaRegNode element_type; };
template<> struct ::TypeName_MgaElem2Coll<IMgaMetaRegNode>
{ typedef IMgaMetaRegNodes collection_type; typedef IMgaMetaRegNode element_type; };
}            
#endif


extern RPC_IF_HANDLE __MIDL_itf_Meta_0000_0026_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_Meta_0000_0026_v0_0_s_ifspec;

#ifndef __IMgaConstraints_INTERFACE_DEFINED__
#define __IMgaConstraints_INTERFACE_DEFINED__

/* interface IMgaConstraints */
/* [unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_IMgaConstraints;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("c8ec3720-c1fd-11d3-9ad2-00aa00b6fe26")
    IMgaConstraints : public IDispatch
    {
    public:
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Count( 
            /* [retval][out] */ long *p) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Item( 
            /* [in] */ long n,
            /* [retval][out] */ IMgaConstraint **p) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get__NewEnum( 
            /* [retval][out] */ IUnknown **p) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetAll( 
            /* [in] */ long count,
            /* [size_is][out] */ IMgaConstraint **p) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Insert( 
            /* [in] */ IMgaConstraint *p,
            /* [in] */ long at) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Append( 
            /* [in] */ IMgaConstraint *p) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Find( 
            /* [in] */ IMgaConstraint *p,
            /* [in] */ long start,
            /* [retval][out] */ long *res) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Remove( 
            /* [in] */ long n) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IMgaConstraintsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IMgaConstraints * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IMgaConstraints * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IMgaConstraints * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IMgaConstraints * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IMgaConstraints * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IMgaConstraints * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IMgaConstraints * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Count )( 
            IMgaConstraints * This,
            /* [retval][out] */ long *p);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Item )( 
            IMgaConstraints * This,
            /* [in] */ long n,
            /* [retval][out] */ IMgaConstraint **p);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get__NewEnum )( 
            IMgaConstraints * This,
            /* [retval][out] */ IUnknown **p);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetAll )( 
            IMgaConstraints * This,
            /* [in] */ long count,
            /* [size_is][out] */ IMgaConstraint **p);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Insert )( 
            IMgaConstraints * This,
            /* [in] */ IMgaConstraint *p,
            /* [in] */ long at);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Append )( 
            IMgaConstraints * This,
            /* [in] */ IMgaConstraint *p);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Find )( 
            IMgaConstraints * This,
            /* [in] */ IMgaConstraint *p,
            /* [in] */ long start,
            /* [retval][out] */ long *res);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Remove )( 
            IMgaConstraints * This,
            /* [in] */ long n);
        
        END_INTERFACE
    } IMgaConstraintsVtbl;

    interface IMgaConstraints
    {
        CONST_VTBL struct IMgaConstraintsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IMgaConstraints_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IMgaConstraints_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IMgaConstraints_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IMgaConstraints_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IMgaConstraints_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IMgaConstraints_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IMgaConstraints_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IMgaConstraints_get_Count(This,p)	\
    ( (This)->lpVtbl -> get_Count(This,p) ) 

#define IMgaConstraints_get_Item(This,n,p)	\
    ( (This)->lpVtbl -> get_Item(This,n,p) ) 

#define IMgaConstraints_get__NewEnum(This,p)	\
    ( (This)->lpVtbl -> get__NewEnum(This,p) ) 

#define IMgaConstraints_GetAll(This,count,p)	\
    ( (This)->lpVtbl -> GetAll(This,count,p) ) 

#define IMgaConstraints_Insert(This,p,at)	\
    ( (This)->lpVtbl -> Insert(This,p,at) ) 

#define IMgaConstraints_Append(This,p)	\
    ( (This)->lpVtbl -> Append(This,p) ) 

#define IMgaConstraints_Find(This,p,start,res)	\
    ( (This)->lpVtbl -> Find(This,p,start,res) ) 

#define IMgaConstraints_Remove(This,n)	\
    ( (This)->lpVtbl -> Remove(This,n) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IMgaConstraints_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_Meta_0000_0027 */
/* [local] */ 

#ifdef __cplusplus
extern "C++"    
{            
template<> struct ::TypeName_MgaColl2Elem<IMgaConstraints>
{ typedef IMgaConstraints collection_type; typedef IMgaConstraint element_type; };
template<> struct ::TypeName_MgaElem2Coll<IMgaConstraint>
{ typedef IMgaConstraints collection_type; typedef IMgaConstraint element_type; };
}            
#endif


extern RPC_IF_HANDLE __MIDL_itf_Meta_0000_0027_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_Meta_0000_0027_v0_0_s_ifspec;

#ifndef __IMgaMetaParts_INTERFACE_DEFINED__
#define __IMgaMetaParts_INTERFACE_DEFINED__

/* interface IMgaMetaParts */
/* [unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_IMgaMetaParts;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("c8ec3720-c1fd-11d3-9ad2-00aa00b6fe27")
    IMgaMetaParts : public IDispatch
    {
    public:
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Count( 
            /* [retval][out] */ long *p) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Item( 
            /* [in] */ long n,
            /* [retval][out] */ IMgaMetaPart **p) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get__NewEnum( 
            /* [retval][out] */ IUnknown **p) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetAll( 
            /* [in] */ long count,
            /* [size_is][out] */ IMgaMetaPart **p) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Insert( 
            /* [in] */ IMgaMetaPart *p,
            /* [in] */ long at) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Append( 
            /* [in] */ IMgaMetaPart *p) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Find( 
            /* [in] */ IMgaMetaPart *p,
            /* [in] */ long start,
            /* [retval][out] */ long *res) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Remove( 
            /* [in] */ long n) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IMgaMetaPartsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IMgaMetaParts * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IMgaMetaParts * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IMgaMetaParts * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IMgaMetaParts * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IMgaMetaParts * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IMgaMetaParts * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IMgaMetaParts * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Count )( 
            IMgaMetaParts * This,
            /* [retval][out] */ long *p);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Item )( 
            IMgaMetaParts * This,
            /* [in] */ long n,
            /* [retval][out] */ IMgaMetaPart **p);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get__NewEnum )( 
            IMgaMetaParts * This,
            /* [retval][out] */ IUnknown **p);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetAll )( 
            IMgaMetaParts * This,
            /* [in] */ long count,
            /* [size_is][out] */ IMgaMetaPart **p);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Insert )( 
            IMgaMetaParts * This,
            /* [in] */ IMgaMetaPart *p,
            /* [in] */ long at);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Append )( 
            IMgaMetaParts * This,
            /* [in] */ IMgaMetaPart *p);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Find )( 
            IMgaMetaParts * This,
            /* [in] */ IMgaMetaPart *p,
            /* [in] */ long start,
            /* [retval][out] */ long *res);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Remove )( 
            IMgaMetaParts * This,
            /* [in] */ long n);
        
        END_INTERFACE
    } IMgaMetaPartsVtbl;

    interface IMgaMetaParts
    {
        CONST_VTBL struct IMgaMetaPartsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IMgaMetaParts_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IMgaMetaParts_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IMgaMetaParts_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IMgaMetaParts_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IMgaMetaParts_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IMgaMetaParts_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IMgaMetaParts_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IMgaMetaParts_get_Count(This,p)	\
    ( (This)->lpVtbl -> get_Count(This,p) ) 

#define IMgaMetaParts_get_Item(This,n,p)	\
    ( (This)->lpVtbl -> get_Item(This,n,p) ) 

#define IMgaMetaParts_get__NewEnum(This,p)	\
    ( (This)->lpVtbl -> get__NewEnum(This,p) ) 

#define IMgaMetaParts_GetAll(This,count,p)	\
    ( (This)->lpVtbl -> GetAll(This,count,p) ) 

#define IMgaMetaParts_Insert(This,p,at)	\
    ( (This)->lpVtbl -> Insert(This,p,at) ) 

#define IMgaMetaParts_Append(This,p)	\
    ( (This)->lpVtbl -> Append(This,p) ) 

#define IMgaMetaParts_Find(This,p,start,res)	\
    ( (This)->lpVtbl -> Find(This,p,start,res) ) 

#define IMgaMetaParts_Remove(This,n)	\
    ( (This)->lpVtbl -> Remove(This,n) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IMgaMetaParts_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_Meta_0000_0028 */
/* [local] */ 

#ifdef __cplusplus
extern "C++"    
{            
template<> struct ::TypeName_MgaColl2Elem<IMgaMetaParts>
{ typedef IMgaMetaParts collection_type; typedef IMgaMetaPart element_type; };
template<> struct ::TypeName_MgaElem2Coll<IMgaMetaPart>
{ typedef IMgaMetaParts collection_type; typedef IMgaMetaPart element_type; };
}            
#endif


extern RPC_IF_HANDLE __MIDL_itf_Meta_0000_0028_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_Meta_0000_0028_v0_0_s_ifspec;

#ifndef __IMgaMetaModels_INTERFACE_DEFINED__
#define __IMgaMetaModels_INTERFACE_DEFINED__

/* interface IMgaMetaModels */
/* [unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_IMgaMetaModels;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("c8ec3723-c1fd-11d3-9ad2-00aa00b6fe27")
    IMgaMetaModels : public IDispatch
    {
    public:
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Count( 
            /* [retval][out] */ long *p) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Item( 
            /* [in] */ long n,
            /* [retval][out] */ IMgaMetaModel **p) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get__NewEnum( 
            /* [retval][out] */ IUnknown **p) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetAll( 
            /* [in] */ long count,
            /* [size_is][out] */ IMgaMetaModel **p) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Insert( 
            /* [in] */ IMgaMetaModel *p,
            /* [in] */ long at) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Append( 
            /* [in] */ IMgaMetaModel *p) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Find( 
            /* [in] */ IMgaMetaModel *p,
            /* [in] */ long start,
            /* [retval][out] */ long *res) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Remove( 
            /* [in] */ long n) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IMgaMetaModelsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IMgaMetaModels * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IMgaMetaModels * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IMgaMetaModels * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IMgaMetaModels * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IMgaMetaModels * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IMgaMetaModels * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IMgaMetaModels * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Count )( 
            IMgaMetaModels * This,
            /* [retval][out] */ long *p);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Item )( 
            IMgaMetaModels * This,
            /* [in] */ long n,
            /* [retval][out] */ IMgaMetaModel **p);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get__NewEnum )( 
            IMgaMetaModels * This,
            /* [retval][out] */ IUnknown **p);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetAll )( 
            IMgaMetaModels * This,
            /* [in] */ long count,
            /* [size_is][out] */ IMgaMetaModel **p);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Insert )( 
            IMgaMetaModels * This,
            /* [in] */ IMgaMetaModel *p,
            /* [in] */ long at);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Append )( 
            IMgaMetaModels * This,
            /* [in] */ IMgaMetaModel *p);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Find )( 
            IMgaMetaModels * This,
            /* [in] */ IMgaMetaModel *p,
            /* [in] */ long start,
            /* [retval][out] */ long *res);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Remove )( 
            IMgaMetaModels * This,
            /* [in] */ long n);
        
        END_INTERFACE
    } IMgaMetaModelsVtbl;

    interface IMgaMetaModels
    {
        CONST_VTBL struct IMgaMetaModelsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IMgaMetaModels_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IMgaMetaModels_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IMgaMetaModels_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IMgaMetaModels_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IMgaMetaModels_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IMgaMetaModels_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IMgaMetaModels_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IMgaMetaModels_get_Count(This,p)	\
    ( (This)->lpVtbl -> get_Count(This,p) ) 

#define IMgaMetaModels_get_Item(This,n,p)	\
    ( (This)->lpVtbl -> get_Item(This,n,p) ) 

#define IMgaMetaModels_get__NewEnum(This,p)	\
    ( (This)->lpVtbl -> get__NewEnum(This,p) ) 

#define IMgaMetaModels_GetAll(This,count,p)	\
    ( (This)->lpVtbl -> GetAll(This,count,p) ) 

#define IMgaMetaModels_Insert(This,p,at)	\
    ( (This)->lpVtbl -> Insert(This,p,at) ) 

#define IMgaMetaModels_Append(This,p)	\
    ( (This)->lpVtbl -> Append(This,p) ) 

#define IMgaMetaModels_Find(This,p,start,res)	\
    ( (This)->lpVtbl -> Find(This,p,start,res) ) 

#define IMgaMetaModels_Remove(This,n)	\
    ( (This)->lpVtbl -> Remove(This,n) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IMgaMetaModels_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_Meta_0000_0029 */
/* [local] */ 

#ifdef __cplusplus
extern "C++"    
{            
template<> struct ::TypeName_MgaColl2Elem<IMgaMetaModels>
{ typedef IMgaMetaModels collection_type; typedef IMgaMetaModel element_type; };
template<> struct ::TypeName_MgaElem2Coll<IMgaMetaModel>
{ typedef IMgaMetaModels collection_type; typedef IMgaMetaModel element_type; };
}            
#endif


extern RPC_IF_HANDLE __MIDL_itf_Meta_0000_0029_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_Meta_0000_0029_v0_0_s_ifspec;

#ifndef __IMgaMetaConnJoints_INTERFACE_DEFINED__
#define __IMgaMetaConnJoints_INTERFACE_DEFINED__

/* interface IMgaMetaConnJoints */
/* [unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_IMgaMetaConnJoints;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("c8432623-c1fd-11d3-9ad2-00aa00b6fe27")
    IMgaMetaConnJoints : public IDispatch
    {
    public:
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Count( 
            /* [retval][out] */ long *p) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Item( 
            /* [in] */ long n,
            /* [retval][out] */ IMgaMetaConnJoint **p) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get__NewEnum( 
            /* [retval][out] */ IUnknown **p) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetAll( 
            /* [in] */ long count,
            /* [size_is][out] */ IMgaMetaConnJoint **p) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Insert( 
            /* [in] */ IMgaMetaConnJoint *p,
            /* [in] */ long at) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Append( 
            /* [in] */ IMgaMetaConnJoint *p) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Find( 
            /* [in] */ IMgaMetaConnJoint *p,
            /* [in] */ long start,
            /* [retval][out] */ long *res) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Remove( 
            /* [in] */ long n) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IMgaMetaConnJointsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IMgaMetaConnJoints * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IMgaMetaConnJoints * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IMgaMetaConnJoints * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IMgaMetaConnJoints * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IMgaMetaConnJoints * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IMgaMetaConnJoints * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IMgaMetaConnJoints * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Count )( 
            IMgaMetaConnJoints * This,
            /* [retval][out] */ long *p);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Item )( 
            IMgaMetaConnJoints * This,
            /* [in] */ long n,
            /* [retval][out] */ IMgaMetaConnJoint **p);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get__NewEnum )( 
            IMgaMetaConnJoints * This,
            /* [retval][out] */ IUnknown **p);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetAll )( 
            IMgaMetaConnJoints * This,
            /* [in] */ long count,
            /* [size_is][out] */ IMgaMetaConnJoint **p);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Insert )( 
            IMgaMetaConnJoints * This,
            /* [in] */ IMgaMetaConnJoint *p,
            /* [in] */ long at);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Append )( 
            IMgaMetaConnJoints * This,
            /* [in] */ IMgaMetaConnJoint *p);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Find )( 
            IMgaMetaConnJoints * This,
            /* [in] */ IMgaMetaConnJoint *p,
            /* [in] */ long start,
            /* [retval][out] */ long *res);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Remove )( 
            IMgaMetaConnJoints * This,
            /* [in] */ long n);
        
        END_INTERFACE
    } IMgaMetaConnJointsVtbl;

    interface IMgaMetaConnJoints
    {
        CONST_VTBL struct IMgaMetaConnJointsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IMgaMetaConnJoints_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IMgaMetaConnJoints_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IMgaMetaConnJoints_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IMgaMetaConnJoints_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IMgaMetaConnJoints_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IMgaMetaConnJoints_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IMgaMetaConnJoints_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IMgaMetaConnJoints_get_Count(This,p)	\
    ( (This)->lpVtbl -> get_Count(This,p) ) 

#define IMgaMetaConnJoints_get_Item(This,n,p)	\
    ( (This)->lpVtbl -> get_Item(This,n,p) ) 

#define IMgaMetaConnJoints_get__NewEnum(This,p)	\
    ( (This)->lpVtbl -> get__NewEnum(This,p) ) 

#define IMgaMetaConnJoints_GetAll(This,count,p)	\
    ( (This)->lpVtbl -> GetAll(This,count,p) ) 

#define IMgaMetaConnJoints_Insert(This,p,at)	\
    ( (This)->lpVtbl -> Insert(This,p,at) ) 

#define IMgaMetaConnJoints_Append(This,p)	\
    ( (This)->lpVtbl -> Append(This,p) ) 

#define IMgaMetaConnJoints_Find(This,p,start,res)	\
    ( (This)->lpVtbl -> Find(This,p,start,res) ) 

#define IMgaMetaConnJoints_Remove(This,n)	\
    ( (This)->lpVtbl -> Remove(This,n) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IMgaMetaConnJoints_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_Meta_0000_0030 */
/* [local] */ 

#ifdef __cplusplus
extern "C++"    
{            
template<> struct ::TypeName_MgaColl2Elem<IMgaMetaConnJoints>
{ typedef IMgaMetaConnJoints collection_type; typedef IMgaMetaConnJoint element_type; };
template<> struct ::TypeName_MgaElem2Coll<IMgaMetaConnJoint>
{ typedef IMgaMetaConnJoints collection_type; typedef IMgaMetaConnJoint element_type; };
}            
#endif


extern RPC_IF_HANDLE __MIDL_itf_Meta_0000_0030_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_Meta_0000_0030_v0_0_s_ifspec;

#ifndef __IMgaMetaPointerItems_INTERFACE_DEFINED__
#define __IMgaMetaPointerItems_INTERFACE_DEFINED__

/* interface IMgaMetaPointerItems */
/* [unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_IMgaMetaPointerItems;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("c8124623-c51d-11d3-9ad2-00aa00b6fe27")
    IMgaMetaPointerItems : public IDispatch
    {
    public:
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Count( 
            /* [retval][out] */ long *p) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Item( 
            /* [in] */ long n,
            /* [retval][out] */ IMgaMetaPointerItem **p) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get__NewEnum( 
            /* [retval][out] */ IUnknown **p) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetAll( 
            /* [in] */ long count,
            /* [size_is][out] */ IMgaMetaPointerItem **p) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Insert( 
            /* [in] */ IMgaMetaPointerItem *p,
            /* [in] */ long at) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Append( 
            /* [in] */ IMgaMetaPointerItem *p) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Find( 
            /* [in] */ IMgaMetaPointerItem *p,
            /* [in] */ long start,
            /* [retval][out] */ long *res) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Remove( 
            /* [in] */ long n) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IMgaMetaPointerItemsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IMgaMetaPointerItems * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IMgaMetaPointerItems * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IMgaMetaPointerItems * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IMgaMetaPointerItems * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IMgaMetaPointerItems * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IMgaMetaPointerItems * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IMgaMetaPointerItems * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Count )( 
            IMgaMetaPointerItems * This,
            /* [retval][out] */ long *p);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Item )( 
            IMgaMetaPointerItems * This,
            /* [in] */ long n,
            /* [retval][out] */ IMgaMetaPointerItem **p);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get__NewEnum )( 
            IMgaMetaPointerItems * This,
            /* [retval][out] */ IUnknown **p);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetAll )( 
            IMgaMetaPointerItems * This,
            /* [in] */ long count,
            /* [size_is][out] */ IMgaMetaPointerItem **p);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Insert )( 
            IMgaMetaPointerItems * This,
            /* [in] */ IMgaMetaPointerItem *p,
            /* [in] */ long at);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Append )( 
            IMgaMetaPointerItems * This,
            /* [in] */ IMgaMetaPointerItem *p);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Find )( 
            IMgaMetaPointerItems * This,
            /* [in] */ IMgaMetaPointerItem *p,
            /* [in] */ long start,
            /* [retval][out] */ long *res);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Remove )( 
            IMgaMetaPointerItems * This,
            /* [in] */ long n);
        
        END_INTERFACE
    } IMgaMetaPointerItemsVtbl;

    interface IMgaMetaPointerItems
    {
        CONST_VTBL struct IMgaMetaPointerItemsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IMgaMetaPointerItems_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IMgaMetaPointerItems_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IMgaMetaPointerItems_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IMgaMetaPointerItems_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IMgaMetaPointerItems_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IMgaMetaPointerItems_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IMgaMetaPointerItems_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IMgaMetaPointerItems_get_Count(This,p)	\
    ( (This)->lpVtbl -> get_Count(This,p) ) 

#define IMgaMetaPointerItems_get_Item(This,n,p)	\
    ( (This)->lpVtbl -> get_Item(This,n,p) ) 

#define IMgaMetaPointerItems_get__NewEnum(This,p)	\
    ( (This)->lpVtbl -> get__NewEnum(This,p) ) 

#define IMgaMetaPointerItems_GetAll(This,count,p)	\
    ( (This)->lpVtbl -> GetAll(This,count,p) ) 

#define IMgaMetaPointerItems_Insert(This,p,at)	\
    ( (This)->lpVtbl -> Insert(This,p,at) ) 

#define IMgaMetaPointerItems_Append(This,p)	\
    ( (This)->lpVtbl -> Append(This,p) ) 

#define IMgaMetaPointerItems_Find(This,p,start,res)	\
    ( (This)->lpVtbl -> Find(This,p,start,res) ) 

#define IMgaMetaPointerItems_Remove(This,n)	\
    ( (This)->lpVtbl -> Remove(This,n) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IMgaMetaPointerItems_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_Meta_0000_0031 */
/* [local] */ 

#ifdef __cplusplus
extern "C++"    
{            
template<> struct ::TypeName_MgaColl2Elem<IMgaMetaPointerItems>
{ typedef IMgaMetaPointerItems collection_type; typedef IMgaMetaPointerItem element_type; };
template<> struct ::TypeName_MgaElem2Coll<IMgaMetaPointerItem>
{ typedef IMgaMetaPointerItems collection_type; typedef IMgaMetaPointerItem element_type; };
}            
#endif


extern RPC_IF_HANDLE __MIDL_itf_Meta_0000_0031_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_Meta_0000_0031_v0_0_s_ifspec;

#ifndef __IMgaMetaEnumItems_INTERFACE_DEFINED__
#define __IMgaMetaEnumItems_INTERFACE_DEFINED__

/* interface IMgaMetaEnumItems */
/* [unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_IMgaMetaEnumItems;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("c8124623-c51d-1ad3-9ad2-11aa0176fe27")
    IMgaMetaEnumItems : public IDispatch
    {
    public:
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Count( 
            /* [retval][out] */ long *p) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Item( 
            /* [in] */ long n,
            /* [retval][out] */ IMgaMetaEnumItem **p) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get__NewEnum( 
            /* [retval][out] */ IUnknown **p) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetAll( 
            /* [in] */ long count,
            /* [size_is][out] */ IMgaMetaEnumItem **p) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Insert( 
            /* [in] */ IMgaMetaEnumItem *p,
            /* [in] */ long at) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Append( 
            /* [in] */ IMgaMetaEnumItem *p) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Find( 
            /* [in] */ IMgaMetaEnumItem *p,
            /* [in] */ long start,
            /* [retval][out] */ long *res) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Remove( 
            /* [in] */ long n) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IMgaMetaEnumItemsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IMgaMetaEnumItems * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IMgaMetaEnumItems * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IMgaMetaEnumItems * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IMgaMetaEnumItems * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IMgaMetaEnumItems * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IMgaMetaEnumItems * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IMgaMetaEnumItems * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Count )( 
            IMgaMetaEnumItems * This,
            /* [retval][out] */ long *p);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Item )( 
            IMgaMetaEnumItems * This,
            /* [in] */ long n,
            /* [retval][out] */ IMgaMetaEnumItem **p);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get__NewEnum )( 
            IMgaMetaEnumItems * This,
            /* [retval][out] */ IUnknown **p);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetAll )( 
            IMgaMetaEnumItems * This,
            /* [in] */ long count,
            /* [size_is][out] */ IMgaMetaEnumItem **p);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Insert )( 
            IMgaMetaEnumItems * This,
            /* [in] */ IMgaMetaEnumItem *p,
            /* [in] */ long at);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Append )( 
            IMgaMetaEnumItems * This,
            /* [in] */ IMgaMetaEnumItem *p);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Find )( 
            IMgaMetaEnumItems * This,
            /* [in] */ IMgaMetaEnumItem *p,
            /* [in] */ long start,
            /* [retval][out] */ long *res);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Remove )( 
            IMgaMetaEnumItems * This,
            /* [in] */ long n);
        
        END_INTERFACE
    } IMgaMetaEnumItemsVtbl;

    interface IMgaMetaEnumItems
    {
        CONST_VTBL struct IMgaMetaEnumItemsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IMgaMetaEnumItems_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IMgaMetaEnumItems_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IMgaMetaEnumItems_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IMgaMetaEnumItems_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IMgaMetaEnumItems_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IMgaMetaEnumItems_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IMgaMetaEnumItems_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IMgaMetaEnumItems_get_Count(This,p)	\
    ( (This)->lpVtbl -> get_Count(This,p) ) 

#define IMgaMetaEnumItems_get_Item(This,n,p)	\
    ( (This)->lpVtbl -> get_Item(This,n,p) ) 

#define IMgaMetaEnumItems_get__NewEnum(This,p)	\
    ( (This)->lpVtbl -> get__NewEnum(This,p) ) 

#define IMgaMetaEnumItems_GetAll(This,count,p)	\
    ( (This)->lpVtbl -> GetAll(This,count,p) ) 

#define IMgaMetaEnumItems_Insert(This,p,at)	\
    ( (This)->lpVtbl -> Insert(This,p,at) ) 

#define IMgaMetaEnumItems_Append(This,p)	\
    ( (This)->lpVtbl -> Append(This,p) ) 

#define IMgaMetaEnumItems_Find(This,p,start,res)	\
    ( (This)->lpVtbl -> Find(This,p,start,res) ) 

#define IMgaMetaEnumItems_Remove(This,n)	\
    ( (This)->lpVtbl -> Remove(This,n) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IMgaMetaEnumItems_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_Meta_0000_0032 */
/* [local] */ 

#ifdef __cplusplus
extern "C++"    
{            
template<> struct ::TypeName_MgaColl2Elem<IMgaMetaEnumItems>
{ typedef IMgaMetaEnumItems collection_type; typedef IMgaMetaEnumItem element_type; };
template<> struct ::TypeName_MgaElem2Coll<IMgaMetaEnumItem>
{ typedef IMgaMetaEnumItems collection_type; typedef IMgaMetaEnumItem element_type; };
}            
#endif


extern RPC_IF_HANDLE __MIDL_itf_Meta_0000_0032_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_Meta_0000_0032_v0_0_s_ifspec;

/* Additional Prototypes for ALL interfaces */

unsigned long             __RPC_USER  BSTR_UserSize(     unsigned long *, unsigned long            , BSTR * ); 
unsigned char * __RPC_USER  BSTR_UserMarshal(  unsigned long *, unsigned char *, BSTR * ); 
unsigned char * __RPC_USER  BSTR_UserUnmarshal(unsigned long *, unsigned char *, BSTR * ); 
void                      __RPC_USER  BSTR_UserFree(     unsigned long *, BSTR * ); 

unsigned long             __RPC_USER  VARIANT_UserSize(     unsigned long *, unsigned long            , VARIANT * ); 
unsigned char * __RPC_USER  VARIANT_UserMarshal(  unsigned long *, unsigned char *, VARIANT * ); 
unsigned char * __RPC_USER  VARIANT_UserUnmarshal(unsigned long *, unsigned char *, VARIANT * ); 
void                      __RPC_USER  VARIANT_UserFree(     unsigned long *, VARIANT * ); 

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


