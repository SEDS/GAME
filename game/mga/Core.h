

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 8.00.0595 */
/* at Mon May 18 12:44:56 2015
 */
/* Compiler settings for C:\Program Files (x86)\GME\Interfaces\Core.idl:
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

#ifndef __Core_h__
#define __Core_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef __ICoreMetaProject_FWD_DEFINED__
#define __ICoreMetaProject_FWD_DEFINED__
typedef interface ICoreMetaProject ICoreMetaProject;

#endif 	/* __ICoreMetaProject_FWD_DEFINED__ */


#ifndef __ICoreMetaObject_FWD_DEFINED__
#define __ICoreMetaObject_FWD_DEFINED__
typedef interface ICoreMetaObject ICoreMetaObject;

#endif 	/* __ICoreMetaObject_FWD_DEFINED__ */


#ifndef __ICoreMetaAttribute_FWD_DEFINED__
#define __ICoreMetaAttribute_FWD_DEFINED__
typedef interface ICoreMetaAttribute ICoreMetaAttribute;

#endif 	/* __ICoreMetaAttribute_FWD_DEFINED__ */


#ifndef __ICoreStorage_FWD_DEFINED__
#define __ICoreStorage_FWD_DEFINED__
typedef interface ICoreStorage ICoreStorage;

#endif 	/* __ICoreStorage_FWD_DEFINED__ */


#ifndef __ICoreProject_FWD_DEFINED__
#define __ICoreProject_FWD_DEFINED__
typedef interface ICoreProject ICoreProject;

#endif 	/* __ICoreProject_FWD_DEFINED__ */


#ifndef __ICoreObject_FWD_DEFINED__
#define __ICoreObject_FWD_DEFINED__
typedef interface ICoreObject ICoreObject;

#endif 	/* __ICoreObject_FWD_DEFINED__ */


#ifndef __ICoreAttribute_FWD_DEFINED__
#define __ICoreAttribute_FWD_DEFINED__
typedef interface ICoreAttribute ICoreAttribute;

#endif 	/* __ICoreAttribute_FWD_DEFINED__ */


#ifndef __ICoreTerritory_FWD_DEFINED__
#define __ICoreTerritory_FWD_DEFINED__
typedef interface ICoreTerritory ICoreTerritory;

#endif 	/* __ICoreTerritory_FWD_DEFINED__ */


#ifndef __ICoreMetaObjects_FWD_DEFINED__
#define __ICoreMetaObjects_FWD_DEFINED__
typedef interface ICoreMetaObjects ICoreMetaObjects;

#endif 	/* __ICoreMetaObjects_FWD_DEFINED__ */


#ifndef __ICoreMetaAttributes_FWD_DEFINED__
#define __ICoreMetaAttributes_FWD_DEFINED__
typedef interface ICoreMetaAttributes ICoreMetaAttributes;

#endif 	/* __ICoreMetaAttributes_FWD_DEFINED__ */


#ifndef __ICoreObjects_FWD_DEFINED__
#define __ICoreObjects_FWD_DEFINED__
typedef interface ICoreObjects ICoreObjects;

#endif 	/* __ICoreObjects_FWD_DEFINED__ */


#ifndef __ICoreAttributes_FWD_DEFINED__
#define __ICoreAttributes_FWD_DEFINED__
typedef interface ICoreAttributes ICoreAttributes;

#endif 	/* __ICoreAttributes_FWD_DEFINED__ */


#ifndef __IGMEVersionInfo_FWD_DEFINED__
#define __IGMEVersionInfo_FWD_DEFINED__
typedef interface IGMEVersionInfo IGMEVersionInfo;

#endif 	/* __IGMEVersionInfo_FWD_DEFINED__ */


#ifndef __ICoreDictionaryAttributeValue_FWD_DEFINED__
#define __ICoreDictionaryAttributeValue_FWD_DEFINED__
typedef interface ICoreDictionaryAttributeValue ICoreDictionaryAttributeValue;

#endif 	/* __ICoreDictionaryAttributeValue_FWD_DEFINED__ */


/* header files for imported files */
#include "oaidl.h"
#include "ocidl.h"

#ifdef __cplusplus
extern "C"{
#endif 


/* interface __MIDL_itf_Core_0000_0000 */
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
typedef short metaid_type;

typedef long objid_type;

typedef short attrid_type;

typedef unsigned char valtype_type;

typedef unsigned char locking_type;

typedef short lockval_type;

typedef VARIANT guid_type;












#define	METAID_NONE	( 0 )

#define	METAID_ROOT	( 1 )

#define	OBJID_NONE	( 0 )

#define	OBJID_ROOT	( 1 )

#define	ATTRID_NONE	( 0 )

#define	ATTRID_LOCK	( 1 )

#define	ATTRID_NAME	( 2 )

#define	ATTRID_FATHER	( 3 )

#define	ATTRID_COLLECTION	( 10000 )

typedef 
enum locking_enum
    {
        LOCKING_NONE	= 0,
        LOCKING_READ	= 1,
        LOCKING_WRITE	= 2,
        LOCKING_EXCLUSIVE	= 3
    } 	locking_enum;

typedef 
enum valtype_enum
    {
        VALTYPE_NONE	= 0,
        VALTYPE_COLLECTION	= 1,
        VALTYPE_POINTER	= 2,
        VALTYPE_LOCK	= 3,
        VALTYPE_LONG	= 4,
        VALTYPE_STRING	= 5,
        VALTYPE_BINARY	= 6,
        VALTYPE_REAL	= 7,
        VALTYPE_DICT	= 8,
        VALTYPE_MAX	= 8
    } 	valtype_enum;

typedef 
enum transtype_enum
    {
        TRANSTYPE_NONE	= 0,
        TRANSTYPE_FIRST	= 1,
        TRANSTYPE_NESTED	= 2,
        TRANSTYPE_ANY	= 3,
        TRANSTYPE_READ	= 4,
        TRANSTYPE_READFIRST	= 5,
        TRANSTYPE_READNESTED	= 6,
        TRANSTYPE_READANY	= 7
    } 	transtype_enum;



extern RPC_IF_HANDLE __MIDL_itf_Core_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_Core_0000_0000_v0_0_s_ifspec;

#ifndef __ICoreMetaProject_INTERFACE_DEFINED__
#define __ICoreMetaProject_INTERFACE_DEFINED__

/* interface ICoreMetaProject */
/* [unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_ICoreMetaProject;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("98AA02D9-2E2C-11D3-B36D-0060082DF884")
    ICoreMetaProject : public IDispatch
    {
    public:
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_GUID( 
            /* [retval][out] */ guid_type *p) = 0;
        
        virtual /* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_GUID( 
            /* [in] */ guid_type p) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Token( 
            /* [retval][out] */ BSTR *p) = 0;
        
        virtual /* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_Token( 
            /* [in] */ BSTR p) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Name( 
            /* [retval][out] */ BSTR *p) = 0;
        
        virtual /* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_Name( 
            /* [in] */ BSTR p) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Object( 
            /* [in] */ metaid_type metaid,
            /* [retval][out] */ ICoreMetaObject **p) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetObjectDisp( 
            /* [in] */ metaid_type metaid,
            /* [retval][out] */ ICoreMetaObject **p) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Objects( 
            /* [retval][out] */ ICoreMetaObjects **p) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE AddObject( 
            /* [in] */ metaid_type metaid,
            /* [in] */ BSTR token,
            /* [in] */ BSTR name,
            /* [out] */ ICoreMetaObject **p) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ICoreMetaProjectVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ICoreMetaProject * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ICoreMetaProject * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ICoreMetaProject * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            ICoreMetaProject * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            ICoreMetaProject * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            ICoreMetaProject * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ICoreMetaProject * This,
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
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_GUID )( 
            ICoreMetaProject * This,
            /* [retval][out] */ guid_type *p);
        
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_GUID )( 
            ICoreMetaProject * This,
            /* [in] */ guid_type p);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Token )( 
            ICoreMetaProject * This,
            /* [retval][out] */ BSTR *p);
        
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Token )( 
            ICoreMetaProject * This,
            /* [in] */ BSTR p);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Name )( 
            ICoreMetaProject * This,
            /* [retval][out] */ BSTR *p);
        
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Name )( 
            ICoreMetaProject * This,
            /* [in] */ BSTR p);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Object )( 
            ICoreMetaProject * This,
            /* [in] */ metaid_type metaid,
            /* [retval][out] */ ICoreMetaObject **p);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetObjectDisp )( 
            ICoreMetaProject * This,
            /* [in] */ metaid_type metaid,
            /* [retval][out] */ ICoreMetaObject **p);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Objects )( 
            ICoreMetaProject * This,
            /* [retval][out] */ ICoreMetaObjects **p);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *AddObject )( 
            ICoreMetaProject * This,
            /* [in] */ metaid_type metaid,
            /* [in] */ BSTR token,
            /* [in] */ BSTR name,
            /* [out] */ ICoreMetaObject **p);
        
        END_INTERFACE
    } ICoreMetaProjectVtbl;

    interface ICoreMetaProject
    {
        CONST_VTBL struct ICoreMetaProjectVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ICoreMetaProject_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ICoreMetaProject_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ICoreMetaProject_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ICoreMetaProject_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define ICoreMetaProject_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define ICoreMetaProject_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define ICoreMetaProject_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define ICoreMetaProject_get_GUID(This,p)	\
    ( (This)->lpVtbl -> get_GUID(This,p) ) 

#define ICoreMetaProject_put_GUID(This,p)	\
    ( (This)->lpVtbl -> put_GUID(This,p) ) 

#define ICoreMetaProject_get_Token(This,p)	\
    ( (This)->lpVtbl -> get_Token(This,p) ) 

#define ICoreMetaProject_put_Token(This,p)	\
    ( (This)->lpVtbl -> put_Token(This,p) ) 

#define ICoreMetaProject_get_Name(This,p)	\
    ( (This)->lpVtbl -> get_Name(This,p) ) 

#define ICoreMetaProject_put_Name(This,p)	\
    ( (This)->lpVtbl -> put_Name(This,p) ) 

#define ICoreMetaProject_get_Object(This,metaid,p)	\
    ( (This)->lpVtbl -> get_Object(This,metaid,p) ) 

#define ICoreMetaProject_GetObjectDisp(This,metaid,p)	\
    ( (This)->lpVtbl -> GetObjectDisp(This,metaid,p) ) 

#define ICoreMetaProject_get_Objects(This,p)	\
    ( (This)->lpVtbl -> get_Objects(This,p) ) 

#define ICoreMetaProject_AddObject(This,metaid,token,name,p)	\
    ( (This)->lpVtbl -> AddObject(This,metaid,token,name,p) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ICoreMetaProject_INTERFACE_DEFINED__ */


#ifndef __ICoreMetaObject_INTERFACE_DEFINED__
#define __ICoreMetaObject_INTERFACE_DEFINED__

/* interface ICoreMetaObject */
/* [unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_ICoreMetaObject;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("98AA02DB-2E2C-11D3-B36D-0060082DF884")
    ICoreMetaObject : public IDispatch
    {
    public:
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Project( 
            /* [retval][out] */ ICoreMetaProject **p) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_MetaID( 
            /* [retval][out] */ metaid_type *p) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Token( 
            /* [retval][out] */ BSTR *p) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Name( 
            /* [retval][out] */ BSTR *p) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Attribute( 
            /* [in] */ attrid_type attrid,
            /* [retval][out] */ ICoreMetaAttribute **p) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetAttributeDisp( 
            /* [in] */ attrid_type attrid,
            /* [retval][out] */ ICoreMetaAttribute **p) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Attributes( 
            /* [retval][out] */ ICoreMetaAttributes **p) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_ClassIDs( 
            /* [retval][out] */ SAFEARRAY * *p) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE AddAttribute( 
            /* [in] */ attrid_type attrid,
            /* [in] */ BSTR token,
            /* [in] */ BSTR name,
            /* [in] */ valtype_type valtype,
            /* [out] */ ICoreMetaAttribute **p) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE AddClassID( 
            /* [in] */ guid_type classid) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ICoreMetaObjectVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ICoreMetaObject * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ICoreMetaObject * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ICoreMetaObject * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            ICoreMetaObject * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            ICoreMetaObject * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            ICoreMetaObject * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ICoreMetaObject * This,
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
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Project )( 
            ICoreMetaObject * This,
            /* [retval][out] */ ICoreMetaProject **p);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_MetaID )( 
            ICoreMetaObject * This,
            /* [retval][out] */ metaid_type *p);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Token )( 
            ICoreMetaObject * This,
            /* [retval][out] */ BSTR *p);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Name )( 
            ICoreMetaObject * This,
            /* [retval][out] */ BSTR *p);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Attribute )( 
            ICoreMetaObject * This,
            /* [in] */ attrid_type attrid,
            /* [retval][out] */ ICoreMetaAttribute **p);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetAttributeDisp )( 
            ICoreMetaObject * This,
            /* [in] */ attrid_type attrid,
            /* [retval][out] */ ICoreMetaAttribute **p);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Attributes )( 
            ICoreMetaObject * This,
            /* [retval][out] */ ICoreMetaAttributes **p);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ClassIDs )( 
            ICoreMetaObject * This,
            /* [retval][out] */ SAFEARRAY * *p);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *AddAttribute )( 
            ICoreMetaObject * This,
            /* [in] */ attrid_type attrid,
            /* [in] */ BSTR token,
            /* [in] */ BSTR name,
            /* [in] */ valtype_type valtype,
            /* [out] */ ICoreMetaAttribute **p);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *AddClassID )( 
            ICoreMetaObject * This,
            /* [in] */ guid_type classid);
        
        END_INTERFACE
    } ICoreMetaObjectVtbl;

    interface ICoreMetaObject
    {
        CONST_VTBL struct ICoreMetaObjectVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ICoreMetaObject_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ICoreMetaObject_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ICoreMetaObject_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ICoreMetaObject_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define ICoreMetaObject_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define ICoreMetaObject_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define ICoreMetaObject_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define ICoreMetaObject_get_Project(This,p)	\
    ( (This)->lpVtbl -> get_Project(This,p) ) 

#define ICoreMetaObject_get_MetaID(This,p)	\
    ( (This)->lpVtbl -> get_MetaID(This,p) ) 

#define ICoreMetaObject_get_Token(This,p)	\
    ( (This)->lpVtbl -> get_Token(This,p) ) 

#define ICoreMetaObject_get_Name(This,p)	\
    ( (This)->lpVtbl -> get_Name(This,p) ) 

#define ICoreMetaObject_get_Attribute(This,attrid,p)	\
    ( (This)->lpVtbl -> get_Attribute(This,attrid,p) ) 

#define ICoreMetaObject_GetAttributeDisp(This,attrid,p)	\
    ( (This)->lpVtbl -> GetAttributeDisp(This,attrid,p) ) 

#define ICoreMetaObject_get_Attributes(This,p)	\
    ( (This)->lpVtbl -> get_Attributes(This,p) ) 

#define ICoreMetaObject_get_ClassIDs(This,p)	\
    ( (This)->lpVtbl -> get_ClassIDs(This,p) ) 

#define ICoreMetaObject_AddAttribute(This,attrid,token,name,valtype,p)	\
    ( (This)->lpVtbl -> AddAttribute(This,attrid,token,name,valtype,p) ) 

#define ICoreMetaObject_AddClassID(This,classid)	\
    ( (This)->lpVtbl -> AddClassID(This,classid) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ICoreMetaObject_INTERFACE_DEFINED__ */


#ifndef __ICoreMetaAttribute_INTERFACE_DEFINED__
#define __ICoreMetaAttribute_INTERFACE_DEFINED__

/* interface ICoreMetaAttribute */
/* [unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_ICoreMetaAttribute;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("98AA02E1-2E2C-11D3-B36D-0060082DF884")
    ICoreMetaAttribute : public IDispatch
    {
    public:
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Object( 
            /* [retval][out] */ ICoreMetaObject **p) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_AttrID( 
            /* [retval][out] */ attrid_type *p) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Token( 
            /* [retval][out] */ BSTR *p) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Name( 
            /* [retval][out] */ BSTR *p) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_ValueType( 
            /* [retval][out] */ valtype_type *p) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_LockAttrID( 
            /* [retval][out] */ attrid_type *p) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_MaxSize( 
            /* [retval][out] */ long *p) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ICoreMetaAttributeVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ICoreMetaAttribute * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ICoreMetaAttribute * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ICoreMetaAttribute * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            ICoreMetaAttribute * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            ICoreMetaAttribute * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            ICoreMetaAttribute * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ICoreMetaAttribute * This,
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
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Object )( 
            ICoreMetaAttribute * This,
            /* [retval][out] */ ICoreMetaObject **p);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_AttrID )( 
            ICoreMetaAttribute * This,
            /* [retval][out] */ attrid_type *p);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Token )( 
            ICoreMetaAttribute * This,
            /* [retval][out] */ BSTR *p);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Name )( 
            ICoreMetaAttribute * This,
            /* [retval][out] */ BSTR *p);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ValueType )( 
            ICoreMetaAttribute * This,
            /* [retval][out] */ valtype_type *p);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_LockAttrID )( 
            ICoreMetaAttribute * This,
            /* [retval][out] */ attrid_type *p);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_MaxSize )( 
            ICoreMetaAttribute * This,
            /* [retval][out] */ long *p);
        
        END_INTERFACE
    } ICoreMetaAttributeVtbl;

    interface ICoreMetaAttribute
    {
        CONST_VTBL struct ICoreMetaAttributeVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ICoreMetaAttribute_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ICoreMetaAttribute_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ICoreMetaAttribute_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ICoreMetaAttribute_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define ICoreMetaAttribute_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define ICoreMetaAttribute_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define ICoreMetaAttribute_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define ICoreMetaAttribute_get_Object(This,p)	\
    ( (This)->lpVtbl -> get_Object(This,p) ) 

#define ICoreMetaAttribute_get_AttrID(This,p)	\
    ( (This)->lpVtbl -> get_AttrID(This,p) ) 

#define ICoreMetaAttribute_get_Token(This,p)	\
    ( (This)->lpVtbl -> get_Token(This,p) ) 

#define ICoreMetaAttribute_get_Name(This,p)	\
    ( (This)->lpVtbl -> get_Name(This,p) ) 

#define ICoreMetaAttribute_get_ValueType(This,p)	\
    ( (This)->lpVtbl -> get_ValueType(This,p) ) 

#define ICoreMetaAttribute_get_LockAttrID(This,p)	\
    ( (This)->lpVtbl -> get_LockAttrID(This,p) ) 

#define ICoreMetaAttribute_get_MaxSize(This,p)	\
    ( (This)->lpVtbl -> get_MaxSize(This,p) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ICoreMetaAttribute_INTERFACE_DEFINED__ */


#ifndef __ICoreStorage_INTERFACE_DEFINED__
#define __ICoreStorage_INTERFACE_DEFINED__

/* interface ICoreStorage */
/* [unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_ICoreStorage;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("AD9DFA4E-3A3B-11D3-B36C-0060082DF884")
    ICoreStorage : public IDispatch
    {
    public:
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_MetaProject( 
            /* [retval][out] */ ICoreMetaProject **p) = 0;
        
        virtual /* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_MetaProject( 
            /* [in] */ ICoreMetaProject *p) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_StorageType( 
            /* [retval][out] */ long *p) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_MetaObject( 
            /* [retval][out] */ ICoreMetaObject **p) = 0;
        
        virtual /* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_MetaObject( 
            /* [in] */ ICoreMetaObject *p) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_MetaID( 
            /* [retval][out] */ metaid_type *p) = 0;
        
        virtual /* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_MetaID( 
            /* [in] */ metaid_type p) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_MetaAttribute( 
            /* [retval][out] */ ICoreMetaAttribute **p) = 0;
        
        virtual /* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_MetaAttribute( 
            /* [in] */ ICoreMetaAttribute *p) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_AttrID( 
            /* [retval][out] */ attrid_type *p) = 0;
        
        virtual /* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_AttrID( 
            /* [in] */ attrid_type p) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE OpenProject( 
            /* [in] */ BSTR connection,
            /* [out] */ VARIANT_BOOL *ro_mode) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE CloseProject( 
            /* [in] */ VARIANT_BOOL abort) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE SaveProject( 
            /* [in] */ BSTR save_as_conn,
            /* [defaultvalue][in] */ VARIANT_BOOL keepoldname = 0) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE CreateProject( 
            /* [in] */ BSTR connection) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE DeleteProject( void) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE BeginTransaction( void) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE CommitTransaction( void) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE AbortTransaction( void) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE OpenObject( 
            /* [in] */ objid_type ObjID) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE CloseObject( void) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE CreateObject( 
            /* [out] */ objid_type *ObjID) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE DeleteObject( void) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE LockObject( void) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_AttributeValue( 
            /* [out][retval] */ VARIANT *p) = 0;
        
        virtual /* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_AttributeValue( 
            /* [in] */ VARIANT p) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ICoreStorageVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ICoreStorage * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ICoreStorage * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ICoreStorage * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            ICoreStorage * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            ICoreStorage * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            ICoreStorage * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ICoreStorage * This,
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
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_MetaProject )( 
            ICoreStorage * This,
            /* [retval][out] */ ICoreMetaProject **p);
        
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_MetaProject )( 
            ICoreStorage * This,
            /* [in] */ ICoreMetaProject *p);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_StorageType )( 
            ICoreStorage * This,
            /* [retval][out] */ long *p);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_MetaObject )( 
            ICoreStorage * This,
            /* [retval][out] */ ICoreMetaObject **p);
        
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_MetaObject )( 
            ICoreStorage * This,
            /* [in] */ ICoreMetaObject *p);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_MetaID )( 
            ICoreStorage * This,
            /* [retval][out] */ metaid_type *p);
        
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_MetaID )( 
            ICoreStorage * This,
            /* [in] */ metaid_type p);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_MetaAttribute )( 
            ICoreStorage * This,
            /* [retval][out] */ ICoreMetaAttribute **p);
        
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_MetaAttribute )( 
            ICoreStorage * This,
            /* [in] */ ICoreMetaAttribute *p);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_AttrID )( 
            ICoreStorage * This,
            /* [retval][out] */ attrid_type *p);
        
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_AttrID )( 
            ICoreStorage * This,
            /* [in] */ attrid_type p);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *OpenProject )( 
            ICoreStorage * This,
            /* [in] */ BSTR connection,
            /* [out] */ VARIANT_BOOL *ro_mode);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *CloseProject )( 
            ICoreStorage * This,
            /* [in] */ VARIANT_BOOL abort);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *SaveProject )( 
            ICoreStorage * This,
            /* [in] */ BSTR save_as_conn,
            /* [defaultvalue][in] */ VARIANT_BOOL keepoldname);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *CreateProject )( 
            ICoreStorage * This,
            /* [in] */ BSTR connection);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *DeleteProject )( 
            ICoreStorage * This);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *BeginTransaction )( 
            ICoreStorage * This);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *CommitTransaction )( 
            ICoreStorage * This);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *AbortTransaction )( 
            ICoreStorage * This);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *OpenObject )( 
            ICoreStorage * This,
            /* [in] */ objid_type ObjID);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *CloseObject )( 
            ICoreStorage * This);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *CreateObject )( 
            ICoreStorage * This,
            /* [out] */ objid_type *ObjID);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *DeleteObject )( 
            ICoreStorage * This);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *LockObject )( 
            ICoreStorage * This);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_AttributeValue )( 
            ICoreStorage * This,
            /* [out][retval] */ VARIANT *p);
        
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_AttributeValue )( 
            ICoreStorage * This,
            /* [in] */ VARIANT p);
        
        END_INTERFACE
    } ICoreStorageVtbl;

    interface ICoreStorage
    {
        CONST_VTBL struct ICoreStorageVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ICoreStorage_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ICoreStorage_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ICoreStorage_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ICoreStorage_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define ICoreStorage_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define ICoreStorage_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define ICoreStorage_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define ICoreStorage_get_MetaProject(This,p)	\
    ( (This)->lpVtbl -> get_MetaProject(This,p) ) 

#define ICoreStorage_put_MetaProject(This,p)	\
    ( (This)->lpVtbl -> put_MetaProject(This,p) ) 

#define ICoreStorage_get_StorageType(This,p)	\
    ( (This)->lpVtbl -> get_StorageType(This,p) ) 

#define ICoreStorage_get_MetaObject(This,p)	\
    ( (This)->lpVtbl -> get_MetaObject(This,p) ) 

#define ICoreStorage_put_MetaObject(This,p)	\
    ( (This)->lpVtbl -> put_MetaObject(This,p) ) 

#define ICoreStorage_get_MetaID(This,p)	\
    ( (This)->lpVtbl -> get_MetaID(This,p) ) 

#define ICoreStorage_put_MetaID(This,p)	\
    ( (This)->lpVtbl -> put_MetaID(This,p) ) 

#define ICoreStorage_get_MetaAttribute(This,p)	\
    ( (This)->lpVtbl -> get_MetaAttribute(This,p) ) 

#define ICoreStorage_put_MetaAttribute(This,p)	\
    ( (This)->lpVtbl -> put_MetaAttribute(This,p) ) 

#define ICoreStorage_get_AttrID(This,p)	\
    ( (This)->lpVtbl -> get_AttrID(This,p) ) 

#define ICoreStorage_put_AttrID(This,p)	\
    ( (This)->lpVtbl -> put_AttrID(This,p) ) 

#define ICoreStorage_OpenProject(This,connection,ro_mode)	\
    ( (This)->lpVtbl -> OpenProject(This,connection,ro_mode) ) 

#define ICoreStorage_CloseProject(This,abort)	\
    ( (This)->lpVtbl -> CloseProject(This,abort) ) 

#define ICoreStorage_SaveProject(This,save_as_conn,keepoldname)	\
    ( (This)->lpVtbl -> SaveProject(This,save_as_conn,keepoldname) ) 

#define ICoreStorage_CreateProject(This,connection)	\
    ( (This)->lpVtbl -> CreateProject(This,connection) ) 

#define ICoreStorage_DeleteProject(This)	\
    ( (This)->lpVtbl -> DeleteProject(This) ) 

#define ICoreStorage_BeginTransaction(This)	\
    ( (This)->lpVtbl -> BeginTransaction(This) ) 

#define ICoreStorage_CommitTransaction(This)	\
    ( (This)->lpVtbl -> CommitTransaction(This) ) 

#define ICoreStorage_AbortTransaction(This)	\
    ( (This)->lpVtbl -> AbortTransaction(This) ) 

#define ICoreStorage_OpenObject(This,ObjID)	\
    ( (This)->lpVtbl -> OpenObject(This,ObjID) ) 

#define ICoreStorage_CloseObject(This)	\
    ( (This)->lpVtbl -> CloseObject(This) ) 

#define ICoreStorage_CreateObject(This,ObjID)	\
    ( (This)->lpVtbl -> CreateObject(This,ObjID) ) 

#define ICoreStorage_DeleteObject(This)	\
    ( (This)->lpVtbl -> DeleteObject(This) ) 

#define ICoreStorage_LockObject(This)	\
    ( (This)->lpVtbl -> LockObject(This) ) 

#define ICoreStorage_get_AttributeValue(This,p)	\
    ( (This)->lpVtbl -> get_AttributeValue(This,p) ) 

#define ICoreStorage_put_AttributeValue(This,p)	\
    ( (This)->lpVtbl -> put_AttributeValue(This,p) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ICoreStorage_INTERFACE_DEFINED__ */


#ifndef __ICoreProject_INTERFACE_DEFINED__
#define __ICoreProject_INTERFACE_DEFINED__

/* interface ICoreProject */
/* [unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_ICoreProject;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("AD9DFA4E-2A3B-11D3-B36C-0060082DF884")
    ICoreProject : public IDispatch
    {
    public:
        virtual /* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_Storage( 
            /* [in] */ ICoreStorage *p) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Storage( 
            /* [retval][out] */ ICoreStorage **p) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_MetaProject( 
            /* [retval][out] */ ICoreMetaProject **p) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE OpenProject( 
            /* [in] */ BSTR connection,
            /* [in] */ ICoreMetaProject *p,
            /* [defaultvalue][out] */ VARIANT_BOOL *ro_mode = 0) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE CloseProject( 
            /* [defaultvalue][in] */ VARIANT_BOOL abort = ( VARIANT_BOOL  )0) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE CreateProject( 
            /* [in] */ BSTR connection,
            /* [in] */ ICoreMetaProject *p) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE SaveProject( 
            /* [defaultvalue][in] */ BSTR save_as_conn = L"",
            /* [defaultvalue][in] */ VARIANT_BOOL keepoldname = 0) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE DeleteProject( 
            /* [in] */ BSTR connection) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE OpenProject2( 
            /* [in] */ BSTR connection,
            /* [in] */ long pUndoSize,
            /* [in] */ ICoreMetaProject *p,
            /* [defaultvalue][out] */ VARIANT_BOOL *ro_mode = 0) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE CreateProject2( 
            /* [in] */ BSTR connection,
            /* [in] */ long pUndoSize,
            /* [in] */ ICoreMetaProject *p) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Object( 
            /* [in] */ metaid_type metaid,
            /* [in] */ objid_type ObjID,
            /* [retval][out] */ ICoreObject **p) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetObjectDisp( 
            /* [in] */ metaid_type metaid,
            /* [in] */ objid_type ObjID,
            /* [retval][out] */ ICoreObject **p) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE CreateObject( 
            /* [in] */ metaid_type metaid,
            /* [out] */ ICoreObject **p) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_RootObject( 
            /* [retval][out] */ ICoreObject **p) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE BeginTransaction( 
            /* [defaultvalue][in] */ transtype_enum transtype = TRANSTYPE_ANY) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE CommitTransaction( 
            /* [defaultvalue][in] */ transtype_enum transtype = TRANSTYPE_ANY) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE AbortTransaction( 
            /* [defaultvalue][in] */ transtype_enum transtype = TRANSTYPE_ANY) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_NestedTransactionCount( 
            /* [retval][out] */ short *p) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE UndoTransaction( void) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE RedoTransaction( void) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE FlushUndoQueue( void) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE FlushRedoQueue( void) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_UndoQueueSize( 
            /* [retval][out] */ short *p) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_RedoQueueSize( 
            /* [retval][out] */ short *p) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE CreateTerritory( 
            /* [out] */ ICoreTerritory **p) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE PushTerritory( 
            /* [in] */ ICoreTerritory *p) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE PopTerritory( void) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ICoreProjectVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ICoreProject * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ICoreProject * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ICoreProject * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            ICoreProject * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            ICoreProject * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            ICoreProject * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ICoreProject * This,
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
        
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Storage )( 
            ICoreProject * This,
            /* [in] */ ICoreStorage *p);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Storage )( 
            ICoreProject * This,
            /* [retval][out] */ ICoreStorage **p);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_MetaProject )( 
            ICoreProject * This,
            /* [retval][out] */ ICoreMetaProject **p);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *OpenProject )( 
            ICoreProject * This,
            /* [in] */ BSTR connection,
            /* [in] */ ICoreMetaProject *p,
            /* [defaultvalue][out] */ VARIANT_BOOL *ro_mode);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *CloseProject )( 
            ICoreProject * This,
            /* [defaultvalue][in] */ VARIANT_BOOL abort);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *CreateProject )( 
            ICoreProject * This,
            /* [in] */ BSTR connection,
            /* [in] */ ICoreMetaProject *p);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *SaveProject )( 
            ICoreProject * This,
            /* [defaultvalue][in] */ BSTR save_as_conn,
            /* [defaultvalue][in] */ VARIANT_BOOL keepoldname);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *DeleteProject )( 
            ICoreProject * This,
            /* [in] */ BSTR connection);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *OpenProject2 )( 
            ICoreProject * This,
            /* [in] */ BSTR connection,
            /* [in] */ long pUndoSize,
            /* [in] */ ICoreMetaProject *p,
            /* [defaultvalue][out] */ VARIANT_BOOL *ro_mode);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *CreateProject2 )( 
            ICoreProject * This,
            /* [in] */ BSTR connection,
            /* [in] */ long pUndoSize,
            /* [in] */ ICoreMetaProject *p);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Object )( 
            ICoreProject * This,
            /* [in] */ metaid_type metaid,
            /* [in] */ objid_type ObjID,
            /* [retval][out] */ ICoreObject **p);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetObjectDisp )( 
            ICoreProject * This,
            /* [in] */ metaid_type metaid,
            /* [in] */ objid_type ObjID,
            /* [retval][out] */ ICoreObject **p);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *CreateObject )( 
            ICoreProject * This,
            /* [in] */ metaid_type metaid,
            /* [out] */ ICoreObject **p);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_RootObject )( 
            ICoreProject * This,
            /* [retval][out] */ ICoreObject **p);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *BeginTransaction )( 
            ICoreProject * This,
            /* [defaultvalue][in] */ transtype_enum transtype);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *CommitTransaction )( 
            ICoreProject * This,
            /* [defaultvalue][in] */ transtype_enum transtype);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *AbortTransaction )( 
            ICoreProject * This,
            /* [defaultvalue][in] */ transtype_enum transtype);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_NestedTransactionCount )( 
            ICoreProject * This,
            /* [retval][out] */ short *p);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *UndoTransaction )( 
            ICoreProject * This);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *RedoTransaction )( 
            ICoreProject * This);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *FlushUndoQueue )( 
            ICoreProject * This);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *FlushRedoQueue )( 
            ICoreProject * This);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_UndoQueueSize )( 
            ICoreProject * This,
            /* [retval][out] */ short *p);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_RedoQueueSize )( 
            ICoreProject * This,
            /* [retval][out] */ short *p);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *CreateTerritory )( 
            ICoreProject * This,
            /* [out] */ ICoreTerritory **p);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *PushTerritory )( 
            ICoreProject * This,
            /* [in] */ ICoreTerritory *p);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *PopTerritory )( 
            ICoreProject * This);
        
        END_INTERFACE
    } ICoreProjectVtbl;

    interface ICoreProject
    {
        CONST_VTBL struct ICoreProjectVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ICoreProject_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ICoreProject_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ICoreProject_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ICoreProject_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define ICoreProject_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define ICoreProject_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define ICoreProject_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define ICoreProject_put_Storage(This,p)	\
    ( (This)->lpVtbl -> put_Storage(This,p) ) 

#define ICoreProject_get_Storage(This,p)	\
    ( (This)->lpVtbl -> get_Storage(This,p) ) 

#define ICoreProject_get_MetaProject(This,p)	\
    ( (This)->lpVtbl -> get_MetaProject(This,p) ) 

#define ICoreProject_OpenProject(This,connection,p,ro_mode)	\
    ( (This)->lpVtbl -> OpenProject(This,connection,p,ro_mode) ) 

#define ICoreProject_CloseProject(This,abort)	\
    ( (This)->lpVtbl -> CloseProject(This,abort) ) 

#define ICoreProject_CreateProject(This,connection,p)	\
    ( (This)->lpVtbl -> CreateProject(This,connection,p) ) 

#define ICoreProject_SaveProject(This,save_as_conn,keepoldname)	\
    ( (This)->lpVtbl -> SaveProject(This,save_as_conn,keepoldname) ) 

#define ICoreProject_DeleteProject(This,connection)	\
    ( (This)->lpVtbl -> DeleteProject(This,connection) ) 

#define ICoreProject_OpenProject2(This,connection,pUndoSize,p,ro_mode)	\
    ( (This)->lpVtbl -> OpenProject2(This,connection,pUndoSize,p,ro_mode) ) 

#define ICoreProject_CreateProject2(This,connection,pUndoSize,p)	\
    ( (This)->lpVtbl -> CreateProject2(This,connection,pUndoSize,p) ) 

#define ICoreProject_get_Object(This,metaid,ObjID,p)	\
    ( (This)->lpVtbl -> get_Object(This,metaid,ObjID,p) ) 

#define ICoreProject_GetObjectDisp(This,metaid,ObjID,p)	\
    ( (This)->lpVtbl -> GetObjectDisp(This,metaid,ObjID,p) ) 

#define ICoreProject_CreateObject(This,metaid,p)	\
    ( (This)->lpVtbl -> CreateObject(This,metaid,p) ) 

#define ICoreProject_get_RootObject(This,p)	\
    ( (This)->lpVtbl -> get_RootObject(This,p) ) 

#define ICoreProject_BeginTransaction(This,transtype)	\
    ( (This)->lpVtbl -> BeginTransaction(This,transtype) ) 

#define ICoreProject_CommitTransaction(This,transtype)	\
    ( (This)->lpVtbl -> CommitTransaction(This,transtype) ) 

#define ICoreProject_AbortTransaction(This,transtype)	\
    ( (This)->lpVtbl -> AbortTransaction(This,transtype) ) 

#define ICoreProject_get_NestedTransactionCount(This,p)	\
    ( (This)->lpVtbl -> get_NestedTransactionCount(This,p) ) 

#define ICoreProject_UndoTransaction(This)	\
    ( (This)->lpVtbl -> UndoTransaction(This) ) 

#define ICoreProject_RedoTransaction(This)	\
    ( (This)->lpVtbl -> RedoTransaction(This) ) 

#define ICoreProject_FlushUndoQueue(This)	\
    ( (This)->lpVtbl -> FlushUndoQueue(This) ) 

#define ICoreProject_FlushRedoQueue(This)	\
    ( (This)->lpVtbl -> FlushRedoQueue(This) ) 

#define ICoreProject_get_UndoQueueSize(This,p)	\
    ( (This)->lpVtbl -> get_UndoQueueSize(This,p) ) 

#define ICoreProject_get_RedoQueueSize(This,p)	\
    ( (This)->lpVtbl -> get_RedoQueueSize(This,p) ) 

#define ICoreProject_CreateTerritory(This,p)	\
    ( (This)->lpVtbl -> CreateTerritory(This,p) ) 

#define ICoreProject_PushTerritory(This,p)	\
    ( (This)->lpVtbl -> PushTerritory(This,p) ) 

#define ICoreProject_PopTerritory(This)	\
    ( (This)->lpVtbl -> PopTerritory(This) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ICoreProject_INTERFACE_DEFINED__ */


#ifndef __ICoreObject_INTERFACE_DEFINED__
#define __ICoreObject_INTERFACE_DEFINED__

/* interface ICoreObject */
/* [unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_ICoreObject;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("826A8736-563B-11D3-B301-005004D38590")
    ICoreObject : public IDispatch
    {
    public:
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Project( 
            /* [retval][out] */ ICoreProject **p) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_MetaObject( 
            /* [retval][out] */ ICoreMetaObject **p) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_ObjID( 
            /* [retval][out] */ objid_type *p) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Attribute( 
            /* [in] */ attrid_type attrid,
            /* [retval][out] */ ICoreAttribute **p) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetAttributeDisp( 
            /* [in] */ attrid_type attrid,
            /* [retval][out] */ ICoreAttribute **p) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Attributes( 
            /* [retval][out] */ ICoreAttributes **p) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_AttributeValue( 
            /* [in] */ attrid_type attrid,
            /* [retval][out] */ VARIANT *p) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetAttributeValueDisp( 
            /* [in] */ attrid_type attrid,
            /* [retval][out] */ VARIANT *p) = 0;
        
        virtual /* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_AttributeValue( 
            /* [in] */ attrid_type attrid,
            /* [in] */ VARIANT p) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE SetAttributeValueDisp( 
            /* [in] */ attrid_type attrid,
            /* [in] */ VARIANT p) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_LoadedAttrValue( 
            /* [in] */ attrid_type attrid,
            /* [retval][out] */ VARIANT *p) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetLoadedAttrValueDisp( 
            /* [in] */ attrid_type attrid,
            /* [retval][out] */ VARIANT *p) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_PreviousAttrValue( 
            /* [in] */ attrid_type attrid,
            /* [retval][out] */ VARIANT *p) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetPreviousAttrValueDisp( 
            /* [in] */ attrid_type attrid,
            /* [retval][out] */ VARIANT *p) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_PeerLockValue( 
            /* [in] */ attrid_type attrid,
            /* [retval][out] */ locking_type *p) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetPeerLockValueDisp( 
            /* [in] */ attrid_type attrid,
            /* [retval][out] */ locking_type *p) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE SearchCollection( 
            /* [in] */ attrid_type coll_attrid,
            /* [in] */ attrid_type search_attrid,
            /* [in] */ VARIANT search_value,
            /* [retval][out] */ ICoreObject **p) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_IsDeleted( 
            /* [out] */ VARIANT_BOOL *p) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Delete( void) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Clone( 
            /* [out] */ ICoreObject **p) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ICoreObjectVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ICoreObject * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ICoreObject * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ICoreObject * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            ICoreObject * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            ICoreObject * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            ICoreObject * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ICoreObject * This,
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
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Project )( 
            ICoreObject * This,
            /* [retval][out] */ ICoreProject **p);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_MetaObject )( 
            ICoreObject * This,
            /* [retval][out] */ ICoreMetaObject **p);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ObjID )( 
            ICoreObject * This,
            /* [retval][out] */ objid_type *p);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Attribute )( 
            ICoreObject * This,
            /* [in] */ attrid_type attrid,
            /* [retval][out] */ ICoreAttribute **p);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetAttributeDisp )( 
            ICoreObject * This,
            /* [in] */ attrid_type attrid,
            /* [retval][out] */ ICoreAttribute **p);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Attributes )( 
            ICoreObject * This,
            /* [retval][out] */ ICoreAttributes **p);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_AttributeValue )( 
            ICoreObject * This,
            /* [in] */ attrid_type attrid,
            /* [retval][out] */ VARIANT *p);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetAttributeValueDisp )( 
            ICoreObject * This,
            /* [in] */ attrid_type attrid,
            /* [retval][out] */ VARIANT *p);
        
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_AttributeValue )( 
            ICoreObject * This,
            /* [in] */ attrid_type attrid,
            /* [in] */ VARIANT p);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *SetAttributeValueDisp )( 
            ICoreObject * This,
            /* [in] */ attrid_type attrid,
            /* [in] */ VARIANT p);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_LoadedAttrValue )( 
            ICoreObject * This,
            /* [in] */ attrid_type attrid,
            /* [retval][out] */ VARIANT *p);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetLoadedAttrValueDisp )( 
            ICoreObject * This,
            /* [in] */ attrid_type attrid,
            /* [retval][out] */ VARIANT *p);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_PreviousAttrValue )( 
            ICoreObject * This,
            /* [in] */ attrid_type attrid,
            /* [retval][out] */ VARIANT *p);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetPreviousAttrValueDisp )( 
            ICoreObject * This,
            /* [in] */ attrid_type attrid,
            /* [retval][out] */ VARIANT *p);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_PeerLockValue )( 
            ICoreObject * This,
            /* [in] */ attrid_type attrid,
            /* [retval][out] */ locking_type *p);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetPeerLockValueDisp )( 
            ICoreObject * This,
            /* [in] */ attrid_type attrid,
            /* [retval][out] */ locking_type *p);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *SearchCollection )( 
            ICoreObject * This,
            /* [in] */ attrid_type coll_attrid,
            /* [in] */ attrid_type search_attrid,
            /* [in] */ VARIANT search_value,
            /* [retval][out] */ ICoreObject **p);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_IsDeleted )( 
            ICoreObject * This,
            /* [out] */ VARIANT_BOOL *p);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Delete )( 
            ICoreObject * This);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Clone )( 
            ICoreObject * This,
            /* [out] */ ICoreObject **p);
        
        END_INTERFACE
    } ICoreObjectVtbl;

    interface ICoreObject
    {
        CONST_VTBL struct ICoreObjectVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ICoreObject_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ICoreObject_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ICoreObject_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ICoreObject_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define ICoreObject_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define ICoreObject_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define ICoreObject_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define ICoreObject_get_Project(This,p)	\
    ( (This)->lpVtbl -> get_Project(This,p) ) 

#define ICoreObject_get_MetaObject(This,p)	\
    ( (This)->lpVtbl -> get_MetaObject(This,p) ) 

#define ICoreObject_get_ObjID(This,p)	\
    ( (This)->lpVtbl -> get_ObjID(This,p) ) 

#define ICoreObject_get_Attribute(This,attrid,p)	\
    ( (This)->lpVtbl -> get_Attribute(This,attrid,p) ) 

#define ICoreObject_GetAttributeDisp(This,attrid,p)	\
    ( (This)->lpVtbl -> GetAttributeDisp(This,attrid,p) ) 

#define ICoreObject_get_Attributes(This,p)	\
    ( (This)->lpVtbl -> get_Attributes(This,p) ) 

#define ICoreObject_get_AttributeValue(This,attrid,p)	\
    ( (This)->lpVtbl -> get_AttributeValue(This,attrid,p) ) 

#define ICoreObject_GetAttributeValueDisp(This,attrid,p)	\
    ( (This)->lpVtbl -> GetAttributeValueDisp(This,attrid,p) ) 

#define ICoreObject_put_AttributeValue(This,attrid,p)	\
    ( (This)->lpVtbl -> put_AttributeValue(This,attrid,p) ) 

#define ICoreObject_SetAttributeValueDisp(This,attrid,p)	\
    ( (This)->lpVtbl -> SetAttributeValueDisp(This,attrid,p) ) 

#define ICoreObject_get_LoadedAttrValue(This,attrid,p)	\
    ( (This)->lpVtbl -> get_LoadedAttrValue(This,attrid,p) ) 

#define ICoreObject_GetLoadedAttrValueDisp(This,attrid,p)	\
    ( (This)->lpVtbl -> GetLoadedAttrValueDisp(This,attrid,p) ) 

#define ICoreObject_get_PreviousAttrValue(This,attrid,p)	\
    ( (This)->lpVtbl -> get_PreviousAttrValue(This,attrid,p) ) 

#define ICoreObject_GetPreviousAttrValueDisp(This,attrid,p)	\
    ( (This)->lpVtbl -> GetPreviousAttrValueDisp(This,attrid,p) ) 

#define ICoreObject_get_PeerLockValue(This,attrid,p)	\
    ( (This)->lpVtbl -> get_PeerLockValue(This,attrid,p) ) 

#define ICoreObject_GetPeerLockValueDisp(This,attrid,p)	\
    ( (This)->lpVtbl -> GetPeerLockValueDisp(This,attrid,p) ) 

#define ICoreObject_SearchCollection(This,coll_attrid,search_attrid,search_value,p)	\
    ( (This)->lpVtbl -> SearchCollection(This,coll_attrid,search_attrid,search_value,p) ) 

#define ICoreObject_get_IsDeleted(This,p)	\
    ( (This)->lpVtbl -> get_IsDeleted(This,p) ) 

#define ICoreObject_Delete(This)	\
    ( (This)->lpVtbl -> Delete(This) ) 

#define ICoreObject_Clone(This,p)	\
    ( (This)->lpVtbl -> Clone(This,p) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ICoreObject_INTERFACE_DEFINED__ */


#ifndef __ICoreAttribute_INTERFACE_DEFINED__
#define __ICoreAttribute_INTERFACE_DEFINED__

/* interface ICoreAttribute */
/* [unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_ICoreAttribute;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("826A8738-563B-11D3-B301-005004D38590")
    ICoreAttribute : public IDispatch
    {
    public:
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Object( 
            /* [retval][out] */ ICoreObject **p) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_MetaAttribute( 
            /* [retval][out] */ ICoreMetaAttribute **p) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Value( 
            /* [retval][out] */ VARIANT *p) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Value( 
            /* [in] */ VARIANT p) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_LoadedValue( 
            /* [retval][out] */ VARIANT *p) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_PreviousValue( 
            /* [retval][out] */ VARIANT *p) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ICoreAttributeVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ICoreAttribute * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ICoreAttribute * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ICoreAttribute * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            ICoreAttribute * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            ICoreAttribute * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            ICoreAttribute * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ICoreAttribute * This,
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
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Object )( 
            ICoreAttribute * This,
            /* [retval][out] */ ICoreObject **p);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_MetaAttribute )( 
            ICoreAttribute * This,
            /* [retval][out] */ ICoreMetaAttribute **p);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Value )( 
            ICoreAttribute * This,
            /* [retval][out] */ VARIANT *p);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Value )( 
            ICoreAttribute * This,
            /* [in] */ VARIANT p);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_LoadedValue )( 
            ICoreAttribute * This,
            /* [retval][out] */ VARIANT *p);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_PreviousValue )( 
            ICoreAttribute * This,
            /* [retval][out] */ VARIANT *p);
        
        END_INTERFACE
    } ICoreAttributeVtbl;

    interface ICoreAttribute
    {
        CONST_VTBL struct ICoreAttributeVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ICoreAttribute_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ICoreAttribute_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ICoreAttribute_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ICoreAttribute_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define ICoreAttribute_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define ICoreAttribute_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define ICoreAttribute_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define ICoreAttribute_get_Object(This,p)	\
    ( (This)->lpVtbl -> get_Object(This,p) ) 

#define ICoreAttribute_get_MetaAttribute(This,p)	\
    ( (This)->lpVtbl -> get_MetaAttribute(This,p) ) 

#define ICoreAttribute_get_Value(This,p)	\
    ( (This)->lpVtbl -> get_Value(This,p) ) 

#define ICoreAttribute_put_Value(This,p)	\
    ( (This)->lpVtbl -> put_Value(This,p) ) 

#define ICoreAttribute_get_LoadedValue(This,p)	\
    ( (This)->lpVtbl -> get_LoadedValue(This,p) ) 

#define ICoreAttribute_get_PreviousValue(This,p)	\
    ( (This)->lpVtbl -> get_PreviousValue(This,p) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ICoreAttribute_INTERFACE_DEFINED__ */


#ifndef __ICoreTerritory_INTERFACE_DEFINED__
#define __ICoreTerritory_INTERFACE_DEFINED__

/* interface ICoreTerritory */
/* [unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_ICoreTerritory;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("4C3A57C3-8DFF-11D3-B336-005004D38590")
    ICoreTerritory : public IDispatch
    {
    public:
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Project( 
            /* [retval][out] */ ICoreProject **p) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Attributes( 
            /* [retval][out] */ ICoreAttributes **p) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Clear( void) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ICoreTerritoryVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ICoreTerritory * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ICoreTerritory * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ICoreTerritory * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            ICoreTerritory * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            ICoreTerritory * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            ICoreTerritory * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ICoreTerritory * This,
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
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Project )( 
            ICoreTerritory * This,
            /* [retval][out] */ ICoreProject **p);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Attributes )( 
            ICoreTerritory * This,
            /* [retval][out] */ ICoreAttributes **p);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Clear )( 
            ICoreTerritory * This);
        
        END_INTERFACE
    } ICoreTerritoryVtbl;

    interface ICoreTerritory
    {
        CONST_VTBL struct ICoreTerritoryVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ICoreTerritory_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ICoreTerritory_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ICoreTerritory_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ICoreTerritory_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define ICoreTerritory_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define ICoreTerritory_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define ICoreTerritory_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define ICoreTerritory_get_Project(This,p)	\
    ( (This)->lpVtbl -> get_Project(This,p) ) 

#define ICoreTerritory_get_Attributes(This,p)	\
    ( (This)->lpVtbl -> get_Attributes(This,p) ) 

#define ICoreTerritory_Clear(This)	\
    ( (This)->lpVtbl -> Clear(This) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ICoreTerritory_INTERFACE_DEFINED__ */


#ifndef __ICoreMetaObjects_INTERFACE_DEFINED__
#define __ICoreMetaObjects_INTERFACE_DEFINED__

/* interface ICoreMetaObjects */
/* [unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_ICoreMetaObjects;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("43D12111-12CA-11D3-A6EC-0060082DF884")
    ICoreMetaObjects : public IDispatch
    {
    public:
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Count( 
            /* [retval][out] */ long *p) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Item( 
            /* [in] */ long n,
            /* [retval][out] */ ICoreMetaObject **p) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get__NewEnum( 
            /* [retval][out] */ IUnknown **p) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetAll( 
            /* [in] */ long count,
            /* [size_is][out] */ ICoreMetaObject **p) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Insert( 
            /* [in] */ ICoreMetaObject *p,
            /* [in] */ long at) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Append( 
            /* [in] */ ICoreMetaObject *p) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Find( 
            /* [in] */ ICoreMetaObject *p,
            /* [in] */ long start,
            /* [retval][out] */ long *res) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Remove( 
            /* [in] */ long n) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ICoreMetaObjectsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ICoreMetaObjects * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ICoreMetaObjects * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ICoreMetaObjects * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            ICoreMetaObjects * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            ICoreMetaObjects * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            ICoreMetaObjects * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ICoreMetaObjects * This,
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
            ICoreMetaObjects * This,
            /* [retval][out] */ long *p);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Item )( 
            ICoreMetaObjects * This,
            /* [in] */ long n,
            /* [retval][out] */ ICoreMetaObject **p);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get__NewEnum )( 
            ICoreMetaObjects * This,
            /* [retval][out] */ IUnknown **p);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetAll )( 
            ICoreMetaObjects * This,
            /* [in] */ long count,
            /* [size_is][out] */ ICoreMetaObject **p);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Insert )( 
            ICoreMetaObjects * This,
            /* [in] */ ICoreMetaObject *p,
            /* [in] */ long at);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Append )( 
            ICoreMetaObjects * This,
            /* [in] */ ICoreMetaObject *p);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Find )( 
            ICoreMetaObjects * This,
            /* [in] */ ICoreMetaObject *p,
            /* [in] */ long start,
            /* [retval][out] */ long *res);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Remove )( 
            ICoreMetaObjects * This,
            /* [in] */ long n);
        
        END_INTERFACE
    } ICoreMetaObjectsVtbl;

    interface ICoreMetaObjects
    {
        CONST_VTBL struct ICoreMetaObjectsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ICoreMetaObjects_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ICoreMetaObjects_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ICoreMetaObjects_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ICoreMetaObjects_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define ICoreMetaObjects_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define ICoreMetaObjects_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define ICoreMetaObjects_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define ICoreMetaObjects_get_Count(This,p)	\
    ( (This)->lpVtbl -> get_Count(This,p) ) 

#define ICoreMetaObjects_get_Item(This,n,p)	\
    ( (This)->lpVtbl -> get_Item(This,n,p) ) 

#define ICoreMetaObjects_get__NewEnum(This,p)	\
    ( (This)->lpVtbl -> get__NewEnum(This,p) ) 

#define ICoreMetaObjects_GetAll(This,count,p)	\
    ( (This)->lpVtbl -> GetAll(This,count,p) ) 

#define ICoreMetaObjects_Insert(This,p,at)	\
    ( (This)->lpVtbl -> Insert(This,p,at) ) 

#define ICoreMetaObjects_Append(This,p)	\
    ( (This)->lpVtbl -> Append(This,p) ) 

#define ICoreMetaObjects_Find(This,p,start,res)	\
    ( (This)->lpVtbl -> Find(This,p,start,res) ) 

#define ICoreMetaObjects_Remove(This,n)	\
    ( (This)->lpVtbl -> Remove(This,n) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ICoreMetaObjects_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_Core_0000_0009 */
/* [local] */ 

#ifdef __cplusplus
extern "C++"    
{            
template<> struct ::TypeName_MgaColl2Elem<ICoreMetaObjects>
{ typedef ICoreMetaObjects collection_type; typedef ICoreMetaObject element_type; };
template<> struct ::TypeName_MgaElem2Coll<ICoreMetaObject>
{ typedef ICoreMetaObjects collection_type; typedef ICoreMetaObject element_type; };
}            
#endif


extern RPC_IF_HANDLE __MIDL_itf_Core_0000_0009_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_Core_0000_0009_v0_0_s_ifspec;

#ifndef __ICoreMetaAttributes_INTERFACE_DEFINED__
#define __ICoreMetaAttributes_INTERFACE_DEFINED__

/* interface ICoreMetaAttributes */
/* [unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_ICoreMetaAttributes;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("43D12127-12CA-11D3-A6EC-0060082DF884")
    ICoreMetaAttributes : public IDispatch
    {
    public:
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Count( 
            /* [retval][out] */ long *p) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Item( 
            /* [in] */ long n,
            /* [retval][out] */ ICoreMetaAttribute **p) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get__NewEnum( 
            /* [retval][out] */ IUnknown **p) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetAll( 
            /* [in] */ long count,
            /* [size_is][out] */ ICoreMetaAttribute **p) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Insert( 
            /* [in] */ ICoreMetaAttribute *p,
            /* [in] */ long at) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Append( 
            /* [in] */ ICoreMetaAttribute *p) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Find( 
            /* [in] */ ICoreMetaAttribute *p,
            /* [in] */ long start,
            /* [retval][out] */ long *res) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Remove( 
            /* [in] */ long n) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ICoreMetaAttributesVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ICoreMetaAttributes * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ICoreMetaAttributes * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ICoreMetaAttributes * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            ICoreMetaAttributes * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            ICoreMetaAttributes * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            ICoreMetaAttributes * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ICoreMetaAttributes * This,
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
            ICoreMetaAttributes * This,
            /* [retval][out] */ long *p);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Item )( 
            ICoreMetaAttributes * This,
            /* [in] */ long n,
            /* [retval][out] */ ICoreMetaAttribute **p);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get__NewEnum )( 
            ICoreMetaAttributes * This,
            /* [retval][out] */ IUnknown **p);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetAll )( 
            ICoreMetaAttributes * This,
            /* [in] */ long count,
            /* [size_is][out] */ ICoreMetaAttribute **p);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Insert )( 
            ICoreMetaAttributes * This,
            /* [in] */ ICoreMetaAttribute *p,
            /* [in] */ long at);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Append )( 
            ICoreMetaAttributes * This,
            /* [in] */ ICoreMetaAttribute *p);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Find )( 
            ICoreMetaAttributes * This,
            /* [in] */ ICoreMetaAttribute *p,
            /* [in] */ long start,
            /* [retval][out] */ long *res);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Remove )( 
            ICoreMetaAttributes * This,
            /* [in] */ long n);
        
        END_INTERFACE
    } ICoreMetaAttributesVtbl;

    interface ICoreMetaAttributes
    {
        CONST_VTBL struct ICoreMetaAttributesVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ICoreMetaAttributes_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ICoreMetaAttributes_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ICoreMetaAttributes_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ICoreMetaAttributes_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define ICoreMetaAttributes_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define ICoreMetaAttributes_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define ICoreMetaAttributes_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define ICoreMetaAttributes_get_Count(This,p)	\
    ( (This)->lpVtbl -> get_Count(This,p) ) 

#define ICoreMetaAttributes_get_Item(This,n,p)	\
    ( (This)->lpVtbl -> get_Item(This,n,p) ) 

#define ICoreMetaAttributes_get__NewEnum(This,p)	\
    ( (This)->lpVtbl -> get__NewEnum(This,p) ) 

#define ICoreMetaAttributes_GetAll(This,count,p)	\
    ( (This)->lpVtbl -> GetAll(This,count,p) ) 

#define ICoreMetaAttributes_Insert(This,p,at)	\
    ( (This)->lpVtbl -> Insert(This,p,at) ) 

#define ICoreMetaAttributes_Append(This,p)	\
    ( (This)->lpVtbl -> Append(This,p) ) 

#define ICoreMetaAttributes_Find(This,p,start,res)	\
    ( (This)->lpVtbl -> Find(This,p,start,res) ) 

#define ICoreMetaAttributes_Remove(This,n)	\
    ( (This)->lpVtbl -> Remove(This,n) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ICoreMetaAttributes_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_Core_0000_0010 */
/* [local] */ 

#ifdef __cplusplus
extern "C++"    
{            
template<> struct ::TypeName_MgaColl2Elem<ICoreMetaAttributes>
{ typedef ICoreMetaAttributes collection_type; typedef ICoreMetaAttribute element_type; };
template<> struct ::TypeName_MgaElem2Coll<ICoreMetaAttribute>
{ typedef ICoreMetaAttributes collection_type; typedef ICoreMetaAttribute element_type; };
}            
#endif


extern RPC_IF_HANDLE __MIDL_itf_Core_0000_0010_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_Core_0000_0010_v0_0_s_ifspec;

#ifndef __ICoreObjects_INTERFACE_DEFINED__
#define __ICoreObjects_INTERFACE_DEFINED__

/* interface ICoreObjects */
/* [unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_ICoreObjects;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("43D12111-22CA-11D3-A6EC-0060082DF884")
    ICoreObjects : public IDispatch
    {
    public:
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Count( 
            /* [retval][out] */ long *p) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Item( 
            /* [in] */ long n,
            /* [retval][out] */ ICoreObject **p) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get__NewEnum( 
            /* [retval][out] */ IUnknown **p) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetAll( 
            /* [in] */ long count,
            /* [size_is][out] */ ICoreObject **p) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Insert( 
            /* [in] */ ICoreObject *p,
            /* [in] */ long at) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Append( 
            /* [in] */ ICoreObject *p) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Find( 
            /* [in] */ ICoreObject *p,
            /* [in] */ long start,
            /* [retval][out] */ long *res) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Remove( 
            /* [in] */ long n) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ICoreObjectsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ICoreObjects * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ICoreObjects * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ICoreObjects * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            ICoreObjects * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            ICoreObjects * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            ICoreObjects * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ICoreObjects * This,
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
            ICoreObjects * This,
            /* [retval][out] */ long *p);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Item )( 
            ICoreObjects * This,
            /* [in] */ long n,
            /* [retval][out] */ ICoreObject **p);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get__NewEnum )( 
            ICoreObjects * This,
            /* [retval][out] */ IUnknown **p);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetAll )( 
            ICoreObjects * This,
            /* [in] */ long count,
            /* [size_is][out] */ ICoreObject **p);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Insert )( 
            ICoreObjects * This,
            /* [in] */ ICoreObject *p,
            /* [in] */ long at);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Append )( 
            ICoreObjects * This,
            /* [in] */ ICoreObject *p);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Find )( 
            ICoreObjects * This,
            /* [in] */ ICoreObject *p,
            /* [in] */ long start,
            /* [retval][out] */ long *res);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Remove )( 
            ICoreObjects * This,
            /* [in] */ long n);
        
        END_INTERFACE
    } ICoreObjectsVtbl;

    interface ICoreObjects
    {
        CONST_VTBL struct ICoreObjectsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ICoreObjects_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ICoreObjects_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ICoreObjects_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ICoreObjects_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define ICoreObjects_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define ICoreObjects_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define ICoreObjects_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define ICoreObjects_get_Count(This,p)	\
    ( (This)->lpVtbl -> get_Count(This,p) ) 

#define ICoreObjects_get_Item(This,n,p)	\
    ( (This)->lpVtbl -> get_Item(This,n,p) ) 

#define ICoreObjects_get__NewEnum(This,p)	\
    ( (This)->lpVtbl -> get__NewEnum(This,p) ) 

#define ICoreObjects_GetAll(This,count,p)	\
    ( (This)->lpVtbl -> GetAll(This,count,p) ) 

#define ICoreObjects_Insert(This,p,at)	\
    ( (This)->lpVtbl -> Insert(This,p,at) ) 

#define ICoreObjects_Append(This,p)	\
    ( (This)->lpVtbl -> Append(This,p) ) 

#define ICoreObjects_Find(This,p,start,res)	\
    ( (This)->lpVtbl -> Find(This,p,start,res) ) 

#define ICoreObjects_Remove(This,n)	\
    ( (This)->lpVtbl -> Remove(This,n) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ICoreObjects_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_Core_0000_0011 */
/* [local] */ 

#ifdef __cplusplus
extern "C++"    
{            
template<> struct ::TypeName_MgaColl2Elem<ICoreObjects>
{ typedef ICoreObjects collection_type; typedef ICoreObject element_type; };
template<> struct ::TypeName_MgaElem2Coll<ICoreObject>
{ typedef ICoreObjects collection_type; typedef ICoreObject element_type; };
}            
#endif


extern RPC_IF_HANDLE __MIDL_itf_Core_0000_0011_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_Core_0000_0011_v0_0_s_ifspec;

#ifndef __ICoreAttributes_INTERFACE_DEFINED__
#define __ICoreAttributes_INTERFACE_DEFINED__

/* interface ICoreAttributes */
/* [unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_ICoreAttributes;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("43D12127-22CA-11D3-A6EC-0060082DF884")
    ICoreAttributes : public IDispatch
    {
    public:
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Count( 
            /* [retval][out] */ long *p) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Item( 
            /* [in] */ long n,
            /* [retval][out] */ ICoreAttribute **p) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get__NewEnum( 
            /* [retval][out] */ IUnknown **p) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetAll( 
            /* [in] */ long count,
            /* [size_is][out] */ ICoreAttribute **p) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Insert( 
            /* [in] */ ICoreAttribute *p,
            /* [in] */ long at) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Append( 
            /* [in] */ ICoreAttribute *p) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Find( 
            /* [in] */ ICoreAttribute *p,
            /* [in] */ long start,
            /* [retval][out] */ long *res) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Remove( 
            /* [in] */ long n) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ICoreAttributesVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ICoreAttributes * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ICoreAttributes * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ICoreAttributes * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            ICoreAttributes * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            ICoreAttributes * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            ICoreAttributes * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ICoreAttributes * This,
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
            ICoreAttributes * This,
            /* [retval][out] */ long *p);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Item )( 
            ICoreAttributes * This,
            /* [in] */ long n,
            /* [retval][out] */ ICoreAttribute **p);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get__NewEnum )( 
            ICoreAttributes * This,
            /* [retval][out] */ IUnknown **p);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetAll )( 
            ICoreAttributes * This,
            /* [in] */ long count,
            /* [size_is][out] */ ICoreAttribute **p);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Insert )( 
            ICoreAttributes * This,
            /* [in] */ ICoreAttribute *p,
            /* [in] */ long at);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Append )( 
            ICoreAttributes * This,
            /* [in] */ ICoreAttribute *p);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Find )( 
            ICoreAttributes * This,
            /* [in] */ ICoreAttribute *p,
            /* [in] */ long start,
            /* [retval][out] */ long *res);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Remove )( 
            ICoreAttributes * This,
            /* [in] */ long n);
        
        END_INTERFACE
    } ICoreAttributesVtbl;

    interface ICoreAttributes
    {
        CONST_VTBL struct ICoreAttributesVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ICoreAttributes_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ICoreAttributes_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ICoreAttributes_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ICoreAttributes_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define ICoreAttributes_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define ICoreAttributes_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define ICoreAttributes_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define ICoreAttributes_get_Count(This,p)	\
    ( (This)->lpVtbl -> get_Count(This,p) ) 

#define ICoreAttributes_get_Item(This,n,p)	\
    ( (This)->lpVtbl -> get_Item(This,n,p) ) 

#define ICoreAttributes_get__NewEnum(This,p)	\
    ( (This)->lpVtbl -> get__NewEnum(This,p) ) 

#define ICoreAttributes_GetAll(This,count,p)	\
    ( (This)->lpVtbl -> GetAll(This,count,p) ) 

#define ICoreAttributes_Insert(This,p,at)	\
    ( (This)->lpVtbl -> Insert(This,p,at) ) 

#define ICoreAttributes_Append(This,p)	\
    ( (This)->lpVtbl -> Append(This,p) ) 

#define ICoreAttributes_Find(This,p,start,res)	\
    ( (This)->lpVtbl -> Find(This,p,start,res) ) 

#define ICoreAttributes_Remove(This,n)	\
    ( (This)->lpVtbl -> Remove(This,n) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ICoreAttributes_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_Core_0000_0012 */
/* [local] */ 

#ifdef __cplusplus
extern "C++"    
{            
template<> struct ::TypeName_MgaColl2Elem<ICoreAttributes>
{ typedef ICoreAttributes collection_type; typedef ICoreAttribute element_type; };
template<> struct ::TypeName_MgaElem2Coll<ICoreAttribute>
{ typedef ICoreAttributes collection_type; typedef ICoreAttribute element_type; };
}            
#endif
typedef 
enum GMEInterfaceVersion_enum
    {
        GMEInterfaceVersion_None	= 0,
        GMEInterfaceVersion_Legacy	= 4,
        GMEInterfaceVersion_Current	= 0x200e6
    } 	GMEInterfaceVersion_enum;

#define GMEInterfaceVersion GMEInterfaceVersion_enum


extern RPC_IF_HANDLE __MIDL_itf_Core_0000_0012_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_Core_0000_0012_v0_0_s_ifspec;

#ifndef __IGMEVersionInfo_INTERFACE_DEFINED__
#define __IGMEVersionInfo_INTERFACE_DEFINED__

/* interface IGMEVersionInfo */
/* [object][helpstring][uuid][oleautomation] */ 


EXTERN_C const IID IID_IGMEVersionInfo;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("9A228010-020B-11d2-BBB3-0040051F7117")
    IGMEVersionInfo : public IUnknown
    {
    public:
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_version( 
            /* [retval][out] */ GMEInterfaceVersion_enum *pVal) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IGMEVersionInfoVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IGMEVersionInfo * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IGMEVersionInfo * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IGMEVersionInfo * This);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_version )( 
            IGMEVersionInfo * This,
            /* [retval][out] */ GMEInterfaceVersion_enum *pVal);
        
        END_INTERFACE
    } IGMEVersionInfoVtbl;

    interface IGMEVersionInfo
    {
        CONST_VTBL struct IGMEVersionInfoVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IGMEVersionInfo_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IGMEVersionInfo_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IGMEVersionInfo_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IGMEVersionInfo_get_version(This,pVal)	\
    ( (This)->lpVtbl -> get_version(This,pVal) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IGMEVersionInfo_INTERFACE_DEFINED__ */


#ifndef __ICoreDictionaryAttributeValue_INTERFACE_DEFINED__
#define __ICoreDictionaryAttributeValue_INTERFACE_DEFINED__

/* interface ICoreDictionaryAttributeValue */
/* [unique][dual][uuid][object] */ 


EXTERN_C const IID IID_ICoreDictionaryAttributeValue;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("FAB8C11E-747A-45A5-BF05-1A8FB353B03B")
    ICoreDictionaryAttributeValue : public IDispatch
    {
    public:
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_Value( 
            /* [in] */ BSTR Key,
            /* [retval][out] */ BSTR *Value) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_Value( 
            /* [in] */ BSTR Key,
            /* [in] */ BSTR Value) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Keys( 
            /* [retval][out] */ VARIANT *Keys) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Map( 
            /* [retval][out] */ VARIANT *Map) = 0;
        
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_Map( 
            /* [in] */ VARIANT Map) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Clone( 
            /* [out] */ ICoreDictionaryAttributeValue **ret) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ICoreDictionaryAttributeValueVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ICoreDictionaryAttributeValue * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ICoreDictionaryAttributeValue * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ICoreDictionaryAttributeValue * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            ICoreDictionaryAttributeValue * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            ICoreDictionaryAttributeValue * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            ICoreDictionaryAttributeValue * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ICoreDictionaryAttributeValue * This,
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
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Value )( 
            ICoreDictionaryAttributeValue * This,
            /* [in] */ BSTR Key,
            /* [retval][out] */ BSTR *Value);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Value )( 
            ICoreDictionaryAttributeValue * This,
            /* [in] */ BSTR Key,
            /* [in] */ BSTR Value);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Keys )( 
            ICoreDictionaryAttributeValue * This,
            /* [retval][out] */ VARIANT *Keys);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Map )( 
            ICoreDictionaryAttributeValue * This,
            /* [retval][out] */ VARIANT *Map);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Map )( 
            ICoreDictionaryAttributeValue * This,
            /* [in] */ VARIANT Map);
        
        HRESULT ( STDMETHODCALLTYPE *Clone )( 
            ICoreDictionaryAttributeValue * This,
            /* [out] */ ICoreDictionaryAttributeValue **ret);
        
        END_INTERFACE
    } ICoreDictionaryAttributeValueVtbl;

    interface ICoreDictionaryAttributeValue
    {
        CONST_VTBL struct ICoreDictionaryAttributeValueVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ICoreDictionaryAttributeValue_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ICoreDictionaryAttributeValue_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ICoreDictionaryAttributeValue_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ICoreDictionaryAttributeValue_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define ICoreDictionaryAttributeValue_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define ICoreDictionaryAttributeValue_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define ICoreDictionaryAttributeValue_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define ICoreDictionaryAttributeValue_get_Value(This,Key,Value)	\
    ( (This)->lpVtbl -> get_Value(This,Key,Value) ) 

#define ICoreDictionaryAttributeValue_put_Value(This,Key,Value)	\
    ( (This)->lpVtbl -> put_Value(This,Key,Value) ) 

#define ICoreDictionaryAttributeValue_get_Keys(This,Keys)	\
    ( (This)->lpVtbl -> get_Keys(This,Keys) ) 

#define ICoreDictionaryAttributeValue_get_Map(This,Map)	\
    ( (This)->lpVtbl -> get_Map(This,Map) ) 

#define ICoreDictionaryAttributeValue_put_Map(This,Map)	\
    ( (This)->lpVtbl -> put_Map(This,Map) ) 

#define ICoreDictionaryAttributeValue_Clone(This,ret)	\
    ( (This)->lpVtbl -> Clone(This,ret) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ICoreDictionaryAttributeValue_INTERFACE_DEFINED__ */


/* Additional Prototypes for ALL interfaces */

unsigned long             __RPC_USER  BSTR_UserSize(     unsigned long *, unsigned long            , BSTR * ); 
unsigned char * __RPC_USER  BSTR_UserMarshal(  unsigned long *, unsigned char *, BSTR * ); 
unsigned char * __RPC_USER  BSTR_UserUnmarshal(unsigned long *, unsigned char *, BSTR * ); 
void                      __RPC_USER  BSTR_UserFree(     unsigned long *, BSTR * ); 

unsigned long             __RPC_USER  LPSAFEARRAY_UserSize(     unsigned long *, unsigned long            , LPSAFEARRAY * ); 
unsigned char * __RPC_USER  LPSAFEARRAY_UserMarshal(  unsigned long *, unsigned char *, LPSAFEARRAY * ); 
unsigned char * __RPC_USER  LPSAFEARRAY_UserUnmarshal(unsigned long *, unsigned char *, LPSAFEARRAY * ); 
void                      __RPC_USER  LPSAFEARRAY_UserFree(     unsigned long *, LPSAFEARRAY * ); 

unsigned long             __RPC_USER  VARIANT_UserSize(     unsigned long *, unsigned long            , VARIANT * ); 
unsigned char * __RPC_USER  VARIANT_UserMarshal(  unsigned long *, unsigned char *, VARIANT * ); 
unsigned char * __RPC_USER  VARIANT_UserUnmarshal(unsigned long *, unsigned char *, VARIANT * ); 
void                      __RPC_USER  VARIANT_UserFree(     unsigned long *, VARIANT * ); 

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


