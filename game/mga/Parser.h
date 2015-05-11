

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 8.00.0595 */
/* at Mon May 11 12:55:25 2015
 */
/* Compiler settings for C:\Program Files (x86)\GME\Interfaces\Parser.idl:
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

#ifndef __Parser_h__
#define __Parser_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef __IMgaMetaParser_FWD_DEFINED__
#define __IMgaMetaParser_FWD_DEFINED__
typedef interface IMgaMetaParser IMgaMetaParser;

#endif 	/* __IMgaMetaParser_FWD_DEFINED__ */


#ifndef __IMgaDumper_FWD_DEFINED__
#define __IMgaDumper_FWD_DEFINED__
typedef interface IMgaDumper IMgaDumper;

#endif 	/* __IMgaDumper_FWD_DEFINED__ */


#ifndef __IMgaDumper2_FWD_DEFINED__
#define __IMgaDumper2_FWD_DEFINED__
typedef interface IMgaDumper2 IMgaDumper2;

#endif 	/* __IMgaDumper2_FWD_DEFINED__ */


#ifndef __IMgaParser_FWD_DEFINED__
#define __IMgaParser_FWD_DEFINED__
typedef interface IMgaParser IMgaParser;

#endif 	/* __IMgaParser_FWD_DEFINED__ */


#ifndef __IMgaParser2_FWD_DEFINED__
#define __IMgaParser2_FWD_DEFINED__
typedef interface IMgaParser2 IMgaParser2;

#endif 	/* __IMgaParser2_FWD_DEFINED__ */


#ifndef __IMgaParser3_FWD_DEFINED__
#define __IMgaParser3_FWD_DEFINED__
typedef interface IMgaParser3 IMgaParser3;

#endif 	/* __IMgaParser3_FWD_DEFINED__ */


/* header files for imported files */
#include "oaidl.h"
#include "ocidl.h"
#include "Mga.h"
#include "MgaUtil.h"

#ifdef __cplusplus
extern "C"{
#endif 


/* interface __MIDL_itf_Parser_0000_0000 */
/* [local] */ 

#ifndef INTERFACE_VERSION
#define INTERFACE_VERSION 0x000200E6
#endif //INTERFACE_VERSION
typedef 
enum inserttype_enum
    {
        ADDITION	= 0,
        MERGE	= 1
    } 	inserttype_enum;



extern RPC_IF_HANDLE __MIDL_itf_Parser_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_Parser_0000_0000_v0_0_s_ifspec;

#ifndef __IMgaMetaParser_INTERFACE_DEFINED__
#define __IMgaMetaParser_INTERFACE_DEFINED__

/* interface IMgaMetaParser */
/* [unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_IMgaMetaParser;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("70C41B24-E3CE-11D3-B37A-005004D38590")
    IMgaMetaParser : public IDispatch
    {
    public:
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Parse( 
            /* [in] */ BSTR xmlfile,
            /* [in] */ BSTR connection) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IMgaMetaParserVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IMgaMetaParser * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IMgaMetaParser * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IMgaMetaParser * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IMgaMetaParser * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IMgaMetaParser * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IMgaMetaParser * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IMgaMetaParser * This,
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
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Parse )( 
            IMgaMetaParser * This,
            /* [in] */ BSTR xmlfile,
            /* [in] */ BSTR connection);
        
        END_INTERFACE
    } IMgaMetaParserVtbl;

    interface IMgaMetaParser
    {
        CONST_VTBL struct IMgaMetaParserVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IMgaMetaParser_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IMgaMetaParser_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IMgaMetaParser_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IMgaMetaParser_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IMgaMetaParser_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IMgaMetaParser_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IMgaMetaParser_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IMgaMetaParser_Parse(This,xmlfile,connection)	\
    ( (This)->lpVtbl -> Parse(This,xmlfile,connection) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IMgaMetaParser_INTERFACE_DEFINED__ */


#ifndef __IMgaDumper_INTERFACE_DEFINED__
#define __IMgaDumper_INTERFACE_DEFINED__

/* interface IMgaDumper */
/* [unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_IMgaDumper;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("A5D0DAE6-16EE-11D4-B3C2-005004D38590")
    IMgaDumper : public IDispatch
    {
    public:
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE DumpProject( 
            /* [in] */ IMgaProject *p,
            /* [in] */ BSTR xmlfile) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE DumpFCOs( 
            /* [in] */ IMgaProject *proj,
            /* [in] */ IMgaFCOs *p,
            /* [in] */ IMgaFolders *f,
            /* [in] */ IMgaRegNodes *r,
            /* [in] */ BSTR xmlfile) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE DumpClos( 
            /* [in] */ IMgaFCOs *fco,
            /* [in] */ IMgaFolders *fld,
            /* [in] */ BSTR xmlfile,
            /* [in] */ int libr_stub) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE DumpClosR( 
            /* [in] */ IMgaFCOs *fco,
            /* [in] */ IMgaFolders *fld,
            /* [in] */ BSTR xmlfile,
            /* [in] */ IMgaFCOs *topfco,
            /* [in] */ IMgaFolders *topfld,
            /* [in] */ int options,
            /* [in] */ BSTR abspath,
            /* [in] */ BSTR acceptingkinds) = 0;
        
        virtual /* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_FormatVersion( 
            /* [in] */ long p) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IMgaDumperVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IMgaDumper * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IMgaDumper * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IMgaDumper * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IMgaDumper * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IMgaDumper * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IMgaDumper * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IMgaDumper * This,
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
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *DumpProject )( 
            IMgaDumper * This,
            /* [in] */ IMgaProject *p,
            /* [in] */ BSTR xmlfile);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *DumpFCOs )( 
            IMgaDumper * This,
            /* [in] */ IMgaProject *proj,
            /* [in] */ IMgaFCOs *p,
            /* [in] */ IMgaFolders *f,
            /* [in] */ IMgaRegNodes *r,
            /* [in] */ BSTR xmlfile);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *DumpClos )( 
            IMgaDumper * This,
            /* [in] */ IMgaFCOs *fco,
            /* [in] */ IMgaFolders *fld,
            /* [in] */ BSTR xmlfile,
            /* [in] */ int libr_stub);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *DumpClosR )( 
            IMgaDumper * This,
            /* [in] */ IMgaFCOs *fco,
            /* [in] */ IMgaFolders *fld,
            /* [in] */ BSTR xmlfile,
            /* [in] */ IMgaFCOs *topfco,
            /* [in] */ IMgaFolders *topfld,
            /* [in] */ int options,
            /* [in] */ BSTR abspath,
            /* [in] */ BSTR acceptingkinds);
        
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_FormatVersion )( 
            IMgaDumper * This,
            /* [in] */ long p);
        
        END_INTERFACE
    } IMgaDumperVtbl;

    interface IMgaDumper
    {
        CONST_VTBL struct IMgaDumperVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IMgaDumper_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IMgaDumper_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IMgaDumper_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IMgaDumper_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IMgaDumper_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IMgaDumper_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IMgaDumper_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IMgaDumper_DumpProject(This,p,xmlfile)	\
    ( (This)->lpVtbl -> DumpProject(This,p,xmlfile) ) 

#define IMgaDumper_DumpFCOs(This,proj,p,f,r,xmlfile)	\
    ( (This)->lpVtbl -> DumpFCOs(This,proj,p,f,r,xmlfile) ) 

#define IMgaDumper_DumpClos(This,fco,fld,xmlfile,libr_stub)	\
    ( (This)->lpVtbl -> DumpClos(This,fco,fld,xmlfile,libr_stub) ) 

#define IMgaDumper_DumpClosR(This,fco,fld,xmlfile,topfco,topfld,options,abspath,acceptingkinds)	\
    ( (This)->lpVtbl -> DumpClosR(This,fco,fld,xmlfile,topfco,topfld,options,abspath,acceptingkinds) ) 

#define IMgaDumper_put_FormatVersion(This,p)	\
    ( (This)->lpVtbl -> put_FormatVersion(This,p) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IMgaDumper_INTERFACE_DEFINED__ */


#ifndef __IMgaDumper2_INTERFACE_DEFINED__
#define __IMgaDumper2_INTERFACE_DEFINED__

/* interface IMgaDumper2 */
/* [unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_IMgaDumper2;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("3813768B-5A4C-477D-BCD5-1776089948EC")
    IMgaDumper2 : public IMgaDumper
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE DumpProject2( 
            /* [in] */ IMgaProject *p,
            /* [in] */ BSTR xmlfile,
            ULONGLONG hwndParent) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE DumpFCOs2( 
            /* [in] */ IMgaProject *proj,
            /* [in] */ IMgaFCOs *p,
            /* [in] */ IMgaFolders *f,
            /* [in] */ IMgaRegNodes *r,
            /* [in] */ BSTR xmlfile,
            ULONGLONG hwndParent) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IMgaDumper2Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IMgaDumper2 * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IMgaDumper2 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IMgaDumper2 * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IMgaDumper2 * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IMgaDumper2 * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IMgaDumper2 * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IMgaDumper2 * This,
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
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *DumpProject )( 
            IMgaDumper2 * This,
            /* [in] */ IMgaProject *p,
            /* [in] */ BSTR xmlfile);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *DumpFCOs )( 
            IMgaDumper2 * This,
            /* [in] */ IMgaProject *proj,
            /* [in] */ IMgaFCOs *p,
            /* [in] */ IMgaFolders *f,
            /* [in] */ IMgaRegNodes *r,
            /* [in] */ BSTR xmlfile);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *DumpClos )( 
            IMgaDumper2 * This,
            /* [in] */ IMgaFCOs *fco,
            /* [in] */ IMgaFolders *fld,
            /* [in] */ BSTR xmlfile,
            /* [in] */ int libr_stub);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *DumpClosR )( 
            IMgaDumper2 * This,
            /* [in] */ IMgaFCOs *fco,
            /* [in] */ IMgaFolders *fld,
            /* [in] */ BSTR xmlfile,
            /* [in] */ IMgaFCOs *topfco,
            /* [in] */ IMgaFolders *topfld,
            /* [in] */ int options,
            /* [in] */ BSTR abspath,
            /* [in] */ BSTR acceptingkinds);
        
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_FormatVersion )( 
            IMgaDumper2 * This,
            /* [in] */ long p);
        
        HRESULT ( STDMETHODCALLTYPE *DumpProject2 )( 
            IMgaDumper2 * This,
            /* [in] */ IMgaProject *p,
            /* [in] */ BSTR xmlfile,
            ULONGLONG hwndParent);
        
        HRESULT ( STDMETHODCALLTYPE *DumpFCOs2 )( 
            IMgaDumper2 * This,
            /* [in] */ IMgaProject *proj,
            /* [in] */ IMgaFCOs *p,
            /* [in] */ IMgaFolders *f,
            /* [in] */ IMgaRegNodes *r,
            /* [in] */ BSTR xmlfile,
            ULONGLONG hwndParent);
        
        END_INTERFACE
    } IMgaDumper2Vtbl;

    interface IMgaDumper2
    {
        CONST_VTBL struct IMgaDumper2Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IMgaDumper2_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IMgaDumper2_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IMgaDumper2_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IMgaDumper2_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IMgaDumper2_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IMgaDumper2_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IMgaDumper2_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IMgaDumper2_DumpProject(This,p,xmlfile)	\
    ( (This)->lpVtbl -> DumpProject(This,p,xmlfile) ) 

#define IMgaDumper2_DumpFCOs(This,proj,p,f,r,xmlfile)	\
    ( (This)->lpVtbl -> DumpFCOs(This,proj,p,f,r,xmlfile) ) 

#define IMgaDumper2_DumpClos(This,fco,fld,xmlfile,libr_stub)	\
    ( (This)->lpVtbl -> DumpClos(This,fco,fld,xmlfile,libr_stub) ) 

#define IMgaDumper2_DumpClosR(This,fco,fld,xmlfile,topfco,topfld,options,abspath,acceptingkinds)	\
    ( (This)->lpVtbl -> DumpClosR(This,fco,fld,xmlfile,topfco,topfld,options,abspath,acceptingkinds) ) 

#define IMgaDumper2_put_FormatVersion(This,p)	\
    ( (This)->lpVtbl -> put_FormatVersion(This,p) ) 


#define IMgaDumper2_DumpProject2(This,p,xmlfile,hwndParent)	\
    ( (This)->lpVtbl -> DumpProject2(This,p,xmlfile,hwndParent) ) 

#define IMgaDumper2_DumpFCOs2(This,proj,p,f,r,xmlfile,hwndParent)	\
    ( (This)->lpVtbl -> DumpFCOs2(This,proj,p,f,r,xmlfile,hwndParent) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IMgaDumper2_INTERFACE_DEFINED__ */


#ifndef __IMgaParser_INTERFACE_DEFINED__
#define __IMgaParser_INTERFACE_DEFINED__

/* interface IMgaParser */
/* [unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_IMgaParser;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("94D6FB53-1F7C-11D4-B3D0-005004D38590")
    IMgaParser : public IDispatch
    {
    public:
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetXMLInfo( 
            /* [in] */ BSTR xmlfile,
            /* [out] */ BSTR *Paradigm,
            /* [out] */ BSTR *parversion,
            /* [out] */ VARIANT *parguid,
            /* [out] */ BSTR *basename,
            /* [out] */ BSTR *ver) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE ParseProject( 
            /* [in] */ IMgaProject *p,
            /* [in] */ BSTR xmlfile) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE ParseFCOs( 
            /* [in] */ IMgaObject *here,
            /* [in] */ BSTR xmlfile) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetClipXMLInfo( 
            /* [in] */ BSTR xmlfile,
            /* [in] */ IMgaObject *Target,
            /* [out] */ VARIANT_BOOL *parguid,
            /* [out] */ BSTR *acckind,
            /* [out] */ BSTR *ver) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE ParseClos1( 
            /* [in] */ IMgaObject *here,
            /* [in] */ BSTR xmlfile) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE ParseClos4( 
            /* [in] */ IMgaObject *here,
            /* [in] */ BSTR xmlfile,
            /* [in] */ int options) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IMgaParserVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IMgaParser * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IMgaParser * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IMgaParser * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IMgaParser * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IMgaParser * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IMgaParser * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IMgaParser * This,
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
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetXMLInfo )( 
            IMgaParser * This,
            /* [in] */ BSTR xmlfile,
            /* [out] */ BSTR *Paradigm,
            /* [out] */ BSTR *parversion,
            /* [out] */ VARIANT *parguid,
            /* [out] */ BSTR *basename,
            /* [out] */ BSTR *ver);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *ParseProject )( 
            IMgaParser * This,
            /* [in] */ IMgaProject *p,
            /* [in] */ BSTR xmlfile);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *ParseFCOs )( 
            IMgaParser * This,
            /* [in] */ IMgaObject *here,
            /* [in] */ BSTR xmlfile);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetClipXMLInfo )( 
            IMgaParser * This,
            /* [in] */ BSTR xmlfile,
            /* [in] */ IMgaObject *Target,
            /* [out] */ VARIANT_BOOL *parguid,
            /* [out] */ BSTR *acckind,
            /* [out] */ BSTR *ver);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *ParseClos1 )( 
            IMgaParser * This,
            /* [in] */ IMgaObject *here,
            /* [in] */ BSTR xmlfile);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *ParseClos4 )( 
            IMgaParser * This,
            /* [in] */ IMgaObject *here,
            /* [in] */ BSTR xmlfile,
            /* [in] */ int options);
        
        END_INTERFACE
    } IMgaParserVtbl;

    interface IMgaParser
    {
        CONST_VTBL struct IMgaParserVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IMgaParser_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IMgaParser_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IMgaParser_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IMgaParser_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IMgaParser_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IMgaParser_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IMgaParser_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IMgaParser_GetXMLInfo(This,xmlfile,Paradigm,parversion,parguid,basename,ver)	\
    ( (This)->lpVtbl -> GetXMLInfo(This,xmlfile,Paradigm,parversion,parguid,basename,ver) ) 

#define IMgaParser_ParseProject(This,p,xmlfile)	\
    ( (This)->lpVtbl -> ParseProject(This,p,xmlfile) ) 

#define IMgaParser_ParseFCOs(This,here,xmlfile)	\
    ( (This)->lpVtbl -> ParseFCOs(This,here,xmlfile) ) 

#define IMgaParser_GetClipXMLInfo(This,xmlfile,Target,parguid,acckind,ver)	\
    ( (This)->lpVtbl -> GetClipXMLInfo(This,xmlfile,Target,parguid,acckind,ver) ) 

#define IMgaParser_ParseClos1(This,here,xmlfile)	\
    ( (This)->lpVtbl -> ParseClos1(This,here,xmlfile) ) 

#define IMgaParser_ParseClos4(This,here,xmlfile,options)	\
    ( (This)->lpVtbl -> ParseClos4(This,here,xmlfile,options) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IMgaParser_INTERFACE_DEFINED__ */


#ifndef __IMgaParser2_INTERFACE_DEFINED__
#define __IMgaParser2_INTERFACE_DEFINED__

/* interface IMgaParser2 */
/* [unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_IMgaParser2;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("E39BEA37-384D-423B-ADDF-2BB13550F577")
    IMgaParser2 : public IMgaParser
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE ParseProject2( 
            /* [in] */ IMgaProject *p,
            /* [in] */ BSTR xmlfile,
            ULONGLONG hwndParent) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE ParseFCOs2( 
            /* [in] */ IMgaObject *here,
            /* [in] */ BSTR xmlfile,
            ULONGLONG hwndParent) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetXMLParadigm( 
            /* [in] */ BSTR xmlfile,
            /* [out] */ BSTR *Paradigm) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IMgaParser2Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IMgaParser2 * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IMgaParser2 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IMgaParser2 * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IMgaParser2 * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IMgaParser2 * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IMgaParser2 * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IMgaParser2 * This,
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
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetXMLInfo )( 
            IMgaParser2 * This,
            /* [in] */ BSTR xmlfile,
            /* [out] */ BSTR *Paradigm,
            /* [out] */ BSTR *parversion,
            /* [out] */ VARIANT *parguid,
            /* [out] */ BSTR *basename,
            /* [out] */ BSTR *ver);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *ParseProject )( 
            IMgaParser2 * This,
            /* [in] */ IMgaProject *p,
            /* [in] */ BSTR xmlfile);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *ParseFCOs )( 
            IMgaParser2 * This,
            /* [in] */ IMgaObject *here,
            /* [in] */ BSTR xmlfile);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetClipXMLInfo )( 
            IMgaParser2 * This,
            /* [in] */ BSTR xmlfile,
            /* [in] */ IMgaObject *Target,
            /* [out] */ VARIANT_BOOL *parguid,
            /* [out] */ BSTR *acckind,
            /* [out] */ BSTR *ver);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *ParseClos1 )( 
            IMgaParser2 * This,
            /* [in] */ IMgaObject *here,
            /* [in] */ BSTR xmlfile);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *ParseClos4 )( 
            IMgaParser2 * This,
            /* [in] */ IMgaObject *here,
            /* [in] */ BSTR xmlfile,
            /* [in] */ int options);
        
        HRESULT ( STDMETHODCALLTYPE *ParseProject2 )( 
            IMgaParser2 * This,
            /* [in] */ IMgaProject *p,
            /* [in] */ BSTR xmlfile,
            ULONGLONG hwndParent);
        
        HRESULT ( STDMETHODCALLTYPE *ParseFCOs2 )( 
            IMgaParser2 * This,
            /* [in] */ IMgaObject *here,
            /* [in] */ BSTR xmlfile,
            ULONGLONG hwndParent);
        
        HRESULT ( STDMETHODCALLTYPE *GetXMLParadigm )( 
            IMgaParser2 * This,
            /* [in] */ BSTR xmlfile,
            /* [out] */ BSTR *Paradigm);
        
        END_INTERFACE
    } IMgaParser2Vtbl;

    interface IMgaParser2
    {
        CONST_VTBL struct IMgaParser2Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IMgaParser2_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IMgaParser2_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IMgaParser2_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IMgaParser2_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IMgaParser2_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IMgaParser2_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IMgaParser2_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IMgaParser2_GetXMLInfo(This,xmlfile,Paradigm,parversion,parguid,basename,ver)	\
    ( (This)->lpVtbl -> GetXMLInfo(This,xmlfile,Paradigm,parversion,parguid,basename,ver) ) 

#define IMgaParser2_ParseProject(This,p,xmlfile)	\
    ( (This)->lpVtbl -> ParseProject(This,p,xmlfile) ) 

#define IMgaParser2_ParseFCOs(This,here,xmlfile)	\
    ( (This)->lpVtbl -> ParseFCOs(This,here,xmlfile) ) 

#define IMgaParser2_GetClipXMLInfo(This,xmlfile,Target,parguid,acckind,ver)	\
    ( (This)->lpVtbl -> GetClipXMLInfo(This,xmlfile,Target,parguid,acckind,ver) ) 

#define IMgaParser2_ParseClos1(This,here,xmlfile)	\
    ( (This)->lpVtbl -> ParseClos1(This,here,xmlfile) ) 

#define IMgaParser2_ParseClos4(This,here,xmlfile,options)	\
    ( (This)->lpVtbl -> ParseClos4(This,here,xmlfile,options) ) 


#define IMgaParser2_ParseProject2(This,p,xmlfile,hwndParent)	\
    ( (This)->lpVtbl -> ParseProject2(This,p,xmlfile,hwndParent) ) 

#define IMgaParser2_ParseFCOs2(This,here,xmlfile,hwndParent)	\
    ( (This)->lpVtbl -> ParseFCOs2(This,here,xmlfile,hwndParent) ) 

#define IMgaParser2_GetXMLParadigm(This,xmlfile,Paradigm)	\
    ( (This)->lpVtbl -> GetXMLParadigm(This,xmlfile,Paradigm) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IMgaParser2_INTERFACE_DEFINED__ */


#ifndef __IMgaParser3_INTERFACE_DEFINED__
#define __IMgaParser3_INTERFACE_DEFINED__

/* interface IMgaParser3 */
/* [unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_IMgaParser3;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("5CAB528B-474B-4C52-BE40-74FF29AFBB58")
    IMgaParser3 : public IMgaParser2
    {
    public:
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Resolver( 
            /* [retval][out] */ IMgaResolver **MgaResolver) = 0;
        
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_Resolver( 
            /* [in] */ IMgaResolver *MgaResolver) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IMgaParser3Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IMgaParser3 * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IMgaParser3 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IMgaParser3 * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IMgaParser3 * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IMgaParser3 * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IMgaParser3 * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IMgaParser3 * This,
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
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetXMLInfo )( 
            IMgaParser3 * This,
            /* [in] */ BSTR xmlfile,
            /* [out] */ BSTR *Paradigm,
            /* [out] */ BSTR *parversion,
            /* [out] */ VARIANT *parguid,
            /* [out] */ BSTR *basename,
            /* [out] */ BSTR *ver);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *ParseProject )( 
            IMgaParser3 * This,
            /* [in] */ IMgaProject *p,
            /* [in] */ BSTR xmlfile);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *ParseFCOs )( 
            IMgaParser3 * This,
            /* [in] */ IMgaObject *here,
            /* [in] */ BSTR xmlfile);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetClipXMLInfo )( 
            IMgaParser3 * This,
            /* [in] */ BSTR xmlfile,
            /* [in] */ IMgaObject *Target,
            /* [out] */ VARIANT_BOOL *parguid,
            /* [out] */ BSTR *acckind,
            /* [out] */ BSTR *ver);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *ParseClos1 )( 
            IMgaParser3 * This,
            /* [in] */ IMgaObject *here,
            /* [in] */ BSTR xmlfile);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *ParseClos4 )( 
            IMgaParser3 * This,
            /* [in] */ IMgaObject *here,
            /* [in] */ BSTR xmlfile,
            /* [in] */ int options);
        
        HRESULT ( STDMETHODCALLTYPE *ParseProject2 )( 
            IMgaParser3 * This,
            /* [in] */ IMgaProject *p,
            /* [in] */ BSTR xmlfile,
            ULONGLONG hwndParent);
        
        HRESULT ( STDMETHODCALLTYPE *ParseFCOs2 )( 
            IMgaParser3 * This,
            /* [in] */ IMgaObject *here,
            /* [in] */ BSTR xmlfile,
            ULONGLONG hwndParent);
        
        HRESULT ( STDMETHODCALLTYPE *GetXMLParadigm )( 
            IMgaParser3 * This,
            /* [in] */ BSTR xmlfile,
            /* [out] */ BSTR *Paradigm);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Resolver )( 
            IMgaParser3 * This,
            /* [retval][out] */ IMgaResolver **MgaResolver);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Resolver )( 
            IMgaParser3 * This,
            /* [in] */ IMgaResolver *MgaResolver);
        
        END_INTERFACE
    } IMgaParser3Vtbl;

    interface IMgaParser3
    {
        CONST_VTBL struct IMgaParser3Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IMgaParser3_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IMgaParser3_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IMgaParser3_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IMgaParser3_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IMgaParser3_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IMgaParser3_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IMgaParser3_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IMgaParser3_GetXMLInfo(This,xmlfile,Paradigm,parversion,parguid,basename,ver)	\
    ( (This)->lpVtbl -> GetXMLInfo(This,xmlfile,Paradigm,parversion,parguid,basename,ver) ) 

#define IMgaParser3_ParseProject(This,p,xmlfile)	\
    ( (This)->lpVtbl -> ParseProject(This,p,xmlfile) ) 

#define IMgaParser3_ParseFCOs(This,here,xmlfile)	\
    ( (This)->lpVtbl -> ParseFCOs(This,here,xmlfile) ) 

#define IMgaParser3_GetClipXMLInfo(This,xmlfile,Target,parguid,acckind,ver)	\
    ( (This)->lpVtbl -> GetClipXMLInfo(This,xmlfile,Target,parguid,acckind,ver) ) 

#define IMgaParser3_ParseClos1(This,here,xmlfile)	\
    ( (This)->lpVtbl -> ParseClos1(This,here,xmlfile) ) 

#define IMgaParser3_ParseClos4(This,here,xmlfile,options)	\
    ( (This)->lpVtbl -> ParseClos4(This,here,xmlfile,options) ) 


#define IMgaParser3_ParseProject2(This,p,xmlfile,hwndParent)	\
    ( (This)->lpVtbl -> ParseProject2(This,p,xmlfile,hwndParent) ) 

#define IMgaParser3_ParseFCOs2(This,here,xmlfile,hwndParent)	\
    ( (This)->lpVtbl -> ParseFCOs2(This,here,xmlfile,hwndParent) ) 

#define IMgaParser3_GetXMLParadigm(This,xmlfile,Paradigm)	\
    ( (This)->lpVtbl -> GetXMLParadigm(This,xmlfile,Paradigm) ) 


#define IMgaParser3_get_Resolver(This,MgaResolver)	\
    ( (This)->lpVtbl -> get_Resolver(This,MgaResolver) ) 

#define IMgaParser3_put_Resolver(This,MgaResolver)	\
    ( (This)->lpVtbl -> put_Resolver(This,MgaResolver) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IMgaParser3_INTERFACE_DEFINED__ */


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


