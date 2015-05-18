

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 8.00.0595 */
/* at Mon May 18 12:45:00 2015
 */
/* Compiler settings for C:\Program Files (x86)\GME\Interfaces\MgaUtil.idl:
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

#ifndef __MgaUtil_h__
#define __MgaUtil_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef __IMgaResolver_FWD_DEFINED__
#define __IMgaResolver_FWD_DEFINED__
typedef interface IMgaResolver IMgaResolver;

#endif 	/* __IMgaResolver_FWD_DEFINED__ */


#ifndef __IMgaRegistrar_FWD_DEFINED__
#define __IMgaRegistrar_FWD_DEFINED__
typedef interface IMgaRegistrar IMgaRegistrar;

#endif 	/* __IMgaRegistrar_FWD_DEFINED__ */


#ifndef __IMgaLauncher_FWD_DEFINED__
#define __IMgaLauncher_FWD_DEFINED__
typedef interface IMgaLauncher IMgaLauncher;

#endif 	/* __IMgaLauncher_FWD_DEFINED__ */


#ifndef __IMgaProgressDlg_FWD_DEFINED__
#define __IMgaProgressDlg_FWD_DEFINED__
typedef interface IMgaProgressDlg IMgaProgressDlg;

#endif 	/* __IMgaProgressDlg_FWD_DEFINED__ */


#ifndef __IMgaComponentProxy_FWD_DEFINED__
#define __IMgaComponentProxy_FWD_DEFINED__
typedef interface IMgaComponentProxy IMgaComponentProxy;

#endif 	/* __IMgaComponentProxy_FWD_DEFINED__ */


#ifndef __IMgaClosure_FWD_DEFINED__
#define __IMgaClosure_FWD_DEFINED__
typedef interface IMgaClosure IMgaClosure;

#endif 	/* __IMgaClosure_FWD_DEFINED__ */


#ifndef __IMgaEventLogger_FWD_DEFINED__
#define __IMgaEventLogger_FWD_DEFINED__
typedef interface IMgaEventLogger IMgaEventLogger;

#endif 	/* __IMgaEventLogger_FWD_DEFINED__ */


/* header files for imported files */
#include "oaidl.h"
#include "ocidl.h"
#include "Meta.h"
#include "Mga.h"

#ifdef __cplusplus
extern "C"{
#endif 


/* interface __MIDL_itf_MgaUtil_0000_0000 */
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
typedef 
enum mgautil_error
    {
        E_MGAUTIL_COMPONENTPROXY_NOTINITIALIZED	= 0x80737001
    } 	mgautil_error;



extern RPC_IF_HANDLE __MIDL_itf_MgaUtil_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_MgaUtil_0000_0000_v0_0_s_ifspec;

#ifndef __IMgaResolver_INTERFACE_DEFINED__
#define __IMgaResolver_INTERFACE_DEFINED__

/* interface IMgaResolver */
/* [unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_IMgaResolver;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("461F30B0-3BF0-11D4-B3F0-005004D38590")
    IMgaResolver : public IDispatch
    {
    public:
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Clear( void) = 0;
        
        virtual /* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_IsInteractive( 
            /* [in] */ VARIANT_BOOL p) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_IsInteractive( 
            /* [retval][out] */ VARIANT_BOOL *p) = 0;
        
        virtual /* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_IsStickyEnabled( 
            /* [in] */ VARIANT_BOOL p) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_IsStickyEnabled( 
            /* [retval][out] */ VARIANT_BOOL *p) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE getUserOptions( void) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_FolderByStr( 
            /* [in] */ IMgaFolder *parent,
            /* [in] */ BSTR kindname,
            /* [retval][out] */ IMgaMetaFolder **p) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetFolderByStrDisp( 
            /* [in] */ IMgaFolder *parent,
            /* [in] */ BSTR kindname,
            /* [retval][out] */ IMgaMetaFolder **p) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_KindByStr( 
            /* [in] */ IMgaFolder *parent,
            /* [in] */ BSTR kindname,
            /* [in] */ objtype_enum objtype,
            /* [retval][out] */ IMgaMetaFCO **p) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetKindByStrDisp( 
            /* [in] */ IMgaFolder *parent,
            /* [in] */ BSTR kindname,
            /* [in] */ objtype_enum objtype,
            /* [retval][out] */ IMgaMetaFCO **p) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_RoleByStr( 
            /* [in] */ IMgaModel *parent,
            /* [in] */ BSTR kindname,
            /* [in] */ objtype_enum objtype,
            /* [in] */ BSTR rolename,
            /* [in] */ BSTR aspect,
            /* [retval][out] */ IMgaMetaRole **p) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetRoleByStrDisp( 
            /* [in] */ IMgaModel *parent,
            /* [in] */ BSTR kindname,
            /* [in] */ objtype_enum objtype,
            /* [in] */ BSTR rolename,
            /* [in] */ BSTR aspect,
            /* [retval][out] */ IMgaMetaRole **p) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_AttrByStr( 
            /* [in] */ IMgaFCO *parent,
            /* [in] */ BSTR kindname,
            /* [retval][out] */ IMgaMetaAttribute **p) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetAttrByStrDisp( 
            /* [in] */ IMgaFCO *parent,
            /* [in] */ BSTR kindname,
            /* [retval][out] */ IMgaMetaAttribute **p) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_RoleByMeta( 
            /* [in] */ IMgaModel *parent,
            /* [in] */ IMgaMetaFCO *p_kind,
            /* [in] */ objtype_enum objtype,
            /* [in] */ IMgaMetaRole *p_role,
            /* [in] */ IMgaMetaAspect *aspect,
            /* [retval][out] */ IMgaMetaRole **p) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetRoleByMetaDisp( 
            /* [in] */ IMgaModel *parent,
            /* [in] */ IMgaMetaFCO *p_kind,
            /* [in] */ objtype_enum objtype,
            /* [in] */ IMgaMetaRole *p_role,
            /* [in] */ IMgaMetaAspect *aspect,
            /* [retval][out] */ IMgaMetaRole **p) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_ConnRoleByMeta( 
            /* [in] */ IMgaModel *parent,
            /* [in] */ IMgaMetaAspect *aspect,
            /* [in] */ IMgaFCO *src,
            /* [in] */ IMgaFCO *src_port,
            /* [in] */ IMgaFCO *dst,
            /* [in] */ IMgaFCO *dst_port,
            /* [retval][out] */ IMgaMetaRole **p) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetConnRoleByMetaDisp( 
            /* [in] */ IMgaModel *parent,
            /* [in] */ IMgaMetaAspect *aspect,
            /* [in] */ IMgaFCO *src,
            /* [in] */ IMgaFCO *src_port,
            /* [in] */ IMgaFCO *dst,
            /* [in] */ IMgaFCO *dst_port,
            /* [retval][out] */ IMgaMetaRole **p) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_RefRoleByMeta( 
            /* [in] */ IMgaModel *parent,
            /* [in] */ IMgaMetaAspect *aspect,
            /* [in] */ IMgaFCO *src,
            /* [retval][out] */ IMgaMetaRole **p) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetRefRoleByMetaDisp( 
            /* [in] */ IMgaModel *parent,
            /* [in] */ IMgaMetaAspect *aspect,
            /* [in] */ IMgaFCO *src,
            /* [retval][out] */ IMgaMetaRole **p) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_RolesByMetas( 
            /* [in] */ IMgaModel *dst_parent,
            /* [in] */ IMgaFCOs *Src,
            /* [in] */ IMgaMetaAspect *aspect,
            /* [in] */ BSTR sz_aspect,
            /* [retval][out] */ IMgaMetaRoles **p) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetRolesByMetasDisp( 
            /* [in] */ IMgaModel *dst_parent,
            /* [in] */ IMgaFCOs *Src,
            /* [in] */ IMgaMetaAspect *aspect,
            /* [in] */ BSTR sz_aspect,
            /* [retval][out] */ IMgaMetaRoles **p) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IMgaResolverVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IMgaResolver * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IMgaResolver * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IMgaResolver * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IMgaResolver * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IMgaResolver * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IMgaResolver * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IMgaResolver * This,
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
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Clear )( 
            IMgaResolver * This);
        
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_IsInteractive )( 
            IMgaResolver * This,
            /* [in] */ VARIANT_BOOL p);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_IsInteractive )( 
            IMgaResolver * This,
            /* [retval][out] */ VARIANT_BOOL *p);
        
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_IsStickyEnabled )( 
            IMgaResolver * This,
            /* [in] */ VARIANT_BOOL p);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_IsStickyEnabled )( 
            IMgaResolver * This,
            /* [retval][out] */ VARIANT_BOOL *p);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *getUserOptions )( 
            IMgaResolver * This);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_FolderByStr )( 
            IMgaResolver * This,
            /* [in] */ IMgaFolder *parent,
            /* [in] */ BSTR kindname,
            /* [retval][out] */ IMgaMetaFolder **p);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetFolderByStrDisp )( 
            IMgaResolver * This,
            /* [in] */ IMgaFolder *parent,
            /* [in] */ BSTR kindname,
            /* [retval][out] */ IMgaMetaFolder **p);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_KindByStr )( 
            IMgaResolver * This,
            /* [in] */ IMgaFolder *parent,
            /* [in] */ BSTR kindname,
            /* [in] */ objtype_enum objtype,
            /* [retval][out] */ IMgaMetaFCO **p);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetKindByStrDisp )( 
            IMgaResolver * This,
            /* [in] */ IMgaFolder *parent,
            /* [in] */ BSTR kindname,
            /* [in] */ objtype_enum objtype,
            /* [retval][out] */ IMgaMetaFCO **p);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_RoleByStr )( 
            IMgaResolver * This,
            /* [in] */ IMgaModel *parent,
            /* [in] */ BSTR kindname,
            /* [in] */ objtype_enum objtype,
            /* [in] */ BSTR rolename,
            /* [in] */ BSTR aspect,
            /* [retval][out] */ IMgaMetaRole **p);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetRoleByStrDisp )( 
            IMgaResolver * This,
            /* [in] */ IMgaModel *parent,
            /* [in] */ BSTR kindname,
            /* [in] */ objtype_enum objtype,
            /* [in] */ BSTR rolename,
            /* [in] */ BSTR aspect,
            /* [retval][out] */ IMgaMetaRole **p);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_AttrByStr )( 
            IMgaResolver * This,
            /* [in] */ IMgaFCO *parent,
            /* [in] */ BSTR kindname,
            /* [retval][out] */ IMgaMetaAttribute **p);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetAttrByStrDisp )( 
            IMgaResolver * This,
            /* [in] */ IMgaFCO *parent,
            /* [in] */ BSTR kindname,
            /* [retval][out] */ IMgaMetaAttribute **p);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_RoleByMeta )( 
            IMgaResolver * This,
            /* [in] */ IMgaModel *parent,
            /* [in] */ IMgaMetaFCO *p_kind,
            /* [in] */ objtype_enum objtype,
            /* [in] */ IMgaMetaRole *p_role,
            /* [in] */ IMgaMetaAspect *aspect,
            /* [retval][out] */ IMgaMetaRole **p);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetRoleByMetaDisp )( 
            IMgaResolver * This,
            /* [in] */ IMgaModel *parent,
            /* [in] */ IMgaMetaFCO *p_kind,
            /* [in] */ objtype_enum objtype,
            /* [in] */ IMgaMetaRole *p_role,
            /* [in] */ IMgaMetaAspect *aspect,
            /* [retval][out] */ IMgaMetaRole **p);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ConnRoleByMeta )( 
            IMgaResolver * This,
            /* [in] */ IMgaModel *parent,
            /* [in] */ IMgaMetaAspect *aspect,
            /* [in] */ IMgaFCO *src,
            /* [in] */ IMgaFCO *src_port,
            /* [in] */ IMgaFCO *dst,
            /* [in] */ IMgaFCO *dst_port,
            /* [retval][out] */ IMgaMetaRole **p);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetConnRoleByMetaDisp )( 
            IMgaResolver * This,
            /* [in] */ IMgaModel *parent,
            /* [in] */ IMgaMetaAspect *aspect,
            /* [in] */ IMgaFCO *src,
            /* [in] */ IMgaFCO *src_port,
            /* [in] */ IMgaFCO *dst,
            /* [in] */ IMgaFCO *dst_port,
            /* [retval][out] */ IMgaMetaRole **p);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_RefRoleByMeta )( 
            IMgaResolver * This,
            /* [in] */ IMgaModel *parent,
            /* [in] */ IMgaMetaAspect *aspect,
            /* [in] */ IMgaFCO *src,
            /* [retval][out] */ IMgaMetaRole **p);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetRefRoleByMetaDisp )( 
            IMgaResolver * This,
            /* [in] */ IMgaModel *parent,
            /* [in] */ IMgaMetaAspect *aspect,
            /* [in] */ IMgaFCO *src,
            /* [retval][out] */ IMgaMetaRole **p);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_RolesByMetas )( 
            IMgaResolver * This,
            /* [in] */ IMgaModel *dst_parent,
            /* [in] */ IMgaFCOs *Src,
            /* [in] */ IMgaMetaAspect *aspect,
            /* [in] */ BSTR sz_aspect,
            /* [retval][out] */ IMgaMetaRoles **p);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetRolesByMetasDisp )( 
            IMgaResolver * This,
            /* [in] */ IMgaModel *dst_parent,
            /* [in] */ IMgaFCOs *Src,
            /* [in] */ IMgaMetaAspect *aspect,
            /* [in] */ BSTR sz_aspect,
            /* [retval][out] */ IMgaMetaRoles **p);
        
        END_INTERFACE
    } IMgaResolverVtbl;

    interface IMgaResolver
    {
        CONST_VTBL struct IMgaResolverVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IMgaResolver_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IMgaResolver_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IMgaResolver_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IMgaResolver_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IMgaResolver_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IMgaResolver_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IMgaResolver_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IMgaResolver_Clear(This)	\
    ( (This)->lpVtbl -> Clear(This) ) 

#define IMgaResolver_put_IsInteractive(This,p)	\
    ( (This)->lpVtbl -> put_IsInteractive(This,p) ) 

#define IMgaResolver_get_IsInteractive(This,p)	\
    ( (This)->lpVtbl -> get_IsInteractive(This,p) ) 

#define IMgaResolver_put_IsStickyEnabled(This,p)	\
    ( (This)->lpVtbl -> put_IsStickyEnabled(This,p) ) 

#define IMgaResolver_get_IsStickyEnabled(This,p)	\
    ( (This)->lpVtbl -> get_IsStickyEnabled(This,p) ) 

#define IMgaResolver_getUserOptions(This)	\
    ( (This)->lpVtbl -> getUserOptions(This) ) 

#define IMgaResolver_get_FolderByStr(This,parent,kindname,p)	\
    ( (This)->lpVtbl -> get_FolderByStr(This,parent,kindname,p) ) 

#define IMgaResolver_GetFolderByStrDisp(This,parent,kindname,p)	\
    ( (This)->lpVtbl -> GetFolderByStrDisp(This,parent,kindname,p) ) 

#define IMgaResolver_get_KindByStr(This,parent,kindname,objtype,p)	\
    ( (This)->lpVtbl -> get_KindByStr(This,parent,kindname,objtype,p) ) 

#define IMgaResolver_GetKindByStrDisp(This,parent,kindname,objtype,p)	\
    ( (This)->lpVtbl -> GetKindByStrDisp(This,parent,kindname,objtype,p) ) 

#define IMgaResolver_get_RoleByStr(This,parent,kindname,objtype,rolename,aspect,p)	\
    ( (This)->lpVtbl -> get_RoleByStr(This,parent,kindname,objtype,rolename,aspect,p) ) 

#define IMgaResolver_GetRoleByStrDisp(This,parent,kindname,objtype,rolename,aspect,p)	\
    ( (This)->lpVtbl -> GetRoleByStrDisp(This,parent,kindname,objtype,rolename,aspect,p) ) 

#define IMgaResolver_get_AttrByStr(This,parent,kindname,p)	\
    ( (This)->lpVtbl -> get_AttrByStr(This,parent,kindname,p) ) 

#define IMgaResolver_GetAttrByStrDisp(This,parent,kindname,p)	\
    ( (This)->lpVtbl -> GetAttrByStrDisp(This,parent,kindname,p) ) 

#define IMgaResolver_get_RoleByMeta(This,parent,p_kind,objtype,p_role,aspect,p)	\
    ( (This)->lpVtbl -> get_RoleByMeta(This,parent,p_kind,objtype,p_role,aspect,p) ) 

#define IMgaResolver_GetRoleByMetaDisp(This,parent,p_kind,objtype,p_role,aspect,p)	\
    ( (This)->lpVtbl -> GetRoleByMetaDisp(This,parent,p_kind,objtype,p_role,aspect,p) ) 

#define IMgaResolver_get_ConnRoleByMeta(This,parent,aspect,src,src_port,dst,dst_port,p)	\
    ( (This)->lpVtbl -> get_ConnRoleByMeta(This,parent,aspect,src,src_port,dst,dst_port,p) ) 

#define IMgaResolver_GetConnRoleByMetaDisp(This,parent,aspect,src,src_port,dst,dst_port,p)	\
    ( (This)->lpVtbl -> GetConnRoleByMetaDisp(This,parent,aspect,src,src_port,dst,dst_port,p) ) 

#define IMgaResolver_get_RefRoleByMeta(This,parent,aspect,src,p)	\
    ( (This)->lpVtbl -> get_RefRoleByMeta(This,parent,aspect,src,p) ) 

#define IMgaResolver_GetRefRoleByMetaDisp(This,parent,aspect,src,p)	\
    ( (This)->lpVtbl -> GetRefRoleByMetaDisp(This,parent,aspect,src,p) ) 

#define IMgaResolver_get_RolesByMetas(This,dst_parent,Src,aspect,sz_aspect,p)	\
    ( (This)->lpVtbl -> get_RolesByMetas(This,dst_parent,Src,aspect,sz_aspect,p) ) 

#define IMgaResolver_GetRolesByMetasDisp(This,dst_parent,Src,aspect,sz_aspect,p)	\
    ( (This)->lpVtbl -> GetRolesByMetasDisp(This,dst_parent,Src,aspect,sz_aspect,p) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IMgaResolver_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_MgaUtil_0000_0001 */
/* [local] */ 

typedef 
enum regaccessmode_enum
    {
        REGACCESS_NONE	= 0,
        REGACCESS_USER	= 1,
        REGACCESS_SYSTEM	= 2,
        REGACCESS_PRIORITY	= 5,
        REGACCESS_BOTH	= 3,
        REGACCESS_TEST	= 8
    } 	regaccessmode_enum;

typedef 
enum edgesmoothmode_enum
    {
        EdgeSmooth_NoSmooth	= 0,
        EdgeSmooth_HighSpeedMode	= 1,
        EdgeSmooth_HighQualityMode	= 2
    } 	edgesmoothmode_enum;

typedef 
enum fontsmoothmode_enum
    {
        FontSmooth_SystemDefault	= 0,
        FontSmooth_SingleBitPerPixelGridFit	= 1,
        FontSmooth_SingleBitPerPixel	= 2,
        FontSmooth_AntiAliasGridFit	= 3,
        FontSmooth_AntiAlias	= 4,
        FontSmooth_ClearTypeGridFit	= 5
    } 	fontsmoothmode_enum;



extern RPC_IF_HANDLE __MIDL_itf_MgaUtil_0000_0001_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_MgaUtil_0000_0001_v0_0_s_ifspec;

#ifndef __IMgaRegistrar_INTERFACE_DEFINED__
#define __IMgaRegistrar_INTERFACE_DEFINED__

/* interface IMgaRegistrar */
/* [unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_IMgaRegistrar;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("F1D6BB05-42EE-11D4-B3F4-005004D38590")
    IMgaRegistrar : public IDispatch
    {
    public:
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_IconPath( 
            /* [in] */ regaccessmode_enum mode,
            /* [retval][out] */ BSTR *path) = 0;
        
        virtual /* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_IconPath( 
            /* [in] */ regaccessmode_enum mode,
            /* [in] */ BSTR path) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetIconPathDisp( 
            /* [in] */ regaccessmode_enum mode,
            /* [retval][out] */ BSTR *path) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE SetIconPathDisp( 
            /* [in] */ regaccessmode_enum mode,
            /* [in] */ BSTR path) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_ShowMultipleView( 
            /* [in] */ regaccessmode_enum mode,
            /* [retval][out] */ VARIANT_BOOL *enabled) = 0;
        
        virtual /* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_ShowMultipleView( 
            /* [in] */ regaccessmode_enum mode,
            /* [in] */ VARIANT_BOOL enabled) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetShowMultipleViewDisp( 
            /* [in] */ regaccessmode_enum mode,
            /* [retval][out] */ VARIANT_BOOL *enabled) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE SetShowMultipleViewDisp( 
            /* [in] */ regaccessmode_enum mode,
            /* [in] */ VARIANT_BOOL enabled) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_EventLoggingEnabled( 
            /* [in] */ regaccessmode_enum mode,
            /* [retval][out] */ VARIANT_BOOL *enabled) = 0;
        
        virtual /* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_EventLoggingEnabled( 
            /* [in] */ regaccessmode_enum mode,
            /* [in] */ VARIANT_BOOL enabled) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetEventLoggingEnabledDisp( 
            /* [in] */ regaccessmode_enum mode,
            /* [retval][out] */ VARIANT_BOOL *enabled) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE SetEventLoggingEnabledDisp( 
            /* [in] */ regaccessmode_enum mode,
            /* [in] */ VARIANT_BOOL enabled) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_AutosaveEnabled( 
            /* [in] */ regaccessmode_enum mode,
            /* [retval][out] */ VARIANT_BOOL *enabled) = 0;
        
        virtual /* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_AutosaveEnabled( 
            /* [in] */ regaccessmode_enum mode,
            /* [in] */ VARIANT_BOOL enabled) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetAutosaveEnabledDisp( 
            /* [in] */ regaccessmode_enum mode,
            /* [retval][out] */ VARIANT_BOOL *enabled) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE SetAutosaveEnabledDisp( 
            /* [in] */ regaccessmode_enum mode,
            /* [in] */ VARIANT_BOOL enabled) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_AutosaveFreq( 
            /* [in] */ regaccessmode_enum mode,
            /* [retval][out] */ long *secs) = 0;
        
        virtual /* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_AutosaveFreq( 
            /* [in] */ regaccessmode_enum mode,
            /* [in] */ long secs) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetAutosaveFreqDisp( 
            /* [in] */ regaccessmode_enum mode,
            /* [retval][out] */ long *secs) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE SetAutosaveFreqDisp( 
            /* [in] */ regaccessmode_enum mode,
            /* [in] */ long secs) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_AutosaveUseDir( 
            /* [in] */ regaccessmode_enum mode,
            /* [retval][out] */ VARIANT_BOOL *use) = 0;
        
        virtual /* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_AutosaveUseDir( 
            /* [in] */ regaccessmode_enum mode,
            /* [in] */ VARIANT_BOOL use) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetAutosaveUseDirDisp( 
            /* [in] */ regaccessmode_enum mode,
            /* [retval][out] */ VARIANT_BOOL *use) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE SetAutosaveUseDirDisp( 
            /* [in] */ regaccessmode_enum mode,
            /* [in] */ VARIANT_BOOL use) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_AutosaveDir( 
            /* [in] */ regaccessmode_enum mode,
            /* [retval][out] */ BSTR *dir) = 0;
        
        virtual /* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_AutosaveDir( 
            /* [in] */ regaccessmode_enum mode,
            /* [in] */ BSTR dir) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetAutosaveDirDisp( 
            /* [in] */ regaccessmode_enum mode,
            /* [retval][out] */ BSTR *dir) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE SetAutosaveDirDisp( 
            /* [in] */ regaccessmode_enum mode,
            /* [in] */ BSTR dir) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_ExternalEditorEnabled( 
            /* [in] */ regaccessmode_enum mode,
            /* [retval][out] */ VARIANT_BOOL *enabled) = 0;
        
        virtual /* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_ExternalEditorEnabled( 
            /* [in] */ regaccessmode_enum mode,
            /* [in] */ VARIANT_BOOL enabled) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetExternalEditorEnabledDisp( 
            /* [in] */ regaccessmode_enum mode,
            /* [retval][out] */ VARIANT_BOOL *enabled) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE SetExternalEditorEnabledDisp( 
            /* [in] */ regaccessmode_enum mode,
            /* [in] */ VARIANT_BOOL enabled) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_ExternalEditor( 
            /* [in] */ regaccessmode_enum mode,
            /* [retval][out] */ BSTR *path) = 0;
        
        virtual /* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_ExternalEditor( 
            /* [in] */ regaccessmode_enum mode,
            /* [in] */ BSTR path) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetExternalEditorDisp( 
            /* [in] */ regaccessmode_enum mode,
            /* [retval][out] */ BSTR *path) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE SetExternalEditorDisp( 
            /* [in] */ regaccessmode_enum mode,
            /* [in] */ BSTR path) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_UseAutoRouting( 
            /* [in] */ regaccessmode_enum mode,
            /* [retval][out] */ VARIANT_BOOL *enabled) = 0;
        
        virtual /* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_UseAutoRouting( 
            /* [in] */ regaccessmode_enum mode,
            /* [in] */ VARIANT_BOOL enabled) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetUseAutoRoutingDisp( 
            /* [in] */ regaccessmode_enum mode,
            /* [retval][out] */ VARIANT_BOOL *enabled) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE SetUseAutoRoutingDisp( 
            /* [in] */ regaccessmode_enum mode,
            /* [in] */ VARIANT_BOOL enabled) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_LabelAvoidance( 
            /* [in] */ regaccessmode_enum mode,
            /* [retval][out] */ VARIANT_BOOL *enabled) = 0;
        
        virtual /* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_LabelAvoidance( 
            /* [in] */ regaccessmode_enum mode,
            /* [in] */ VARIANT_BOOL enabled) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetLabelAvoidanceDisp( 
            /* [in] */ regaccessmode_enum mode,
            /* [retval][out] */ VARIANT_BOOL *enabled) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE SetLabelAvoidanceDisp( 
            /* [in] */ regaccessmode_enum mode,
            /* [in] */ VARIANT_BOOL enabled) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_ScriptEngine( 
            /* [in] */ regaccessmode_enum mode,
            /* [retval][out] */ BSTR *path) = 0;
        
        virtual /* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_ScriptEngine( 
            /* [in] */ regaccessmode_enum mode,
            /* [in] */ BSTR path) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetScriptEngineDisp( 
            /* [in] */ regaccessmode_enum mode,
            /* [retval][out] */ BSTR *path) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE SetScriptEngineDisp( 
            /* [in] */ regaccessmode_enum mode,
            /* [in] */ BSTR path) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetDefZoomLevel( 
            /* [in] */ regaccessmode_enum mode,
            /* [retval][out] */ BSTR *zlevel) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE SetDefZoomLevel( 
            /* [in] */ regaccessmode_enum mode,
            /* [in] */ BSTR zlevel) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetMouseOverNotify( 
            /* [in] */ regaccessmode_enum mode,
            /* [retval][out] */ VARIANT_BOOL *enabled) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE SetMouseOverNotify( 
            /* [in] */ regaccessmode_enum mode,
            /* [in] */ VARIANT_BOOL enabled) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetRealNmbFmtStr( 
            /* [in] */ regaccessmode_enum mode,
            /* [retval][out] */ BSTR *fmtStr) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE SetRealNmbFmtStr( 
            /* [in] */ regaccessmode_enum mode,
            /* [in] */ BSTR fmtStr) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetTimeStamping( 
            /* [in] */ regaccessmode_enum mode,
            /* [retval][out] */ VARIANT_BOOL *enabled) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE SetTimeStamping( 
            /* [in] */ regaccessmode_enum mode,
            /* [in] */ VARIANT_BOOL enabled) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetNavigation( 
            /* [in] */ regaccessmode_enum mode,
            /* [retval][out] */ VARIANT_BOOL *enabled) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE SetNavigation( 
            /* [in] */ regaccessmode_enum mode,
            /* [in] */ VARIANT_BOOL enabled) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetUndoQueueSize( 
            regaccessmode_enum mode,
            BSTR *queuesz) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE SetUndoQueueSize( 
            regaccessmode_enum mode,
            BSTR queuesz) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_EdgeSmoothMode( 
            /* [in] */ regaccessmode_enum mode,
            /* [retval][out] */ edgesmoothmode_enum *smoothMode) = 0;
        
        virtual /* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_EdgeSmoothMode( 
            /* [in] */ regaccessmode_enum mode,
            /* [in] */ edgesmoothmode_enum smoothMode) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetEdgeSmoothModeDisp( 
            /* [in] */ regaccessmode_enum mode,
            /* [retval][out] */ edgesmoothmode_enum *smoothMode) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE SetEdgeSmoothModeDisp( 
            /* [in] */ regaccessmode_enum mode,
            /* [in] */ edgesmoothmode_enum smoothMode) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_FontSmoothMode( 
            /* [in] */ regaccessmode_enum mode,
            /* [retval][out] */ fontsmoothmode_enum *smoothMode) = 0;
        
        virtual /* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_FontSmoothMode( 
            /* [in] */ regaccessmode_enum mode,
            /* [in] */ fontsmoothmode_enum smoothMode) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetFontSmoothModeDisp( 
            /* [in] */ regaccessmode_enum mode,
            /* [retval][out] */ fontsmoothmode_enum *smoothMode) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE SetFontSmoothModeDisp( 
            /* [in] */ regaccessmode_enum mode,
            /* [in] */ fontsmoothmode_enum smoothMode) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Paradigms( 
            /* [in] */ regaccessmode_enum mode,
            /* [retval][out] */ VARIANT *names) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetParadigmsDisp( 
            /* [in] */ regaccessmode_enum mode,
            /* [retval][out] */ VARIANT *names) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE RegisterParadigmFromData( 
            /* [in] */ BSTR ConnStr,
            /* [out] */ BSTR *newname,
            /* [in] */ regaccessmode_enum mode) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE RegisterParadigmFromDataDisp( 
            /* [in] */ BSTR ConnStr,
            /* [in] */ regaccessmode_enum mode,
            /* [retval][out] */ BSTR *newname) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE RegisterParadigm( 
            /* [in] */ BSTR name,
            /* [in] */ BSTR ConnStr,
            /* [in] */ BSTR ver,
            /* [in] */ VARIANT guid,
            /* [in] */ regaccessmode_enum mode) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE QueryParadigm( 
            /* [in] */ BSTR name,
            /* [out] */ BSTR *ConnStr,
            /* [out][in] */ VARIANT *guid,
            /* [in] */ regaccessmode_enum mode) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_ParadigmGUIDString( 
            /* [in] */ regaccessmode_enum mode,
            /* [in] */ BSTR name,
            /* [retval][out] */ BSTR *guidstr) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetParadigmGUIDStringDisp( 
            /* [in] */ regaccessmode_enum mode,
            /* [in] */ BSTR name,
            /* [retval][out] */ BSTR *guidstr) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE QueryParadigmAllGUIDs( 
            /* [in] */ BSTR name,
            /* [out] */ VARIANT *names,
            /* [in] */ regaccessmode_enum mode) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE UnregisterParadigm( 
            /* [in] */ BSTR name,
            /* [in] */ regaccessmode_enum mode) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE UnregisterParadigmGUID( 
            /* [in] */ BSTR name,
            /* [in] */ VARIANT guid,
            /* [in] */ regaccessmode_enum mode) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE VersionFromGUID( 
            /* [in] */ BSTR name,
            /* [in] */ VARIANT guid,
            /* [out] */ BSTR *ver,
            /* [in] */ regaccessmode_enum mode) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GUIDFromVersion( 
            /* [in] */ BSTR name,
            /* [in] */ BSTR ver,
            /* [out] */ VARIANT *guid,
            /* [in] */ regaccessmode_enum mode) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Components( 
            /* [in] */ regaccessmode_enum mode,
            /* [retval][out] */ VARIANT *progids) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetComponentsDisp( 
            /* [in] */ regaccessmode_enum mode,
            /* [retval][out] */ VARIANT *progids) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE RegisterComponent( 
            /* [in] */ BSTR ProgID,
            /* [in] */ componenttype_enum type,
            /* [in] */ BSTR desc,
            /* [in] */ regaccessmode_enum mode) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE QueryComponent( 
            /* [in] */ BSTR ProgID,
            /* [out] */ componenttype_enum *type,
            /* [out] */ BSTR *desc,
            /* [in] */ regaccessmode_enum mode) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE UnregisterComponent( 
            /* [in] */ BSTR ProgID,
            /* [in] */ regaccessmode_enum mode) = 0;
        
        virtual /* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_ComponentExtraInfo( 
            /* [in] */ regaccessmode_enum mode,
            /* [in] */ BSTR ProgID,
            /* [in] */ BSTR name,
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_ComponentExtraInfo( 
            /* [in] */ regaccessmode_enum mode,
            /* [in] */ BSTR ProgID,
            /* [in] */ BSTR name,
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE SetComponentExtraInfoDisp( 
            /* [in] */ regaccessmode_enum mode,
            /* [in] */ BSTR ProgID,
            /* [in] */ BSTR name,
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetComponentExtraInfoDisp( 
            /* [in] */ regaccessmode_enum mode,
            /* [in] */ BSTR ProgID,
            /* [in] */ BSTR name,
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_LocalDllPath( 
            /* [in] */ BSTR ProgID,
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetLocalDllPathDisp( 
            /* [in] */ BSTR ProgID,
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_AssociatedComponents( 
            /* [in] */ BSTR Paradigm,
            /* [in] */ componenttype_enum type,
            /* [in] */ regaccessmode_enum mode,
            /* [retval][out] */ VARIANT *progids) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetAssociatedComponentsDisp( 
            /* [in] */ BSTR Paradigm,
            /* [in] */ componenttype_enum type,
            /* [in] */ regaccessmode_enum mode,
            /* [retval][out] */ VARIANT *progids) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_AssociatedParadigms( 
            /* [in] */ BSTR ProgID,
            /* [in] */ regaccessmode_enum mode,
            /* [retval][out] */ VARIANT *paradigms) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetAssociatedParadigmsDisp( 
            /* [in] */ BSTR ProgID,
            /* [in] */ regaccessmode_enum mode,
            /* [retval][out] */ VARIANT *paradigms) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Associate( 
            /* [in] */ BSTR ProgID,
            /* [in] */ BSTR Paradigm,
            /* [in] */ regaccessmode_enum mode) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Disassociate( 
            /* [in] */ BSTR ProgID,
            /* [in] */ BSTR Paradigm,
            /* [in] */ regaccessmode_enum mode) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE IsAssociated( 
            /* [in] */ BSTR ProgID,
            /* [in] */ BSTR Paradigm,
            /* [out] */ VARIANT_BOOL *is_ass,
            /* [out] */ VARIANT_BOOL *can_ass,
            /* [in] */ regaccessmode_enum mode) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE RegisterComponentLibrary( 
            /* [in] */ BSTR path,
            /* [in] */ regaccessmode_enum mode) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE UnregisterComponentLibrary( 
            /* [in] */ BSTR path,
            /* [in] */ regaccessmode_enum mode) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IMgaRegistrarVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IMgaRegistrar * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IMgaRegistrar * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IMgaRegistrar * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IMgaRegistrar * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IMgaRegistrar * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IMgaRegistrar * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IMgaRegistrar * This,
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
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_IconPath )( 
            IMgaRegistrar * This,
            /* [in] */ regaccessmode_enum mode,
            /* [retval][out] */ BSTR *path);
        
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_IconPath )( 
            IMgaRegistrar * This,
            /* [in] */ regaccessmode_enum mode,
            /* [in] */ BSTR path);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetIconPathDisp )( 
            IMgaRegistrar * This,
            /* [in] */ regaccessmode_enum mode,
            /* [retval][out] */ BSTR *path);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *SetIconPathDisp )( 
            IMgaRegistrar * This,
            /* [in] */ regaccessmode_enum mode,
            /* [in] */ BSTR path);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ShowMultipleView )( 
            IMgaRegistrar * This,
            /* [in] */ regaccessmode_enum mode,
            /* [retval][out] */ VARIANT_BOOL *enabled);
        
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ShowMultipleView )( 
            IMgaRegistrar * This,
            /* [in] */ regaccessmode_enum mode,
            /* [in] */ VARIANT_BOOL enabled);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetShowMultipleViewDisp )( 
            IMgaRegistrar * This,
            /* [in] */ regaccessmode_enum mode,
            /* [retval][out] */ VARIANT_BOOL *enabled);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *SetShowMultipleViewDisp )( 
            IMgaRegistrar * This,
            /* [in] */ regaccessmode_enum mode,
            /* [in] */ VARIANT_BOOL enabled);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_EventLoggingEnabled )( 
            IMgaRegistrar * This,
            /* [in] */ regaccessmode_enum mode,
            /* [retval][out] */ VARIANT_BOOL *enabled);
        
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_EventLoggingEnabled )( 
            IMgaRegistrar * This,
            /* [in] */ regaccessmode_enum mode,
            /* [in] */ VARIANT_BOOL enabled);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetEventLoggingEnabledDisp )( 
            IMgaRegistrar * This,
            /* [in] */ regaccessmode_enum mode,
            /* [retval][out] */ VARIANT_BOOL *enabled);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *SetEventLoggingEnabledDisp )( 
            IMgaRegistrar * This,
            /* [in] */ regaccessmode_enum mode,
            /* [in] */ VARIANT_BOOL enabled);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_AutosaveEnabled )( 
            IMgaRegistrar * This,
            /* [in] */ regaccessmode_enum mode,
            /* [retval][out] */ VARIANT_BOOL *enabled);
        
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_AutosaveEnabled )( 
            IMgaRegistrar * This,
            /* [in] */ regaccessmode_enum mode,
            /* [in] */ VARIANT_BOOL enabled);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetAutosaveEnabledDisp )( 
            IMgaRegistrar * This,
            /* [in] */ regaccessmode_enum mode,
            /* [retval][out] */ VARIANT_BOOL *enabled);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *SetAutosaveEnabledDisp )( 
            IMgaRegistrar * This,
            /* [in] */ regaccessmode_enum mode,
            /* [in] */ VARIANT_BOOL enabled);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_AutosaveFreq )( 
            IMgaRegistrar * This,
            /* [in] */ regaccessmode_enum mode,
            /* [retval][out] */ long *secs);
        
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_AutosaveFreq )( 
            IMgaRegistrar * This,
            /* [in] */ regaccessmode_enum mode,
            /* [in] */ long secs);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetAutosaveFreqDisp )( 
            IMgaRegistrar * This,
            /* [in] */ regaccessmode_enum mode,
            /* [retval][out] */ long *secs);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *SetAutosaveFreqDisp )( 
            IMgaRegistrar * This,
            /* [in] */ regaccessmode_enum mode,
            /* [in] */ long secs);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_AutosaveUseDir )( 
            IMgaRegistrar * This,
            /* [in] */ regaccessmode_enum mode,
            /* [retval][out] */ VARIANT_BOOL *use);
        
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_AutosaveUseDir )( 
            IMgaRegistrar * This,
            /* [in] */ regaccessmode_enum mode,
            /* [in] */ VARIANT_BOOL use);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetAutosaveUseDirDisp )( 
            IMgaRegistrar * This,
            /* [in] */ regaccessmode_enum mode,
            /* [retval][out] */ VARIANT_BOOL *use);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *SetAutosaveUseDirDisp )( 
            IMgaRegistrar * This,
            /* [in] */ regaccessmode_enum mode,
            /* [in] */ VARIANT_BOOL use);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_AutosaveDir )( 
            IMgaRegistrar * This,
            /* [in] */ regaccessmode_enum mode,
            /* [retval][out] */ BSTR *dir);
        
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_AutosaveDir )( 
            IMgaRegistrar * This,
            /* [in] */ regaccessmode_enum mode,
            /* [in] */ BSTR dir);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetAutosaveDirDisp )( 
            IMgaRegistrar * This,
            /* [in] */ regaccessmode_enum mode,
            /* [retval][out] */ BSTR *dir);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *SetAutosaveDirDisp )( 
            IMgaRegistrar * This,
            /* [in] */ regaccessmode_enum mode,
            /* [in] */ BSTR dir);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ExternalEditorEnabled )( 
            IMgaRegistrar * This,
            /* [in] */ regaccessmode_enum mode,
            /* [retval][out] */ VARIANT_BOOL *enabled);
        
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ExternalEditorEnabled )( 
            IMgaRegistrar * This,
            /* [in] */ regaccessmode_enum mode,
            /* [in] */ VARIANT_BOOL enabled);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetExternalEditorEnabledDisp )( 
            IMgaRegistrar * This,
            /* [in] */ regaccessmode_enum mode,
            /* [retval][out] */ VARIANT_BOOL *enabled);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *SetExternalEditorEnabledDisp )( 
            IMgaRegistrar * This,
            /* [in] */ regaccessmode_enum mode,
            /* [in] */ VARIANT_BOOL enabled);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ExternalEditor )( 
            IMgaRegistrar * This,
            /* [in] */ regaccessmode_enum mode,
            /* [retval][out] */ BSTR *path);
        
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ExternalEditor )( 
            IMgaRegistrar * This,
            /* [in] */ regaccessmode_enum mode,
            /* [in] */ BSTR path);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetExternalEditorDisp )( 
            IMgaRegistrar * This,
            /* [in] */ regaccessmode_enum mode,
            /* [retval][out] */ BSTR *path);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *SetExternalEditorDisp )( 
            IMgaRegistrar * This,
            /* [in] */ regaccessmode_enum mode,
            /* [in] */ BSTR path);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_UseAutoRouting )( 
            IMgaRegistrar * This,
            /* [in] */ regaccessmode_enum mode,
            /* [retval][out] */ VARIANT_BOOL *enabled);
        
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_UseAutoRouting )( 
            IMgaRegistrar * This,
            /* [in] */ regaccessmode_enum mode,
            /* [in] */ VARIANT_BOOL enabled);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetUseAutoRoutingDisp )( 
            IMgaRegistrar * This,
            /* [in] */ regaccessmode_enum mode,
            /* [retval][out] */ VARIANT_BOOL *enabled);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *SetUseAutoRoutingDisp )( 
            IMgaRegistrar * This,
            /* [in] */ regaccessmode_enum mode,
            /* [in] */ VARIANT_BOOL enabled);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_LabelAvoidance )( 
            IMgaRegistrar * This,
            /* [in] */ regaccessmode_enum mode,
            /* [retval][out] */ VARIANT_BOOL *enabled);
        
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_LabelAvoidance )( 
            IMgaRegistrar * This,
            /* [in] */ regaccessmode_enum mode,
            /* [in] */ VARIANT_BOOL enabled);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetLabelAvoidanceDisp )( 
            IMgaRegistrar * This,
            /* [in] */ regaccessmode_enum mode,
            /* [retval][out] */ VARIANT_BOOL *enabled);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *SetLabelAvoidanceDisp )( 
            IMgaRegistrar * This,
            /* [in] */ regaccessmode_enum mode,
            /* [in] */ VARIANT_BOOL enabled);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ScriptEngine )( 
            IMgaRegistrar * This,
            /* [in] */ regaccessmode_enum mode,
            /* [retval][out] */ BSTR *path);
        
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ScriptEngine )( 
            IMgaRegistrar * This,
            /* [in] */ regaccessmode_enum mode,
            /* [in] */ BSTR path);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetScriptEngineDisp )( 
            IMgaRegistrar * This,
            /* [in] */ regaccessmode_enum mode,
            /* [retval][out] */ BSTR *path);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *SetScriptEngineDisp )( 
            IMgaRegistrar * This,
            /* [in] */ regaccessmode_enum mode,
            /* [in] */ BSTR path);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetDefZoomLevel )( 
            IMgaRegistrar * This,
            /* [in] */ regaccessmode_enum mode,
            /* [retval][out] */ BSTR *zlevel);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *SetDefZoomLevel )( 
            IMgaRegistrar * This,
            /* [in] */ regaccessmode_enum mode,
            /* [in] */ BSTR zlevel);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetMouseOverNotify )( 
            IMgaRegistrar * This,
            /* [in] */ regaccessmode_enum mode,
            /* [retval][out] */ VARIANT_BOOL *enabled);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *SetMouseOverNotify )( 
            IMgaRegistrar * This,
            /* [in] */ regaccessmode_enum mode,
            /* [in] */ VARIANT_BOOL enabled);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetRealNmbFmtStr )( 
            IMgaRegistrar * This,
            /* [in] */ regaccessmode_enum mode,
            /* [retval][out] */ BSTR *fmtStr);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *SetRealNmbFmtStr )( 
            IMgaRegistrar * This,
            /* [in] */ regaccessmode_enum mode,
            /* [in] */ BSTR fmtStr);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetTimeStamping )( 
            IMgaRegistrar * This,
            /* [in] */ regaccessmode_enum mode,
            /* [retval][out] */ VARIANT_BOOL *enabled);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *SetTimeStamping )( 
            IMgaRegistrar * This,
            /* [in] */ regaccessmode_enum mode,
            /* [in] */ VARIANT_BOOL enabled);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetNavigation )( 
            IMgaRegistrar * This,
            /* [in] */ regaccessmode_enum mode,
            /* [retval][out] */ VARIANT_BOOL *enabled);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *SetNavigation )( 
            IMgaRegistrar * This,
            /* [in] */ regaccessmode_enum mode,
            /* [in] */ VARIANT_BOOL enabled);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetUndoQueueSize )( 
            IMgaRegistrar * This,
            regaccessmode_enum mode,
            BSTR *queuesz);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *SetUndoQueueSize )( 
            IMgaRegistrar * This,
            regaccessmode_enum mode,
            BSTR queuesz);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_EdgeSmoothMode )( 
            IMgaRegistrar * This,
            /* [in] */ regaccessmode_enum mode,
            /* [retval][out] */ edgesmoothmode_enum *smoothMode);
        
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_EdgeSmoothMode )( 
            IMgaRegistrar * This,
            /* [in] */ regaccessmode_enum mode,
            /* [in] */ edgesmoothmode_enum smoothMode);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetEdgeSmoothModeDisp )( 
            IMgaRegistrar * This,
            /* [in] */ regaccessmode_enum mode,
            /* [retval][out] */ edgesmoothmode_enum *smoothMode);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *SetEdgeSmoothModeDisp )( 
            IMgaRegistrar * This,
            /* [in] */ regaccessmode_enum mode,
            /* [in] */ edgesmoothmode_enum smoothMode);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_FontSmoothMode )( 
            IMgaRegistrar * This,
            /* [in] */ regaccessmode_enum mode,
            /* [retval][out] */ fontsmoothmode_enum *smoothMode);
        
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_FontSmoothMode )( 
            IMgaRegistrar * This,
            /* [in] */ regaccessmode_enum mode,
            /* [in] */ fontsmoothmode_enum smoothMode);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetFontSmoothModeDisp )( 
            IMgaRegistrar * This,
            /* [in] */ regaccessmode_enum mode,
            /* [retval][out] */ fontsmoothmode_enum *smoothMode);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *SetFontSmoothModeDisp )( 
            IMgaRegistrar * This,
            /* [in] */ regaccessmode_enum mode,
            /* [in] */ fontsmoothmode_enum smoothMode);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Paradigms )( 
            IMgaRegistrar * This,
            /* [in] */ regaccessmode_enum mode,
            /* [retval][out] */ VARIANT *names);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetParadigmsDisp )( 
            IMgaRegistrar * This,
            /* [in] */ regaccessmode_enum mode,
            /* [retval][out] */ VARIANT *names);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *RegisterParadigmFromData )( 
            IMgaRegistrar * This,
            /* [in] */ BSTR ConnStr,
            /* [out] */ BSTR *newname,
            /* [in] */ regaccessmode_enum mode);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *RegisterParadigmFromDataDisp )( 
            IMgaRegistrar * This,
            /* [in] */ BSTR ConnStr,
            /* [in] */ regaccessmode_enum mode,
            /* [retval][out] */ BSTR *newname);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *RegisterParadigm )( 
            IMgaRegistrar * This,
            /* [in] */ BSTR name,
            /* [in] */ BSTR ConnStr,
            /* [in] */ BSTR ver,
            /* [in] */ VARIANT guid,
            /* [in] */ regaccessmode_enum mode);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *QueryParadigm )( 
            IMgaRegistrar * This,
            /* [in] */ BSTR name,
            /* [out] */ BSTR *ConnStr,
            /* [out][in] */ VARIANT *guid,
            /* [in] */ regaccessmode_enum mode);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ParadigmGUIDString )( 
            IMgaRegistrar * This,
            /* [in] */ regaccessmode_enum mode,
            /* [in] */ BSTR name,
            /* [retval][out] */ BSTR *guidstr);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetParadigmGUIDStringDisp )( 
            IMgaRegistrar * This,
            /* [in] */ regaccessmode_enum mode,
            /* [in] */ BSTR name,
            /* [retval][out] */ BSTR *guidstr);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *QueryParadigmAllGUIDs )( 
            IMgaRegistrar * This,
            /* [in] */ BSTR name,
            /* [out] */ VARIANT *names,
            /* [in] */ regaccessmode_enum mode);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *UnregisterParadigm )( 
            IMgaRegistrar * This,
            /* [in] */ BSTR name,
            /* [in] */ regaccessmode_enum mode);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *UnregisterParadigmGUID )( 
            IMgaRegistrar * This,
            /* [in] */ BSTR name,
            /* [in] */ VARIANT guid,
            /* [in] */ regaccessmode_enum mode);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *VersionFromGUID )( 
            IMgaRegistrar * This,
            /* [in] */ BSTR name,
            /* [in] */ VARIANT guid,
            /* [out] */ BSTR *ver,
            /* [in] */ regaccessmode_enum mode);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GUIDFromVersion )( 
            IMgaRegistrar * This,
            /* [in] */ BSTR name,
            /* [in] */ BSTR ver,
            /* [out] */ VARIANT *guid,
            /* [in] */ regaccessmode_enum mode);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Components )( 
            IMgaRegistrar * This,
            /* [in] */ regaccessmode_enum mode,
            /* [retval][out] */ VARIANT *progids);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetComponentsDisp )( 
            IMgaRegistrar * This,
            /* [in] */ regaccessmode_enum mode,
            /* [retval][out] */ VARIANT *progids);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *RegisterComponent )( 
            IMgaRegistrar * This,
            /* [in] */ BSTR ProgID,
            /* [in] */ componenttype_enum type,
            /* [in] */ BSTR desc,
            /* [in] */ regaccessmode_enum mode);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *QueryComponent )( 
            IMgaRegistrar * This,
            /* [in] */ BSTR ProgID,
            /* [out] */ componenttype_enum *type,
            /* [out] */ BSTR *desc,
            /* [in] */ regaccessmode_enum mode);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *UnregisterComponent )( 
            IMgaRegistrar * This,
            /* [in] */ BSTR ProgID,
            /* [in] */ regaccessmode_enum mode);
        
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ComponentExtraInfo )( 
            IMgaRegistrar * This,
            /* [in] */ regaccessmode_enum mode,
            /* [in] */ BSTR ProgID,
            /* [in] */ BSTR name,
            /* [in] */ BSTR newVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ComponentExtraInfo )( 
            IMgaRegistrar * This,
            /* [in] */ regaccessmode_enum mode,
            /* [in] */ BSTR ProgID,
            /* [in] */ BSTR name,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *SetComponentExtraInfoDisp )( 
            IMgaRegistrar * This,
            /* [in] */ regaccessmode_enum mode,
            /* [in] */ BSTR ProgID,
            /* [in] */ BSTR name,
            /* [in] */ BSTR newVal);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetComponentExtraInfoDisp )( 
            IMgaRegistrar * This,
            /* [in] */ regaccessmode_enum mode,
            /* [in] */ BSTR ProgID,
            /* [in] */ BSTR name,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_LocalDllPath )( 
            IMgaRegistrar * This,
            /* [in] */ BSTR ProgID,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetLocalDllPathDisp )( 
            IMgaRegistrar * This,
            /* [in] */ BSTR ProgID,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_AssociatedComponents )( 
            IMgaRegistrar * This,
            /* [in] */ BSTR Paradigm,
            /* [in] */ componenttype_enum type,
            /* [in] */ regaccessmode_enum mode,
            /* [retval][out] */ VARIANT *progids);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetAssociatedComponentsDisp )( 
            IMgaRegistrar * This,
            /* [in] */ BSTR Paradigm,
            /* [in] */ componenttype_enum type,
            /* [in] */ regaccessmode_enum mode,
            /* [retval][out] */ VARIANT *progids);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_AssociatedParadigms )( 
            IMgaRegistrar * This,
            /* [in] */ BSTR ProgID,
            /* [in] */ regaccessmode_enum mode,
            /* [retval][out] */ VARIANT *paradigms);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetAssociatedParadigmsDisp )( 
            IMgaRegistrar * This,
            /* [in] */ BSTR ProgID,
            /* [in] */ regaccessmode_enum mode,
            /* [retval][out] */ VARIANT *paradigms);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Associate )( 
            IMgaRegistrar * This,
            /* [in] */ BSTR ProgID,
            /* [in] */ BSTR Paradigm,
            /* [in] */ regaccessmode_enum mode);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Disassociate )( 
            IMgaRegistrar * This,
            /* [in] */ BSTR ProgID,
            /* [in] */ BSTR Paradigm,
            /* [in] */ regaccessmode_enum mode);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *IsAssociated )( 
            IMgaRegistrar * This,
            /* [in] */ BSTR ProgID,
            /* [in] */ BSTR Paradigm,
            /* [out] */ VARIANT_BOOL *is_ass,
            /* [out] */ VARIANT_BOOL *can_ass,
            /* [in] */ regaccessmode_enum mode);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *RegisterComponentLibrary )( 
            IMgaRegistrar * This,
            /* [in] */ BSTR path,
            /* [in] */ regaccessmode_enum mode);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *UnregisterComponentLibrary )( 
            IMgaRegistrar * This,
            /* [in] */ BSTR path,
            /* [in] */ regaccessmode_enum mode);
        
        END_INTERFACE
    } IMgaRegistrarVtbl;

    interface IMgaRegistrar
    {
        CONST_VTBL struct IMgaRegistrarVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IMgaRegistrar_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IMgaRegistrar_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IMgaRegistrar_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IMgaRegistrar_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IMgaRegistrar_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IMgaRegistrar_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IMgaRegistrar_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IMgaRegistrar_get_IconPath(This,mode,path)	\
    ( (This)->lpVtbl -> get_IconPath(This,mode,path) ) 

#define IMgaRegistrar_put_IconPath(This,mode,path)	\
    ( (This)->lpVtbl -> put_IconPath(This,mode,path) ) 

#define IMgaRegistrar_GetIconPathDisp(This,mode,path)	\
    ( (This)->lpVtbl -> GetIconPathDisp(This,mode,path) ) 

#define IMgaRegistrar_SetIconPathDisp(This,mode,path)	\
    ( (This)->lpVtbl -> SetIconPathDisp(This,mode,path) ) 

#define IMgaRegistrar_get_ShowMultipleView(This,mode,enabled)	\
    ( (This)->lpVtbl -> get_ShowMultipleView(This,mode,enabled) ) 

#define IMgaRegistrar_put_ShowMultipleView(This,mode,enabled)	\
    ( (This)->lpVtbl -> put_ShowMultipleView(This,mode,enabled) ) 

#define IMgaRegistrar_GetShowMultipleViewDisp(This,mode,enabled)	\
    ( (This)->lpVtbl -> GetShowMultipleViewDisp(This,mode,enabled) ) 

#define IMgaRegistrar_SetShowMultipleViewDisp(This,mode,enabled)	\
    ( (This)->lpVtbl -> SetShowMultipleViewDisp(This,mode,enabled) ) 

#define IMgaRegistrar_get_EventLoggingEnabled(This,mode,enabled)	\
    ( (This)->lpVtbl -> get_EventLoggingEnabled(This,mode,enabled) ) 

#define IMgaRegistrar_put_EventLoggingEnabled(This,mode,enabled)	\
    ( (This)->lpVtbl -> put_EventLoggingEnabled(This,mode,enabled) ) 

#define IMgaRegistrar_GetEventLoggingEnabledDisp(This,mode,enabled)	\
    ( (This)->lpVtbl -> GetEventLoggingEnabledDisp(This,mode,enabled) ) 

#define IMgaRegistrar_SetEventLoggingEnabledDisp(This,mode,enabled)	\
    ( (This)->lpVtbl -> SetEventLoggingEnabledDisp(This,mode,enabled) ) 

#define IMgaRegistrar_get_AutosaveEnabled(This,mode,enabled)	\
    ( (This)->lpVtbl -> get_AutosaveEnabled(This,mode,enabled) ) 

#define IMgaRegistrar_put_AutosaveEnabled(This,mode,enabled)	\
    ( (This)->lpVtbl -> put_AutosaveEnabled(This,mode,enabled) ) 

#define IMgaRegistrar_GetAutosaveEnabledDisp(This,mode,enabled)	\
    ( (This)->lpVtbl -> GetAutosaveEnabledDisp(This,mode,enabled) ) 

#define IMgaRegistrar_SetAutosaveEnabledDisp(This,mode,enabled)	\
    ( (This)->lpVtbl -> SetAutosaveEnabledDisp(This,mode,enabled) ) 

#define IMgaRegistrar_get_AutosaveFreq(This,mode,secs)	\
    ( (This)->lpVtbl -> get_AutosaveFreq(This,mode,secs) ) 

#define IMgaRegistrar_put_AutosaveFreq(This,mode,secs)	\
    ( (This)->lpVtbl -> put_AutosaveFreq(This,mode,secs) ) 

#define IMgaRegistrar_GetAutosaveFreqDisp(This,mode,secs)	\
    ( (This)->lpVtbl -> GetAutosaveFreqDisp(This,mode,secs) ) 

#define IMgaRegistrar_SetAutosaveFreqDisp(This,mode,secs)	\
    ( (This)->lpVtbl -> SetAutosaveFreqDisp(This,mode,secs) ) 

#define IMgaRegistrar_get_AutosaveUseDir(This,mode,use)	\
    ( (This)->lpVtbl -> get_AutosaveUseDir(This,mode,use) ) 

#define IMgaRegistrar_put_AutosaveUseDir(This,mode,use)	\
    ( (This)->lpVtbl -> put_AutosaveUseDir(This,mode,use) ) 

#define IMgaRegistrar_GetAutosaveUseDirDisp(This,mode,use)	\
    ( (This)->lpVtbl -> GetAutosaveUseDirDisp(This,mode,use) ) 

#define IMgaRegistrar_SetAutosaveUseDirDisp(This,mode,use)	\
    ( (This)->lpVtbl -> SetAutosaveUseDirDisp(This,mode,use) ) 

#define IMgaRegistrar_get_AutosaveDir(This,mode,dir)	\
    ( (This)->lpVtbl -> get_AutosaveDir(This,mode,dir) ) 

#define IMgaRegistrar_put_AutosaveDir(This,mode,dir)	\
    ( (This)->lpVtbl -> put_AutosaveDir(This,mode,dir) ) 

#define IMgaRegistrar_GetAutosaveDirDisp(This,mode,dir)	\
    ( (This)->lpVtbl -> GetAutosaveDirDisp(This,mode,dir) ) 

#define IMgaRegistrar_SetAutosaveDirDisp(This,mode,dir)	\
    ( (This)->lpVtbl -> SetAutosaveDirDisp(This,mode,dir) ) 

#define IMgaRegistrar_get_ExternalEditorEnabled(This,mode,enabled)	\
    ( (This)->lpVtbl -> get_ExternalEditorEnabled(This,mode,enabled) ) 

#define IMgaRegistrar_put_ExternalEditorEnabled(This,mode,enabled)	\
    ( (This)->lpVtbl -> put_ExternalEditorEnabled(This,mode,enabled) ) 

#define IMgaRegistrar_GetExternalEditorEnabledDisp(This,mode,enabled)	\
    ( (This)->lpVtbl -> GetExternalEditorEnabledDisp(This,mode,enabled) ) 

#define IMgaRegistrar_SetExternalEditorEnabledDisp(This,mode,enabled)	\
    ( (This)->lpVtbl -> SetExternalEditorEnabledDisp(This,mode,enabled) ) 

#define IMgaRegistrar_get_ExternalEditor(This,mode,path)	\
    ( (This)->lpVtbl -> get_ExternalEditor(This,mode,path) ) 

#define IMgaRegistrar_put_ExternalEditor(This,mode,path)	\
    ( (This)->lpVtbl -> put_ExternalEditor(This,mode,path) ) 

#define IMgaRegistrar_GetExternalEditorDisp(This,mode,path)	\
    ( (This)->lpVtbl -> GetExternalEditorDisp(This,mode,path) ) 

#define IMgaRegistrar_SetExternalEditorDisp(This,mode,path)	\
    ( (This)->lpVtbl -> SetExternalEditorDisp(This,mode,path) ) 

#define IMgaRegistrar_get_UseAutoRouting(This,mode,enabled)	\
    ( (This)->lpVtbl -> get_UseAutoRouting(This,mode,enabled) ) 

#define IMgaRegistrar_put_UseAutoRouting(This,mode,enabled)	\
    ( (This)->lpVtbl -> put_UseAutoRouting(This,mode,enabled) ) 

#define IMgaRegistrar_GetUseAutoRoutingDisp(This,mode,enabled)	\
    ( (This)->lpVtbl -> GetUseAutoRoutingDisp(This,mode,enabled) ) 

#define IMgaRegistrar_SetUseAutoRoutingDisp(This,mode,enabled)	\
    ( (This)->lpVtbl -> SetUseAutoRoutingDisp(This,mode,enabled) ) 

#define IMgaRegistrar_get_LabelAvoidance(This,mode,enabled)	\
    ( (This)->lpVtbl -> get_LabelAvoidance(This,mode,enabled) ) 

#define IMgaRegistrar_put_LabelAvoidance(This,mode,enabled)	\
    ( (This)->lpVtbl -> put_LabelAvoidance(This,mode,enabled) ) 

#define IMgaRegistrar_GetLabelAvoidanceDisp(This,mode,enabled)	\
    ( (This)->lpVtbl -> GetLabelAvoidanceDisp(This,mode,enabled) ) 

#define IMgaRegistrar_SetLabelAvoidanceDisp(This,mode,enabled)	\
    ( (This)->lpVtbl -> SetLabelAvoidanceDisp(This,mode,enabled) ) 

#define IMgaRegistrar_get_ScriptEngine(This,mode,path)	\
    ( (This)->lpVtbl -> get_ScriptEngine(This,mode,path) ) 

#define IMgaRegistrar_put_ScriptEngine(This,mode,path)	\
    ( (This)->lpVtbl -> put_ScriptEngine(This,mode,path) ) 

#define IMgaRegistrar_GetScriptEngineDisp(This,mode,path)	\
    ( (This)->lpVtbl -> GetScriptEngineDisp(This,mode,path) ) 

#define IMgaRegistrar_SetScriptEngineDisp(This,mode,path)	\
    ( (This)->lpVtbl -> SetScriptEngineDisp(This,mode,path) ) 

#define IMgaRegistrar_GetDefZoomLevel(This,mode,zlevel)	\
    ( (This)->lpVtbl -> GetDefZoomLevel(This,mode,zlevel) ) 

#define IMgaRegistrar_SetDefZoomLevel(This,mode,zlevel)	\
    ( (This)->lpVtbl -> SetDefZoomLevel(This,mode,zlevel) ) 

#define IMgaRegistrar_GetMouseOverNotify(This,mode,enabled)	\
    ( (This)->lpVtbl -> GetMouseOverNotify(This,mode,enabled) ) 

#define IMgaRegistrar_SetMouseOverNotify(This,mode,enabled)	\
    ( (This)->lpVtbl -> SetMouseOverNotify(This,mode,enabled) ) 

#define IMgaRegistrar_GetRealNmbFmtStr(This,mode,fmtStr)	\
    ( (This)->lpVtbl -> GetRealNmbFmtStr(This,mode,fmtStr) ) 

#define IMgaRegistrar_SetRealNmbFmtStr(This,mode,fmtStr)	\
    ( (This)->lpVtbl -> SetRealNmbFmtStr(This,mode,fmtStr) ) 

#define IMgaRegistrar_GetTimeStamping(This,mode,enabled)	\
    ( (This)->lpVtbl -> GetTimeStamping(This,mode,enabled) ) 

#define IMgaRegistrar_SetTimeStamping(This,mode,enabled)	\
    ( (This)->lpVtbl -> SetTimeStamping(This,mode,enabled) ) 

#define IMgaRegistrar_GetNavigation(This,mode,enabled)	\
    ( (This)->lpVtbl -> GetNavigation(This,mode,enabled) ) 

#define IMgaRegistrar_SetNavigation(This,mode,enabled)	\
    ( (This)->lpVtbl -> SetNavigation(This,mode,enabled) ) 

#define IMgaRegistrar_GetUndoQueueSize(This,mode,queuesz)	\
    ( (This)->lpVtbl -> GetUndoQueueSize(This,mode,queuesz) ) 

#define IMgaRegistrar_SetUndoQueueSize(This,mode,queuesz)	\
    ( (This)->lpVtbl -> SetUndoQueueSize(This,mode,queuesz) ) 

#define IMgaRegistrar_get_EdgeSmoothMode(This,mode,smoothMode)	\
    ( (This)->lpVtbl -> get_EdgeSmoothMode(This,mode,smoothMode) ) 

#define IMgaRegistrar_put_EdgeSmoothMode(This,mode,smoothMode)	\
    ( (This)->lpVtbl -> put_EdgeSmoothMode(This,mode,smoothMode) ) 

#define IMgaRegistrar_GetEdgeSmoothModeDisp(This,mode,smoothMode)	\
    ( (This)->lpVtbl -> GetEdgeSmoothModeDisp(This,mode,smoothMode) ) 

#define IMgaRegistrar_SetEdgeSmoothModeDisp(This,mode,smoothMode)	\
    ( (This)->lpVtbl -> SetEdgeSmoothModeDisp(This,mode,smoothMode) ) 

#define IMgaRegistrar_get_FontSmoothMode(This,mode,smoothMode)	\
    ( (This)->lpVtbl -> get_FontSmoothMode(This,mode,smoothMode) ) 

#define IMgaRegistrar_put_FontSmoothMode(This,mode,smoothMode)	\
    ( (This)->lpVtbl -> put_FontSmoothMode(This,mode,smoothMode) ) 

#define IMgaRegistrar_GetFontSmoothModeDisp(This,mode,smoothMode)	\
    ( (This)->lpVtbl -> GetFontSmoothModeDisp(This,mode,smoothMode) ) 

#define IMgaRegistrar_SetFontSmoothModeDisp(This,mode,smoothMode)	\
    ( (This)->lpVtbl -> SetFontSmoothModeDisp(This,mode,smoothMode) ) 

#define IMgaRegistrar_get_Paradigms(This,mode,names)	\
    ( (This)->lpVtbl -> get_Paradigms(This,mode,names) ) 

#define IMgaRegistrar_GetParadigmsDisp(This,mode,names)	\
    ( (This)->lpVtbl -> GetParadigmsDisp(This,mode,names) ) 

#define IMgaRegistrar_RegisterParadigmFromData(This,ConnStr,newname,mode)	\
    ( (This)->lpVtbl -> RegisterParadigmFromData(This,ConnStr,newname,mode) ) 

#define IMgaRegistrar_RegisterParadigmFromDataDisp(This,ConnStr,mode,newname)	\
    ( (This)->lpVtbl -> RegisterParadigmFromDataDisp(This,ConnStr,mode,newname) ) 

#define IMgaRegistrar_RegisterParadigm(This,name,ConnStr,ver,guid,mode)	\
    ( (This)->lpVtbl -> RegisterParadigm(This,name,ConnStr,ver,guid,mode) ) 

#define IMgaRegistrar_QueryParadigm(This,name,ConnStr,guid,mode)	\
    ( (This)->lpVtbl -> QueryParadigm(This,name,ConnStr,guid,mode) ) 

#define IMgaRegistrar_get_ParadigmGUIDString(This,mode,name,guidstr)	\
    ( (This)->lpVtbl -> get_ParadigmGUIDString(This,mode,name,guidstr) ) 

#define IMgaRegistrar_GetParadigmGUIDStringDisp(This,mode,name,guidstr)	\
    ( (This)->lpVtbl -> GetParadigmGUIDStringDisp(This,mode,name,guidstr) ) 

#define IMgaRegistrar_QueryParadigmAllGUIDs(This,name,names,mode)	\
    ( (This)->lpVtbl -> QueryParadigmAllGUIDs(This,name,names,mode) ) 

#define IMgaRegistrar_UnregisterParadigm(This,name,mode)	\
    ( (This)->lpVtbl -> UnregisterParadigm(This,name,mode) ) 

#define IMgaRegistrar_UnregisterParadigmGUID(This,name,guid,mode)	\
    ( (This)->lpVtbl -> UnregisterParadigmGUID(This,name,guid,mode) ) 

#define IMgaRegistrar_VersionFromGUID(This,name,guid,ver,mode)	\
    ( (This)->lpVtbl -> VersionFromGUID(This,name,guid,ver,mode) ) 

#define IMgaRegistrar_GUIDFromVersion(This,name,ver,guid,mode)	\
    ( (This)->lpVtbl -> GUIDFromVersion(This,name,ver,guid,mode) ) 

#define IMgaRegistrar_get_Components(This,mode,progids)	\
    ( (This)->lpVtbl -> get_Components(This,mode,progids) ) 

#define IMgaRegistrar_GetComponentsDisp(This,mode,progids)	\
    ( (This)->lpVtbl -> GetComponentsDisp(This,mode,progids) ) 

#define IMgaRegistrar_RegisterComponent(This,ProgID,type,desc,mode)	\
    ( (This)->lpVtbl -> RegisterComponent(This,ProgID,type,desc,mode) ) 

#define IMgaRegistrar_QueryComponent(This,ProgID,type,desc,mode)	\
    ( (This)->lpVtbl -> QueryComponent(This,ProgID,type,desc,mode) ) 

#define IMgaRegistrar_UnregisterComponent(This,ProgID,mode)	\
    ( (This)->lpVtbl -> UnregisterComponent(This,ProgID,mode) ) 

#define IMgaRegistrar_put_ComponentExtraInfo(This,mode,ProgID,name,newVal)	\
    ( (This)->lpVtbl -> put_ComponentExtraInfo(This,mode,ProgID,name,newVal) ) 

#define IMgaRegistrar_get_ComponentExtraInfo(This,mode,ProgID,name,pVal)	\
    ( (This)->lpVtbl -> get_ComponentExtraInfo(This,mode,ProgID,name,pVal) ) 

#define IMgaRegistrar_SetComponentExtraInfoDisp(This,mode,ProgID,name,newVal)	\
    ( (This)->lpVtbl -> SetComponentExtraInfoDisp(This,mode,ProgID,name,newVal) ) 

#define IMgaRegistrar_GetComponentExtraInfoDisp(This,mode,ProgID,name,pVal)	\
    ( (This)->lpVtbl -> GetComponentExtraInfoDisp(This,mode,ProgID,name,pVal) ) 

#define IMgaRegistrar_get_LocalDllPath(This,ProgID,pVal)	\
    ( (This)->lpVtbl -> get_LocalDllPath(This,ProgID,pVal) ) 

#define IMgaRegistrar_GetLocalDllPathDisp(This,ProgID,pVal)	\
    ( (This)->lpVtbl -> GetLocalDllPathDisp(This,ProgID,pVal) ) 

#define IMgaRegistrar_get_AssociatedComponents(This,Paradigm,type,mode,progids)	\
    ( (This)->lpVtbl -> get_AssociatedComponents(This,Paradigm,type,mode,progids) ) 

#define IMgaRegistrar_GetAssociatedComponentsDisp(This,Paradigm,type,mode,progids)	\
    ( (This)->lpVtbl -> GetAssociatedComponentsDisp(This,Paradigm,type,mode,progids) ) 

#define IMgaRegistrar_get_AssociatedParadigms(This,ProgID,mode,paradigms)	\
    ( (This)->lpVtbl -> get_AssociatedParadigms(This,ProgID,mode,paradigms) ) 

#define IMgaRegistrar_GetAssociatedParadigmsDisp(This,ProgID,mode,paradigms)	\
    ( (This)->lpVtbl -> GetAssociatedParadigmsDisp(This,ProgID,mode,paradigms) ) 

#define IMgaRegistrar_Associate(This,ProgID,Paradigm,mode)	\
    ( (This)->lpVtbl -> Associate(This,ProgID,Paradigm,mode) ) 

#define IMgaRegistrar_Disassociate(This,ProgID,Paradigm,mode)	\
    ( (This)->lpVtbl -> Disassociate(This,ProgID,Paradigm,mode) ) 

#define IMgaRegistrar_IsAssociated(This,ProgID,Paradigm,is_ass,can_ass,mode)	\
    ( (This)->lpVtbl -> IsAssociated(This,ProgID,Paradigm,is_ass,can_ass,mode) ) 

#define IMgaRegistrar_RegisterComponentLibrary(This,path,mode)	\
    ( (This)->lpVtbl -> RegisterComponentLibrary(This,path,mode) ) 

#define IMgaRegistrar_UnregisterComponentLibrary(This,path,mode)	\
    ( (This)->lpVtbl -> UnregisterComponentLibrary(This,path,mode) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IMgaRegistrar_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_MgaUtil_0000_0002 */
/* [local] */ 

typedef 
enum metadlg_enum
    {
        METADLG_NONE	= 0,
        METADLG_NEWFILE	= 0x1,
        METADLG_PARREG	= 0x2
    } 	metadlg_enum;

typedef 
enum componentdlg_enum
    {
        COMPONENTDLG_NONE	= 0,
        COMPONENTDLG_INTERP	= 0x1
    } 	componentdlg_enum;



extern RPC_IF_HANDLE __MIDL_itf_MgaUtil_0000_0002_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_MgaUtil_0000_0002_v0_0_s_ifspec;

#ifndef __IMgaLauncher_INTERFACE_DEFINED__
#define __IMgaLauncher_INTERFACE_DEFINED__

/* interface IMgaLauncher */
/* [unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_IMgaLauncher;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("D03EC326-447B-11D4-B3F6-005004D38590")
    IMgaLauncher : public IDispatch
    {
    public:
        virtual /* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_ParadigmName( 
            /* [in] */ BSTR p) = 0;
        
        virtual /* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_ComponentType( 
            /* [in] */ componenttype_enum type) = 0;
        
        virtual /* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_Parameter( 
            /* [in] */ VARIANT p) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_ParadigmName( 
            /* [retval][out] */ BSTR *p) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_ConnStr( 
            /* [retval][out] */ BSTR *p) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Paradigm( 
            /* [retval][out] */ IMgaMetaProject **p) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_ProgID( 
            /* [retval][out] */ BSTR *p) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE MetaDlg( 
            metadlg_enum flags) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GmeDlg( void) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE ComponentDlg( 
            componentdlg_enum flags) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE PropDlg( 
            /* [in] */ IMgaObject *obj) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE AttrDlg( 
            /* [in] */ IMgaObject *obj) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE ShowHelp( 
            /* [in] */ IMgaObject *obj) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE RegistryBrowser( 
            /* [in] */ IMgaObject *obj) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE AnnotationBrowser( 
            /* [in] */ IMgaObject *obj,
            /* [in] */ IMgaRegNode *focus) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE RunComponent( 
            /* [in] */ BSTR ProgID,
            /* [in] */ IMgaProject *p,
            /* [in] */ IMgaFCO *focusobj,
            /* [in] */ IMgaFCOs *selectedobjs,
            /* [in] */ long param) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IMgaLauncherVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IMgaLauncher * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IMgaLauncher * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IMgaLauncher * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IMgaLauncher * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IMgaLauncher * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IMgaLauncher * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IMgaLauncher * This,
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
        
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ParadigmName )( 
            IMgaLauncher * This,
            /* [in] */ BSTR p);
        
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ComponentType )( 
            IMgaLauncher * This,
            /* [in] */ componenttype_enum type);
        
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Parameter )( 
            IMgaLauncher * This,
            /* [in] */ VARIANT p);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ParadigmName )( 
            IMgaLauncher * This,
            /* [retval][out] */ BSTR *p);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ConnStr )( 
            IMgaLauncher * This,
            /* [retval][out] */ BSTR *p);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Paradigm )( 
            IMgaLauncher * This,
            /* [retval][out] */ IMgaMetaProject **p);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ProgID )( 
            IMgaLauncher * This,
            /* [retval][out] */ BSTR *p);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *MetaDlg )( 
            IMgaLauncher * This,
            metadlg_enum flags);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GmeDlg )( 
            IMgaLauncher * This);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *ComponentDlg )( 
            IMgaLauncher * This,
            componentdlg_enum flags);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *PropDlg )( 
            IMgaLauncher * This,
            /* [in] */ IMgaObject *obj);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *AttrDlg )( 
            IMgaLauncher * This,
            /* [in] */ IMgaObject *obj);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *ShowHelp )( 
            IMgaLauncher * This,
            /* [in] */ IMgaObject *obj);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *RegistryBrowser )( 
            IMgaLauncher * This,
            /* [in] */ IMgaObject *obj);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *AnnotationBrowser )( 
            IMgaLauncher * This,
            /* [in] */ IMgaObject *obj,
            /* [in] */ IMgaRegNode *focus);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *RunComponent )( 
            IMgaLauncher * This,
            /* [in] */ BSTR ProgID,
            /* [in] */ IMgaProject *p,
            /* [in] */ IMgaFCO *focusobj,
            /* [in] */ IMgaFCOs *selectedobjs,
            /* [in] */ long param);
        
        END_INTERFACE
    } IMgaLauncherVtbl;

    interface IMgaLauncher
    {
        CONST_VTBL struct IMgaLauncherVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IMgaLauncher_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IMgaLauncher_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IMgaLauncher_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IMgaLauncher_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IMgaLauncher_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IMgaLauncher_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IMgaLauncher_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IMgaLauncher_put_ParadigmName(This,p)	\
    ( (This)->lpVtbl -> put_ParadigmName(This,p) ) 

#define IMgaLauncher_put_ComponentType(This,type)	\
    ( (This)->lpVtbl -> put_ComponentType(This,type) ) 

#define IMgaLauncher_put_Parameter(This,p)	\
    ( (This)->lpVtbl -> put_Parameter(This,p) ) 

#define IMgaLauncher_get_ParadigmName(This,p)	\
    ( (This)->lpVtbl -> get_ParadigmName(This,p) ) 

#define IMgaLauncher_get_ConnStr(This,p)	\
    ( (This)->lpVtbl -> get_ConnStr(This,p) ) 

#define IMgaLauncher_get_Paradigm(This,p)	\
    ( (This)->lpVtbl -> get_Paradigm(This,p) ) 

#define IMgaLauncher_get_ProgID(This,p)	\
    ( (This)->lpVtbl -> get_ProgID(This,p) ) 

#define IMgaLauncher_MetaDlg(This,flags)	\
    ( (This)->lpVtbl -> MetaDlg(This,flags) ) 

#define IMgaLauncher_GmeDlg(This)	\
    ( (This)->lpVtbl -> GmeDlg(This) ) 

#define IMgaLauncher_ComponentDlg(This,flags)	\
    ( (This)->lpVtbl -> ComponentDlg(This,flags) ) 

#define IMgaLauncher_PropDlg(This,obj)	\
    ( (This)->lpVtbl -> PropDlg(This,obj) ) 

#define IMgaLauncher_AttrDlg(This,obj)	\
    ( (This)->lpVtbl -> AttrDlg(This,obj) ) 

#define IMgaLauncher_ShowHelp(This,obj)	\
    ( (This)->lpVtbl -> ShowHelp(This,obj) ) 

#define IMgaLauncher_RegistryBrowser(This,obj)	\
    ( (This)->lpVtbl -> RegistryBrowser(This,obj) ) 

#define IMgaLauncher_AnnotationBrowser(This,obj,focus)	\
    ( (This)->lpVtbl -> AnnotationBrowser(This,obj,focus) ) 

#define IMgaLauncher_RunComponent(This,ProgID,p,focusobj,selectedobjs,param)	\
    ( (This)->lpVtbl -> RunComponent(This,ProgID,p,focusobj,selectedobjs,param) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IMgaLauncher_INTERFACE_DEFINED__ */


#ifndef __IMgaProgressDlg_INTERFACE_DEFINED__
#define __IMgaProgressDlg_INTERFACE_DEFINED__

/* interface IMgaProgressDlg */
/* [unique][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IMgaProgressDlg;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("D0317326-447B-12D4-B3F6-005004D38590")
    IMgaProgressDlg : public IUnknown
    {
    public:
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE SetTitle( 
            /* [in] */ BSTR title) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE SetLine( 
            /* [in] */ int line,
            /* [in] */ BSTR msg) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE StartProgressDialog( 
            /* [in] */ HWND hwndParent) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE HasUserCancelled( 
            /* [retval][out] */ VARIANT_BOOL *p) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE SetProgress( 
            /* [in] */ long completed,
            /* [in] */ long total) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE StopProgressDialog( void) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IMgaProgressDlgVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IMgaProgressDlg * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IMgaProgressDlg * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IMgaProgressDlg * This);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *SetTitle )( 
            IMgaProgressDlg * This,
            /* [in] */ BSTR title);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *SetLine )( 
            IMgaProgressDlg * This,
            /* [in] */ int line,
            /* [in] */ BSTR msg);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *StartProgressDialog )( 
            IMgaProgressDlg * This,
            /* [in] */ HWND hwndParent);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *HasUserCancelled )( 
            IMgaProgressDlg * This,
            /* [retval][out] */ VARIANT_BOOL *p);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *SetProgress )( 
            IMgaProgressDlg * This,
            /* [in] */ long completed,
            /* [in] */ long total);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *StopProgressDialog )( 
            IMgaProgressDlg * This);
        
        END_INTERFACE
    } IMgaProgressDlgVtbl;

    interface IMgaProgressDlg
    {
        CONST_VTBL struct IMgaProgressDlgVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IMgaProgressDlg_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IMgaProgressDlg_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IMgaProgressDlg_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IMgaProgressDlg_SetTitle(This,title)	\
    ( (This)->lpVtbl -> SetTitle(This,title) ) 

#define IMgaProgressDlg_SetLine(This,line,msg)	\
    ( (This)->lpVtbl -> SetLine(This,line,msg) ) 

#define IMgaProgressDlg_StartProgressDialog(This,hwndParent)	\
    ( (This)->lpVtbl -> StartProgressDialog(This,hwndParent) ) 

#define IMgaProgressDlg_HasUserCancelled(This,p)	\
    ( (This)->lpVtbl -> HasUserCancelled(This,p) ) 

#define IMgaProgressDlg_SetProgress(This,completed,total)	\
    ( (This)->lpVtbl -> SetProgress(This,completed,total) ) 

#define IMgaProgressDlg_StopProgressDialog(This)	\
    ( (This)->lpVtbl -> StopProgressDialog(This) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IMgaProgressDlg_INTERFACE_DEFINED__ */


#ifndef __IMgaComponentProxy_INTERFACE_DEFINED__
#define __IMgaComponentProxy_INTERFACE_DEFINED__

/* interface IMgaComponentProxy */
/* [unique][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IMgaComponentProxy;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("FF01497A-36EB-4EA7-BE44-2FA98BD703DB")
    IMgaComponentProxy : public IUnknown
    {
    public:
        virtual /* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_DispatchComponent( 
            /* [in] */ IDispatch *component) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IMgaComponentProxyVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IMgaComponentProxy * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IMgaComponentProxy * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IMgaComponentProxy * This);
        
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_DispatchComponent )( 
            IMgaComponentProxy * This,
            /* [in] */ IDispatch *component);
        
        END_INTERFACE
    } IMgaComponentProxyVtbl;

    interface IMgaComponentProxy
    {
        CONST_VTBL struct IMgaComponentProxyVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IMgaComponentProxy_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IMgaComponentProxy_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IMgaComponentProxy_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IMgaComponentProxy_put_DispatchComponent(This,component)	\
    ( (This)->lpVtbl -> put_DispatchComponent(This,component) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IMgaComponentProxy_INTERFACE_DEFINED__ */


#ifndef __IMgaClosure_INTERFACE_DEFINED__
#define __IMgaClosure_INTERFACE_DEFINED__

/* interface IMgaClosure */
/* [unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_IMgaClosure;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("74348E5A-C76D-4c2e-88D5-D968C01CE432")
    IMgaClosure : public IDispatch
    {
    public:
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetLastClosureId( 
            /* [in] */ IMgaProject *p,
            /* [retval][out] */ long *p_pMarkWith) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE PutLastClosureId( 
            /* [in] */ IMgaProject *p,
            /* [in] */ long p_iMarkWith) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE SelectiveClosureDlg( 
            /* [in] */ VARIANT_BOOL folder_containment_needed,
            /* [out] */ VARIANT_BOOL *refers_to,
            /* [out] */ VARIANT_BOOL *referred_by,
            /* [out] */ VARIANT_BOOL *connections,
            /* [out] */ VARIANT_BOOL *conns_through_refport,
            /* [out] */ VARIANT_BOOL *set_members,
            /* [out] */ VARIANT_BOOL *member_of_sets,
            /* [out] */ VARIANT_BOOL *model_containment,
            /* [out] */ VARIANT_BOOL *part_of_models,
            /* [out] */ VARIANT_BOOL *folder_containment,
            /* [out] */ VARIANT_BOOL *part_of_folders,
            /* [out] */ VARIANT_BOOL *base_type_of,
            /* [out] */ VARIANT_BOOL *derived_types_of,
            /* [out] */ long *library_element_handling,
            /* [out] */ long *wrapping,
            /* [out] */ long *kind_filter,
            /* [out][in] */ long *mark_value,
            /* [out] */ long *options,
            /* [out] */ VARIANT_BOOL *direction_down,
            /* [out] */ VARIANT_BOOL *copy_to_file,
            /* [out] */ VARIANT_BOOL *ok_pressed,
            /* [out] */ BSTR *file_name_selected) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SelectiveClosureCalc( 
            /* [in] */ IMgaFCOs *init_sel_fcos,
            /* [in] */ IMgaFolders *init_sel_folders,
            /* [in] */ VARIANT_BOOL refers_to,
            /* [in] */ VARIANT_BOOL referred_by,
            /* [in] */ VARIANT_BOOL connections,
            /* [in] */ VARIANT_BOOL conns_through_refport,
            /* [in] */ VARIANT_BOOL set_members,
            /* [in] */ VARIANT_BOOL member_of_sets,
            /* [in] */ VARIANT_BOOL model_containment,
            /* [in] */ VARIANT_BOOL part_of_models,
            /* [in] */ VARIANT_BOOL folder_containment,
            /* [in] */ VARIANT_BOOL part_of_folders,
            /* [in] */ VARIANT_BOOL base_type_of,
            /* [in] */ VARIANT_BOOL derived_types_of,
            /* [in] */ long library_element_handling,
            /* [in] */ long wrapping,
            /* [in] */ long kind_filter,
            /* [in] */ long mark_value,
            /* [in] */ VARIANT_BOOL direction_down,
            /* [out] */ IMgaFCOs **sel_fcos,
            /* [out] */ IMgaFolders **sel_folders,
            /* [out] */ IMgaFCOs **top_fcos,
            /* [out] */ IMgaFolders **top_folders,
            /* [out] */ VARIANT_BOOL *top_collections_filled,
            /* [out] */ BSTR *acc_kinds) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE SmartCopy( 
            /* [in] */ IMgaFCOs *init_sel_fcos,
            /* [in] */ IMgaFolders *init_sel_folders,
            /* [out] */ IMgaFCOs **sel_fcos,
            /* [out] */ IMgaFolders **sel_folders,
            /* [out] */ IMgaFCOs **top_fcos,
            /* [out] */ IMgaFolders **top_folders,
            /* [in] */ int folder_containment,
            /* [out] */ long *options,
            /* [out] */ BSTR *acckinds,
            /* [out] */ BSTR *path) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IMgaClosureVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IMgaClosure * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IMgaClosure * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IMgaClosure * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IMgaClosure * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IMgaClosure * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IMgaClosure * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IMgaClosure * This,
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
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetLastClosureId )( 
            IMgaClosure * This,
            /* [in] */ IMgaProject *p,
            /* [retval][out] */ long *p_pMarkWith);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *PutLastClosureId )( 
            IMgaClosure * This,
            /* [in] */ IMgaProject *p,
            /* [in] */ long p_iMarkWith);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *SelectiveClosureDlg )( 
            IMgaClosure * This,
            /* [in] */ VARIANT_BOOL folder_containment_needed,
            /* [out] */ VARIANT_BOOL *refers_to,
            /* [out] */ VARIANT_BOOL *referred_by,
            /* [out] */ VARIANT_BOOL *connections,
            /* [out] */ VARIANT_BOOL *conns_through_refport,
            /* [out] */ VARIANT_BOOL *set_members,
            /* [out] */ VARIANT_BOOL *member_of_sets,
            /* [out] */ VARIANT_BOOL *model_containment,
            /* [out] */ VARIANT_BOOL *part_of_models,
            /* [out] */ VARIANT_BOOL *folder_containment,
            /* [out] */ VARIANT_BOOL *part_of_folders,
            /* [out] */ VARIANT_BOOL *base_type_of,
            /* [out] */ VARIANT_BOOL *derived_types_of,
            /* [out] */ long *library_element_handling,
            /* [out] */ long *wrapping,
            /* [out] */ long *kind_filter,
            /* [out][in] */ long *mark_value,
            /* [out] */ long *options,
            /* [out] */ VARIANT_BOOL *direction_down,
            /* [out] */ VARIANT_BOOL *copy_to_file,
            /* [out] */ VARIANT_BOOL *ok_pressed,
            /* [out] */ BSTR *file_name_selected);
        
        HRESULT ( STDMETHODCALLTYPE *SelectiveClosureCalc )( 
            IMgaClosure * This,
            /* [in] */ IMgaFCOs *init_sel_fcos,
            /* [in] */ IMgaFolders *init_sel_folders,
            /* [in] */ VARIANT_BOOL refers_to,
            /* [in] */ VARIANT_BOOL referred_by,
            /* [in] */ VARIANT_BOOL connections,
            /* [in] */ VARIANT_BOOL conns_through_refport,
            /* [in] */ VARIANT_BOOL set_members,
            /* [in] */ VARIANT_BOOL member_of_sets,
            /* [in] */ VARIANT_BOOL model_containment,
            /* [in] */ VARIANT_BOOL part_of_models,
            /* [in] */ VARIANT_BOOL folder_containment,
            /* [in] */ VARIANT_BOOL part_of_folders,
            /* [in] */ VARIANT_BOOL base_type_of,
            /* [in] */ VARIANT_BOOL derived_types_of,
            /* [in] */ long library_element_handling,
            /* [in] */ long wrapping,
            /* [in] */ long kind_filter,
            /* [in] */ long mark_value,
            /* [in] */ VARIANT_BOOL direction_down,
            /* [out] */ IMgaFCOs **sel_fcos,
            /* [out] */ IMgaFolders **sel_folders,
            /* [out] */ IMgaFCOs **top_fcos,
            /* [out] */ IMgaFolders **top_folders,
            /* [out] */ VARIANT_BOOL *top_collections_filled,
            /* [out] */ BSTR *acc_kinds);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *SmartCopy )( 
            IMgaClosure * This,
            /* [in] */ IMgaFCOs *init_sel_fcos,
            /* [in] */ IMgaFolders *init_sel_folders,
            /* [out] */ IMgaFCOs **sel_fcos,
            /* [out] */ IMgaFolders **sel_folders,
            /* [out] */ IMgaFCOs **top_fcos,
            /* [out] */ IMgaFolders **top_folders,
            /* [in] */ int folder_containment,
            /* [out] */ long *options,
            /* [out] */ BSTR *acckinds,
            /* [out] */ BSTR *path);
        
        END_INTERFACE
    } IMgaClosureVtbl;

    interface IMgaClosure
    {
        CONST_VTBL struct IMgaClosureVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IMgaClosure_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IMgaClosure_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IMgaClosure_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IMgaClosure_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IMgaClosure_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IMgaClosure_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IMgaClosure_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IMgaClosure_GetLastClosureId(This,p,p_pMarkWith)	\
    ( (This)->lpVtbl -> GetLastClosureId(This,p,p_pMarkWith) ) 

#define IMgaClosure_PutLastClosureId(This,p,p_iMarkWith)	\
    ( (This)->lpVtbl -> PutLastClosureId(This,p,p_iMarkWith) ) 

#define IMgaClosure_SelectiveClosureDlg(This,folder_containment_needed,refers_to,referred_by,connections,conns_through_refport,set_members,member_of_sets,model_containment,part_of_models,folder_containment,part_of_folders,base_type_of,derived_types_of,library_element_handling,wrapping,kind_filter,mark_value,options,direction_down,copy_to_file,ok_pressed,file_name_selected)	\
    ( (This)->lpVtbl -> SelectiveClosureDlg(This,folder_containment_needed,refers_to,referred_by,connections,conns_through_refport,set_members,member_of_sets,model_containment,part_of_models,folder_containment,part_of_folders,base_type_of,derived_types_of,library_element_handling,wrapping,kind_filter,mark_value,options,direction_down,copy_to_file,ok_pressed,file_name_selected) ) 

#define IMgaClosure_SelectiveClosureCalc(This,init_sel_fcos,init_sel_folders,refers_to,referred_by,connections,conns_through_refport,set_members,member_of_sets,model_containment,part_of_models,folder_containment,part_of_folders,base_type_of,derived_types_of,library_element_handling,wrapping,kind_filter,mark_value,direction_down,sel_fcos,sel_folders,top_fcos,top_folders,top_collections_filled,acc_kinds)	\
    ( (This)->lpVtbl -> SelectiveClosureCalc(This,init_sel_fcos,init_sel_folders,refers_to,referred_by,connections,conns_through_refport,set_members,member_of_sets,model_containment,part_of_models,folder_containment,part_of_folders,base_type_of,derived_types_of,library_element_handling,wrapping,kind_filter,mark_value,direction_down,sel_fcos,sel_folders,top_fcos,top_folders,top_collections_filled,acc_kinds) ) 

#define IMgaClosure_SmartCopy(This,init_sel_fcos,init_sel_folders,sel_fcos,sel_folders,top_fcos,top_folders,folder_containment,options,acckinds,path)	\
    ( (This)->lpVtbl -> SmartCopy(This,init_sel_fcos,init_sel_folders,sel_fcos,sel_folders,top_fcos,top_folders,folder_containment,options,acckinds,path) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IMgaClosure_INTERFACE_DEFINED__ */


#ifndef __IMgaEventLogger_INTERFACE_DEFINED__
#define __IMgaEventLogger_INTERFACE_DEFINED__

/* interface IMgaEventLogger */
/* [unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_IMgaEventLogger;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("9D46C230-31A5-4248-B61E-4223FA6A7F7A")
    IMgaEventLogger : public IDispatch
    {
    public:
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE LogEvent( 
            /* [in] */ BSTR eventMsg) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE StartLogging( void) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE StopLogging( void) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE EmergencyEvent( void) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IMgaEventLoggerVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IMgaEventLogger * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IMgaEventLogger * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IMgaEventLogger * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IMgaEventLogger * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IMgaEventLogger * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IMgaEventLogger * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IMgaEventLogger * This,
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
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *LogEvent )( 
            IMgaEventLogger * This,
            /* [in] */ BSTR eventMsg);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *StartLogging )( 
            IMgaEventLogger * This);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *StopLogging )( 
            IMgaEventLogger * This);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *EmergencyEvent )( 
            IMgaEventLogger * This);
        
        END_INTERFACE
    } IMgaEventLoggerVtbl;

    interface IMgaEventLogger
    {
        CONST_VTBL struct IMgaEventLoggerVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IMgaEventLogger_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IMgaEventLogger_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IMgaEventLogger_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IMgaEventLogger_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IMgaEventLogger_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IMgaEventLogger_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IMgaEventLogger_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IMgaEventLogger_LogEvent(This,eventMsg)	\
    ( (This)->lpVtbl -> LogEvent(This,eventMsg) ) 

#define IMgaEventLogger_StartLogging(This)	\
    ( (This)->lpVtbl -> StartLogging(This) ) 

#define IMgaEventLogger_StopLogging(This)	\
    ( (This)->lpVtbl -> StopLogging(This) ) 

#define IMgaEventLogger_EmergencyEvent(This)	\
    ( (This)->lpVtbl -> EmergencyEvent(This) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IMgaEventLogger_INTERFACE_DEFINED__ */


/* Additional Prototypes for ALL interfaces */

unsigned long             __RPC_USER  BSTR_UserSize(     unsigned long *, unsigned long            , BSTR * ); 
unsigned char * __RPC_USER  BSTR_UserMarshal(  unsigned long *, unsigned char *, BSTR * ); 
unsigned char * __RPC_USER  BSTR_UserUnmarshal(unsigned long *, unsigned char *, BSTR * ); 
void                      __RPC_USER  BSTR_UserFree(     unsigned long *, BSTR * ); 

unsigned long             __RPC_USER  HWND_UserSize(     unsigned long *, unsigned long            , HWND * ); 
unsigned char * __RPC_USER  HWND_UserMarshal(  unsigned long *, unsigned char *, HWND * ); 
unsigned char * __RPC_USER  HWND_UserUnmarshal(unsigned long *, unsigned char *, HWND * ); 
void                      __RPC_USER  HWND_UserFree(     unsigned long *, HWND * ); 

unsigned long             __RPC_USER  VARIANT_UserSize(     unsigned long *, unsigned long            , VARIANT * ); 
unsigned char * __RPC_USER  VARIANT_UserMarshal(  unsigned long *, unsigned char *, VARIANT * ); 
unsigned char * __RPC_USER  VARIANT_UserUnmarshal(unsigned long *, unsigned char *, VARIANT * ); 
void                      __RPC_USER  VARIANT_UserFree(     unsigned long *, VARIANT * ); 

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


