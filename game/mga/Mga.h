

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 8.00.0595 */
/* at Thu Apr 30 20:38:01 2015
 */
/* Compiler settings for C:\Program Files (x86)\GME\Interfaces\Mga.idl:
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

#ifndef __Mga_h__
#define __Mga_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef __IMgaProject_FWD_DEFINED__
#define __IMgaProject_FWD_DEFINED__
typedef interface IMgaProject IMgaProject;

#endif 	/* __IMgaProject_FWD_DEFINED__ */


#ifndef __IMgaEventSink_FWD_DEFINED__
#define __IMgaEventSink_FWD_DEFINED__
typedef interface IMgaEventSink IMgaEventSink;

#endif 	/* __IMgaEventSink_FWD_DEFINED__ */


#ifndef __IMgaAddOn_FWD_DEFINED__
#define __IMgaAddOn_FWD_DEFINED__
typedef interface IMgaAddOn IMgaAddOn;

#endif 	/* __IMgaAddOn_FWD_DEFINED__ */


#ifndef __IMgaComponent_FWD_DEFINED__
#define __IMgaComponent_FWD_DEFINED__
typedef interface IMgaComponent IMgaComponent;

#endif 	/* __IMgaComponent_FWD_DEFINED__ */


#ifndef __IMgaComponentEx_FWD_DEFINED__
#define __IMgaComponentEx_FWD_DEFINED__
typedef interface IMgaComponentEx IMgaComponentEx;

#endif 	/* __IMgaComponentEx_FWD_DEFINED__ */


#ifndef __IMgaClient_FWD_DEFINED__
#define __IMgaClient_FWD_DEFINED__
typedef interface IMgaClient IMgaClient;

#endif 	/* __IMgaClient_FWD_DEFINED__ */


#ifndef __IMgaComponentDispatch_FWD_DEFINED__
#define __IMgaComponentDispatch_FWD_DEFINED__
typedef interface IMgaComponentDispatch IMgaComponentDispatch;

#endif 	/* __IMgaComponentDispatch_FWD_DEFINED__ */


#ifndef __IMgaTerritory_FWD_DEFINED__
#define __IMgaTerritory_FWD_DEFINED__
typedef interface IMgaTerritory IMgaTerritory;

#endif 	/* __IMgaTerritory_FWD_DEFINED__ */


#ifndef __IMgaObject_FWD_DEFINED__
#define __IMgaObject_FWD_DEFINED__
typedef interface IMgaObject IMgaObject;

#endif 	/* __IMgaObject_FWD_DEFINED__ */


#ifndef __IMgaFCO_FWD_DEFINED__
#define __IMgaFCO_FWD_DEFINED__
typedef interface IMgaFCO IMgaFCO;

#endif 	/* __IMgaFCO_FWD_DEFINED__ */


#ifndef __IMgaFolder_FWD_DEFINED__
#define __IMgaFolder_FWD_DEFINED__
typedef interface IMgaFolder IMgaFolder;

#endif 	/* __IMgaFolder_FWD_DEFINED__ */


#ifndef __IMgaModel_FWD_DEFINED__
#define __IMgaModel_FWD_DEFINED__
typedef interface IMgaModel IMgaModel;

#endif 	/* __IMgaModel_FWD_DEFINED__ */


#ifndef __IMgaAtom_FWD_DEFINED__
#define __IMgaAtom_FWD_DEFINED__
typedef interface IMgaAtom IMgaAtom;

#endif 	/* __IMgaAtom_FWD_DEFINED__ */


#ifndef __IMgaPart_FWD_DEFINED__
#define __IMgaPart_FWD_DEFINED__
typedef interface IMgaPart IMgaPart;

#endif 	/* __IMgaPart_FWD_DEFINED__ */


#ifndef __IMgaReference_FWD_DEFINED__
#define __IMgaReference_FWD_DEFINED__
typedef interface IMgaReference IMgaReference;

#endif 	/* __IMgaReference_FWD_DEFINED__ */


#ifndef __IMgaSet_FWD_DEFINED__
#define __IMgaSet_FWD_DEFINED__
typedef interface IMgaSet IMgaSet;

#endif 	/* __IMgaSet_FWD_DEFINED__ */


#ifndef __IMgaConnection_FWD_DEFINED__
#define __IMgaConnection_FWD_DEFINED__
typedef interface IMgaConnection IMgaConnection;

#endif 	/* __IMgaConnection_FWD_DEFINED__ */


#ifndef __IMgaSimpleConnection_FWD_DEFINED__
#define __IMgaSimpleConnection_FWD_DEFINED__
typedef interface IMgaSimpleConnection IMgaSimpleConnection;

#endif 	/* __IMgaSimpleConnection_FWD_DEFINED__ */


#ifndef __IMgaConnPoint_FWD_DEFINED__
#define __IMgaConnPoint_FWD_DEFINED__
typedef interface IMgaConnPoint IMgaConnPoint;

#endif 	/* __IMgaConnPoint_FWD_DEFINED__ */


#ifndef __IMgaRegNode_FWD_DEFINED__
#define __IMgaRegNode_FWD_DEFINED__
typedef interface IMgaRegNode IMgaRegNode;

#endif 	/* __IMgaRegNode_FWD_DEFINED__ */


#ifndef __IMgaFilter_FWD_DEFINED__
#define __IMgaFilter_FWD_DEFINED__
typedef interface IMgaFilter IMgaFilter;

#endif 	/* __IMgaFilter_FWD_DEFINED__ */


#ifndef __IMgaAttribute_FWD_DEFINED__
#define __IMgaAttribute_FWD_DEFINED__
typedef interface IMgaAttribute IMgaAttribute;

#endif 	/* __IMgaAttribute_FWD_DEFINED__ */


#ifndef __IMgaFolders_FWD_DEFINED__
#define __IMgaFolders_FWD_DEFINED__
typedef interface IMgaFolders IMgaFolders;

#endif 	/* __IMgaFolders_FWD_DEFINED__ */


#ifndef __IMgaFCOs_FWD_DEFINED__
#define __IMgaFCOs_FWD_DEFINED__
typedef interface IMgaFCOs IMgaFCOs;

#endif 	/* __IMgaFCOs_FWD_DEFINED__ */


#ifndef __IMgaAttributes_FWD_DEFINED__
#define __IMgaAttributes_FWD_DEFINED__
typedef interface IMgaAttributes IMgaAttributes;

#endif 	/* __IMgaAttributes_FWD_DEFINED__ */


#ifndef __IMgaParts_FWD_DEFINED__
#define __IMgaParts_FWD_DEFINED__
typedef interface IMgaParts IMgaParts;

#endif 	/* __IMgaParts_FWD_DEFINED__ */


#ifndef __IMgaConnPoints_FWD_DEFINED__
#define __IMgaConnPoints_FWD_DEFINED__
typedef interface IMgaConnPoints IMgaConnPoints;

#endif 	/* __IMgaConnPoints_FWD_DEFINED__ */


#ifndef __IMgaRegNodes_FWD_DEFINED__
#define __IMgaRegNodes_FWD_DEFINED__
typedef interface IMgaRegNodes IMgaRegNodes;

#endif 	/* __IMgaRegNodes_FWD_DEFINED__ */


#ifndef __IMgaAddOns_FWD_DEFINED__
#define __IMgaAddOns_FWD_DEFINED__
typedef interface IMgaAddOns IMgaAddOns;

#endif 	/* __IMgaAddOns_FWD_DEFINED__ */


#ifndef __IMgaTerritories_FWD_DEFINED__
#define __IMgaTerritories_FWD_DEFINED__
typedef interface IMgaTerritories IMgaTerritories;

#endif 	/* __IMgaTerritories_FWD_DEFINED__ */


#ifndef __IMgaComponents_FWD_DEFINED__
#define __IMgaComponents_FWD_DEFINED__
typedef interface IMgaComponents IMgaComponents;

#endif 	/* __IMgaComponents_FWD_DEFINED__ */


#ifndef __IMgaClients_FWD_DEFINED__
#define __IMgaClients_FWD_DEFINED__
typedef interface IMgaClients IMgaClients;

#endif 	/* __IMgaClients_FWD_DEFINED__ */


#ifndef __IMgaObjects_FWD_DEFINED__
#define __IMgaObjects_FWD_DEFINED__
typedef interface IMgaObjects IMgaObjects;

#endif 	/* __IMgaObjects_FWD_DEFINED__ */


#ifndef __IMgaO_FWD_DEFINED__
#define __IMgaO_FWD_DEFINED__
typedef interface IMgaO IMgaO;

#endif 	/* __IMgaO_FWD_DEFINED__ */


/* header files for imported files */
#include "oaidl.h"
#include "ocidl.h"
#include "Meta.h"

#ifdef __cplusplus
extern "C"{
#endif 


/* interface __MIDL_itf_Mga_0000_0000 */
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
enum accesstype_enum
    {
        ACC_NULL	= 0,
        ACC_READ	= 1,
        ACC_WRITE	= 2,
        ACC_LINK	= 4
    } 	accesstype_enum;

typedef 
enum transactiontype_enum
    {
        TRANSACTION_GENERAL	= 0,
        TRANSACTION_READ_ONLY	= ( TRANSACTION_GENERAL + 1 ) ,
        TRANSACTION_NON_NESTED	= ( TRANSACTION_READ_ONLY + 1 ) 
    } 	transactiontype_enum;

typedef 
enum attstatus_enum
    {
        ATTSTATUS_HERE	= 0,
        ATTSTATUS_METADEFAULT	= -1,
        ATTSTATUS_UNDEFINED	= -2,
        ATTSTATUS_INVALID	= -3,
        ATTSTATUS_IN_ARCHETYPE1	= 1,
        ATTSTATUS_IN_ARCHETYPE2	= 2,
        ATTSTATUS_IN_ARCHETYPE3	= 3,
        ATTSTATUS_IN_ARCHETYPE4	= 4
    } 	attstatus_enum;

typedef BSTR ID_type;

typedef 
enum openmode
    {
        OPEN_READ	= 1,
        OPEN_READWRITE	= 3
    } 	openmode;

typedef 
enum globalevent_enum
    {
        GLOBALEVENT_OPEN_PROJECT	= 0,
        GLOBALEVENT_CLOSE_PROJECT	= ( GLOBALEVENT_OPEN_PROJECT + 1 ) ,
        GLOBALEVENT_SAVE_PROJECT	= ( GLOBALEVENT_CLOSE_PROJECT + 1 ) ,
        GLOBALEVENT_NEW_TERRITORY	= ( GLOBALEVENT_SAVE_PROJECT + 1 ) ,
        GLOBALEVENT_DESTROY_TERRITORY	= ( GLOBALEVENT_NEW_TERRITORY + 1 ) ,
        GLOBALEVENT_COMMIT_TRANSACTION	= ( GLOBALEVENT_DESTROY_TERRITORY + 1 ) ,
        GLOBALEVENT_ABORT_TRANSACTION	= ( GLOBALEVENT_COMMIT_TRANSACTION + 1 ) ,
        GLOBALEVENT_UNDO	= ( GLOBALEVENT_ABORT_TRANSACTION + 1 ) ,
        GLOBALEVENT_REDO	= ( GLOBALEVENT_UNDO + 1 ) ,
        GLOBALEVENT_PROJECT_PROPERTIES	= ( GLOBALEVENT_REDO + 1 ) ,
        GLOBALEVENT_NOTIFICATION_READY	= ( GLOBALEVENT_PROJECT_PROPERTIES + 1 ) ,
        GLOBALEVENT_OPEN_PROJECT_FINISHED	= ( GLOBALEVENT_NOTIFICATION_READY + 1 ) ,
        APPEVENT_XML_IMPORT_BEGIN	= 0xff,
        APPEVENT_XML_IMPORT_END	= ( APPEVENT_XML_IMPORT_BEGIN + 1 ) ,
        APPEVENT_XML_IMPORT_FCOS_BEGIN	= ( APPEVENT_XML_IMPORT_END + 1 ) ,
        APPEVENT_XML_IMPORT_FCOS_END	= ( APPEVENT_XML_IMPORT_FCOS_BEGIN + 1 ) ,
        APPEVENT_XML_IMPORT_SPECIAL_BEGIN	= ( APPEVENT_XML_IMPORT_FCOS_END + 1 ) ,
        APPEVENT_XML_IMPORT_SPECIAL_END	= ( APPEVENT_XML_IMPORT_SPECIAL_BEGIN + 1 ) ,
        APPEVENT_LIB_ATTACH_BEGIN	= ( APPEVENT_XML_IMPORT_SPECIAL_END + 1 ) ,
        APPEVENT_LIB_ATTACH_END	= ( APPEVENT_LIB_ATTACH_BEGIN + 1 ) 
    } 	globalevent_enum;

#define	RELID_BASE_MAX	( 0x7ffffff )

#define	RELID_VALUE_MAX	( 0x7fffffff )

typedef 
enum objectevent_enum
    {
        OBJEVENT_CREATED	= 0x80000000,
        OBJEVENT_DESTROYED	= 0x40000000,
        OBJEVENT_PRE_DESTROYED	= 0x20000000,
        OBJEVENT_PRE_STATUS	= 0x10000000,
        OBJEVENT_COPIED	= 0x8000000,
        OBJEVENT_ATTR	= 0x1,
        OBJEVENT_REGISTRY	= 0x2,
        OBJEVENT_NEWCHILD	= 0x4,
        OBJEVENT_RELATION	= 0x8,
        OBJEVENT_PROPERTIES	= 0x10,
        OBJEVENT_SUBT_INST	= 0x20,
        OBJEVENT_PARENT	= 0x100,
        OBJEVENT_LOSTCHILD	= 0x200,
        OBJEVENT_REFERENCED	= 0x400,
        OBJEVENT_CONNECTED	= 0x800,
        OBJEVENT_SETINCLUDED	= 0x1000,
        OBJEVENT_REFRELEASED	= 0x2000,
        OBJEVENT_DISCONNECTED	= 0x4000,
        OBJEVENT_SETEXCLUDED	= 0x8000,
        OBJEVENT_MARKEDRO	= 0x10000,
        OBJEVENT_MARKEDRW	= 0x20000,
        OBJEVENT_USERBITS	= 0xff0000,
        OBJEVENT_OPENMODEL	= 0x80000,
        OBJEVENT_SELECT	= 0x100000,
        OBJEVENT_DESELECT	= 0x200000,
        OBJEVENT_MOUSEOVER	= 0x400000,
        OBJEVENT_CLOSEMODEL	= 0x800000
    } 	objectevent_enum;

typedef 
enum objectstatus_enum
    {
        OBJECT_EXISTS	= 0,
        OBJECT_DELETED	= ( OBJECT_EXISTS + 1 ) ,
        OBJECT_ZOMBIE	= ( OBJECT_DELETED + 1 ) 
    } 	objectstatus_enum;

typedef 
enum preference_flags
    {
        MGAPREF_NODUPLICATENAMES	= 0x1,
        MGAPREF_NAMENEWOBJECTS	= 0x2,
        MGAPREF_IGNORECONNCHECKS	= 0x4,
        MGAPREF_FREEINSTANCEREFS	= 0x8,
        MGAPREF_RELAXED_RDATTRTYPES	= 0x10,
        MGAPREF_RELAXED_WRATTRTYPES	= 0x20,
        MGAPREF_MANUAL_RELIDS	= 0x40,
        MGAPREF_NO_NESTED_TX	= 0x80
    } 	preference_flags;

typedef 
enum opmask_codes
    {
        MM_ERROR	= 0,
        MM_CLEAR	= 1,
        MM_DO	= 2,
        MM_FULLDELETE	= 0x40
    } 	opmask_codes;

typedef 
enum opmask_shifts
    {
        MM_REF	= 0,
        MM_CONN	= 8,
        MM_SET	= 16,
        MM_INTERNAL	= 0,
        MM_INTO	= 2,
        MM_OUTOF	= 4
    } 	opmask_shifts;

typedef 
enum componenttype_enum
    {
        COMPONENTTYPE_NONE	= 0,
        COMPONENTTYPE_INTERPRETER	= 0x1,
        COMPONENTTYPE_ADDON	= 0x2,
        COMPONENTTYPE_PLUGIN	= 0x4,
        COMPONENTTYPE_ALL	= 0x7,
        COMPONENTTYPE_EVENT_BASED	= COMPONENTTYPE_ADDON,
        COMPONENTTYPE_PARADIGM_INDEPENDENT	= 0x8,
        COMPONENTTYPE_EXECENGINE	= 0x10,
        COMPONENTTYPE_SCRIPT	= 0x20,
        COMPONENTTYPE_SYSREGREF	= 0x80
    } 	componenttype_enum;

typedef 
enum component_startmode_enum
    {
        GME_MAIN_START	= 0,
        GME_BROWSER_START	= 1,
        GME_CONTEXT_START	= 2,
        GME_EMBEDDED_START	= 3,
        GME_MENU_START	= 16,
        GME_BGCONTEXT_START	= 18,
        GME_ICON_START	= 32,
        METAMODEL_CHECK_SYNTAX	= 101,
        CONSTMGR_SHOW_CONSTRAINTS	= 102,
        GME_SILENT_MODE	= 128
    } 	component_startmode_enum;

typedef 
enum mgaerrors
    {
        E_MGA_NOT_IMPLEMENTED	= 0x87650000,
        E_MGA_NOT_SUPPORTED	= 0x87650001,
        E_MGA_MODULE_INCOMPATIBILITY	= 0x87650010,
        E_MGA_PARADIGM_NOTREG	= 0x87650011,
        E_MGA_PARADIGM_INVALID	= 0x87650012,
        E_MGA_COMPONENT_ERROR	= 0x87650013,
        E_MGA_DATA_INCONSISTENCY	= 0x87650021,
        E_MGA_META_INCOMPATIBILITY	= 0x87650022,
        E_MGA_PROJECT_OPEN	= 0x87650031,
        E_MGA_PROJECT_NOT_OPEN	= 0x87650032,
        E_MGA_READ_ONLY_ACCESS	= 0x87650033,
        E_MGA_NOT_IN_TERRITORY	= 0x87650034,
        E_MGA_NOT_IN_TRANSACTION	= 0x87650035,
        E_MGA_ALREADY_IN_TRANSACTION	= 0x87650036,
        E_MGA_MUST_ABORT	= 0x87650037,
        E_MGA_TARGET_DESTROYED	= 0x87650038,
        E_MGA_FOREIGN_PROJECT	= 0x87650041,
        E_MGA_FOREIGN_OBJECT	= 0x87650042,
        E_MGA_OBJECT_DELETED	= 0x87650051,
        E_MGA_OBJECT_ZOMBIE	= 0x87650052,
        E_MGA_ZOMBIE_NOPROJECT	= 0x87650053,
        E_MGA_ZOMBIE_CLOSED_PROJECT	= 0x87650054,
        E_MGA_INVALID_ARG	= 0x87650060,
        E_MGA_ARG_RANGE	= 0x87650061,
        E_MGA_INPTR_NULL	= 0x87650062,
        E_MGA_OUTPTR_NONEMPTY	= 0x87650063,
        E_MGA_OUTPTR_NULL	= 0x87650064,
        E_MGA_NAME_NOT_FOUND	= 0x87650070,
        E_MGA_NAME_DUPLICATE	= 0x87650071,
        E_MGA_META_VIOLATION	= 0x87650072,
        E_MGA_NOT_CHANGEABLE	= 0x87650073,
        E_MGA_OP_REFUSED	= 0x87650074,
        E_MGA_LIBOBJECT	= 0x87650075,
        E_META_INVALIDATTR	= 0x87650080,
        E_META_INVALIDASPECT	= 0x87650081,
        E_MGA_ACCESS_TYPE	= 0x87650082,
        E_MGA_BAD_ENUMVALUE	= 0x87650083,
        E_MGA_REFPORTS_USED	= 0x87650131,
        E_MGA_VIRTUAL_NODE	= 0x87650136,
        E_MGA_BAD_POSITIONVALUE	= 0x87650137,
        E_MGA_ROOTFCO	= 0x87650138,
        E_MGA_NOT_ROOTOBJECT	= 0x87650138,
        E_MGA_BAD_COLLENGTH	= 0x87650140,
        E_MGA_INVALID_ROLE	= 0x87650142,
        E_MGA_BAD_ID	= 0x87650143,
        E_MGA_NOT_DERIVABLE	= 0x87650144,
        E_MGA_OBJECT_NOT_MEMBER	= 0x87650145,
        E_MGA_NOT_CONNECTIBLE	= 0x87650146,
        E_MGA_NO_ROLE	= 0x87650147,
        E_MGA_CONNROLE_USED	= 0x87650148,
        E_MGA_NOT_DERIVED	= 0x87650149,
        E_MGA_NOT_INSTANCE	= 0x87650150,
        E_MGA_INSTANCE	= 0x87650151,
        E_MGA_REFERENCE_EXPECTED	= 0x87650152,
        E_MGA_FILTERFORMAT	= 0x87650153,
        E_MGA_GEN_OUT_OF_SPACE	= 0x87650154,
        E_MGA_INVALID_TARGET	= 0x87650155,
        E_MGA_LONG_DERIVCHAIN	= 0x87650156,
        E_MGA_LIB_DIFF	= 0x87650157,
        E_MGA_BAD_MASKVALUE	= 0x87650170,
        E_MGA_CONSTRAINT_VIOLATION	= 0x87657fff,
        E_MGA_ERRCODE_ERROR	= 0x87658000
    } 	mgaerrors;



extern RPC_IF_HANDLE __MIDL_itf_Mga_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_Mga_0000_0000_v0_0_s_ifspec;

#ifndef __IMgaProject_INTERFACE_DEFINED__
#define __IMgaProject_INTERFACE_DEFINED__

/* interface IMgaProject */
/* [unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_IMgaProject;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("270B4F92-B17C-11D3-9AD1-00AA00B6FE26")
    IMgaProject : public IDispatch
    {
    public:
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Create( 
            /* [in] */ BSTR projectname,
            /* [in] */ BSTR paradigmname) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE CreateEx( 
            /* [in] */ BSTR projectname,
            /* [in] */ BSTR paradigmname,
            /* [in] */ VARIANT paradigmGUID) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Open( 
            /* [in] */ BSTR projectname,
            /* [defaultvalue][out] */ VARIANT_BOOL *ro_mode = 0) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE OpenEx( 
            /* [in] */ BSTR projectname,
            /* [in] */ BSTR paradigmname,
            /* [in] */ VARIANT paradigmGUID) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Close( 
            /* [defaultvalue][in] */ VARIANT_BOOL abort = 0) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Save( 
            /* [defaultvalue][in] */ BSTR save_as_conn = L"",
            /* [defaultvalue][in] */ VARIANT_BOOL keepoldname = 0) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE CheckLocks( 
            /* [in] */ BSTR filename,
            /* [defaultvalue][in] */ VARIANT_BOOL clearlocks = ( VARIANT_BOOL  )-1) = 0;
        
        virtual /* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_Preferences( 
            /* [in] */ long prefmask) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Preferences( 
            /* [retval][out] */ long *prefmask) = 0;
        
        virtual /* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_OperationsMask( 
            /* [in] */ long opmask) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_OperationsMask( 
            /* [retval][out] */ long *opmask) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE CreateTerritory( 
            /* [in] */ IMgaEventSink *handler,
            /* [out] */ IMgaTerritory **terr,
            /* [defaultvalue][in] */ IMgaEventSink *rwhandler = 0) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE CreateAddOn( 
            /* [in] */ IMgaEventSink *handler,
            /* [out] */ IMgaAddOn **addon) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_AddOns( 
            /* [retval][out] */ IMgaAddOns **addons) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Territories( 
            /* [retval][out] */ IMgaTerritories **terrs) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE EnableAutoAddOns( 
            /* [in] */ VARIANT_BOOL bEnable) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_AddOnComponents( 
            /* [retval][out] */ IMgaComponents **comps) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_ActiveTerritory( 
            /* [retval][out] */ IMgaTerritory **aterr) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE BeginTransaction( 
            /* [in] */ IMgaTerritory *terr,
            /* [defaultvalue][in] */ transactiontype_enum mode = TRANSACTION_GENERAL) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE BeginTransactionInNewTerr( 
            /* [defaultvalue][in] */ transactiontype_enum mode,
            /* [retval][out] */ IMgaTerritory **terr) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_ProjectStatus( 
            /* [retval][out] */ long *stat) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Notify( 
            /* [in] */ globalevent_enum event) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE CommitTransaction( void) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE AbortTransaction( void) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE CheckSupress( 
            /* [in] */ VARIANT_BOOL mode) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Undo( void) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Redo( void) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE UndoRedoSize( 
            /* [out] */ short *undosize,
            /* [out] */ short *redosize) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE FlushUndoQueue( void) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE UpdateSourceControlInfo( 
            /* [in] */ BSTR p_optionalID) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE SourceControlActiveUsers( void) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE SourceControlObjectOwner( 
            /* [in] */ BSTR p_optionalID) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_RootMeta( 
            /* [retval][out] */ IMgaMetaProject **pVal) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_RootFolder( 
            /* [retval][out] */ IMgaFolder **pVal) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE CreateFilter( 
            /* [retval][out] */ IMgaFilter **filter) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE AllFCOs( 
            /* [in] */ IMgaFilter *filter,
            /* [retval][out] */ IMgaFCOs **returnset) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetObjectByID( 
            /* [in] */ ID_type id,
            /* [retval][out] */ IMgaObject **pVal) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetFCOByID( 
            /* [in] */ ID_type id,
            /* [retval][out] */ IMgaFCO **pVal) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetFCOsByName( 
            /* [in] */ BSTR name,
            /* [retval][out] */ IMgaFCOs **pVal) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetFolderByPath( 
            /* [in] */ BSTR path,
            /* [retval][out] */ IMgaFolder **pVal) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE EnumExtReferences( 
            /* [in] */ IMgaFCOs *fcos,
            /* [retval][out] */ IMgaFCOs **pVal) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_ObjectByPath( 
            /* [in] */ BSTR path,
            /* [retval][out] */ IMgaObject **pVal) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_NthObjectByPath( 
            /* [in] */ long n_th,
            /* [in] */ BSTR path,
            /* [retval][out] */ IMgaObject **pVal) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetTopLibraries( 
            /* [in] */ BSTR dispGuid,
            /* [retval][out] */ IMgaFolders **returnset) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetStatistics( 
            /* [retval][out] */ BSTR *statstr) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Name( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_Name( 
            /* [in] */ BSTR newval) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Version( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_Version( 
            /* [in] */ BSTR newval) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_MetaName( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_MetaGUID( 
            /* [retval][out] */ VARIANT *pVal) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_MetaVersion( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_GUID( 
            /* [retval][out] */ VARIANT *pVal) = 0;
        
        virtual /* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_GUID( 
            /* [in] */ VARIANT newVal) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_CreateTime( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_ChangeTime( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Author( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_Author( 
            /* [in] */ BSTR newval) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Comment( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_Comment( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_ProjectConnStr( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_ParadigmConnStr( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_MetaObj( 
            /* [in] */ metaref_type mref,
            /* [retval][out] */ IMgaMetaBase **pVal) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetMetaObjDisp( 
            /* [in] */ metaref_type mref,
            /* [retval][out] */ IMgaMetaBase **pVal) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE QueryProjectInfo( 
            /* [in] */ BSTR projectname,
            /* [out] */ long *mgaversion,
            /* [out] */ BSTR *paradigmname,
            /* [out] */ BSTR *paradigmversion,
            /* [out] */ VARIANT *paradigmGUID,
            /* [out] */ VARIANT_BOOL *ro_mode) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Clients( 
            /* [retval][out] */ IMgaClients **clients) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE RegisterClient( 
            /* [in] */ BSTR name,
            /* [in] */ IDispatch *OLEServer,
            /* [retval][out] */ IMgaClient **client) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetClientByName( 
            /* [in] */ BSTR name,
            /* [retval][out] */ IMgaClient **client) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE CreateTerritoryWithoutSink( 
            /* [out] */ IMgaTerritory **terr) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IMgaProjectVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IMgaProject * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IMgaProject * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IMgaProject * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IMgaProject * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IMgaProject * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IMgaProject * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IMgaProject * This,
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
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Create )( 
            IMgaProject * This,
            /* [in] */ BSTR projectname,
            /* [in] */ BSTR paradigmname);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *CreateEx )( 
            IMgaProject * This,
            /* [in] */ BSTR projectname,
            /* [in] */ BSTR paradigmname,
            /* [in] */ VARIANT paradigmGUID);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Open )( 
            IMgaProject * This,
            /* [in] */ BSTR projectname,
            /* [defaultvalue][out] */ VARIANT_BOOL *ro_mode);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *OpenEx )( 
            IMgaProject * This,
            /* [in] */ BSTR projectname,
            /* [in] */ BSTR paradigmname,
            /* [in] */ VARIANT paradigmGUID);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Close )( 
            IMgaProject * This,
            /* [defaultvalue][in] */ VARIANT_BOOL abort);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Save )( 
            IMgaProject * This,
            /* [defaultvalue][in] */ BSTR save_as_conn,
            /* [defaultvalue][in] */ VARIANT_BOOL keepoldname);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *CheckLocks )( 
            IMgaProject * This,
            /* [in] */ BSTR filename,
            /* [defaultvalue][in] */ VARIANT_BOOL clearlocks);
        
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Preferences )( 
            IMgaProject * This,
            /* [in] */ long prefmask);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Preferences )( 
            IMgaProject * This,
            /* [retval][out] */ long *prefmask);
        
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_OperationsMask )( 
            IMgaProject * This,
            /* [in] */ long opmask);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_OperationsMask )( 
            IMgaProject * This,
            /* [retval][out] */ long *opmask);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *CreateTerritory )( 
            IMgaProject * This,
            /* [in] */ IMgaEventSink *handler,
            /* [out] */ IMgaTerritory **terr,
            /* [defaultvalue][in] */ IMgaEventSink *rwhandler);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *CreateAddOn )( 
            IMgaProject * This,
            /* [in] */ IMgaEventSink *handler,
            /* [out] */ IMgaAddOn **addon);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_AddOns )( 
            IMgaProject * This,
            /* [retval][out] */ IMgaAddOns **addons);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Territories )( 
            IMgaProject * This,
            /* [retval][out] */ IMgaTerritories **terrs);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *EnableAutoAddOns )( 
            IMgaProject * This,
            /* [in] */ VARIANT_BOOL bEnable);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_AddOnComponents )( 
            IMgaProject * This,
            /* [retval][out] */ IMgaComponents **comps);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ActiveTerritory )( 
            IMgaProject * This,
            /* [retval][out] */ IMgaTerritory **aterr);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *BeginTransaction )( 
            IMgaProject * This,
            /* [in] */ IMgaTerritory *terr,
            /* [defaultvalue][in] */ transactiontype_enum mode);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *BeginTransactionInNewTerr )( 
            IMgaProject * This,
            /* [defaultvalue][in] */ transactiontype_enum mode,
            /* [retval][out] */ IMgaTerritory **terr);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ProjectStatus )( 
            IMgaProject * This,
            /* [retval][out] */ long *stat);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Notify )( 
            IMgaProject * This,
            /* [in] */ globalevent_enum event);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *CommitTransaction )( 
            IMgaProject * This);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *AbortTransaction )( 
            IMgaProject * This);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *CheckSupress )( 
            IMgaProject * This,
            /* [in] */ VARIANT_BOOL mode);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Undo )( 
            IMgaProject * This);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Redo )( 
            IMgaProject * This);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *UndoRedoSize )( 
            IMgaProject * This,
            /* [out] */ short *undosize,
            /* [out] */ short *redosize);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *FlushUndoQueue )( 
            IMgaProject * This);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *UpdateSourceControlInfo )( 
            IMgaProject * This,
            /* [in] */ BSTR p_optionalID);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *SourceControlActiveUsers )( 
            IMgaProject * This);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *SourceControlObjectOwner )( 
            IMgaProject * This,
            /* [in] */ BSTR p_optionalID);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_RootMeta )( 
            IMgaProject * This,
            /* [retval][out] */ IMgaMetaProject **pVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_RootFolder )( 
            IMgaProject * This,
            /* [retval][out] */ IMgaFolder **pVal);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *CreateFilter )( 
            IMgaProject * This,
            /* [retval][out] */ IMgaFilter **filter);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *AllFCOs )( 
            IMgaProject * This,
            /* [in] */ IMgaFilter *filter,
            /* [retval][out] */ IMgaFCOs **returnset);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetObjectByID )( 
            IMgaProject * This,
            /* [in] */ ID_type id,
            /* [retval][out] */ IMgaObject **pVal);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetFCOByID )( 
            IMgaProject * This,
            /* [in] */ ID_type id,
            /* [retval][out] */ IMgaFCO **pVal);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetFCOsByName )( 
            IMgaProject * This,
            /* [in] */ BSTR name,
            /* [retval][out] */ IMgaFCOs **pVal);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetFolderByPath )( 
            IMgaProject * This,
            /* [in] */ BSTR path,
            /* [retval][out] */ IMgaFolder **pVal);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *EnumExtReferences )( 
            IMgaProject * This,
            /* [in] */ IMgaFCOs *fcos,
            /* [retval][out] */ IMgaFCOs **pVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ObjectByPath )( 
            IMgaProject * This,
            /* [in] */ BSTR path,
            /* [retval][out] */ IMgaObject **pVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_NthObjectByPath )( 
            IMgaProject * This,
            /* [in] */ long n_th,
            /* [in] */ BSTR path,
            /* [retval][out] */ IMgaObject **pVal);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetTopLibraries )( 
            IMgaProject * This,
            /* [in] */ BSTR dispGuid,
            /* [retval][out] */ IMgaFolders **returnset);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetStatistics )( 
            IMgaProject * This,
            /* [retval][out] */ BSTR *statstr);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Name )( 
            IMgaProject * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Name )( 
            IMgaProject * This,
            /* [in] */ BSTR newval);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Version )( 
            IMgaProject * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Version )( 
            IMgaProject * This,
            /* [in] */ BSTR newval);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_MetaName )( 
            IMgaProject * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_MetaGUID )( 
            IMgaProject * This,
            /* [retval][out] */ VARIANT *pVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_MetaVersion )( 
            IMgaProject * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_GUID )( 
            IMgaProject * This,
            /* [retval][out] */ VARIANT *pVal);
        
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_GUID )( 
            IMgaProject * This,
            /* [in] */ VARIANT newVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_CreateTime )( 
            IMgaProject * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ChangeTime )( 
            IMgaProject * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Author )( 
            IMgaProject * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Author )( 
            IMgaProject * This,
            /* [in] */ BSTR newval);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Comment )( 
            IMgaProject * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Comment )( 
            IMgaProject * This,
            /* [in] */ BSTR newVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ProjectConnStr )( 
            IMgaProject * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ParadigmConnStr )( 
            IMgaProject * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_MetaObj )( 
            IMgaProject * This,
            /* [in] */ metaref_type mref,
            /* [retval][out] */ IMgaMetaBase **pVal);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetMetaObjDisp )( 
            IMgaProject * This,
            /* [in] */ metaref_type mref,
            /* [retval][out] */ IMgaMetaBase **pVal);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *QueryProjectInfo )( 
            IMgaProject * This,
            /* [in] */ BSTR projectname,
            /* [out] */ long *mgaversion,
            /* [out] */ BSTR *paradigmname,
            /* [out] */ BSTR *paradigmversion,
            /* [out] */ VARIANT *paradigmGUID,
            /* [out] */ VARIANT_BOOL *ro_mode);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Clients )( 
            IMgaProject * This,
            /* [retval][out] */ IMgaClients **clients);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *RegisterClient )( 
            IMgaProject * This,
            /* [in] */ BSTR name,
            /* [in] */ IDispatch *OLEServer,
            /* [retval][out] */ IMgaClient **client);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetClientByName )( 
            IMgaProject * This,
            /* [in] */ BSTR name,
            /* [retval][out] */ IMgaClient **client);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *CreateTerritoryWithoutSink )( 
            IMgaProject * This,
            /* [out] */ IMgaTerritory **terr);
        
        END_INTERFACE
    } IMgaProjectVtbl;

    interface IMgaProject
    {
        CONST_VTBL struct IMgaProjectVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IMgaProject_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IMgaProject_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IMgaProject_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IMgaProject_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IMgaProject_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IMgaProject_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IMgaProject_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IMgaProject_Create(This,projectname,paradigmname)	\
    ( (This)->lpVtbl -> Create(This,projectname,paradigmname) ) 

#define IMgaProject_CreateEx(This,projectname,paradigmname,paradigmGUID)	\
    ( (This)->lpVtbl -> CreateEx(This,projectname,paradigmname,paradigmGUID) ) 

#define IMgaProject_Open(This,projectname,ro_mode)	\
    ( (This)->lpVtbl -> Open(This,projectname,ro_mode) ) 

#define IMgaProject_OpenEx(This,projectname,paradigmname,paradigmGUID)	\
    ( (This)->lpVtbl -> OpenEx(This,projectname,paradigmname,paradigmGUID) ) 

#define IMgaProject_Close(This,abort)	\
    ( (This)->lpVtbl -> Close(This,abort) ) 

#define IMgaProject_Save(This,save_as_conn,keepoldname)	\
    ( (This)->lpVtbl -> Save(This,save_as_conn,keepoldname) ) 

#define IMgaProject_CheckLocks(This,filename,clearlocks)	\
    ( (This)->lpVtbl -> CheckLocks(This,filename,clearlocks) ) 

#define IMgaProject_put_Preferences(This,prefmask)	\
    ( (This)->lpVtbl -> put_Preferences(This,prefmask) ) 

#define IMgaProject_get_Preferences(This,prefmask)	\
    ( (This)->lpVtbl -> get_Preferences(This,prefmask) ) 

#define IMgaProject_put_OperationsMask(This,opmask)	\
    ( (This)->lpVtbl -> put_OperationsMask(This,opmask) ) 

#define IMgaProject_get_OperationsMask(This,opmask)	\
    ( (This)->lpVtbl -> get_OperationsMask(This,opmask) ) 

#define IMgaProject_CreateTerritory(This,handler,terr,rwhandler)	\
    ( (This)->lpVtbl -> CreateTerritory(This,handler,terr,rwhandler) ) 

#define IMgaProject_CreateAddOn(This,handler,addon)	\
    ( (This)->lpVtbl -> CreateAddOn(This,handler,addon) ) 

#define IMgaProject_get_AddOns(This,addons)	\
    ( (This)->lpVtbl -> get_AddOns(This,addons) ) 

#define IMgaProject_get_Territories(This,terrs)	\
    ( (This)->lpVtbl -> get_Territories(This,terrs) ) 

#define IMgaProject_EnableAutoAddOns(This,bEnable)	\
    ( (This)->lpVtbl -> EnableAutoAddOns(This,bEnable) ) 

#define IMgaProject_get_AddOnComponents(This,comps)	\
    ( (This)->lpVtbl -> get_AddOnComponents(This,comps) ) 

#define IMgaProject_get_ActiveTerritory(This,aterr)	\
    ( (This)->lpVtbl -> get_ActiveTerritory(This,aterr) ) 

#define IMgaProject_BeginTransaction(This,terr,mode)	\
    ( (This)->lpVtbl -> BeginTransaction(This,terr,mode) ) 

#define IMgaProject_BeginTransactionInNewTerr(This,mode,terr)	\
    ( (This)->lpVtbl -> BeginTransactionInNewTerr(This,mode,terr) ) 

#define IMgaProject_get_ProjectStatus(This,stat)	\
    ( (This)->lpVtbl -> get_ProjectStatus(This,stat) ) 

#define IMgaProject_Notify(This,event)	\
    ( (This)->lpVtbl -> Notify(This,event) ) 

#define IMgaProject_CommitTransaction(This)	\
    ( (This)->lpVtbl -> CommitTransaction(This) ) 

#define IMgaProject_AbortTransaction(This)	\
    ( (This)->lpVtbl -> AbortTransaction(This) ) 

#define IMgaProject_CheckSupress(This,mode)	\
    ( (This)->lpVtbl -> CheckSupress(This,mode) ) 

#define IMgaProject_Undo(This)	\
    ( (This)->lpVtbl -> Undo(This) ) 

#define IMgaProject_Redo(This)	\
    ( (This)->lpVtbl -> Redo(This) ) 

#define IMgaProject_UndoRedoSize(This,undosize,redosize)	\
    ( (This)->lpVtbl -> UndoRedoSize(This,undosize,redosize) ) 

#define IMgaProject_FlushUndoQueue(This)	\
    ( (This)->lpVtbl -> FlushUndoQueue(This) ) 

#define IMgaProject_UpdateSourceControlInfo(This,p_optionalID)	\
    ( (This)->lpVtbl -> UpdateSourceControlInfo(This,p_optionalID) ) 

#define IMgaProject_SourceControlActiveUsers(This)	\
    ( (This)->lpVtbl -> SourceControlActiveUsers(This) ) 

#define IMgaProject_SourceControlObjectOwner(This,p_optionalID)	\
    ( (This)->lpVtbl -> SourceControlObjectOwner(This,p_optionalID) ) 

#define IMgaProject_get_RootMeta(This,pVal)	\
    ( (This)->lpVtbl -> get_RootMeta(This,pVal) ) 

#define IMgaProject_get_RootFolder(This,pVal)	\
    ( (This)->lpVtbl -> get_RootFolder(This,pVal) ) 

#define IMgaProject_CreateFilter(This,filter)	\
    ( (This)->lpVtbl -> CreateFilter(This,filter) ) 

#define IMgaProject_AllFCOs(This,filter,returnset)	\
    ( (This)->lpVtbl -> AllFCOs(This,filter,returnset) ) 

#define IMgaProject_GetObjectByID(This,id,pVal)	\
    ( (This)->lpVtbl -> GetObjectByID(This,id,pVal) ) 

#define IMgaProject_GetFCOByID(This,id,pVal)	\
    ( (This)->lpVtbl -> GetFCOByID(This,id,pVal) ) 

#define IMgaProject_GetFCOsByName(This,name,pVal)	\
    ( (This)->lpVtbl -> GetFCOsByName(This,name,pVal) ) 

#define IMgaProject_GetFolderByPath(This,path,pVal)	\
    ( (This)->lpVtbl -> GetFolderByPath(This,path,pVal) ) 

#define IMgaProject_EnumExtReferences(This,fcos,pVal)	\
    ( (This)->lpVtbl -> EnumExtReferences(This,fcos,pVal) ) 

#define IMgaProject_get_ObjectByPath(This,path,pVal)	\
    ( (This)->lpVtbl -> get_ObjectByPath(This,path,pVal) ) 

#define IMgaProject_get_NthObjectByPath(This,n_th,path,pVal)	\
    ( (This)->lpVtbl -> get_NthObjectByPath(This,n_th,path,pVal) ) 

#define IMgaProject_GetTopLibraries(This,dispGuid,returnset)	\
    ( (This)->lpVtbl -> GetTopLibraries(This,dispGuid,returnset) ) 

#define IMgaProject_GetStatistics(This,statstr)	\
    ( (This)->lpVtbl -> GetStatistics(This,statstr) ) 

#define IMgaProject_get_Name(This,pVal)	\
    ( (This)->lpVtbl -> get_Name(This,pVal) ) 

#define IMgaProject_put_Name(This,newval)	\
    ( (This)->lpVtbl -> put_Name(This,newval) ) 

#define IMgaProject_get_Version(This,pVal)	\
    ( (This)->lpVtbl -> get_Version(This,pVal) ) 

#define IMgaProject_put_Version(This,newval)	\
    ( (This)->lpVtbl -> put_Version(This,newval) ) 

#define IMgaProject_get_MetaName(This,pVal)	\
    ( (This)->lpVtbl -> get_MetaName(This,pVal) ) 

#define IMgaProject_get_MetaGUID(This,pVal)	\
    ( (This)->lpVtbl -> get_MetaGUID(This,pVal) ) 

#define IMgaProject_get_MetaVersion(This,pVal)	\
    ( (This)->lpVtbl -> get_MetaVersion(This,pVal) ) 

#define IMgaProject_get_GUID(This,pVal)	\
    ( (This)->lpVtbl -> get_GUID(This,pVal) ) 

#define IMgaProject_put_GUID(This,newVal)	\
    ( (This)->lpVtbl -> put_GUID(This,newVal) ) 

#define IMgaProject_get_CreateTime(This,pVal)	\
    ( (This)->lpVtbl -> get_CreateTime(This,pVal) ) 

#define IMgaProject_get_ChangeTime(This,pVal)	\
    ( (This)->lpVtbl -> get_ChangeTime(This,pVal) ) 

#define IMgaProject_get_Author(This,pVal)	\
    ( (This)->lpVtbl -> get_Author(This,pVal) ) 

#define IMgaProject_put_Author(This,newval)	\
    ( (This)->lpVtbl -> put_Author(This,newval) ) 

#define IMgaProject_get_Comment(This,pVal)	\
    ( (This)->lpVtbl -> get_Comment(This,pVal) ) 

#define IMgaProject_put_Comment(This,newVal)	\
    ( (This)->lpVtbl -> put_Comment(This,newVal) ) 

#define IMgaProject_get_ProjectConnStr(This,pVal)	\
    ( (This)->lpVtbl -> get_ProjectConnStr(This,pVal) ) 

#define IMgaProject_get_ParadigmConnStr(This,pVal)	\
    ( (This)->lpVtbl -> get_ParadigmConnStr(This,pVal) ) 

#define IMgaProject_get_MetaObj(This,mref,pVal)	\
    ( (This)->lpVtbl -> get_MetaObj(This,mref,pVal) ) 

#define IMgaProject_GetMetaObjDisp(This,mref,pVal)	\
    ( (This)->lpVtbl -> GetMetaObjDisp(This,mref,pVal) ) 

#define IMgaProject_QueryProjectInfo(This,projectname,mgaversion,paradigmname,paradigmversion,paradigmGUID,ro_mode)	\
    ( (This)->lpVtbl -> QueryProjectInfo(This,projectname,mgaversion,paradigmname,paradigmversion,paradigmGUID,ro_mode) ) 

#define IMgaProject_get_Clients(This,clients)	\
    ( (This)->lpVtbl -> get_Clients(This,clients) ) 

#define IMgaProject_RegisterClient(This,name,OLEServer,client)	\
    ( (This)->lpVtbl -> RegisterClient(This,name,OLEServer,client) ) 

#define IMgaProject_GetClientByName(This,name,client)	\
    ( (This)->lpVtbl -> GetClientByName(This,name,client) ) 

#define IMgaProject_CreateTerritoryWithoutSink(This,terr)	\
    ( (This)->lpVtbl -> CreateTerritoryWithoutSink(This,terr) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IMgaProject_INTERFACE_DEFINED__ */


#ifndef __IMgaEventSink_INTERFACE_DEFINED__
#define __IMgaEventSink_INTERFACE_DEFINED__

/* interface IMgaEventSink */
/* [unique][helpstring][oleautomation][uuid][object] */ 


EXTERN_C const IID IID_IMgaEventSink;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("32D1F3A5-D276-11D3-9AD5-00AA00B6FE26")
    IMgaEventSink : public IUnknown
    {
    public:
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GlobalEvent( 
            /* [in] */ globalevent_enum event) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE ObjectEvent( 
            /* [in] */ IMgaObject *obj,
            /* [in] */ unsigned long eventmask,
            /* [in] */ VARIANT v) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IMgaEventSinkVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IMgaEventSink * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IMgaEventSink * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IMgaEventSink * This);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GlobalEvent )( 
            IMgaEventSink * This,
            /* [in] */ globalevent_enum event);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *ObjectEvent )( 
            IMgaEventSink * This,
            /* [in] */ IMgaObject *obj,
            /* [in] */ unsigned long eventmask,
            /* [in] */ VARIANT v);
        
        END_INTERFACE
    } IMgaEventSinkVtbl;

    interface IMgaEventSink
    {
        CONST_VTBL struct IMgaEventSinkVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IMgaEventSink_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IMgaEventSink_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IMgaEventSink_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IMgaEventSink_GlobalEvent(This,event)	\
    ( (This)->lpVtbl -> GlobalEvent(This,event) ) 

#define IMgaEventSink_ObjectEvent(This,obj,eventmask,v)	\
    ( (This)->lpVtbl -> ObjectEvent(This,obj,eventmask,v) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IMgaEventSink_INTERFACE_DEFINED__ */


#ifndef __IMgaAddOn_INTERFACE_DEFINED__
#define __IMgaAddOn_INTERFACE_DEFINED__

/* interface IMgaAddOn */
/* [unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_IMgaAddOn;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("80A6D661-D411-11D3-9AD5-00AA00B6FE26")
    IMgaAddOn : public IDispatch
    {
    public:
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Priority( 
            /* [retval][out] */ long *pVal) = 0;
        
        virtual /* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_Priority( 
            /* [in] */ long newVal) = 0;
        
        virtual /* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_EventMask( 
            /* [in] */ unsigned long eventmask) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Destroy( void) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Project( 
            /* [retval][out] */ IMgaProject **pVal) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE CheckProject( 
            /* [in] */ IMgaProject *p_project) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IMgaAddOnVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IMgaAddOn * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IMgaAddOn * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IMgaAddOn * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IMgaAddOn * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IMgaAddOn * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IMgaAddOn * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IMgaAddOn * This,
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
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Priority )( 
            IMgaAddOn * This,
            /* [retval][out] */ long *pVal);
        
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Priority )( 
            IMgaAddOn * This,
            /* [in] */ long newVal);
        
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_EventMask )( 
            IMgaAddOn * This,
            /* [in] */ unsigned long eventmask);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Destroy )( 
            IMgaAddOn * This);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Project )( 
            IMgaAddOn * This,
            /* [retval][out] */ IMgaProject **pVal);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *CheckProject )( 
            IMgaAddOn * This,
            /* [in] */ IMgaProject *p_project);
        
        END_INTERFACE
    } IMgaAddOnVtbl;

    interface IMgaAddOn
    {
        CONST_VTBL struct IMgaAddOnVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IMgaAddOn_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IMgaAddOn_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IMgaAddOn_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IMgaAddOn_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IMgaAddOn_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IMgaAddOn_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IMgaAddOn_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IMgaAddOn_get_Priority(This,pVal)	\
    ( (This)->lpVtbl -> get_Priority(This,pVal) ) 

#define IMgaAddOn_put_Priority(This,newVal)	\
    ( (This)->lpVtbl -> put_Priority(This,newVal) ) 

#define IMgaAddOn_put_EventMask(This,eventmask)	\
    ( (This)->lpVtbl -> put_EventMask(This,eventmask) ) 

#define IMgaAddOn_Destroy(This)	\
    ( (This)->lpVtbl -> Destroy(This) ) 

#define IMgaAddOn_get_Project(This,pVal)	\
    ( (This)->lpVtbl -> get_Project(This,pVal) ) 

#define IMgaAddOn_CheckProject(This,p_project)	\
    ( (This)->lpVtbl -> CheckProject(This,p_project) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IMgaAddOn_INTERFACE_DEFINED__ */


#ifndef __IMgaComponent_INTERFACE_DEFINED__
#define __IMgaComponent_INTERFACE_DEFINED__

/* interface IMgaComponent */
/* [unique][helpstring][oleautomation][uuid][object] */ 


EXTERN_C const IID IID_IMgaComponent;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("11BB02D9-2E2C-11D3-B36D-0060082DF884")
    IMgaComponent : public IUnknown
    {
    public:
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Invoke( 
            /* [in] */ IMgaProject *project,
            /* [in] */ IMgaFCOs *selectedobjs,
            /* [in] */ long param) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Initialize( 
            IMgaProject *p) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Enable( 
            VARIANT_BOOL newVal) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_InteractiveMode( 
            /* [retval][out] */ VARIANT_BOOL *enabled) = 0;
        
        virtual /* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_InteractiveMode( 
            /* [in] */ VARIANT_BOOL enabled) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_ComponentName( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_ComponentType( 
            /* [retval][out] */ componenttype_enum *t) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Paradigm( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IMgaComponentVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IMgaComponent * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IMgaComponent * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IMgaComponent * This);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IMgaComponent * This,
            /* [in] */ IMgaProject *project,
            /* [in] */ IMgaFCOs *selectedobjs,
            /* [in] */ long param);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Initialize )( 
            IMgaComponent * This,
            IMgaProject *p);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Enable )( 
            IMgaComponent * This,
            VARIANT_BOOL newVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_InteractiveMode )( 
            IMgaComponent * This,
            /* [retval][out] */ VARIANT_BOOL *enabled);
        
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_InteractiveMode )( 
            IMgaComponent * This,
            /* [in] */ VARIANT_BOOL enabled);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ComponentName )( 
            IMgaComponent * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ComponentType )( 
            IMgaComponent * This,
            /* [retval][out] */ componenttype_enum *t);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Paradigm )( 
            IMgaComponent * This,
            /* [retval][out] */ BSTR *pVal);
        
        END_INTERFACE
    } IMgaComponentVtbl;

    interface IMgaComponent
    {
        CONST_VTBL struct IMgaComponentVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IMgaComponent_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IMgaComponent_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IMgaComponent_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IMgaComponent_Invoke(This,project,selectedobjs,param)	\
    ( (This)->lpVtbl -> Invoke(This,project,selectedobjs,param) ) 

#define IMgaComponent_Initialize(This,p)	\
    ( (This)->lpVtbl -> Initialize(This,p) ) 

#define IMgaComponent_Enable(This,newVal)	\
    ( (This)->lpVtbl -> Enable(This,newVal) ) 

#define IMgaComponent_get_InteractiveMode(This,enabled)	\
    ( (This)->lpVtbl -> get_InteractiveMode(This,enabled) ) 

#define IMgaComponent_put_InteractiveMode(This,enabled)	\
    ( (This)->lpVtbl -> put_InteractiveMode(This,enabled) ) 

#define IMgaComponent_get_ComponentName(This,pVal)	\
    ( (This)->lpVtbl -> get_ComponentName(This,pVal) ) 

#define IMgaComponent_get_ComponentType(This,t)	\
    ( (This)->lpVtbl -> get_ComponentType(This,t) ) 

#define IMgaComponent_get_Paradigm(This,pVal)	\
    ( (This)->lpVtbl -> get_Paradigm(This,pVal) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IMgaComponent_INTERFACE_DEFINED__ */


#ifndef __IMgaComponentEx_INTERFACE_DEFINED__
#define __IMgaComponentEx_INTERFACE_DEFINED__

/* interface IMgaComponentEx */
/* [unique][helpstring][oleautomation][uuid][object] */ 


EXTERN_C const IID IID_IMgaComponentEx;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("11BB44D9-2E2C-11D3-B36D-0060082DF884")
    IMgaComponentEx : public IMgaComponent
    {
    public:
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE InvokeEx( 
            /* [in] */ IMgaProject *project,
            /* [in] */ IMgaFCO *currentobj,
            /* [out][in] */ IMgaFCOs *selectedobjs,
            /* [in] */ long param) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE ObjectsInvokeEx( 
            /* [in] */ IMgaProject *project,
            /* [in] */ IMgaObject *currentobj,
            /* [out][in] */ IMgaObjects *selectedobjs,
            /* [in] */ long param) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_ComponentProgID( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_ComponentParameter( 
            /* [in] */ BSTR name,
            /* [in] */ VARIANT newVal) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_ComponentParameter( 
            /* [in] */ BSTR name,
            /* [retval][out] */ VARIANT *pVal) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IMgaComponentExVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IMgaComponentEx * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IMgaComponentEx * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IMgaComponentEx * This);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IMgaComponentEx * This,
            /* [in] */ IMgaProject *project,
            /* [in] */ IMgaFCOs *selectedobjs,
            /* [in] */ long param);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Initialize )( 
            IMgaComponentEx * This,
            IMgaProject *p);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Enable )( 
            IMgaComponentEx * This,
            VARIANT_BOOL newVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_InteractiveMode )( 
            IMgaComponentEx * This,
            /* [retval][out] */ VARIANT_BOOL *enabled);
        
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_InteractiveMode )( 
            IMgaComponentEx * This,
            /* [in] */ VARIANT_BOOL enabled);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ComponentName )( 
            IMgaComponentEx * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ComponentType )( 
            IMgaComponentEx * This,
            /* [retval][out] */ componenttype_enum *t);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Paradigm )( 
            IMgaComponentEx * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *InvokeEx )( 
            IMgaComponentEx * This,
            /* [in] */ IMgaProject *project,
            /* [in] */ IMgaFCO *currentobj,
            /* [out][in] */ IMgaFCOs *selectedobjs,
            /* [in] */ long param);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *ObjectsInvokeEx )( 
            IMgaComponentEx * This,
            /* [in] */ IMgaProject *project,
            /* [in] */ IMgaObject *currentobj,
            /* [out][in] */ IMgaObjects *selectedobjs,
            /* [in] */ long param);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ComponentProgID )( 
            IMgaComponentEx * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ComponentParameter )( 
            IMgaComponentEx * This,
            /* [in] */ BSTR name,
            /* [in] */ VARIANT newVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ComponentParameter )( 
            IMgaComponentEx * This,
            /* [in] */ BSTR name,
            /* [retval][out] */ VARIANT *pVal);
        
        END_INTERFACE
    } IMgaComponentExVtbl;

    interface IMgaComponentEx
    {
        CONST_VTBL struct IMgaComponentExVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IMgaComponentEx_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IMgaComponentEx_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IMgaComponentEx_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IMgaComponentEx_Invoke(This,project,selectedobjs,param)	\
    ( (This)->lpVtbl -> Invoke(This,project,selectedobjs,param) ) 

#define IMgaComponentEx_Initialize(This,p)	\
    ( (This)->lpVtbl -> Initialize(This,p) ) 

#define IMgaComponentEx_Enable(This,newVal)	\
    ( (This)->lpVtbl -> Enable(This,newVal) ) 

#define IMgaComponentEx_get_InteractiveMode(This,enabled)	\
    ( (This)->lpVtbl -> get_InteractiveMode(This,enabled) ) 

#define IMgaComponentEx_put_InteractiveMode(This,enabled)	\
    ( (This)->lpVtbl -> put_InteractiveMode(This,enabled) ) 

#define IMgaComponentEx_get_ComponentName(This,pVal)	\
    ( (This)->lpVtbl -> get_ComponentName(This,pVal) ) 

#define IMgaComponentEx_get_ComponentType(This,t)	\
    ( (This)->lpVtbl -> get_ComponentType(This,t) ) 

#define IMgaComponentEx_get_Paradigm(This,pVal)	\
    ( (This)->lpVtbl -> get_Paradigm(This,pVal) ) 


#define IMgaComponentEx_InvokeEx(This,project,currentobj,selectedobjs,param)	\
    ( (This)->lpVtbl -> InvokeEx(This,project,currentobj,selectedobjs,param) ) 

#define IMgaComponentEx_ObjectsInvokeEx(This,project,currentobj,selectedobjs,param)	\
    ( (This)->lpVtbl -> ObjectsInvokeEx(This,project,currentobj,selectedobjs,param) ) 

#define IMgaComponentEx_get_ComponentProgID(This,pVal)	\
    ( (This)->lpVtbl -> get_ComponentProgID(This,pVal) ) 

#define IMgaComponentEx_put_ComponentParameter(This,name,newVal)	\
    ( (This)->lpVtbl -> put_ComponentParameter(This,name,newVal) ) 

#define IMgaComponentEx_get_ComponentParameter(This,name,pVal)	\
    ( (This)->lpVtbl -> get_ComponentParameter(This,name,pVal) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IMgaComponentEx_INTERFACE_DEFINED__ */


#ifndef __IMgaClient_INTERFACE_DEFINED__
#define __IMgaClient_INTERFACE_DEFINED__

/* interface IMgaClient */
/* [unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_IMgaClient;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("F07EE1A2-2D53-449b-A2DA-45A1A9110E53")
    IMgaClient : public IDispatch
    {
    public:
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Name( 
            /* [retval][out] */ BSTR *pName) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_OLEServer( 
            /* [retval][out] */ IDispatch **pServer) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Project( 
            /* [retval][out] */ IMgaProject **pVal) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Destroy( void) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IMgaClientVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IMgaClient * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IMgaClient * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IMgaClient * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IMgaClient * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IMgaClient * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IMgaClient * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IMgaClient * This,
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
            IMgaClient * This,
            /* [retval][out] */ BSTR *pName);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_OLEServer )( 
            IMgaClient * This,
            /* [retval][out] */ IDispatch **pServer);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Project )( 
            IMgaClient * This,
            /* [retval][out] */ IMgaProject **pVal);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Destroy )( 
            IMgaClient * This);
        
        END_INTERFACE
    } IMgaClientVtbl;

    interface IMgaClient
    {
        CONST_VTBL struct IMgaClientVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IMgaClient_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IMgaClient_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IMgaClient_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IMgaClient_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IMgaClient_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IMgaClient_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IMgaClient_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IMgaClient_get_Name(This,pName)	\
    ( (This)->lpVtbl -> get_Name(This,pName) ) 

#define IMgaClient_get_OLEServer(This,pServer)	\
    ( (This)->lpVtbl -> get_OLEServer(This,pServer) ) 

#define IMgaClient_get_Project(This,pVal)	\
    ( (This)->lpVtbl -> get_Project(This,pVal) ) 

#define IMgaClient_Destroy(This)	\
    ( (This)->lpVtbl -> Destroy(This) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IMgaClient_INTERFACE_DEFINED__ */


#ifndef __IMgaTerritory_INTERFACE_DEFINED__
#define __IMgaTerritory_INTERFACE_DEFINED__

/* interface IMgaTerritory */
/* [unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_IMgaTerritory;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("32D1F3A3-D276-11D3-9AD5-00AA00B6FE26")
    IMgaTerritory : public IDispatch
    {
    public:
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Flush( void) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Destroy( void) = 0;
        
        virtual /* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_EventMask( 
            /* [in] */ unsigned long eventmask) = 0;
        
        virtual /* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_RWEventMask( 
            /* [in] */ unsigned long eventmask) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Associate( 
            /* [in] */ IMgaObject *obj,
            /* [in] */ VARIANT userdata) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE OpenObj( 
            /* [in] */ IMgaObject *obj,
            /* [out][in] */ IMgaObject **newobj) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE OpenFCO( 
            /* [in] */ IMgaFCO *obj,
            /* [out][in] */ IMgaFCO **newobj) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE OpenFCOs( 
            /* [in] */ IMgaFCOs *obj,
            /* [out][in] */ IMgaFCOs **newobj) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE CloseObj( 
            /* [in] */ IMgaObject *obj) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Project( 
            /* [retval][out] */ IMgaProject **pVal) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE CheckProject( 
            /* [in] */ IMgaProject *project) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE SetNamespace( 
            /* [in] */ BSTR pNmsp) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetNamespace( 
            /* [retval][out] */ BSTR *pNmsp) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IMgaTerritoryVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IMgaTerritory * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IMgaTerritory * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IMgaTerritory * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IMgaTerritory * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IMgaTerritory * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IMgaTerritory * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IMgaTerritory * This,
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
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Flush )( 
            IMgaTerritory * This);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Destroy )( 
            IMgaTerritory * This);
        
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_EventMask )( 
            IMgaTerritory * This,
            /* [in] */ unsigned long eventmask);
        
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_RWEventMask )( 
            IMgaTerritory * This,
            /* [in] */ unsigned long eventmask);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Associate )( 
            IMgaTerritory * This,
            /* [in] */ IMgaObject *obj,
            /* [in] */ VARIANT userdata);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *OpenObj )( 
            IMgaTerritory * This,
            /* [in] */ IMgaObject *obj,
            /* [out][in] */ IMgaObject **newobj);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *OpenFCO )( 
            IMgaTerritory * This,
            /* [in] */ IMgaFCO *obj,
            /* [out][in] */ IMgaFCO **newobj);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *OpenFCOs )( 
            IMgaTerritory * This,
            /* [in] */ IMgaFCOs *obj,
            /* [out][in] */ IMgaFCOs **newobj);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *CloseObj )( 
            IMgaTerritory * This,
            /* [in] */ IMgaObject *obj);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Project )( 
            IMgaTerritory * This,
            /* [retval][out] */ IMgaProject **pVal);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *CheckProject )( 
            IMgaTerritory * This,
            /* [in] */ IMgaProject *project);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *SetNamespace )( 
            IMgaTerritory * This,
            /* [in] */ BSTR pNmsp);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetNamespace )( 
            IMgaTerritory * This,
            /* [retval][out] */ BSTR *pNmsp);
        
        END_INTERFACE
    } IMgaTerritoryVtbl;

    interface IMgaTerritory
    {
        CONST_VTBL struct IMgaTerritoryVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IMgaTerritory_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IMgaTerritory_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IMgaTerritory_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IMgaTerritory_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IMgaTerritory_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IMgaTerritory_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IMgaTerritory_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IMgaTerritory_Flush(This)	\
    ( (This)->lpVtbl -> Flush(This) ) 

#define IMgaTerritory_Destroy(This)	\
    ( (This)->lpVtbl -> Destroy(This) ) 

#define IMgaTerritory_put_EventMask(This,eventmask)	\
    ( (This)->lpVtbl -> put_EventMask(This,eventmask) ) 

#define IMgaTerritory_put_RWEventMask(This,eventmask)	\
    ( (This)->lpVtbl -> put_RWEventMask(This,eventmask) ) 

#define IMgaTerritory_Associate(This,obj,userdata)	\
    ( (This)->lpVtbl -> Associate(This,obj,userdata) ) 

#define IMgaTerritory_OpenObj(This,obj,newobj)	\
    ( (This)->lpVtbl -> OpenObj(This,obj,newobj) ) 

#define IMgaTerritory_OpenFCO(This,obj,newobj)	\
    ( (This)->lpVtbl -> OpenFCO(This,obj,newobj) ) 

#define IMgaTerritory_OpenFCOs(This,obj,newobj)	\
    ( (This)->lpVtbl -> OpenFCOs(This,obj,newobj) ) 

#define IMgaTerritory_CloseObj(This,obj)	\
    ( (This)->lpVtbl -> CloseObj(This,obj) ) 

#define IMgaTerritory_get_Project(This,pVal)	\
    ( (This)->lpVtbl -> get_Project(This,pVal) ) 

#define IMgaTerritory_CheckProject(This,project)	\
    ( (This)->lpVtbl -> CheckProject(This,project) ) 

#define IMgaTerritory_SetNamespace(This,pNmsp)	\
    ( (This)->lpVtbl -> SetNamespace(This,pNmsp) ) 

#define IMgaTerritory_GetNamespace(This,pNmsp)	\
    ( (This)->lpVtbl -> GetNamespace(This,pNmsp) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IMgaTerritory_INTERFACE_DEFINED__ */


#ifndef __IMgaObject_INTERFACE_DEFINED__
#define __IMgaObject_INTERFACE_DEFINED__

/* interface IMgaObject */
/* [unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_IMgaObject;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("32D1F3A7-D276-11D3-9AD5-00AA00B6FE26")
    IMgaObject : public IDispatch
    {
    public:
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Status( 
            /* [retval][out] */ long *p) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_IsWritable( 
            /* [retval][out] */ VARIANT_BOOL *p) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_ID( 
            /* [retval][out] */ ID_type *pVal) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Name( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_Name( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_AbsPath( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_MetaBase( 
            /* [retval][out] */ IMgaMetaBase **pVal) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_ObjType( 
            /* [retval][out] */ objtype_enum *pVal) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Project( 
            /* [retval][out] */ IMgaProject **pVal) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Territory( 
            /* [retval][out] */ IMgaTerritory **pVal) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_IsEqual( 
            /* [in] */ IMgaObject *o,
            /* [retval][out] */ VARIANT_BOOL *pVal) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetIsEqualDisp( 
            /* [in] */ IMgaObject *o,
            /* [retval][out] */ VARIANT_BOOL *pVal) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetParent( 
            /* [out] */ IMgaObject **pVal,
            /* [defaultvalue][out] */ objtype_enum *objtype = 0) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE CheckProject( 
            /* [in] */ IMgaProject *project) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE DestroyObject( void) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Open( 
            /* [defaultvalue][in] */ openmode mode = OPEN_READ) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Close( void) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Associate( 
            /* [in] */ VARIANT userdata) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_CurrentAssociation( 
            /* [retval][out] */ VARIANT *userdata) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE SendEvent( 
            /* [in] */ long mask) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_RelID( 
            /* [retval][out] */ long *pVal) = 0;
        
        virtual /* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_RelID( 
            /* [in] */ long newVal) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_IsLibObject( 
            /* [retval][out] */ VARIANT_BOOL *pVal) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Check( void) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE CheckTree( void) = 0;
        
        virtual /* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_Exempt( 
            /* [in] */ VARIANT_BOOL newVal) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Exempt( 
            /* [retval][out] */ VARIANT_BOOL *pVal) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_ChildObjects( 
            /* [retval][out] */ IMgaObjects **pVal) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_ChildObjectByRelID( 
            /* [in] */ long relid,
            /* [retval][out] */ IMgaObject **pVal) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetChildObjectByRelIDDisp( 
            /* [in] */ long relid,
            /* [retval][out] */ IMgaObject **pVal) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_ObjectByPath( 
            /* [in] */ BSTR path,
            /* [retval][out] */ IMgaObject **pVal) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetObjectByPathDisp( 
            /* [in] */ BSTR path,
            /* [retval][out] */ IMgaObject **pVal) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_NthObjectByPath( 
            /* [in] */ long n_th,
            /* [in] */ BSTR path,
            /* [retval][out] */ IMgaObject **pVal) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetNthObjectByPathDisp( 
            /* [in] */ long n_th,
            /* [in] */ BSTR path,
            /* [retval][out] */ IMgaObject **pVal) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE PutReadOnlyAccessWithPropagate( 
            /* [in] */ VARIANT_BOOL pReadOnly) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE PutReadOnlyAccess( 
            /* [in] */ VARIANT_BOOL pReadOnly) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE HasReadOnlyAccess( 
            /* [retval][out] */ VARIANT_BOOL *pReadOnly) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetGuid( 
            /* [out][in] */ long *l1,
            /* [out][in] */ long *l2,
            /* [out][in] */ long *l3,
            /* [out][in] */ long *l4) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE PutGuid( 
            /* [in] */ long l1,
            /* [in] */ long l2,
            /* [in] */ long l3,
            /* [in] */ long l4) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetGuidDisp( 
            /* [retval][out] */ BSTR *guid_str) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE PutGuidDisp( 
            /* [in] */ BSTR guid_str) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IMgaObjectVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IMgaObject * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IMgaObject * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IMgaObject * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IMgaObject * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IMgaObject * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IMgaObject * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IMgaObject * This,
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
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Status )( 
            IMgaObject * This,
            /* [retval][out] */ long *p);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_IsWritable )( 
            IMgaObject * This,
            /* [retval][out] */ VARIANT_BOOL *p);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ID )( 
            IMgaObject * This,
            /* [retval][out] */ ID_type *pVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Name )( 
            IMgaObject * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Name )( 
            IMgaObject * This,
            /* [in] */ BSTR newVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_AbsPath )( 
            IMgaObject * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_MetaBase )( 
            IMgaObject * This,
            /* [retval][out] */ IMgaMetaBase **pVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ObjType )( 
            IMgaObject * This,
            /* [retval][out] */ objtype_enum *pVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Project )( 
            IMgaObject * This,
            /* [retval][out] */ IMgaProject **pVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Territory )( 
            IMgaObject * This,
            /* [retval][out] */ IMgaTerritory **pVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_IsEqual )( 
            IMgaObject * This,
            /* [in] */ IMgaObject *o,
            /* [retval][out] */ VARIANT_BOOL *pVal);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetIsEqualDisp )( 
            IMgaObject * This,
            /* [in] */ IMgaObject *o,
            /* [retval][out] */ VARIANT_BOOL *pVal);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetParent )( 
            IMgaObject * This,
            /* [out] */ IMgaObject **pVal,
            /* [defaultvalue][out] */ objtype_enum *objtype);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *CheckProject )( 
            IMgaObject * This,
            /* [in] */ IMgaProject *project);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *DestroyObject )( 
            IMgaObject * This);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Open )( 
            IMgaObject * This,
            /* [defaultvalue][in] */ openmode mode);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Close )( 
            IMgaObject * This);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Associate )( 
            IMgaObject * This,
            /* [in] */ VARIANT userdata);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentAssociation )( 
            IMgaObject * This,
            /* [retval][out] */ VARIANT *userdata);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *SendEvent )( 
            IMgaObject * This,
            /* [in] */ long mask);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_RelID )( 
            IMgaObject * This,
            /* [retval][out] */ long *pVal);
        
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_RelID )( 
            IMgaObject * This,
            /* [in] */ long newVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_IsLibObject )( 
            IMgaObject * This,
            /* [retval][out] */ VARIANT_BOOL *pVal);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Check )( 
            IMgaObject * This);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *CheckTree )( 
            IMgaObject * This);
        
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Exempt )( 
            IMgaObject * This,
            /* [in] */ VARIANT_BOOL newVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Exempt )( 
            IMgaObject * This,
            /* [retval][out] */ VARIANT_BOOL *pVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ChildObjects )( 
            IMgaObject * This,
            /* [retval][out] */ IMgaObjects **pVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ChildObjectByRelID )( 
            IMgaObject * This,
            /* [in] */ long relid,
            /* [retval][out] */ IMgaObject **pVal);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetChildObjectByRelIDDisp )( 
            IMgaObject * This,
            /* [in] */ long relid,
            /* [retval][out] */ IMgaObject **pVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ObjectByPath )( 
            IMgaObject * This,
            /* [in] */ BSTR path,
            /* [retval][out] */ IMgaObject **pVal);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetObjectByPathDisp )( 
            IMgaObject * This,
            /* [in] */ BSTR path,
            /* [retval][out] */ IMgaObject **pVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_NthObjectByPath )( 
            IMgaObject * This,
            /* [in] */ long n_th,
            /* [in] */ BSTR path,
            /* [retval][out] */ IMgaObject **pVal);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetNthObjectByPathDisp )( 
            IMgaObject * This,
            /* [in] */ long n_th,
            /* [in] */ BSTR path,
            /* [retval][out] */ IMgaObject **pVal);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *PutReadOnlyAccessWithPropagate )( 
            IMgaObject * This,
            /* [in] */ VARIANT_BOOL pReadOnly);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *PutReadOnlyAccess )( 
            IMgaObject * This,
            /* [in] */ VARIANT_BOOL pReadOnly);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *HasReadOnlyAccess )( 
            IMgaObject * This,
            /* [retval][out] */ VARIANT_BOOL *pReadOnly);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetGuid )( 
            IMgaObject * This,
            /* [out][in] */ long *l1,
            /* [out][in] */ long *l2,
            /* [out][in] */ long *l3,
            /* [out][in] */ long *l4);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *PutGuid )( 
            IMgaObject * This,
            /* [in] */ long l1,
            /* [in] */ long l2,
            /* [in] */ long l3,
            /* [in] */ long l4);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetGuidDisp )( 
            IMgaObject * This,
            /* [retval][out] */ BSTR *guid_str);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *PutGuidDisp )( 
            IMgaObject * This,
            /* [in] */ BSTR guid_str);
        
        END_INTERFACE
    } IMgaObjectVtbl;

    interface IMgaObject
    {
        CONST_VTBL struct IMgaObjectVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IMgaObject_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IMgaObject_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IMgaObject_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IMgaObject_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IMgaObject_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IMgaObject_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IMgaObject_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IMgaObject_get_Status(This,p)	\
    ( (This)->lpVtbl -> get_Status(This,p) ) 

#define IMgaObject_get_IsWritable(This,p)	\
    ( (This)->lpVtbl -> get_IsWritable(This,p) ) 

#define IMgaObject_get_ID(This,pVal)	\
    ( (This)->lpVtbl -> get_ID(This,pVal) ) 

#define IMgaObject_get_Name(This,pVal)	\
    ( (This)->lpVtbl -> get_Name(This,pVal) ) 

#define IMgaObject_put_Name(This,newVal)	\
    ( (This)->lpVtbl -> put_Name(This,newVal) ) 

#define IMgaObject_get_AbsPath(This,pVal)	\
    ( (This)->lpVtbl -> get_AbsPath(This,pVal) ) 

#define IMgaObject_get_MetaBase(This,pVal)	\
    ( (This)->lpVtbl -> get_MetaBase(This,pVal) ) 

#define IMgaObject_get_ObjType(This,pVal)	\
    ( (This)->lpVtbl -> get_ObjType(This,pVal) ) 

#define IMgaObject_get_Project(This,pVal)	\
    ( (This)->lpVtbl -> get_Project(This,pVal) ) 

#define IMgaObject_get_Territory(This,pVal)	\
    ( (This)->lpVtbl -> get_Territory(This,pVal) ) 

#define IMgaObject_get_IsEqual(This,o,pVal)	\
    ( (This)->lpVtbl -> get_IsEqual(This,o,pVal) ) 

#define IMgaObject_GetIsEqualDisp(This,o,pVal)	\
    ( (This)->lpVtbl -> GetIsEqualDisp(This,o,pVal) ) 

#define IMgaObject_GetParent(This,pVal,objtype)	\
    ( (This)->lpVtbl -> GetParent(This,pVal,objtype) ) 

#define IMgaObject_CheckProject(This,project)	\
    ( (This)->lpVtbl -> CheckProject(This,project) ) 

#define IMgaObject_DestroyObject(This)	\
    ( (This)->lpVtbl -> DestroyObject(This) ) 

#define IMgaObject_Open(This,mode)	\
    ( (This)->lpVtbl -> Open(This,mode) ) 

#define IMgaObject_Close(This)	\
    ( (This)->lpVtbl -> Close(This) ) 

#define IMgaObject_Associate(This,userdata)	\
    ( (This)->lpVtbl -> Associate(This,userdata) ) 

#define IMgaObject_get_CurrentAssociation(This,userdata)	\
    ( (This)->lpVtbl -> get_CurrentAssociation(This,userdata) ) 

#define IMgaObject_SendEvent(This,mask)	\
    ( (This)->lpVtbl -> SendEvent(This,mask) ) 

#define IMgaObject_get_RelID(This,pVal)	\
    ( (This)->lpVtbl -> get_RelID(This,pVal) ) 

#define IMgaObject_put_RelID(This,newVal)	\
    ( (This)->lpVtbl -> put_RelID(This,newVal) ) 

#define IMgaObject_get_IsLibObject(This,pVal)	\
    ( (This)->lpVtbl -> get_IsLibObject(This,pVal) ) 

#define IMgaObject_Check(This)	\
    ( (This)->lpVtbl -> Check(This) ) 

#define IMgaObject_CheckTree(This)	\
    ( (This)->lpVtbl -> CheckTree(This) ) 

#define IMgaObject_put_Exempt(This,newVal)	\
    ( (This)->lpVtbl -> put_Exempt(This,newVal) ) 

#define IMgaObject_get_Exempt(This,pVal)	\
    ( (This)->lpVtbl -> get_Exempt(This,pVal) ) 

#define IMgaObject_get_ChildObjects(This,pVal)	\
    ( (This)->lpVtbl -> get_ChildObjects(This,pVal) ) 

#define IMgaObject_get_ChildObjectByRelID(This,relid,pVal)	\
    ( (This)->lpVtbl -> get_ChildObjectByRelID(This,relid,pVal) ) 

#define IMgaObject_GetChildObjectByRelIDDisp(This,relid,pVal)	\
    ( (This)->lpVtbl -> GetChildObjectByRelIDDisp(This,relid,pVal) ) 

#define IMgaObject_get_ObjectByPath(This,path,pVal)	\
    ( (This)->lpVtbl -> get_ObjectByPath(This,path,pVal) ) 

#define IMgaObject_GetObjectByPathDisp(This,path,pVal)	\
    ( (This)->lpVtbl -> GetObjectByPathDisp(This,path,pVal) ) 

#define IMgaObject_get_NthObjectByPath(This,n_th,path,pVal)	\
    ( (This)->lpVtbl -> get_NthObjectByPath(This,n_th,path,pVal) ) 

#define IMgaObject_GetNthObjectByPathDisp(This,n_th,path,pVal)	\
    ( (This)->lpVtbl -> GetNthObjectByPathDisp(This,n_th,path,pVal) ) 

#define IMgaObject_PutReadOnlyAccessWithPropagate(This,pReadOnly)	\
    ( (This)->lpVtbl -> PutReadOnlyAccessWithPropagate(This,pReadOnly) ) 

#define IMgaObject_PutReadOnlyAccess(This,pReadOnly)	\
    ( (This)->lpVtbl -> PutReadOnlyAccess(This,pReadOnly) ) 

#define IMgaObject_HasReadOnlyAccess(This,pReadOnly)	\
    ( (This)->lpVtbl -> HasReadOnlyAccess(This,pReadOnly) ) 

#define IMgaObject_GetGuid(This,l1,l2,l3,l4)	\
    ( (This)->lpVtbl -> GetGuid(This,l1,l2,l3,l4) ) 

#define IMgaObject_PutGuid(This,l1,l2,l3,l4)	\
    ( (This)->lpVtbl -> PutGuid(This,l1,l2,l3,l4) ) 

#define IMgaObject_GetGuidDisp(This,guid_str)	\
    ( (This)->lpVtbl -> GetGuidDisp(This,guid_str) ) 

#define IMgaObject_PutGuidDisp(This,guid_str)	\
    ( (This)->lpVtbl -> PutGuidDisp(This,guid_str) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IMgaObject_INTERFACE_DEFINED__ */


#ifndef __IMgaFCO_INTERFACE_DEFINED__
#define __IMgaFCO_INTERFACE_DEFINED__

/* interface IMgaFCO */
/* [unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_IMgaFCO;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("270B4F98-B17C-11D3-9AD1-00AA00B6FE26")
    IMgaFCO : public IMgaObject
    {
    public:
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Meta( 
            /* [retval][out] */ IMgaMetaFCO **pVal) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_MetaRole( 
            /* [retval][out] */ IMgaMetaRole **pVal) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_ParentModel( 
            /* [retval][out] */ IMgaModel **pVal) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_ParentFolder( 
            /* [retval][out] */ IMgaFolder **pVal) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Parts( 
            /* [retval][out] */ IMgaParts **pVal) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Part( 
            /* [in] */ IMgaMetaAspect *asp,
            /* [retval][out] */ IMgaPart **pVal) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetPartDisp( 
            /* [in] */ IMgaMetaAspect *asp,
            /* [retval][out] */ IMgaPart **pVal) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_PartByMetaPart( 
            /* [in] */ IMgaMetaPart *part,
            /* [retval][out] */ IMgaPart **pVal) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetPartByMetaPartDisp( 
            /* [in] */ IMgaMetaPart *part,
            /* [retval][out] */ IMgaPart **pVal) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Attributes( 
            /* [retval][out] */ IMgaAttributes **pVal) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Attribute( 
            /* [in] */ IMgaMetaAttribute *meta,
            /* [retval][out] */ IMgaAttribute **pVal) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetAttributeDisp( 
            /* [in] */ IMgaMetaAttribute *meta,
            /* [retval][out] */ IMgaAttribute **pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_AttributeByName( 
            /* [in] */ BSTR name,
            /* [retval][out] */ VARIANT *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_AttributeByName( 
            /* [in] */ BSTR name,
            /* [in] */ VARIANT newval) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetAttributeByNameDisp( 
            /* [in] */ BSTR name,
            /* [retval][out] */ VARIANT *pVal) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE SetAttributeByNameDisp( 
            /* [in] */ BSTR name,
            /* [in] */ VARIANT newval) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_StrAttrByName( 
            /* [in] */ BSTR name,
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_StrAttrByName( 
            /* [in] */ BSTR name,
            /* [in] */ BSTR newval) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetStrAttrByNameDisp( 
            /* [in] */ BSTR name,
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE SetStrAttrByNameDisp( 
            /* [in] */ BSTR name,
            /* [in] */ BSTR newval) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_IntAttrByName( 
            /* [in] */ BSTR name,
            /* [retval][out] */ long *pVal) = 0;
        
        virtual /* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_IntAttrByName( 
            /* [in] */ BSTR name,
            /* [in] */ long newval) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetIntAttrByNameDisp( 
            /* [in] */ BSTR name,
            /* [retval][out] */ long *pVal) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE SetIntAttrByNameDisp( 
            /* [in] */ BSTR name,
            /* [in] */ long newval) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_FloatAttrByName( 
            /* [in] */ BSTR name,
            /* [retval][out] */ double *pVal) = 0;
        
        virtual /* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_FloatAttrByName( 
            /* [in] */ BSTR name,
            /* [in] */ double newval) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetFloatAttrByNameDisp( 
            /* [in] */ BSTR name,
            /* [retval][out] */ double *pVal) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE SetFloatAttrByNameDisp( 
            /* [in] */ BSTR name,
            /* [in] */ double newval) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_BoolAttrByName( 
            /* [in] */ BSTR name,
            /* [retval][out] */ VARIANT_BOOL *pVal) = 0;
        
        virtual /* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_BoolAttrByName( 
            /* [in] */ BSTR name,
            /* [in] */ VARIANT_BOOL newval) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetBoolAttrByNameDisp( 
            /* [in] */ BSTR name,
            /* [retval][out] */ VARIANT_BOOL *pVal) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE SetBoolAttrByNameDisp( 
            /* [in] */ BSTR name,
            /* [in] */ VARIANT_BOOL newval) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_RefAttrByName( 
            /* [in] */ BSTR name,
            /* [retval][out] */ IMgaFCO **pVal) = 0;
        
        virtual /* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_RefAttrByName( 
            /* [in] */ BSTR name,
            /* [in] */ IMgaFCO *newval) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetRefAttrByNameDisp( 
            /* [in] */ BSTR name,
            /* [retval][out] */ IMgaFCO **pVal) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE SetRefAttrByNameDisp( 
            /* [in] */ BSTR name,
            /* [in] */ IMgaFCO *newval) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE ClearAttrByName( 
            /* [in] */ BSTR name) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_RegistryNode( 
            /* [in] */ BSTR path,
            /* [retval][out] */ IMgaRegNode **pVal) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetRegistryNodeDisp( 
            /* [in] */ BSTR path,
            /* [retval][out] */ IMgaRegNode **pVal) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_Registry( 
            /* [defaultvalue][in] */ VARIANT_BOOL virtuals,
            /* [retval][out] */ IMgaRegNodes **pVal) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetRegistryDisp( 
            /* [defaultvalue][in] */ VARIANT_BOOL virtuals,
            /* [retval][out] */ IMgaRegNodes **pVal) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_RegistryValue( 
            /* [in] */ BSTR path,
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_RegistryValue( 
            /* [in] */ BSTR path,
            /* [in] */ BSTR newval) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetRegistryValueDisp( 
            /* [in] */ BSTR path,
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE SetRegistryValueDisp( 
            /* [in] */ BSTR path,
            /* [in] */ BSTR newval) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_Constraints( 
            /* [in] */ VARIANT_BOOL includemeta,
            /* [retval][out] */ IMgaConstraints **pVal) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetConstraintsDisp( 
            /* [in] */ VARIANT_BOOL includemeta,
            /* [retval][out] */ IMgaConstraints **pVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE AddConstraint( 
            /* [in] */ IMgaConstraint *constraint) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE DefineConstraint( 
            /* [in] */ BSTR name,
            /* [in] */ long mask,
            /* [in] */ BSTR expr,
            /* [out] */ IMgaConstraint **nconstraint) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_DerivedFrom( 
            /* [retval][out] */ IMgaFCO **pVal) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_DerivedObjects( 
            /* [retval][out] */ IMgaFCOs **pVal) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Type( 
            /* [retval][out] */ IMgaFCO **pVal) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_BaseType( 
            /* [retval][out] */ IMgaFCO **pVal) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_ArcheType( 
            /* [retval][out] */ IMgaFCO **pVal) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_IsInstance( 
            /* [retval][out] */ VARIANT_BOOL *pVal) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_IsPrimaryDerived( 
            /* [retval][out] */ VARIANT_BOOL *pVal) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE AttachToArcheType( 
            /* [in] */ IMgaFCO *newtype,
            /* [in] */ VARIANT_BOOL instance) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE DetachFromArcheType( void) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetAbsMetaPath( 
            /* [out][in] */ BSTR *abspath) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetRelMetaPath( 
            /* [in] */ IMgaFCO *begfco,
            /* [out][in] */ BSTR *relpath,
            /* [defaultvalue][in] */ IMgaFCOs *refs = 0) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_PartOfConns( 
            /* [retval][out] */ IMgaConnPoints **pVal) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_MemberOfSets( 
            /* [retval][out] */ IMgaFCOs **pVal) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_ReferencedBy( 
            /* [retval][out] */ IMgaFCOs **pVal) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE CreateCollection( 
            /* [out][in] */ IMgaFCOs **pVal) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_RootFCO( 
            /* [retval][out] */ IMgaFCO **pVal) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IMgaFCOVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IMgaFCO * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IMgaFCO * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IMgaFCO * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IMgaFCO * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IMgaFCO * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IMgaFCO * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IMgaFCO * This,
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
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Status )( 
            IMgaFCO * This,
            /* [retval][out] */ long *p);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_IsWritable )( 
            IMgaFCO * This,
            /* [retval][out] */ VARIANT_BOOL *p);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ID )( 
            IMgaFCO * This,
            /* [retval][out] */ ID_type *pVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Name )( 
            IMgaFCO * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Name )( 
            IMgaFCO * This,
            /* [in] */ BSTR newVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_AbsPath )( 
            IMgaFCO * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_MetaBase )( 
            IMgaFCO * This,
            /* [retval][out] */ IMgaMetaBase **pVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ObjType )( 
            IMgaFCO * This,
            /* [retval][out] */ objtype_enum *pVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Project )( 
            IMgaFCO * This,
            /* [retval][out] */ IMgaProject **pVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Territory )( 
            IMgaFCO * This,
            /* [retval][out] */ IMgaTerritory **pVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_IsEqual )( 
            IMgaFCO * This,
            /* [in] */ IMgaObject *o,
            /* [retval][out] */ VARIANT_BOOL *pVal);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetIsEqualDisp )( 
            IMgaFCO * This,
            /* [in] */ IMgaObject *o,
            /* [retval][out] */ VARIANT_BOOL *pVal);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetParent )( 
            IMgaFCO * This,
            /* [out] */ IMgaObject **pVal,
            /* [defaultvalue][out] */ objtype_enum *objtype);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *CheckProject )( 
            IMgaFCO * This,
            /* [in] */ IMgaProject *project);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *DestroyObject )( 
            IMgaFCO * This);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Open )( 
            IMgaFCO * This,
            /* [defaultvalue][in] */ openmode mode);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Close )( 
            IMgaFCO * This);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Associate )( 
            IMgaFCO * This,
            /* [in] */ VARIANT userdata);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentAssociation )( 
            IMgaFCO * This,
            /* [retval][out] */ VARIANT *userdata);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *SendEvent )( 
            IMgaFCO * This,
            /* [in] */ long mask);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_RelID )( 
            IMgaFCO * This,
            /* [retval][out] */ long *pVal);
        
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_RelID )( 
            IMgaFCO * This,
            /* [in] */ long newVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_IsLibObject )( 
            IMgaFCO * This,
            /* [retval][out] */ VARIANT_BOOL *pVal);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Check )( 
            IMgaFCO * This);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *CheckTree )( 
            IMgaFCO * This);
        
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Exempt )( 
            IMgaFCO * This,
            /* [in] */ VARIANT_BOOL newVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Exempt )( 
            IMgaFCO * This,
            /* [retval][out] */ VARIANT_BOOL *pVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ChildObjects )( 
            IMgaFCO * This,
            /* [retval][out] */ IMgaObjects **pVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ChildObjectByRelID )( 
            IMgaFCO * This,
            /* [in] */ long relid,
            /* [retval][out] */ IMgaObject **pVal);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetChildObjectByRelIDDisp )( 
            IMgaFCO * This,
            /* [in] */ long relid,
            /* [retval][out] */ IMgaObject **pVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ObjectByPath )( 
            IMgaFCO * This,
            /* [in] */ BSTR path,
            /* [retval][out] */ IMgaObject **pVal);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetObjectByPathDisp )( 
            IMgaFCO * This,
            /* [in] */ BSTR path,
            /* [retval][out] */ IMgaObject **pVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_NthObjectByPath )( 
            IMgaFCO * This,
            /* [in] */ long n_th,
            /* [in] */ BSTR path,
            /* [retval][out] */ IMgaObject **pVal);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetNthObjectByPathDisp )( 
            IMgaFCO * This,
            /* [in] */ long n_th,
            /* [in] */ BSTR path,
            /* [retval][out] */ IMgaObject **pVal);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *PutReadOnlyAccessWithPropagate )( 
            IMgaFCO * This,
            /* [in] */ VARIANT_BOOL pReadOnly);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *PutReadOnlyAccess )( 
            IMgaFCO * This,
            /* [in] */ VARIANT_BOOL pReadOnly);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *HasReadOnlyAccess )( 
            IMgaFCO * This,
            /* [retval][out] */ VARIANT_BOOL *pReadOnly);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetGuid )( 
            IMgaFCO * This,
            /* [out][in] */ long *l1,
            /* [out][in] */ long *l2,
            /* [out][in] */ long *l3,
            /* [out][in] */ long *l4);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *PutGuid )( 
            IMgaFCO * This,
            /* [in] */ long l1,
            /* [in] */ long l2,
            /* [in] */ long l3,
            /* [in] */ long l4);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetGuidDisp )( 
            IMgaFCO * This,
            /* [retval][out] */ BSTR *guid_str);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *PutGuidDisp )( 
            IMgaFCO * This,
            /* [in] */ BSTR guid_str);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Meta )( 
            IMgaFCO * This,
            /* [retval][out] */ IMgaMetaFCO **pVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_MetaRole )( 
            IMgaFCO * This,
            /* [retval][out] */ IMgaMetaRole **pVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ParentModel )( 
            IMgaFCO * This,
            /* [retval][out] */ IMgaModel **pVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ParentFolder )( 
            IMgaFCO * This,
            /* [retval][out] */ IMgaFolder **pVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Parts )( 
            IMgaFCO * This,
            /* [retval][out] */ IMgaParts **pVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Part )( 
            IMgaFCO * This,
            /* [in] */ IMgaMetaAspect *asp,
            /* [retval][out] */ IMgaPart **pVal);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetPartDisp )( 
            IMgaFCO * This,
            /* [in] */ IMgaMetaAspect *asp,
            /* [retval][out] */ IMgaPart **pVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_PartByMetaPart )( 
            IMgaFCO * This,
            /* [in] */ IMgaMetaPart *part,
            /* [retval][out] */ IMgaPart **pVal);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetPartByMetaPartDisp )( 
            IMgaFCO * This,
            /* [in] */ IMgaMetaPart *part,
            /* [retval][out] */ IMgaPart **pVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Attributes )( 
            IMgaFCO * This,
            /* [retval][out] */ IMgaAttributes **pVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Attribute )( 
            IMgaFCO * This,
            /* [in] */ IMgaMetaAttribute *meta,
            /* [retval][out] */ IMgaAttribute **pVal);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetAttributeDisp )( 
            IMgaFCO * This,
            /* [in] */ IMgaMetaAttribute *meta,
            /* [retval][out] */ IMgaAttribute **pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_AttributeByName )( 
            IMgaFCO * This,
            /* [in] */ BSTR name,
            /* [retval][out] */ VARIANT *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_AttributeByName )( 
            IMgaFCO * This,
            /* [in] */ BSTR name,
            /* [in] */ VARIANT newval);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetAttributeByNameDisp )( 
            IMgaFCO * This,
            /* [in] */ BSTR name,
            /* [retval][out] */ VARIANT *pVal);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *SetAttributeByNameDisp )( 
            IMgaFCO * This,
            /* [in] */ BSTR name,
            /* [in] */ VARIANT newval);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_StrAttrByName )( 
            IMgaFCO * This,
            /* [in] */ BSTR name,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_StrAttrByName )( 
            IMgaFCO * This,
            /* [in] */ BSTR name,
            /* [in] */ BSTR newval);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetStrAttrByNameDisp )( 
            IMgaFCO * This,
            /* [in] */ BSTR name,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *SetStrAttrByNameDisp )( 
            IMgaFCO * This,
            /* [in] */ BSTR name,
            /* [in] */ BSTR newval);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_IntAttrByName )( 
            IMgaFCO * This,
            /* [in] */ BSTR name,
            /* [retval][out] */ long *pVal);
        
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_IntAttrByName )( 
            IMgaFCO * This,
            /* [in] */ BSTR name,
            /* [in] */ long newval);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetIntAttrByNameDisp )( 
            IMgaFCO * This,
            /* [in] */ BSTR name,
            /* [retval][out] */ long *pVal);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *SetIntAttrByNameDisp )( 
            IMgaFCO * This,
            /* [in] */ BSTR name,
            /* [in] */ long newval);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_FloatAttrByName )( 
            IMgaFCO * This,
            /* [in] */ BSTR name,
            /* [retval][out] */ double *pVal);
        
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_FloatAttrByName )( 
            IMgaFCO * This,
            /* [in] */ BSTR name,
            /* [in] */ double newval);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetFloatAttrByNameDisp )( 
            IMgaFCO * This,
            /* [in] */ BSTR name,
            /* [retval][out] */ double *pVal);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *SetFloatAttrByNameDisp )( 
            IMgaFCO * This,
            /* [in] */ BSTR name,
            /* [in] */ double newval);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_BoolAttrByName )( 
            IMgaFCO * This,
            /* [in] */ BSTR name,
            /* [retval][out] */ VARIANT_BOOL *pVal);
        
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_BoolAttrByName )( 
            IMgaFCO * This,
            /* [in] */ BSTR name,
            /* [in] */ VARIANT_BOOL newval);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetBoolAttrByNameDisp )( 
            IMgaFCO * This,
            /* [in] */ BSTR name,
            /* [retval][out] */ VARIANT_BOOL *pVal);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *SetBoolAttrByNameDisp )( 
            IMgaFCO * This,
            /* [in] */ BSTR name,
            /* [in] */ VARIANT_BOOL newval);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_RefAttrByName )( 
            IMgaFCO * This,
            /* [in] */ BSTR name,
            /* [retval][out] */ IMgaFCO **pVal);
        
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_RefAttrByName )( 
            IMgaFCO * This,
            /* [in] */ BSTR name,
            /* [in] */ IMgaFCO *newval);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetRefAttrByNameDisp )( 
            IMgaFCO * This,
            /* [in] */ BSTR name,
            /* [retval][out] */ IMgaFCO **pVal);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *SetRefAttrByNameDisp )( 
            IMgaFCO * This,
            /* [in] */ BSTR name,
            /* [in] */ IMgaFCO *newval);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *ClearAttrByName )( 
            IMgaFCO * This,
            /* [in] */ BSTR name);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_RegistryNode )( 
            IMgaFCO * This,
            /* [in] */ BSTR path,
            /* [retval][out] */ IMgaRegNode **pVal);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetRegistryNodeDisp )( 
            IMgaFCO * This,
            /* [in] */ BSTR path,
            /* [retval][out] */ IMgaRegNode **pVal);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Registry )( 
            IMgaFCO * This,
            /* [defaultvalue][in] */ VARIANT_BOOL virtuals,
            /* [retval][out] */ IMgaRegNodes **pVal);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetRegistryDisp )( 
            IMgaFCO * This,
            /* [defaultvalue][in] */ VARIANT_BOOL virtuals,
            /* [retval][out] */ IMgaRegNodes **pVal);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_RegistryValue )( 
            IMgaFCO * This,
            /* [in] */ BSTR path,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_RegistryValue )( 
            IMgaFCO * This,
            /* [in] */ BSTR path,
            /* [in] */ BSTR newval);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetRegistryValueDisp )( 
            IMgaFCO * This,
            /* [in] */ BSTR path,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *SetRegistryValueDisp )( 
            IMgaFCO * This,
            /* [in] */ BSTR path,
            /* [in] */ BSTR newval);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Constraints )( 
            IMgaFCO * This,
            /* [in] */ VARIANT_BOOL includemeta,
            /* [retval][out] */ IMgaConstraints **pVal);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetConstraintsDisp )( 
            IMgaFCO * This,
            /* [in] */ VARIANT_BOOL includemeta,
            /* [retval][out] */ IMgaConstraints **pVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *AddConstraint )( 
            IMgaFCO * This,
            /* [in] */ IMgaConstraint *constraint);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *DefineConstraint )( 
            IMgaFCO * This,
            /* [in] */ BSTR name,
            /* [in] */ long mask,
            /* [in] */ BSTR expr,
            /* [out] */ IMgaConstraint **nconstraint);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_DerivedFrom )( 
            IMgaFCO * This,
            /* [retval][out] */ IMgaFCO **pVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_DerivedObjects )( 
            IMgaFCO * This,
            /* [retval][out] */ IMgaFCOs **pVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Type )( 
            IMgaFCO * This,
            /* [retval][out] */ IMgaFCO **pVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_BaseType )( 
            IMgaFCO * This,
            /* [retval][out] */ IMgaFCO **pVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ArcheType )( 
            IMgaFCO * This,
            /* [retval][out] */ IMgaFCO **pVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_IsInstance )( 
            IMgaFCO * This,
            /* [retval][out] */ VARIANT_BOOL *pVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_IsPrimaryDerived )( 
            IMgaFCO * This,
            /* [retval][out] */ VARIANT_BOOL *pVal);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *AttachToArcheType )( 
            IMgaFCO * This,
            /* [in] */ IMgaFCO *newtype,
            /* [in] */ VARIANT_BOOL instance);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *DetachFromArcheType )( 
            IMgaFCO * This);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetAbsMetaPath )( 
            IMgaFCO * This,
            /* [out][in] */ BSTR *abspath);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetRelMetaPath )( 
            IMgaFCO * This,
            /* [in] */ IMgaFCO *begfco,
            /* [out][in] */ BSTR *relpath,
            /* [defaultvalue][in] */ IMgaFCOs *refs);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_PartOfConns )( 
            IMgaFCO * This,
            /* [retval][out] */ IMgaConnPoints **pVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_MemberOfSets )( 
            IMgaFCO * This,
            /* [retval][out] */ IMgaFCOs **pVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ReferencedBy )( 
            IMgaFCO * This,
            /* [retval][out] */ IMgaFCOs **pVal);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *CreateCollection )( 
            IMgaFCO * This,
            /* [out][in] */ IMgaFCOs **pVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_RootFCO )( 
            IMgaFCO * This,
            /* [retval][out] */ IMgaFCO **pVal);
        
        END_INTERFACE
    } IMgaFCOVtbl;

    interface IMgaFCO
    {
        CONST_VTBL struct IMgaFCOVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IMgaFCO_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IMgaFCO_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IMgaFCO_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IMgaFCO_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IMgaFCO_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IMgaFCO_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IMgaFCO_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IMgaFCO_get_Status(This,p)	\
    ( (This)->lpVtbl -> get_Status(This,p) ) 

#define IMgaFCO_get_IsWritable(This,p)	\
    ( (This)->lpVtbl -> get_IsWritable(This,p) ) 

#define IMgaFCO_get_ID(This,pVal)	\
    ( (This)->lpVtbl -> get_ID(This,pVal) ) 

#define IMgaFCO_get_Name(This,pVal)	\
    ( (This)->lpVtbl -> get_Name(This,pVal) ) 

#define IMgaFCO_put_Name(This,newVal)	\
    ( (This)->lpVtbl -> put_Name(This,newVal) ) 

#define IMgaFCO_get_AbsPath(This,pVal)	\
    ( (This)->lpVtbl -> get_AbsPath(This,pVal) ) 

#define IMgaFCO_get_MetaBase(This,pVal)	\
    ( (This)->lpVtbl -> get_MetaBase(This,pVal) ) 

#define IMgaFCO_get_ObjType(This,pVal)	\
    ( (This)->lpVtbl -> get_ObjType(This,pVal) ) 

#define IMgaFCO_get_Project(This,pVal)	\
    ( (This)->lpVtbl -> get_Project(This,pVal) ) 

#define IMgaFCO_get_Territory(This,pVal)	\
    ( (This)->lpVtbl -> get_Territory(This,pVal) ) 

#define IMgaFCO_get_IsEqual(This,o,pVal)	\
    ( (This)->lpVtbl -> get_IsEqual(This,o,pVal) ) 

#define IMgaFCO_GetIsEqualDisp(This,o,pVal)	\
    ( (This)->lpVtbl -> GetIsEqualDisp(This,o,pVal) ) 

#define IMgaFCO_GetParent(This,pVal,objtype)	\
    ( (This)->lpVtbl -> GetParent(This,pVal,objtype) ) 

#define IMgaFCO_CheckProject(This,project)	\
    ( (This)->lpVtbl -> CheckProject(This,project) ) 

#define IMgaFCO_DestroyObject(This)	\
    ( (This)->lpVtbl -> DestroyObject(This) ) 

#define IMgaFCO_Open(This,mode)	\
    ( (This)->lpVtbl -> Open(This,mode) ) 

#define IMgaFCO_Close(This)	\
    ( (This)->lpVtbl -> Close(This) ) 

#define IMgaFCO_Associate(This,userdata)	\
    ( (This)->lpVtbl -> Associate(This,userdata) ) 

#define IMgaFCO_get_CurrentAssociation(This,userdata)	\
    ( (This)->lpVtbl -> get_CurrentAssociation(This,userdata) ) 

#define IMgaFCO_SendEvent(This,mask)	\
    ( (This)->lpVtbl -> SendEvent(This,mask) ) 

#define IMgaFCO_get_RelID(This,pVal)	\
    ( (This)->lpVtbl -> get_RelID(This,pVal) ) 

#define IMgaFCO_put_RelID(This,newVal)	\
    ( (This)->lpVtbl -> put_RelID(This,newVal) ) 

#define IMgaFCO_get_IsLibObject(This,pVal)	\
    ( (This)->lpVtbl -> get_IsLibObject(This,pVal) ) 

#define IMgaFCO_Check(This)	\
    ( (This)->lpVtbl -> Check(This) ) 

#define IMgaFCO_CheckTree(This)	\
    ( (This)->lpVtbl -> CheckTree(This) ) 

#define IMgaFCO_put_Exempt(This,newVal)	\
    ( (This)->lpVtbl -> put_Exempt(This,newVal) ) 

#define IMgaFCO_get_Exempt(This,pVal)	\
    ( (This)->lpVtbl -> get_Exempt(This,pVal) ) 

#define IMgaFCO_get_ChildObjects(This,pVal)	\
    ( (This)->lpVtbl -> get_ChildObjects(This,pVal) ) 

#define IMgaFCO_get_ChildObjectByRelID(This,relid,pVal)	\
    ( (This)->lpVtbl -> get_ChildObjectByRelID(This,relid,pVal) ) 

#define IMgaFCO_GetChildObjectByRelIDDisp(This,relid,pVal)	\
    ( (This)->lpVtbl -> GetChildObjectByRelIDDisp(This,relid,pVal) ) 

#define IMgaFCO_get_ObjectByPath(This,path,pVal)	\
    ( (This)->lpVtbl -> get_ObjectByPath(This,path,pVal) ) 

#define IMgaFCO_GetObjectByPathDisp(This,path,pVal)	\
    ( (This)->lpVtbl -> GetObjectByPathDisp(This,path,pVal) ) 

#define IMgaFCO_get_NthObjectByPath(This,n_th,path,pVal)	\
    ( (This)->lpVtbl -> get_NthObjectByPath(This,n_th,path,pVal) ) 

#define IMgaFCO_GetNthObjectByPathDisp(This,n_th,path,pVal)	\
    ( (This)->lpVtbl -> GetNthObjectByPathDisp(This,n_th,path,pVal) ) 

#define IMgaFCO_PutReadOnlyAccessWithPropagate(This,pReadOnly)	\
    ( (This)->lpVtbl -> PutReadOnlyAccessWithPropagate(This,pReadOnly) ) 

#define IMgaFCO_PutReadOnlyAccess(This,pReadOnly)	\
    ( (This)->lpVtbl -> PutReadOnlyAccess(This,pReadOnly) ) 

#define IMgaFCO_HasReadOnlyAccess(This,pReadOnly)	\
    ( (This)->lpVtbl -> HasReadOnlyAccess(This,pReadOnly) ) 

#define IMgaFCO_GetGuid(This,l1,l2,l3,l4)	\
    ( (This)->lpVtbl -> GetGuid(This,l1,l2,l3,l4) ) 

#define IMgaFCO_PutGuid(This,l1,l2,l3,l4)	\
    ( (This)->lpVtbl -> PutGuid(This,l1,l2,l3,l4) ) 

#define IMgaFCO_GetGuidDisp(This,guid_str)	\
    ( (This)->lpVtbl -> GetGuidDisp(This,guid_str) ) 

#define IMgaFCO_PutGuidDisp(This,guid_str)	\
    ( (This)->lpVtbl -> PutGuidDisp(This,guid_str) ) 


#define IMgaFCO_get_Meta(This,pVal)	\
    ( (This)->lpVtbl -> get_Meta(This,pVal) ) 

#define IMgaFCO_get_MetaRole(This,pVal)	\
    ( (This)->lpVtbl -> get_MetaRole(This,pVal) ) 

#define IMgaFCO_get_ParentModel(This,pVal)	\
    ( (This)->lpVtbl -> get_ParentModel(This,pVal) ) 

#define IMgaFCO_get_ParentFolder(This,pVal)	\
    ( (This)->lpVtbl -> get_ParentFolder(This,pVal) ) 

#define IMgaFCO_get_Parts(This,pVal)	\
    ( (This)->lpVtbl -> get_Parts(This,pVal) ) 

#define IMgaFCO_get_Part(This,asp,pVal)	\
    ( (This)->lpVtbl -> get_Part(This,asp,pVal) ) 

#define IMgaFCO_GetPartDisp(This,asp,pVal)	\
    ( (This)->lpVtbl -> GetPartDisp(This,asp,pVal) ) 

#define IMgaFCO_get_PartByMetaPart(This,part,pVal)	\
    ( (This)->lpVtbl -> get_PartByMetaPart(This,part,pVal) ) 

#define IMgaFCO_GetPartByMetaPartDisp(This,part,pVal)	\
    ( (This)->lpVtbl -> GetPartByMetaPartDisp(This,part,pVal) ) 

#define IMgaFCO_get_Attributes(This,pVal)	\
    ( (This)->lpVtbl -> get_Attributes(This,pVal) ) 

#define IMgaFCO_get_Attribute(This,meta,pVal)	\
    ( (This)->lpVtbl -> get_Attribute(This,meta,pVal) ) 

#define IMgaFCO_GetAttributeDisp(This,meta,pVal)	\
    ( (This)->lpVtbl -> GetAttributeDisp(This,meta,pVal) ) 

#define IMgaFCO_get_AttributeByName(This,name,pVal)	\
    ( (This)->lpVtbl -> get_AttributeByName(This,name,pVal) ) 

#define IMgaFCO_put_AttributeByName(This,name,newval)	\
    ( (This)->lpVtbl -> put_AttributeByName(This,name,newval) ) 

#define IMgaFCO_GetAttributeByNameDisp(This,name,pVal)	\
    ( (This)->lpVtbl -> GetAttributeByNameDisp(This,name,pVal) ) 

#define IMgaFCO_SetAttributeByNameDisp(This,name,newval)	\
    ( (This)->lpVtbl -> SetAttributeByNameDisp(This,name,newval) ) 

#define IMgaFCO_get_StrAttrByName(This,name,pVal)	\
    ( (This)->lpVtbl -> get_StrAttrByName(This,name,pVal) ) 

#define IMgaFCO_put_StrAttrByName(This,name,newval)	\
    ( (This)->lpVtbl -> put_StrAttrByName(This,name,newval) ) 

#define IMgaFCO_GetStrAttrByNameDisp(This,name,pVal)	\
    ( (This)->lpVtbl -> GetStrAttrByNameDisp(This,name,pVal) ) 

#define IMgaFCO_SetStrAttrByNameDisp(This,name,newval)	\
    ( (This)->lpVtbl -> SetStrAttrByNameDisp(This,name,newval) ) 

#define IMgaFCO_get_IntAttrByName(This,name,pVal)	\
    ( (This)->lpVtbl -> get_IntAttrByName(This,name,pVal) ) 

#define IMgaFCO_put_IntAttrByName(This,name,newval)	\
    ( (This)->lpVtbl -> put_IntAttrByName(This,name,newval) ) 

#define IMgaFCO_GetIntAttrByNameDisp(This,name,pVal)	\
    ( (This)->lpVtbl -> GetIntAttrByNameDisp(This,name,pVal) ) 

#define IMgaFCO_SetIntAttrByNameDisp(This,name,newval)	\
    ( (This)->lpVtbl -> SetIntAttrByNameDisp(This,name,newval) ) 

#define IMgaFCO_get_FloatAttrByName(This,name,pVal)	\
    ( (This)->lpVtbl -> get_FloatAttrByName(This,name,pVal) ) 

#define IMgaFCO_put_FloatAttrByName(This,name,newval)	\
    ( (This)->lpVtbl -> put_FloatAttrByName(This,name,newval) ) 

#define IMgaFCO_GetFloatAttrByNameDisp(This,name,pVal)	\
    ( (This)->lpVtbl -> GetFloatAttrByNameDisp(This,name,pVal) ) 

#define IMgaFCO_SetFloatAttrByNameDisp(This,name,newval)	\
    ( (This)->lpVtbl -> SetFloatAttrByNameDisp(This,name,newval) ) 

#define IMgaFCO_get_BoolAttrByName(This,name,pVal)	\
    ( (This)->lpVtbl -> get_BoolAttrByName(This,name,pVal) ) 

#define IMgaFCO_put_BoolAttrByName(This,name,newval)	\
    ( (This)->lpVtbl -> put_BoolAttrByName(This,name,newval) ) 

#define IMgaFCO_GetBoolAttrByNameDisp(This,name,pVal)	\
    ( (This)->lpVtbl -> GetBoolAttrByNameDisp(This,name,pVal) ) 

#define IMgaFCO_SetBoolAttrByNameDisp(This,name,newval)	\
    ( (This)->lpVtbl -> SetBoolAttrByNameDisp(This,name,newval) ) 

#define IMgaFCO_get_RefAttrByName(This,name,pVal)	\
    ( (This)->lpVtbl -> get_RefAttrByName(This,name,pVal) ) 

#define IMgaFCO_put_RefAttrByName(This,name,newval)	\
    ( (This)->lpVtbl -> put_RefAttrByName(This,name,newval) ) 

#define IMgaFCO_GetRefAttrByNameDisp(This,name,pVal)	\
    ( (This)->lpVtbl -> GetRefAttrByNameDisp(This,name,pVal) ) 

#define IMgaFCO_SetRefAttrByNameDisp(This,name,newval)	\
    ( (This)->lpVtbl -> SetRefAttrByNameDisp(This,name,newval) ) 

#define IMgaFCO_ClearAttrByName(This,name)	\
    ( (This)->lpVtbl -> ClearAttrByName(This,name) ) 

#define IMgaFCO_get_RegistryNode(This,path,pVal)	\
    ( (This)->lpVtbl -> get_RegistryNode(This,path,pVal) ) 

#define IMgaFCO_GetRegistryNodeDisp(This,path,pVal)	\
    ( (This)->lpVtbl -> GetRegistryNodeDisp(This,path,pVal) ) 

#define IMgaFCO_get_Registry(This,virtuals,pVal)	\
    ( (This)->lpVtbl -> get_Registry(This,virtuals,pVal) ) 

#define IMgaFCO_GetRegistryDisp(This,virtuals,pVal)	\
    ( (This)->lpVtbl -> GetRegistryDisp(This,virtuals,pVal) ) 

#define IMgaFCO_get_RegistryValue(This,path,pVal)	\
    ( (This)->lpVtbl -> get_RegistryValue(This,path,pVal) ) 

#define IMgaFCO_put_RegistryValue(This,path,newval)	\
    ( (This)->lpVtbl -> put_RegistryValue(This,path,newval) ) 

#define IMgaFCO_GetRegistryValueDisp(This,path,pVal)	\
    ( (This)->lpVtbl -> GetRegistryValueDisp(This,path,pVal) ) 

#define IMgaFCO_SetRegistryValueDisp(This,path,newval)	\
    ( (This)->lpVtbl -> SetRegistryValueDisp(This,path,newval) ) 

#define IMgaFCO_get_Constraints(This,includemeta,pVal)	\
    ( (This)->lpVtbl -> get_Constraints(This,includemeta,pVal) ) 

#define IMgaFCO_GetConstraintsDisp(This,includemeta,pVal)	\
    ( (This)->lpVtbl -> GetConstraintsDisp(This,includemeta,pVal) ) 

#define IMgaFCO_AddConstraint(This,constraint)	\
    ( (This)->lpVtbl -> AddConstraint(This,constraint) ) 

#define IMgaFCO_DefineConstraint(This,name,mask,expr,nconstraint)	\
    ( (This)->lpVtbl -> DefineConstraint(This,name,mask,expr,nconstraint) ) 

#define IMgaFCO_get_DerivedFrom(This,pVal)	\
    ( (This)->lpVtbl -> get_DerivedFrom(This,pVal) ) 

#define IMgaFCO_get_DerivedObjects(This,pVal)	\
    ( (This)->lpVtbl -> get_DerivedObjects(This,pVal) ) 

#define IMgaFCO_get_Type(This,pVal)	\
    ( (This)->lpVtbl -> get_Type(This,pVal) ) 

#define IMgaFCO_get_BaseType(This,pVal)	\
    ( (This)->lpVtbl -> get_BaseType(This,pVal) ) 

#define IMgaFCO_get_ArcheType(This,pVal)	\
    ( (This)->lpVtbl -> get_ArcheType(This,pVal) ) 

#define IMgaFCO_get_IsInstance(This,pVal)	\
    ( (This)->lpVtbl -> get_IsInstance(This,pVal) ) 

#define IMgaFCO_get_IsPrimaryDerived(This,pVal)	\
    ( (This)->lpVtbl -> get_IsPrimaryDerived(This,pVal) ) 

#define IMgaFCO_AttachToArcheType(This,newtype,instance)	\
    ( (This)->lpVtbl -> AttachToArcheType(This,newtype,instance) ) 

#define IMgaFCO_DetachFromArcheType(This)	\
    ( (This)->lpVtbl -> DetachFromArcheType(This) ) 

#define IMgaFCO_GetAbsMetaPath(This,abspath)	\
    ( (This)->lpVtbl -> GetAbsMetaPath(This,abspath) ) 

#define IMgaFCO_GetRelMetaPath(This,begfco,relpath,refs)	\
    ( (This)->lpVtbl -> GetRelMetaPath(This,begfco,relpath,refs) ) 

#define IMgaFCO_get_PartOfConns(This,pVal)	\
    ( (This)->lpVtbl -> get_PartOfConns(This,pVal) ) 

#define IMgaFCO_get_MemberOfSets(This,pVal)	\
    ( (This)->lpVtbl -> get_MemberOfSets(This,pVal) ) 

#define IMgaFCO_get_ReferencedBy(This,pVal)	\
    ( (This)->lpVtbl -> get_ReferencedBy(This,pVal) ) 

#define IMgaFCO_CreateCollection(This,pVal)	\
    ( (This)->lpVtbl -> CreateCollection(This,pVal) ) 

#define IMgaFCO_get_RootFCO(This,pVal)	\
    ( (This)->lpVtbl -> get_RootFCO(This,pVal) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IMgaFCO_INTERFACE_DEFINED__ */


#ifndef __IMgaFolder_INTERFACE_DEFINED__
#define __IMgaFolder_INTERFACE_DEFINED__

/* interface IMgaFolder */
/* [unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_IMgaFolder;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("270B4F96-B17C-11D3-9AD1-00AA00B6FE26")
    IMgaFolder : public IMgaObject
    {
    public:
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_MetaFolder( 
            /* [retval][out] */ IMgaMetaFolder **pVal) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_ParentFolder( 
            /* [retval][out] */ IMgaFolder **pVal) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_ChildFolders( 
            /* [retval][out] */ IMgaFolders **pVal) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE CreateFolder( 
            /* [in] */ IMgaMetaFolder *meta,
            /* [retval][out] */ IMgaFolder **nf) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE CreateRootObject( 
            /* [in] */ IMgaMetaFCO *meta,
            /* [retval][out] */ IMgaFCO **nobj) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE DeriveRootObject( 
            /* [in] */ IMgaFCO *base,
            /* [in] */ VARIANT_BOOL instance,
            /* [retval][out] */ IMgaFCO **nobj) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_RegistryNode( 
            /* [in] */ BSTR path,
            /* [retval][out] */ IMgaRegNode **pVal) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetRegistryNodeDisp( 
            /* [in] */ BSTR path,
            /* [retval][out] */ IMgaRegNode **pVal) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_Registry( 
            /* [defaultvalue][in] */ VARIANT_BOOL virtuals,
            /* [retval][out] */ IMgaRegNodes **pVal) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetRegistryDisp( 
            /* [defaultvalue][in] */ VARIANT_BOOL virtuals,
            /* [retval][out] */ IMgaRegNodes **pVal) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_RegistryValue( 
            /* [in] */ BSTR path,
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetRegistryValueDisp( 
            /* [in] */ BSTR path,
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_RegistryValue( 
            /* [in] */ BSTR path,
            /* [in] */ BSTR newval) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE SetRegistryValueDisp( 
            /* [in] */ BSTR path,
            /* [in] */ BSTR newval) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_Constraints( 
            /* [in] */ VARIANT_BOOL includemeta,
            /* [retval][out] */ IMgaConstraints **pVal) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetConstraintsDisp( 
            /* [in] */ VARIANT_BOOL includemeta,
            /* [retval][out] */ IMgaConstraints **pVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE AddConstraint( 
            /* [in] */ IMgaConstraint *constraint) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE DefineConstraint( 
            /* [in] */ BSTR name,
            /* [in] */ long mask,
            /* [in] */ BSTR expr,
            /* [out] */ IMgaConstraint **nconstraint) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE MoveFCOs( 
            /* [in] */ IMgaFCOs *to_copy,
            /* [out] */ IMgaFCOs **objs) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE CopyFCOs( 
            /* [in] */ IMgaFCOs *to_move,
            /* [out] */ IMgaFCOs **objs) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE MoveFolders( 
            /* [in] */ IMgaFolders *to_copy,
            /* [out] */ IMgaFolders **objs) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE CopyFolders( 
            /* [in] */ IMgaFolders *to_move,
            /* [out] */ IMgaFolders **objs) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE RefreshParent( 
            /* [in] */ IMgaFolder *folder) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ChildFCOs( 
            /* [retval][out] */ IMgaFCOs **pVal) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ChildFCO( 
            /* [in] */ BSTR name,
            /* [retval][out] */ IMgaFCO **pVal) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetChildFCODisp( 
            /* [in] */ BSTR name,
            /* [retval][out] */ IMgaFCO **pVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetDescendantFCOs( 
            /* [in] */ IMgaFilter *filter,
            /* [retval][out] */ IMgaFCOs **returnset) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetChildrenOfKind( 
            /* [in] */ BSTR kindname,
            /* [retval][out] */ IMgaFCOs **returnset) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ChildRelIDCounter( 
            /* [retval][out] */ long *pVal) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ChildRelIDCounter( 
            /* [in] */ long pVal) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE AttachLibrary( 
            /* [in] */ BSTR connstring,
            /* [out] */ IMgaFolder **nf) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE RefreshLibrary( 
            /* [in] */ BSTR connstring) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_LibraryName( 
            /* [retval][out] */ BSTR *connstring) = 0;
        
        virtual /* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_LibraryName( 
            /* [in] */ BSTR connstring) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE AttachLibraryV3( 
            /* [in] */ BSTR connstring,
            /* [in] */ VARIANT_BOOL ungroup,
            /* [retval][out] */ IMgaFolder **nf) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE RefreshLibraryV3( 
            /* [in] */ BSTR connstring,
            /* [in] */ VARIANT_BOOL ungroup,
            /* [retval][out] */ long *numOfErrors) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetVirtuallyIncludes( 
            /* [retval][out] */ IMgaFolders **pDep) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetVirtuallyIncludedBy( 
            /* [retval][out] */ IMgaFolders **pDep) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE SetVirtuallyIncludes( 
            /* [in] */ IMgaFolders *pDep) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE SetVirtuallyIncludedBy( 
            /* [in] */ IMgaFolders *pDep) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE MoveFCODisp( 
            /* [in] */ IMgaFCO *to_copy,
            /* [retval][out] */ IMgaFCO **obj) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE CopyFCODisp( 
            /* [in] */ IMgaFCO *to_move,
            /* [retval][out] */ IMgaFCO **obj) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE MoveFolderDisp( 
            /* [in] */ IMgaFolder *to_copy,
            /* [retval][out] */ IMgaFolder **obj) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE CopyFolderDisp( 
            /* [in] */ IMgaFolder *to_move,
            /* [retval][out] */ IMgaFolder **obj) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetSourceControlInfo( 
            /* [retval][out] */ long *scInfo) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IMgaFolderVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IMgaFolder * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IMgaFolder * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IMgaFolder * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IMgaFolder * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IMgaFolder * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IMgaFolder * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IMgaFolder * This,
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
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Status )( 
            IMgaFolder * This,
            /* [retval][out] */ long *p);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_IsWritable )( 
            IMgaFolder * This,
            /* [retval][out] */ VARIANT_BOOL *p);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ID )( 
            IMgaFolder * This,
            /* [retval][out] */ ID_type *pVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Name )( 
            IMgaFolder * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Name )( 
            IMgaFolder * This,
            /* [in] */ BSTR newVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_AbsPath )( 
            IMgaFolder * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_MetaBase )( 
            IMgaFolder * This,
            /* [retval][out] */ IMgaMetaBase **pVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ObjType )( 
            IMgaFolder * This,
            /* [retval][out] */ objtype_enum *pVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Project )( 
            IMgaFolder * This,
            /* [retval][out] */ IMgaProject **pVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Territory )( 
            IMgaFolder * This,
            /* [retval][out] */ IMgaTerritory **pVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_IsEqual )( 
            IMgaFolder * This,
            /* [in] */ IMgaObject *o,
            /* [retval][out] */ VARIANT_BOOL *pVal);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetIsEqualDisp )( 
            IMgaFolder * This,
            /* [in] */ IMgaObject *o,
            /* [retval][out] */ VARIANT_BOOL *pVal);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetParent )( 
            IMgaFolder * This,
            /* [out] */ IMgaObject **pVal,
            /* [defaultvalue][out] */ objtype_enum *objtype);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *CheckProject )( 
            IMgaFolder * This,
            /* [in] */ IMgaProject *project);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *DestroyObject )( 
            IMgaFolder * This);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Open )( 
            IMgaFolder * This,
            /* [defaultvalue][in] */ openmode mode);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Close )( 
            IMgaFolder * This);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Associate )( 
            IMgaFolder * This,
            /* [in] */ VARIANT userdata);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentAssociation )( 
            IMgaFolder * This,
            /* [retval][out] */ VARIANT *userdata);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *SendEvent )( 
            IMgaFolder * This,
            /* [in] */ long mask);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_RelID )( 
            IMgaFolder * This,
            /* [retval][out] */ long *pVal);
        
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_RelID )( 
            IMgaFolder * This,
            /* [in] */ long newVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_IsLibObject )( 
            IMgaFolder * This,
            /* [retval][out] */ VARIANT_BOOL *pVal);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Check )( 
            IMgaFolder * This);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *CheckTree )( 
            IMgaFolder * This);
        
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Exempt )( 
            IMgaFolder * This,
            /* [in] */ VARIANT_BOOL newVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Exempt )( 
            IMgaFolder * This,
            /* [retval][out] */ VARIANT_BOOL *pVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ChildObjects )( 
            IMgaFolder * This,
            /* [retval][out] */ IMgaObjects **pVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ChildObjectByRelID )( 
            IMgaFolder * This,
            /* [in] */ long relid,
            /* [retval][out] */ IMgaObject **pVal);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetChildObjectByRelIDDisp )( 
            IMgaFolder * This,
            /* [in] */ long relid,
            /* [retval][out] */ IMgaObject **pVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ObjectByPath )( 
            IMgaFolder * This,
            /* [in] */ BSTR path,
            /* [retval][out] */ IMgaObject **pVal);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetObjectByPathDisp )( 
            IMgaFolder * This,
            /* [in] */ BSTR path,
            /* [retval][out] */ IMgaObject **pVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_NthObjectByPath )( 
            IMgaFolder * This,
            /* [in] */ long n_th,
            /* [in] */ BSTR path,
            /* [retval][out] */ IMgaObject **pVal);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetNthObjectByPathDisp )( 
            IMgaFolder * This,
            /* [in] */ long n_th,
            /* [in] */ BSTR path,
            /* [retval][out] */ IMgaObject **pVal);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *PutReadOnlyAccessWithPropagate )( 
            IMgaFolder * This,
            /* [in] */ VARIANT_BOOL pReadOnly);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *PutReadOnlyAccess )( 
            IMgaFolder * This,
            /* [in] */ VARIANT_BOOL pReadOnly);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *HasReadOnlyAccess )( 
            IMgaFolder * This,
            /* [retval][out] */ VARIANT_BOOL *pReadOnly);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetGuid )( 
            IMgaFolder * This,
            /* [out][in] */ long *l1,
            /* [out][in] */ long *l2,
            /* [out][in] */ long *l3,
            /* [out][in] */ long *l4);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *PutGuid )( 
            IMgaFolder * This,
            /* [in] */ long l1,
            /* [in] */ long l2,
            /* [in] */ long l3,
            /* [in] */ long l4);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetGuidDisp )( 
            IMgaFolder * This,
            /* [retval][out] */ BSTR *guid_str);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *PutGuidDisp )( 
            IMgaFolder * This,
            /* [in] */ BSTR guid_str);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_MetaFolder )( 
            IMgaFolder * This,
            /* [retval][out] */ IMgaMetaFolder **pVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ParentFolder )( 
            IMgaFolder * This,
            /* [retval][out] */ IMgaFolder **pVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ChildFolders )( 
            IMgaFolder * This,
            /* [retval][out] */ IMgaFolders **pVal);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *CreateFolder )( 
            IMgaFolder * This,
            /* [in] */ IMgaMetaFolder *meta,
            /* [retval][out] */ IMgaFolder **nf);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *CreateRootObject )( 
            IMgaFolder * This,
            /* [in] */ IMgaMetaFCO *meta,
            /* [retval][out] */ IMgaFCO **nobj);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *DeriveRootObject )( 
            IMgaFolder * This,
            /* [in] */ IMgaFCO *base,
            /* [in] */ VARIANT_BOOL instance,
            /* [retval][out] */ IMgaFCO **nobj);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_RegistryNode )( 
            IMgaFolder * This,
            /* [in] */ BSTR path,
            /* [retval][out] */ IMgaRegNode **pVal);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetRegistryNodeDisp )( 
            IMgaFolder * This,
            /* [in] */ BSTR path,
            /* [retval][out] */ IMgaRegNode **pVal);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Registry )( 
            IMgaFolder * This,
            /* [defaultvalue][in] */ VARIANT_BOOL virtuals,
            /* [retval][out] */ IMgaRegNodes **pVal);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetRegistryDisp )( 
            IMgaFolder * This,
            /* [defaultvalue][in] */ VARIANT_BOOL virtuals,
            /* [retval][out] */ IMgaRegNodes **pVal);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_RegistryValue )( 
            IMgaFolder * This,
            /* [in] */ BSTR path,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetRegistryValueDisp )( 
            IMgaFolder * This,
            /* [in] */ BSTR path,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_RegistryValue )( 
            IMgaFolder * This,
            /* [in] */ BSTR path,
            /* [in] */ BSTR newval);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *SetRegistryValueDisp )( 
            IMgaFolder * This,
            /* [in] */ BSTR path,
            /* [in] */ BSTR newval);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Constraints )( 
            IMgaFolder * This,
            /* [in] */ VARIANT_BOOL includemeta,
            /* [retval][out] */ IMgaConstraints **pVal);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetConstraintsDisp )( 
            IMgaFolder * This,
            /* [in] */ VARIANT_BOOL includemeta,
            /* [retval][out] */ IMgaConstraints **pVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *AddConstraint )( 
            IMgaFolder * This,
            /* [in] */ IMgaConstraint *constraint);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *DefineConstraint )( 
            IMgaFolder * This,
            /* [in] */ BSTR name,
            /* [in] */ long mask,
            /* [in] */ BSTR expr,
            /* [out] */ IMgaConstraint **nconstraint);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *MoveFCOs )( 
            IMgaFolder * This,
            /* [in] */ IMgaFCOs *to_copy,
            /* [out] */ IMgaFCOs **objs);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *CopyFCOs )( 
            IMgaFolder * This,
            /* [in] */ IMgaFCOs *to_move,
            /* [out] */ IMgaFCOs **objs);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *MoveFolders )( 
            IMgaFolder * This,
            /* [in] */ IMgaFolders *to_copy,
            /* [out] */ IMgaFolders **objs);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *CopyFolders )( 
            IMgaFolder * This,
            /* [in] */ IMgaFolders *to_move,
            /* [out] */ IMgaFolders **objs);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *RefreshParent )( 
            IMgaFolder * This,
            /* [in] */ IMgaFolder *folder);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ChildFCOs )( 
            IMgaFolder * This,
            /* [retval][out] */ IMgaFCOs **pVal);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ChildFCO )( 
            IMgaFolder * This,
            /* [in] */ BSTR name,
            /* [retval][out] */ IMgaFCO **pVal);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetChildFCODisp )( 
            IMgaFolder * This,
            /* [in] */ BSTR name,
            /* [retval][out] */ IMgaFCO **pVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetDescendantFCOs )( 
            IMgaFolder * This,
            /* [in] */ IMgaFilter *filter,
            /* [retval][out] */ IMgaFCOs **returnset);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetChildrenOfKind )( 
            IMgaFolder * This,
            /* [in] */ BSTR kindname,
            /* [retval][out] */ IMgaFCOs **returnset);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ChildRelIDCounter )( 
            IMgaFolder * This,
            /* [retval][out] */ long *pVal);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ChildRelIDCounter )( 
            IMgaFolder * This,
            /* [in] */ long pVal);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *AttachLibrary )( 
            IMgaFolder * This,
            /* [in] */ BSTR connstring,
            /* [out] */ IMgaFolder **nf);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *RefreshLibrary )( 
            IMgaFolder * This,
            /* [in] */ BSTR connstring);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_LibraryName )( 
            IMgaFolder * This,
            /* [retval][out] */ BSTR *connstring);
        
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_LibraryName )( 
            IMgaFolder * This,
            /* [in] */ BSTR connstring);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *AttachLibraryV3 )( 
            IMgaFolder * This,
            /* [in] */ BSTR connstring,
            /* [in] */ VARIANT_BOOL ungroup,
            /* [retval][out] */ IMgaFolder **nf);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *RefreshLibraryV3 )( 
            IMgaFolder * This,
            /* [in] */ BSTR connstring,
            /* [in] */ VARIANT_BOOL ungroup,
            /* [retval][out] */ long *numOfErrors);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetVirtuallyIncludes )( 
            IMgaFolder * This,
            /* [retval][out] */ IMgaFolders **pDep);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetVirtuallyIncludedBy )( 
            IMgaFolder * This,
            /* [retval][out] */ IMgaFolders **pDep);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *SetVirtuallyIncludes )( 
            IMgaFolder * This,
            /* [in] */ IMgaFolders *pDep);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *SetVirtuallyIncludedBy )( 
            IMgaFolder * This,
            /* [in] */ IMgaFolders *pDep);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *MoveFCODisp )( 
            IMgaFolder * This,
            /* [in] */ IMgaFCO *to_copy,
            /* [retval][out] */ IMgaFCO **obj);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *CopyFCODisp )( 
            IMgaFolder * This,
            /* [in] */ IMgaFCO *to_move,
            /* [retval][out] */ IMgaFCO **obj);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *MoveFolderDisp )( 
            IMgaFolder * This,
            /* [in] */ IMgaFolder *to_copy,
            /* [retval][out] */ IMgaFolder **obj);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *CopyFolderDisp )( 
            IMgaFolder * This,
            /* [in] */ IMgaFolder *to_move,
            /* [retval][out] */ IMgaFolder **obj);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetSourceControlInfo )( 
            IMgaFolder * This,
            /* [retval][out] */ long *scInfo);
        
        END_INTERFACE
    } IMgaFolderVtbl;

    interface IMgaFolder
    {
        CONST_VTBL struct IMgaFolderVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IMgaFolder_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IMgaFolder_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IMgaFolder_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IMgaFolder_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IMgaFolder_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IMgaFolder_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IMgaFolder_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IMgaFolder_get_Status(This,p)	\
    ( (This)->lpVtbl -> get_Status(This,p) ) 

#define IMgaFolder_get_IsWritable(This,p)	\
    ( (This)->lpVtbl -> get_IsWritable(This,p) ) 

#define IMgaFolder_get_ID(This,pVal)	\
    ( (This)->lpVtbl -> get_ID(This,pVal) ) 

#define IMgaFolder_get_Name(This,pVal)	\
    ( (This)->lpVtbl -> get_Name(This,pVal) ) 

#define IMgaFolder_put_Name(This,newVal)	\
    ( (This)->lpVtbl -> put_Name(This,newVal) ) 

#define IMgaFolder_get_AbsPath(This,pVal)	\
    ( (This)->lpVtbl -> get_AbsPath(This,pVal) ) 

#define IMgaFolder_get_MetaBase(This,pVal)	\
    ( (This)->lpVtbl -> get_MetaBase(This,pVal) ) 

#define IMgaFolder_get_ObjType(This,pVal)	\
    ( (This)->lpVtbl -> get_ObjType(This,pVal) ) 

#define IMgaFolder_get_Project(This,pVal)	\
    ( (This)->lpVtbl -> get_Project(This,pVal) ) 

#define IMgaFolder_get_Territory(This,pVal)	\
    ( (This)->lpVtbl -> get_Territory(This,pVal) ) 

#define IMgaFolder_get_IsEqual(This,o,pVal)	\
    ( (This)->lpVtbl -> get_IsEqual(This,o,pVal) ) 

#define IMgaFolder_GetIsEqualDisp(This,o,pVal)	\
    ( (This)->lpVtbl -> GetIsEqualDisp(This,o,pVal) ) 

#define IMgaFolder_GetParent(This,pVal,objtype)	\
    ( (This)->lpVtbl -> GetParent(This,pVal,objtype) ) 

#define IMgaFolder_CheckProject(This,project)	\
    ( (This)->lpVtbl -> CheckProject(This,project) ) 

#define IMgaFolder_DestroyObject(This)	\
    ( (This)->lpVtbl -> DestroyObject(This) ) 

#define IMgaFolder_Open(This,mode)	\
    ( (This)->lpVtbl -> Open(This,mode) ) 

#define IMgaFolder_Close(This)	\
    ( (This)->lpVtbl -> Close(This) ) 

#define IMgaFolder_Associate(This,userdata)	\
    ( (This)->lpVtbl -> Associate(This,userdata) ) 

#define IMgaFolder_get_CurrentAssociation(This,userdata)	\
    ( (This)->lpVtbl -> get_CurrentAssociation(This,userdata) ) 

#define IMgaFolder_SendEvent(This,mask)	\
    ( (This)->lpVtbl -> SendEvent(This,mask) ) 

#define IMgaFolder_get_RelID(This,pVal)	\
    ( (This)->lpVtbl -> get_RelID(This,pVal) ) 

#define IMgaFolder_put_RelID(This,newVal)	\
    ( (This)->lpVtbl -> put_RelID(This,newVal) ) 

#define IMgaFolder_get_IsLibObject(This,pVal)	\
    ( (This)->lpVtbl -> get_IsLibObject(This,pVal) ) 

#define IMgaFolder_Check(This)	\
    ( (This)->lpVtbl -> Check(This) ) 

#define IMgaFolder_CheckTree(This)	\
    ( (This)->lpVtbl -> CheckTree(This) ) 

#define IMgaFolder_put_Exempt(This,newVal)	\
    ( (This)->lpVtbl -> put_Exempt(This,newVal) ) 

#define IMgaFolder_get_Exempt(This,pVal)	\
    ( (This)->lpVtbl -> get_Exempt(This,pVal) ) 

#define IMgaFolder_get_ChildObjects(This,pVal)	\
    ( (This)->lpVtbl -> get_ChildObjects(This,pVal) ) 

#define IMgaFolder_get_ChildObjectByRelID(This,relid,pVal)	\
    ( (This)->lpVtbl -> get_ChildObjectByRelID(This,relid,pVal) ) 

#define IMgaFolder_GetChildObjectByRelIDDisp(This,relid,pVal)	\
    ( (This)->lpVtbl -> GetChildObjectByRelIDDisp(This,relid,pVal) ) 

#define IMgaFolder_get_ObjectByPath(This,path,pVal)	\
    ( (This)->lpVtbl -> get_ObjectByPath(This,path,pVal) ) 

#define IMgaFolder_GetObjectByPathDisp(This,path,pVal)	\
    ( (This)->lpVtbl -> GetObjectByPathDisp(This,path,pVal) ) 

#define IMgaFolder_get_NthObjectByPath(This,n_th,path,pVal)	\
    ( (This)->lpVtbl -> get_NthObjectByPath(This,n_th,path,pVal) ) 

#define IMgaFolder_GetNthObjectByPathDisp(This,n_th,path,pVal)	\
    ( (This)->lpVtbl -> GetNthObjectByPathDisp(This,n_th,path,pVal) ) 

#define IMgaFolder_PutReadOnlyAccessWithPropagate(This,pReadOnly)	\
    ( (This)->lpVtbl -> PutReadOnlyAccessWithPropagate(This,pReadOnly) ) 

#define IMgaFolder_PutReadOnlyAccess(This,pReadOnly)	\
    ( (This)->lpVtbl -> PutReadOnlyAccess(This,pReadOnly) ) 

#define IMgaFolder_HasReadOnlyAccess(This,pReadOnly)	\
    ( (This)->lpVtbl -> HasReadOnlyAccess(This,pReadOnly) ) 

#define IMgaFolder_GetGuid(This,l1,l2,l3,l4)	\
    ( (This)->lpVtbl -> GetGuid(This,l1,l2,l3,l4) ) 

#define IMgaFolder_PutGuid(This,l1,l2,l3,l4)	\
    ( (This)->lpVtbl -> PutGuid(This,l1,l2,l3,l4) ) 

#define IMgaFolder_GetGuidDisp(This,guid_str)	\
    ( (This)->lpVtbl -> GetGuidDisp(This,guid_str) ) 

#define IMgaFolder_PutGuidDisp(This,guid_str)	\
    ( (This)->lpVtbl -> PutGuidDisp(This,guid_str) ) 


#define IMgaFolder_get_MetaFolder(This,pVal)	\
    ( (This)->lpVtbl -> get_MetaFolder(This,pVal) ) 

#define IMgaFolder_get_ParentFolder(This,pVal)	\
    ( (This)->lpVtbl -> get_ParentFolder(This,pVal) ) 

#define IMgaFolder_get_ChildFolders(This,pVal)	\
    ( (This)->lpVtbl -> get_ChildFolders(This,pVal) ) 

#define IMgaFolder_CreateFolder(This,meta,nf)	\
    ( (This)->lpVtbl -> CreateFolder(This,meta,nf) ) 

#define IMgaFolder_CreateRootObject(This,meta,nobj)	\
    ( (This)->lpVtbl -> CreateRootObject(This,meta,nobj) ) 

#define IMgaFolder_DeriveRootObject(This,base,instance,nobj)	\
    ( (This)->lpVtbl -> DeriveRootObject(This,base,instance,nobj) ) 

#define IMgaFolder_get_RegistryNode(This,path,pVal)	\
    ( (This)->lpVtbl -> get_RegistryNode(This,path,pVal) ) 

#define IMgaFolder_GetRegistryNodeDisp(This,path,pVal)	\
    ( (This)->lpVtbl -> GetRegistryNodeDisp(This,path,pVal) ) 

#define IMgaFolder_get_Registry(This,virtuals,pVal)	\
    ( (This)->lpVtbl -> get_Registry(This,virtuals,pVal) ) 

#define IMgaFolder_GetRegistryDisp(This,virtuals,pVal)	\
    ( (This)->lpVtbl -> GetRegistryDisp(This,virtuals,pVal) ) 

#define IMgaFolder_get_RegistryValue(This,path,pVal)	\
    ( (This)->lpVtbl -> get_RegistryValue(This,path,pVal) ) 

#define IMgaFolder_GetRegistryValueDisp(This,path,pVal)	\
    ( (This)->lpVtbl -> GetRegistryValueDisp(This,path,pVal) ) 

#define IMgaFolder_put_RegistryValue(This,path,newval)	\
    ( (This)->lpVtbl -> put_RegistryValue(This,path,newval) ) 

#define IMgaFolder_SetRegistryValueDisp(This,path,newval)	\
    ( (This)->lpVtbl -> SetRegistryValueDisp(This,path,newval) ) 

#define IMgaFolder_get_Constraints(This,includemeta,pVal)	\
    ( (This)->lpVtbl -> get_Constraints(This,includemeta,pVal) ) 

#define IMgaFolder_GetConstraintsDisp(This,includemeta,pVal)	\
    ( (This)->lpVtbl -> GetConstraintsDisp(This,includemeta,pVal) ) 

#define IMgaFolder_AddConstraint(This,constraint)	\
    ( (This)->lpVtbl -> AddConstraint(This,constraint) ) 

#define IMgaFolder_DefineConstraint(This,name,mask,expr,nconstraint)	\
    ( (This)->lpVtbl -> DefineConstraint(This,name,mask,expr,nconstraint) ) 

#define IMgaFolder_MoveFCOs(This,to_copy,objs)	\
    ( (This)->lpVtbl -> MoveFCOs(This,to_copy,objs) ) 

#define IMgaFolder_CopyFCOs(This,to_move,objs)	\
    ( (This)->lpVtbl -> CopyFCOs(This,to_move,objs) ) 

#define IMgaFolder_MoveFolders(This,to_copy,objs)	\
    ( (This)->lpVtbl -> MoveFolders(This,to_copy,objs) ) 

#define IMgaFolder_CopyFolders(This,to_move,objs)	\
    ( (This)->lpVtbl -> CopyFolders(This,to_move,objs) ) 

#define IMgaFolder_RefreshParent(This,folder)	\
    ( (This)->lpVtbl -> RefreshParent(This,folder) ) 

#define IMgaFolder_get_ChildFCOs(This,pVal)	\
    ( (This)->lpVtbl -> get_ChildFCOs(This,pVal) ) 

#define IMgaFolder_get_ChildFCO(This,name,pVal)	\
    ( (This)->lpVtbl -> get_ChildFCO(This,name,pVal) ) 

#define IMgaFolder_GetChildFCODisp(This,name,pVal)	\
    ( (This)->lpVtbl -> GetChildFCODisp(This,name,pVal) ) 

#define IMgaFolder_GetDescendantFCOs(This,filter,returnset)	\
    ( (This)->lpVtbl -> GetDescendantFCOs(This,filter,returnset) ) 

#define IMgaFolder_GetChildrenOfKind(This,kindname,returnset)	\
    ( (This)->lpVtbl -> GetChildrenOfKind(This,kindname,returnset) ) 

#define IMgaFolder_get_ChildRelIDCounter(This,pVal)	\
    ( (This)->lpVtbl -> get_ChildRelIDCounter(This,pVal) ) 

#define IMgaFolder_put_ChildRelIDCounter(This,pVal)	\
    ( (This)->lpVtbl -> put_ChildRelIDCounter(This,pVal) ) 

#define IMgaFolder_AttachLibrary(This,connstring,nf)	\
    ( (This)->lpVtbl -> AttachLibrary(This,connstring,nf) ) 

#define IMgaFolder_RefreshLibrary(This,connstring)	\
    ( (This)->lpVtbl -> RefreshLibrary(This,connstring) ) 

#define IMgaFolder_get_LibraryName(This,connstring)	\
    ( (This)->lpVtbl -> get_LibraryName(This,connstring) ) 

#define IMgaFolder_put_LibraryName(This,connstring)	\
    ( (This)->lpVtbl -> put_LibraryName(This,connstring) ) 

#define IMgaFolder_AttachLibraryV3(This,connstring,ungroup,nf)	\
    ( (This)->lpVtbl -> AttachLibraryV3(This,connstring,ungroup,nf) ) 

#define IMgaFolder_RefreshLibraryV3(This,connstring,ungroup,numOfErrors)	\
    ( (This)->lpVtbl -> RefreshLibraryV3(This,connstring,ungroup,numOfErrors) ) 

#define IMgaFolder_GetVirtuallyIncludes(This,pDep)	\
    ( (This)->lpVtbl -> GetVirtuallyIncludes(This,pDep) ) 

#define IMgaFolder_GetVirtuallyIncludedBy(This,pDep)	\
    ( (This)->lpVtbl -> GetVirtuallyIncludedBy(This,pDep) ) 

#define IMgaFolder_SetVirtuallyIncludes(This,pDep)	\
    ( (This)->lpVtbl -> SetVirtuallyIncludes(This,pDep) ) 

#define IMgaFolder_SetVirtuallyIncludedBy(This,pDep)	\
    ( (This)->lpVtbl -> SetVirtuallyIncludedBy(This,pDep) ) 

#define IMgaFolder_MoveFCODisp(This,to_copy,obj)	\
    ( (This)->lpVtbl -> MoveFCODisp(This,to_copy,obj) ) 

#define IMgaFolder_CopyFCODisp(This,to_move,obj)	\
    ( (This)->lpVtbl -> CopyFCODisp(This,to_move,obj) ) 

#define IMgaFolder_MoveFolderDisp(This,to_copy,obj)	\
    ( (This)->lpVtbl -> MoveFolderDisp(This,to_copy,obj) ) 

#define IMgaFolder_CopyFolderDisp(This,to_move,obj)	\
    ( (This)->lpVtbl -> CopyFolderDisp(This,to_move,obj) ) 

#define IMgaFolder_GetSourceControlInfo(This,scInfo)	\
    ( (This)->lpVtbl -> GetSourceControlInfo(This,scInfo) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IMgaFolder_INTERFACE_DEFINED__ */


#ifndef __IMgaModel_INTERFACE_DEFINED__
#define __IMgaModel_INTERFACE_DEFINED__

/* interface IMgaModel */
/* [unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_IMgaModel;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("270B4F9A-B17C-11D3-9AD1-00AA00B6FE26")
    IMgaModel : public IMgaFCO
    {
    public:
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE CreateChildObject( 
            /* [in] */ IMgaMetaRole *meta,
            /* [retval][out] */ IMgaFCO **newobj) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE DeriveChildObject( 
            /* [in] */ IMgaFCO *base,
            /* [in] */ IMgaMetaRole *Role,
            /* [in] */ VARIANT_BOOL instance,
            /* [retval][out] */ IMgaFCO **newobj) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_ChildDerivedFrom( 
            /* [in] */ IMgaFCO *baseobj,
            /* [retval][out] */ IMgaFCO **pVal) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetChildDerivedFromDisp( 
            /* [in] */ IMgaFCO *baseobj,
            /* [retval][out] */ IMgaFCO **pVal) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_AspectParts( 
            /* [in] */ IMgaMetaAspect *asp,
            /* [in] */ unsigned int filter,
            /* [retval][out] */ IMgaParts **pVal) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetAspectPartsDisp( 
            /* [in] */ IMgaMetaAspect *asp,
            /* [in] */ unsigned int filter,
            /* [retval][out] */ IMgaParts **pVal) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE CreateSimpleConn( 
            /* [in] */ IMgaMetaRole *meta,
            /* [in] */ IMgaFCO *Src,
            /* [in] */ IMgaFCO *Dst,
            /* [in] */ IMgaFCOs *srcrefs,
            /* [in] */ IMgaFCOs *dstrefs,
            /* [retval][out] */ IMgaFCO **newobj) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE CreateReference( 
            /* [in] */ IMgaMetaRole *meta,
            /* [in] */ IMgaFCO *Target,
            /* [retval][out] */ IMgaFCO **newobj) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE AddInternalConnections( 
            /* [in] */ IMgaFCOs *inobjs,
            /* [retval][out] */ IMgaFCOs **outobjs) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE MoveFCOs( 
            /* [in] */ IMgaFCOs *to_copy,
            /* [in] */ IMgaMetaRoles *destroles,
            /* [out] */ IMgaFCOs **objs) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE CopyFCOs( 
            /* [in] */ IMgaFCOs *to_move,
            /* [in] */ IMgaMetaRoles *destroles,
            /* [out] */ IMgaFCOs **objs) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ChildFCOs( 
            /* [retval][out] */ IMgaFCOs **pVal) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ChildFCO( 
            /* [in] */ BSTR name,
            /* [retval][out] */ IMgaFCO **pVal) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetChildFCODisp( 
            /* [in] */ BSTR name,
            /* [retval][out] */ IMgaFCO **pVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetDescendantFCOs( 
            /* [in] */ IMgaFilter *filter,
            /* [retval][out] */ IMgaFCOs **returnset) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetChildrenOfKind( 
            /* [in] */ BSTR kindname,
            /* [retval][out] */ IMgaFCOs **returnset) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ChildRelIDCounter( 
            /* [retval][out] */ long *pVal) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ChildRelIDCounter( 
            /* [in] */ long pVal) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE CreateSimpleConnDisp( 
            /* [in] */ IMgaMetaRole *meta,
            /* [in] */ IMgaFCO *Src,
            /* [in] */ IMgaFCO *Dst,
            /* [in] */ IMgaFCO *Srcref,
            /* [in] */ IMgaFCO *Dstref,
            /* [retval][out] */ IMgaFCO **newobj) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE CreateSimplerConnDisp( 
            /* [in] */ IMgaMetaRole *meta,
            /* [in] */ IMgaFCO *Src,
            /* [in] */ IMgaFCO *Dst,
            /* [retval][out] */ IMgaFCO **newobj) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE MoveFCODisp( 
            /* [in] */ IMgaFCO *to_copy,
            /* [in] */ IMgaMetaRole *destrole,
            /* [retval][out] */ IMgaFCO **obj) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE CopyFCODisp( 
            /* [in] */ IMgaFCO *to_move,
            /* [in] */ IMgaMetaRole *destrole,
            /* [retval][out] */ IMgaFCO **obj) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetSourceControlInfo( 
            /* [retval][out] */ long *scInfo) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IMgaModelVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IMgaModel * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IMgaModel * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IMgaModel * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IMgaModel * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IMgaModel * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IMgaModel * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IMgaModel * This,
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
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Status )( 
            IMgaModel * This,
            /* [retval][out] */ long *p);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_IsWritable )( 
            IMgaModel * This,
            /* [retval][out] */ VARIANT_BOOL *p);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ID )( 
            IMgaModel * This,
            /* [retval][out] */ ID_type *pVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Name )( 
            IMgaModel * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Name )( 
            IMgaModel * This,
            /* [in] */ BSTR newVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_AbsPath )( 
            IMgaModel * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_MetaBase )( 
            IMgaModel * This,
            /* [retval][out] */ IMgaMetaBase **pVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ObjType )( 
            IMgaModel * This,
            /* [retval][out] */ objtype_enum *pVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Project )( 
            IMgaModel * This,
            /* [retval][out] */ IMgaProject **pVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Territory )( 
            IMgaModel * This,
            /* [retval][out] */ IMgaTerritory **pVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_IsEqual )( 
            IMgaModel * This,
            /* [in] */ IMgaObject *o,
            /* [retval][out] */ VARIANT_BOOL *pVal);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetIsEqualDisp )( 
            IMgaModel * This,
            /* [in] */ IMgaObject *o,
            /* [retval][out] */ VARIANT_BOOL *pVal);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetParent )( 
            IMgaModel * This,
            /* [out] */ IMgaObject **pVal,
            /* [defaultvalue][out] */ objtype_enum *objtype);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *CheckProject )( 
            IMgaModel * This,
            /* [in] */ IMgaProject *project);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *DestroyObject )( 
            IMgaModel * This);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Open )( 
            IMgaModel * This,
            /* [defaultvalue][in] */ openmode mode);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Close )( 
            IMgaModel * This);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Associate )( 
            IMgaModel * This,
            /* [in] */ VARIANT userdata);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentAssociation )( 
            IMgaModel * This,
            /* [retval][out] */ VARIANT *userdata);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *SendEvent )( 
            IMgaModel * This,
            /* [in] */ long mask);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_RelID )( 
            IMgaModel * This,
            /* [retval][out] */ long *pVal);
        
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_RelID )( 
            IMgaModel * This,
            /* [in] */ long newVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_IsLibObject )( 
            IMgaModel * This,
            /* [retval][out] */ VARIANT_BOOL *pVal);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Check )( 
            IMgaModel * This);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *CheckTree )( 
            IMgaModel * This);
        
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Exempt )( 
            IMgaModel * This,
            /* [in] */ VARIANT_BOOL newVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Exempt )( 
            IMgaModel * This,
            /* [retval][out] */ VARIANT_BOOL *pVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ChildObjects )( 
            IMgaModel * This,
            /* [retval][out] */ IMgaObjects **pVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ChildObjectByRelID )( 
            IMgaModel * This,
            /* [in] */ long relid,
            /* [retval][out] */ IMgaObject **pVal);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetChildObjectByRelIDDisp )( 
            IMgaModel * This,
            /* [in] */ long relid,
            /* [retval][out] */ IMgaObject **pVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ObjectByPath )( 
            IMgaModel * This,
            /* [in] */ BSTR path,
            /* [retval][out] */ IMgaObject **pVal);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetObjectByPathDisp )( 
            IMgaModel * This,
            /* [in] */ BSTR path,
            /* [retval][out] */ IMgaObject **pVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_NthObjectByPath )( 
            IMgaModel * This,
            /* [in] */ long n_th,
            /* [in] */ BSTR path,
            /* [retval][out] */ IMgaObject **pVal);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetNthObjectByPathDisp )( 
            IMgaModel * This,
            /* [in] */ long n_th,
            /* [in] */ BSTR path,
            /* [retval][out] */ IMgaObject **pVal);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *PutReadOnlyAccessWithPropagate )( 
            IMgaModel * This,
            /* [in] */ VARIANT_BOOL pReadOnly);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *PutReadOnlyAccess )( 
            IMgaModel * This,
            /* [in] */ VARIANT_BOOL pReadOnly);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *HasReadOnlyAccess )( 
            IMgaModel * This,
            /* [retval][out] */ VARIANT_BOOL *pReadOnly);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetGuid )( 
            IMgaModel * This,
            /* [out][in] */ long *l1,
            /* [out][in] */ long *l2,
            /* [out][in] */ long *l3,
            /* [out][in] */ long *l4);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *PutGuid )( 
            IMgaModel * This,
            /* [in] */ long l1,
            /* [in] */ long l2,
            /* [in] */ long l3,
            /* [in] */ long l4);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetGuidDisp )( 
            IMgaModel * This,
            /* [retval][out] */ BSTR *guid_str);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *PutGuidDisp )( 
            IMgaModel * This,
            /* [in] */ BSTR guid_str);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Meta )( 
            IMgaModel * This,
            /* [retval][out] */ IMgaMetaFCO **pVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_MetaRole )( 
            IMgaModel * This,
            /* [retval][out] */ IMgaMetaRole **pVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ParentModel )( 
            IMgaModel * This,
            /* [retval][out] */ IMgaModel **pVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ParentFolder )( 
            IMgaModel * This,
            /* [retval][out] */ IMgaFolder **pVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Parts )( 
            IMgaModel * This,
            /* [retval][out] */ IMgaParts **pVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Part )( 
            IMgaModel * This,
            /* [in] */ IMgaMetaAspect *asp,
            /* [retval][out] */ IMgaPart **pVal);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetPartDisp )( 
            IMgaModel * This,
            /* [in] */ IMgaMetaAspect *asp,
            /* [retval][out] */ IMgaPart **pVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_PartByMetaPart )( 
            IMgaModel * This,
            /* [in] */ IMgaMetaPart *part,
            /* [retval][out] */ IMgaPart **pVal);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetPartByMetaPartDisp )( 
            IMgaModel * This,
            /* [in] */ IMgaMetaPart *part,
            /* [retval][out] */ IMgaPart **pVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Attributes )( 
            IMgaModel * This,
            /* [retval][out] */ IMgaAttributes **pVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Attribute )( 
            IMgaModel * This,
            /* [in] */ IMgaMetaAttribute *meta,
            /* [retval][out] */ IMgaAttribute **pVal);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetAttributeDisp )( 
            IMgaModel * This,
            /* [in] */ IMgaMetaAttribute *meta,
            /* [retval][out] */ IMgaAttribute **pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_AttributeByName )( 
            IMgaModel * This,
            /* [in] */ BSTR name,
            /* [retval][out] */ VARIANT *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_AttributeByName )( 
            IMgaModel * This,
            /* [in] */ BSTR name,
            /* [in] */ VARIANT newval);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetAttributeByNameDisp )( 
            IMgaModel * This,
            /* [in] */ BSTR name,
            /* [retval][out] */ VARIANT *pVal);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *SetAttributeByNameDisp )( 
            IMgaModel * This,
            /* [in] */ BSTR name,
            /* [in] */ VARIANT newval);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_StrAttrByName )( 
            IMgaModel * This,
            /* [in] */ BSTR name,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_StrAttrByName )( 
            IMgaModel * This,
            /* [in] */ BSTR name,
            /* [in] */ BSTR newval);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetStrAttrByNameDisp )( 
            IMgaModel * This,
            /* [in] */ BSTR name,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *SetStrAttrByNameDisp )( 
            IMgaModel * This,
            /* [in] */ BSTR name,
            /* [in] */ BSTR newval);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_IntAttrByName )( 
            IMgaModel * This,
            /* [in] */ BSTR name,
            /* [retval][out] */ long *pVal);
        
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_IntAttrByName )( 
            IMgaModel * This,
            /* [in] */ BSTR name,
            /* [in] */ long newval);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetIntAttrByNameDisp )( 
            IMgaModel * This,
            /* [in] */ BSTR name,
            /* [retval][out] */ long *pVal);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *SetIntAttrByNameDisp )( 
            IMgaModel * This,
            /* [in] */ BSTR name,
            /* [in] */ long newval);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_FloatAttrByName )( 
            IMgaModel * This,
            /* [in] */ BSTR name,
            /* [retval][out] */ double *pVal);
        
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_FloatAttrByName )( 
            IMgaModel * This,
            /* [in] */ BSTR name,
            /* [in] */ double newval);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetFloatAttrByNameDisp )( 
            IMgaModel * This,
            /* [in] */ BSTR name,
            /* [retval][out] */ double *pVal);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *SetFloatAttrByNameDisp )( 
            IMgaModel * This,
            /* [in] */ BSTR name,
            /* [in] */ double newval);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_BoolAttrByName )( 
            IMgaModel * This,
            /* [in] */ BSTR name,
            /* [retval][out] */ VARIANT_BOOL *pVal);
        
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_BoolAttrByName )( 
            IMgaModel * This,
            /* [in] */ BSTR name,
            /* [in] */ VARIANT_BOOL newval);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetBoolAttrByNameDisp )( 
            IMgaModel * This,
            /* [in] */ BSTR name,
            /* [retval][out] */ VARIANT_BOOL *pVal);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *SetBoolAttrByNameDisp )( 
            IMgaModel * This,
            /* [in] */ BSTR name,
            /* [in] */ VARIANT_BOOL newval);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_RefAttrByName )( 
            IMgaModel * This,
            /* [in] */ BSTR name,
            /* [retval][out] */ IMgaFCO **pVal);
        
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_RefAttrByName )( 
            IMgaModel * This,
            /* [in] */ BSTR name,
            /* [in] */ IMgaFCO *newval);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetRefAttrByNameDisp )( 
            IMgaModel * This,
            /* [in] */ BSTR name,
            /* [retval][out] */ IMgaFCO **pVal);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *SetRefAttrByNameDisp )( 
            IMgaModel * This,
            /* [in] */ BSTR name,
            /* [in] */ IMgaFCO *newval);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *ClearAttrByName )( 
            IMgaModel * This,
            /* [in] */ BSTR name);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_RegistryNode )( 
            IMgaModel * This,
            /* [in] */ BSTR path,
            /* [retval][out] */ IMgaRegNode **pVal);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetRegistryNodeDisp )( 
            IMgaModel * This,
            /* [in] */ BSTR path,
            /* [retval][out] */ IMgaRegNode **pVal);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Registry )( 
            IMgaModel * This,
            /* [defaultvalue][in] */ VARIANT_BOOL virtuals,
            /* [retval][out] */ IMgaRegNodes **pVal);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetRegistryDisp )( 
            IMgaModel * This,
            /* [defaultvalue][in] */ VARIANT_BOOL virtuals,
            /* [retval][out] */ IMgaRegNodes **pVal);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_RegistryValue )( 
            IMgaModel * This,
            /* [in] */ BSTR path,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_RegistryValue )( 
            IMgaModel * This,
            /* [in] */ BSTR path,
            /* [in] */ BSTR newval);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetRegistryValueDisp )( 
            IMgaModel * This,
            /* [in] */ BSTR path,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *SetRegistryValueDisp )( 
            IMgaModel * This,
            /* [in] */ BSTR path,
            /* [in] */ BSTR newval);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Constraints )( 
            IMgaModel * This,
            /* [in] */ VARIANT_BOOL includemeta,
            /* [retval][out] */ IMgaConstraints **pVal);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetConstraintsDisp )( 
            IMgaModel * This,
            /* [in] */ VARIANT_BOOL includemeta,
            /* [retval][out] */ IMgaConstraints **pVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *AddConstraint )( 
            IMgaModel * This,
            /* [in] */ IMgaConstraint *constraint);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *DefineConstraint )( 
            IMgaModel * This,
            /* [in] */ BSTR name,
            /* [in] */ long mask,
            /* [in] */ BSTR expr,
            /* [out] */ IMgaConstraint **nconstraint);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_DerivedFrom )( 
            IMgaModel * This,
            /* [retval][out] */ IMgaFCO **pVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_DerivedObjects )( 
            IMgaModel * This,
            /* [retval][out] */ IMgaFCOs **pVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Type )( 
            IMgaModel * This,
            /* [retval][out] */ IMgaFCO **pVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_BaseType )( 
            IMgaModel * This,
            /* [retval][out] */ IMgaFCO **pVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ArcheType )( 
            IMgaModel * This,
            /* [retval][out] */ IMgaFCO **pVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_IsInstance )( 
            IMgaModel * This,
            /* [retval][out] */ VARIANT_BOOL *pVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_IsPrimaryDerived )( 
            IMgaModel * This,
            /* [retval][out] */ VARIANT_BOOL *pVal);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *AttachToArcheType )( 
            IMgaModel * This,
            /* [in] */ IMgaFCO *newtype,
            /* [in] */ VARIANT_BOOL instance);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *DetachFromArcheType )( 
            IMgaModel * This);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetAbsMetaPath )( 
            IMgaModel * This,
            /* [out][in] */ BSTR *abspath);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetRelMetaPath )( 
            IMgaModel * This,
            /* [in] */ IMgaFCO *begfco,
            /* [out][in] */ BSTR *relpath,
            /* [defaultvalue][in] */ IMgaFCOs *refs);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_PartOfConns )( 
            IMgaModel * This,
            /* [retval][out] */ IMgaConnPoints **pVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_MemberOfSets )( 
            IMgaModel * This,
            /* [retval][out] */ IMgaFCOs **pVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ReferencedBy )( 
            IMgaModel * This,
            /* [retval][out] */ IMgaFCOs **pVal);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *CreateCollection )( 
            IMgaModel * This,
            /* [out][in] */ IMgaFCOs **pVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_RootFCO )( 
            IMgaModel * This,
            /* [retval][out] */ IMgaFCO **pVal);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *CreateChildObject )( 
            IMgaModel * This,
            /* [in] */ IMgaMetaRole *meta,
            /* [retval][out] */ IMgaFCO **newobj);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *DeriveChildObject )( 
            IMgaModel * This,
            /* [in] */ IMgaFCO *base,
            /* [in] */ IMgaMetaRole *Role,
            /* [in] */ VARIANT_BOOL instance,
            /* [retval][out] */ IMgaFCO **newobj);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ChildDerivedFrom )( 
            IMgaModel * This,
            /* [in] */ IMgaFCO *baseobj,
            /* [retval][out] */ IMgaFCO **pVal);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetChildDerivedFromDisp )( 
            IMgaModel * This,
            /* [in] */ IMgaFCO *baseobj,
            /* [retval][out] */ IMgaFCO **pVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_AspectParts )( 
            IMgaModel * This,
            /* [in] */ IMgaMetaAspect *asp,
            /* [in] */ unsigned int filter,
            /* [retval][out] */ IMgaParts **pVal);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetAspectPartsDisp )( 
            IMgaModel * This,
            /* [in] */ IMgaMetaAspect *asp,
            /* [in] */ unsigned int filter,
            /* [retval][out] */ IMgaParts **pVal);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *CreateSimpleConn )( 
            IMgaModel * This,
            /* [in] */ IMgaMetaRole *meta,
            /* [in] */ IMgaFCO *Src,
            /* [in] */ IMgaFCO *Dst,
            /* [in] */ IMgaFCOs *srcrefs,
            /* [in] */ IMgaFCOs *dstrefs,
            /* [retval][out] */ IMgaFCO **newobj);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *CreateReference )( 
            IMgaModel * This,
            /* [in] */ IMgaMetaRole *meta,
            /* [in] */ IMgaFCO *Target,
            /* [retval][out] */ IMgaFCO **newobj);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *AddInternalConnections )( 
            IMgaModel * This,
            /* [in] */ IMgaFCOs *inobjs,
            /* [retval][out] */ IMgaFCOs **outobjs);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *MoveFCOs )( 
            IMgaModel * This,
            /* [in] */ IMgaFCOs *to_copy,
            /* [in] */ IMgaMetaRoles *destroles,
            /* [out] */ IMgaFCOs **objs);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *CopyFCOs )( 
            IMgaModel * This,
            /* [in] */ IMgaFCOs *to_move,
            /* [in] */ IMgaMetaRoles *destroles,
            /* [out] */ IMgaFCOs **objs);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ChildFCOs )( 
            IMgaModel * This,
            /* [retval][out] */ IMgaFCOs **pVal);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ChildFCO )( 
            IMgaModel * This,
            /* [in] */ BSTR name,
            /* [retval][out] */ IMgaFCO **pVal);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetChildFCODisp )( 
            IMgaModel * This,
            /* [in] */ BSTR name,
            /* [retval][out] */ IMgaFCO **pVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetDescendantFCOs )( 
            IMgaModel * This,
            /* [in] */ IMgaFilter *filter,
            /* [retval][out] */ IMgaFCOs **returnset);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetChildrenOfKind )( 
            IMgaModel * This,
            /* [in] */ BSTR kindname,
            /* [retval][out] */ IMgaFCOs **returnset);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ChildRelIDCounter )( 
            IMgaModel * This,
            /* [retval][out] */ long *pVal);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ChildRelIDCounter )( 
            IMgaModel * This,
            /* [in] */ long pVal);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *CreateSimpleConnDisp )( 
            IMgaModel * This,
            /* [in] */ IMgaMetaRole *meta,
            /* [in] */ IMgaFCO *Src,
            /* [in] */ IMgaFCO *Dst,
            /* [in] */ IMgaFCO *Srcref,
            /* [in] */ IMgaFCO *Dstref,
            /* [retval][out] */ IMgaFCO **newobj);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *CreateSimplerConnDisp )( 
            IMgaModel * This,
            /* [in] */ IMgaMetaRole *meta,
            /* [in] */ IMgaFCO *Src,
            /* [in] */ IMgaFCO *Dst,
            /* [retval][out] */ IMgaFCO **newobj);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *MoveFCODisp )( 
            IMgaModel * This,
            /* [in] */ IMgaFCO *to_copy,
            /* [in] */ IMgaMetaRole *destrole,
            /* [retval][out] */ IMgaFCO **obj);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *CopyFCODisp )( 
            IMgaModel * This,
            /* [in] */ IMgaFCO *to_move,
            /* [in] */ IMgaMetaRole *destrole,
            /* [retval][out] */ IMgaFCO **obj);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetSourceControlInfo )( 
            IMgaModel * This,
            /* [retval][out] */ long *scInfo);
        
        END_INTERFACE
    } IMgaModelVtbl;

    interface IMgaModel
    {
        CONST_VTBL struct IMgaModelVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IMgaModel_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IMgaModel_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IMgaModel_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IMgaModel_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IMgaModel_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IMgaModel_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IMgaModel_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IMgaModel_get_Status(This,p)	\
    ( (This)->lpVtbl -> get_Status(This,p) ) 

#define IMgaModel_get_IsWritable(This,p)	\
    ( (This)->lpVtbl -> get_IsWritable(This,p) ) 

#define IMgaModel_get_ID(This,pVal)	\
    ( (This)->lpVtbl -> get_ID(This,pVal) ) 

#define IMgaModel_get_Name(This,pVal)	\
    ( (This)->lpVtbl -> get_Name(This,pVal) ) 

#define IMgaModel_put_Name(This,newVal)	\
    ( (This)->lpVtbl -> put_Name(This,newVal) ) 

#define IMgaModel_get_AbsPath(This,pVal)	\
    ( (This)->lpVtbl -> get_AbsPath(This,pVal) ) 

#define IMgaModel_get_MetaBase(This,pVal)	\
    ( (This)->lpVtbl -> get_MetaBase(This,pVal) ) 

#define IMgaModel_get_ObjType(This,pVal)	\
    ( (This)->lpVtbl -> get_ObjType(This,pVal) ) 

#define IMgaModel_get_Project(This,pVal)	\
    ( (This)->lpVtbl -> get_Project(This,pVal) ) 

#define IMgaModel_get_Territory(This,pVal)	\
    ( (This)->lpVtbl -> get_Territory(This,pVal) ) 

#define IMgaModel_get_IsEqual(This,o,pVal)	\
    ( (This)->lpVtbl -> get_IsEqual(This,o,pVal) ) 

#define IMgaModel_GetIsEqualDisp(This,o,pVal)	\
    ( (This)->lpVtbl -> GetIsEqualDisp(This,o,pVal) ) 

#define IMgaModel_GetParent(This,pVal,objtype)	\
    ( (This)->lpVtbl -> GetParent(This,pVal,objtype) ) 

#define IMgaModel_CheckProject(This,project)	\
    ( (This)->lpVtbl -> CheckProject(This,project) ) 

#define IMgaModel_DestroyObject(This)	\
    ( (This)->lpVtbl -> DestroyObject(This) ) 

#define IMgaModel_Open(This,mode)	\
    ( (This)->lpVtbl -> Open(This,mode) ) 

#define IMgaModel_Close(This)	\
    ( (This)->lpVtbl -> Close(This) ) 

#define IMgaModel_Associate(This,userdata)	\
    ( (This)->lpVtbl -> Associate(This,userdata) ) 

#define IMgaModel_get_CurrentAssociation(This,userdata)	\
    ( (This)->lpVtbl -> get_CurrentAssociation(This,userdata) ) 

#define IMgaModel_SendEvent(This,mask)	\
    ( (This)->lpVtbl -> SendEvent(This,mask) ) 

#define IMgaModel_get_RelID(This,pVal)	\
    ( (This)->lpVtbl -> get_RelID(This,pVal) ) 

#define IMgaModel_put_RelID(This,newVal)	\
    ( (This)->lpVtbl -> put_RelID(This,newVal) ) 

#define IMgaModel_get_IsLibObject(This,pVal)	\
    ( (This)->lpVtbl -> get_IsLibObject(This,pVal) ) 

#define IMgaModel_Check(This)	\
    ( (This)->lpVtbl -> Check(This) ) 

#define IMgaModel_CheckTree(This)	\
    ( (This)->lpVtbl -> CheckTree(This) ) 

#define IMgaModel_put_Exempt(This,newVal)	\
    ( (This)->lpVtbl -> put_Exempt(This,newVal) ) 

#define IMgaModel_get_Exempt(This,pVal)	\
    ( (This)->lpVtbl -> get_Exempt(This,pVal) ) 

#define IMgaModel_get_ChildObjects(This,pVal)	\
    ( (This)->lpVtbl -> get_ChildObjects(This,pVal) ) 

#define IMgaModel_get_ChildObjectByRelID(This,relid,pVal)	\
    ( (This)->lpVtbl -> get_ChildObjectByRelID(This,relid,pVal) ) 

#define IMgaModel_GetChildObjectByRelIDDisp(This,relid,pVal)	\
    ( (This)->lpVtbl -> GetChildObjectByRelIDDisp(This,relid,pVal) ) 

#define IMgaModel_get_ObjectByPath(This,path,pVal)	\
    ( (This)->lpVtbl -> get_ObjectByPath(This,path,pVal) ) 

#define IMgaModel_GetObjectByPathDisp(This,path,pVal)	\
    ( (This)->lpVtbl -> GetObjectByPathDisp(This,path,pVal) ) 

#define IMgaModel_get_NthObjectByPath(This,n_th,path,pVal)	\
    ( (This)->lpVtbl -> get_NthObjectByPath(This,n_th,path,pVal) ) 

#define IMgaModel_GetNthObjectByPathDisp(This,n_th,path,pVal)	\
    ( (This)->lpVtbl -> GetNthObjectByPathDisp(This,n_th,path,pVal) ) 

#define IMgaModel_PutReadOnlyAccessWithPropagate(This,pReadOnly)	\
    ( (This)->lpVtbl -> PutReadOnlyAccessWithPropagate(This,pReadOnly) ) 

#define IMgaModel_PutReadOnlyAccess(This,pReadOnly)	\
    ( (This)->lpVtbl -> PutReadOnlyAccess(This,pReadOnly) ) 

#define IMgaModel_HasReadOnlyAccess(This,pReadOnly)	\
    ( (This)->lpVtbl -> HasReadOnlyAccess(This,pReadOnly) ) 

#define IMgaModel_GetGuid(This,l1,l2,l3,l4)	\
    ( (This)->lpVtbl -> GetGuid(This,l1,l2,l3,l4) ) 

#define IMgaModel_PutGuid(This,l1,l2,l3,l4)	\
    ( (This)->lpVtbl -> PutGuid(This,l1,l2,l3,l4) ) 

#define IMgaModel_GetGuidDisp(This,guid_str)	\
    ( (This)->lpVtbl -> GetGuidDisp(This,guid_str) ) 

#define IMgaModel_PutGuidDisp(This,guid_str)	\
    ( (This)->lpVtbl -> PutGuidDisp(This,guid_str) ) 


#define IMgaModel_get_Meta(This,pVal)	\
    ( (This)->lpVtbl -> get_Meta(This,pVal) ) 

#define IMgaModel_get_MetaRole(This,pVal)	\
    ( (This)->lpVtbl -> get_MetaRole(This,pVal) ) 

#define IMgaModel_get_ParentModel(This,pVal)	\
    ( (This)->lpVtbl -> get_ParentModel(This,pVal) ) 

#define IMgaModel_get_ParentFolder(This,pVal)	\
    ( (This)->lpVtbl -> get_ParentFolder(This,pVal) ) 

#define IMgaModel_get_Parts(This,pVal)	\
    ( (This)->lpVtbl -> get_Parts(This,pVal) ) 

#define IMgaModel_get_Part(This,asp,pVal)	\
    ( (This)->lpVtbl -> get_Part(This,asp,pVal) ) 

#define IMgaModel_GetPartDisp(This,asp,pVal)	\
    ( (This)->lpVtbl -> GetPartDisp(This,asp,pVal) ) 

#define IMgaModel_get_PartByMetaPart(This,part,pVal)	\
    ( (This)->lpVtbl -> get_PartByMetaPart(This,part,pVal) ) 

#define IMgaModel_GetPartByMetaPartDisp(This,part,pVal)	\
    ( (This)->lpVtbl -> GetPartByMetaPartDisp(This,part,pVal) ) 

#define IMgaModel_get_Attributes(This,pVal)	\
    ( (This)->lpVtbl -> get_Attributes(This,pVal) ) 

#define IMgaModel_get_Attribute(This,meta,pVal)	\
    ( (This)->lpVtbl -> get_Attribute(This,meta,pVal) ) 

#define IMgaModel_GetAttributeDisp(This,meta,pVal)	\
    ( (This)->lpVtbl -> GetAttributeDisp(This,meta,pVal) ) 

#define IMgaModel_get_AttributeByName(This,name,pVal)	\
    ( (This)->lpVtbl -> get_AttributeByName(This,name,pVal) ) 

#define IMgaModel_put_AttributeByName(This,name,newval)	\
    ( (This)->lpVtbl -> put_AttributeByName(This,name,newval) ) 

#define IMgaModel_GetAttributeByNameDisp(This,name,pVal)	\
    ( (This)->lpVtbl -> GetAttributeByNameDisp(This,name,pVal) ) 

#define IMgaModel_SetAttributeByNameDisp(This,name,newval)	\
    ( (This)->lpVtbl -> SetAttributeByNameDisp(This,name,newval) ) 

#define IMgaModel_get_StrAttrByName(This,name,pVal)	\
    ( (This)->lpVtbl -> get_StrAttrByName(This,name,pVal) ) 

#define IMgaModel_put_StrAttrByName(This,name,newval)	\
    ( (This)->lpVtbl -> put_StrAttrByName(This,name,newval) ) 

#define IMgaModel_GetStrAttrByNameDisp(This,name,pVal)	\
    ( (This)->lpVtbl -> GetStrAttrByNameDisp(This,name,pVal) ) 

#define IMgaModel_SetStrAttrByNameDisp(This,name,newval)	\
    ( (This)->lpVtbl -> SetStrAttrByNameDisp(This,name,newval) ) 

#define IMgaModel_get_IntAttrByName(This,name,pVal)	\
    ( (This)->lpVtbl -> get_IntAttrByName(This,name,pVal) ) 

#define IMgaModel_put_IntAttrByName(This,name,newval)	\
    ( (This)->lpVtbl -> put_IntAttrByName(This,name,newval) ) 

#define IMgaModel_GetIntAttrByNameDisp(This,name,pVal)	\
    ( (This)->lpVtbl -> GetIntAttrByNameDisp(This,name,pVal) ) 

#define IMgaModel_SetIntAttrByNameDisp(This,name,newval)	\
    ( (This)->lpVtbl -> SetIntAttrByNameDisp(This,name,newval) ) 

#define IMgaModel_get_FloatAttrByName(This,name,pVal)	\
    ( (This)->lpVtbl -> get_FloatAttrByName(This,name,pVal) ) 

#define IMgaModel_put_FloatAttrByName(This,name,newval)	\
    ( (This)->lpVtbl -> put_FloatAttrByName(This,name,newval) ) 

#define IMgaModel_GetFloatAttrByNameDisp(This,name,pVal)	\
    ( (This)->lpVtbl -> GetFloatAttrByNameDisp(This,name,pVal) ) 

#define IMgaModel_SetFloatAttrByNameDisp(This,name,newval)	\
    ( (This)->lpVtbl -> SetFloatAttrByNameDisp(This,name,newval) ) 

#define IMgaModel_get_BoolAttrByName(This,name,pVal)	\
    ( (This)->lpVtbl -> get_BoolAttrByName(This,name,pVal) ) 

#define IMgaModel_put_BoolAttrByName(This,name,newval)	\
    ( (This)->lpVtbl -> put_BoolAttrByName(This,name,newval) ) 

#define IMgaModel_GetBoolAttrByNameDisp(This,name,pVal)	\
    ( (This)->lpVtbl -> GetBoolAttrByNameDisp(This,name,pVal) ) 

#define IMgaModel_SetBoolAttrByNameDisp(This,name,newval)	\
    ( (This)->lpVtbl -> SetBoolAttrByNameDisp(This,name,newval) ) 

#define IMgaModel_get_RefAttrByName(This,name,pVal)	\
    ( (This)->lpVtbl -> get_RefAttrByName(This,name,pVal) ) 

#define IMgaModel_put_RefAttrByName(This,name,newval)	\
    ( (This)->lpVtbl -> put_RefAttrByName(This,name,newval) ) 

#define IMgaModel_GetRefAttrByNameDisp(This,name,pVal)	\
    ( (This)->lpVtbl -> GetRefAttrByNameDisp(This,name,pVal) ) 

#define IMgaModel_SetRefAttrByNameDisp(This,name,newval)	\
    ( (This)->lpVtbl -> SetRefAttrByNameDisp(This,name,newval) ) 

#define IMgaModel_ClearAttrByName(This,name)	\
    ( (This)->lpVtbl -> ClearAttrByName(This,name) ) 

#define IMgaModel_get_RegistryNode(This,path,pVal)	\
    ( (This)->lpVtbl -> get_RegistryNode(This,path,pVal) ) 

#define IMgaModel_GetRegistryNodeDisp(This,path,pVal)	\
    ( (This)->lpVtbl -> GetRegistryNodeDisp(This,path,pVal) ) 

#define IMgaModel_get_Registry(This,virtuals,pVal)	\
    ( (This)->lpVtbl -> get_Registry(This,virtuals,pVal) ) 

#define IMgaModel_GetRegistryDisp(This,virtuals,pVal)	\
    ( (This)->lpVtbl -> GetRegistryDisp(This,virtuals,pVal) ) 

#define IMgaModel_get_RegistryValue(This,path,pVal)	\
    ( (This)->lpVtbl -> get_RegistryValue(This,path,pVal) ) 

#define IMgaModel_put_RegistryValue(This,path,newval)	\
    ( (This)->lpVtbl -> put_RegistryValue(This,path,newval) ) 

#define IMgaModel_GetRegistryValueDisp(This,path,pVal)	\
    ( (This)->lpVtbl -> GetRegistryValueDisp(This,path,pVal) ) 

#define IMgaModel_SetRegistryValueDisp(This,path,newval)	\
    ( (This)->lpVtbl -> SetRegistryValueDisp(This,path,newval) ) 

#define IMgaModel_get_Constraints(This,includemeta,pVal)	\
    ( (This)->lpVtbl -> get_Constraints(This,includemeta,pVal) ) 

#define IMgaModel_GetConstraintsDisp(This,includemeta,pVal)	\
    ( (This)->lpVtbl -> GetConstraintsDisp(This,includemeta,pVal) ) 

#define IMgaModel_AddConstraint(This,constraint)	\
    ( (This)->lpVtbl -> AddConstraint(This,constraint) ) 

#define IMgaModel_DefineConstraint(This,name,mask,expr,nconstraint)	\
    ( (This)->lpVtbl -> DefineConstraint(This,name,mask,expr,nconstraint) ) 

#define IMgaModel_get_DerivedFrom(This,pVal)	\
    ( (This)->lpVtbl -> get_DerivedFrom(This,pVal) ) 

#define IMgaModel_get_DerivedObjects(This,pVal)	\
    ( (This)->lpVtbl -> get_DerivedObjects(This,pVal) ) 

#define IMgaModel_get_Type(This,pVal)	\
    ( (This)->lpVtbl -> get_Type(This,pVal) ) 

#define IMgaModel_get_BaseType(This,pVal)	\
    ( (This)->lpVtbl -> get_BaseType(This,pVal) ) 

#define IMgaModel_get_ArcheType(This,pVal)	\
    ( (This)->lpVtbl -> get_ArcheType(This,pVal) ) 

#define IMgaModel_get_IsInstance(This,pVal)	\
    ( (This)->lpVtbl -> get_IsInstance(This,pVal) ) 

#define IMgaModel_get_IsPrimaryDerived(This,pVal)	\
    ( (This)->lpVtbl -> get_IsPrimaryDerived(This,pVal) ) 

#define IMgaModel_AttachToArcheType(This,newtype,instance)	\
    ( (This)->lpVtbl -> AttachToArcheType(This,newtype,instance) ) 

#define IMgaModel_DetachFromArcheType(This)	\
    ( (This)->lpVtbl -> DetachFromArcheType(This) ) 

#define IMgaModel_GetAbsMetaPath(This,abspath)	\
    ( (This)->lpVtbl -> GetAbsMetaPath(This,abspath) ) 

#define IMgaModel_GetRelMetaPath(This,begfco,relpath,refs)	\
    ( (This)->lpVtbl -> GetRelMetaPath(This,begfco,relpath,refs) ) 

#define IMgaModel_get_PartOfConns(This,pVal)	\
    ( (This)->lpVtbl -> get_PartOfConns(This,pVal) ) 

#define IMgaModel_get_MemberOfSets(This,pVal)	\
    ( (This)->lpVtbl -> get_MemberOfSets(This,pVal) ) 

#define IMgaModel_get_ReferencedBy(This,pVal)	\
    ( (This)->lpVtbl -> get_ReferencedBy(This,pVal) ) 

#define IMgaModel_CreateCollection(This,pVal)	\
    ( (This)->lpVtbl -> CreateCollection(This,pVal) ) 

#define IMgaModel_get_RootFCO(This,pVal)	\
    ( (This)->lpVtbl -> get_RootFCO(This,pVal) ) 


#define IMgaModel_CreateChildObject(This,meta,newobj)	\
    ( (This)->lpVtbl -> CreateChildObject(This,meta,newobj) ) 

#define IMgaModel_DeriveChildObject(This,base,Role,instance,newobj)	\
    ( (This)->lpVtbl -> DeriveChildObject(This,base,Role,instance,newobj) ) 

#define IMgaModel_get_ChildDerivedFrom(This,baseobj,pVal)	\
    ( (This)->lpVtbl -> get_ChildDerivedFrom(This,baseobj,pVal) ) 

#define IMgaModel_GetChildDerivedFromDisp(This,baseobj,pVal)	\
    ( (This)->lpVtbl -> GetChildDerivedFromDisp(This,baseobj,pVal) ) 

#define IMgaModel_get_AspectParts(This,asp,filter,pVal)	\
    ( (This)->lpVtbl -> get_AspectParts(This,asp,filter,pVal) ) 

#define IMgaModel_GetAspectPartsDisp(This,asp,filter,pVal)	\
    ( (This)->lpVtbl -> GetAspectPartsDisp(This,asp,filter,pVal) ) 

#define IMgaModel_CreateSimpleConn(This,meta,Src,Dst,srcrefs,dstrefs,newobj)	\
    ( (This)->lpVtbl -> CreateSimpleConn(This,meta,Src,Dst,srcrefs,dstrefs,newobj) ) 

#define IMgaModel_CreateReference(This,meta,Target,newobj)	\
    ( (This)->lpVtbl -> CreateReference(This,meta,Target,newobj) ) 

#define IMgaModel_AddInternalConnections(This,inobjs,outobjs)	\
    ( (This)->lpVtbl -> AddInternalConnections(This,inobjs,outobjs) ) 

#define IMgaModel_MoveFCOs(This,to_copy,destroles,objs)	\
    ( (This)->lpVtbl -> MoveFCOs(This,to_copy,destroles,objs) ) 

#define IMgaModel_CopyFCOs(This,to_move,destroles,objs)	\
    ( (This)->lpVtbl -> CopyFCOs(This,to_move,destroles,objs) ) 

#define IMgaModel_get_ChildFCOs(This,pVal)	\
    ( (This)->lpVtbl -> get_ChildFCOs(This,pVal) ) 

#define IMgaModel_get_ChildFCO(This,name,pVal)	\
    ( (This)->lpVtbl -> get_ChildFCO(This,name,pVal) ) 

#define IMgaModel_GetChildFCODisp(This,name,pVal)	\
    ( (This)->lpVtbl -> GetChildFCODisp(This,name,pVal) ) 

#define IMgaModel_GetDescendantFCOs(This,filter,returnset)	\
    ( (This)->lpVtbl -> GetDescendantFCOs(This,filter,returnset) ) 

#define IMgaModel_GetChildrenOfKind(This,kindname,returnset)	\
    ( (This)->lpVtbl -> GetChildrenOfKind(This,kindname,returnset) ) 

#define IMgaModel_get_ChildRelIDCounter(This,pVal)	\
    ( (This)->lpVtbl -> get_ChildRelIDCounter(This,pVal) ) 

#define IMgaModel_put_ChildRelIDCounter(This,pVal)	\
    ( (This)->lpVtbl -> put_ChildRelIDCounter(This,pVal) ) 

#define IMgaModel_CreateSimpleConnDisp(This,meta,Src,Dst,Srcref,Dstref,newobj)	\
    ( (This)->lpVtbl -> CreateSimpleConnDisp(This,meta,Src,Dst,Srcref,Dstref,newobj) ) 

#define IMgaModel_CreateSimplerConnDisp(This,meta,Src,Dst,newobj)	\
    ( (This)->lpVtbl -> CreateSimplerConnDisp(This,meta,Src,Dst,newobj) ) 

#define IMgaModel_MoveFCODisp(This,to_copy,destrole,obj)	\
    ( (This)->lpVtbl -> MoveFCODisp(This,to_copy,destrole,obj) ) 

#define IMgaModel_CopyFCODisp(This,to_move,destrole,obj)	\
    ( (This)->lpVtbl -> CopyFCODisp(This,to_move,destrole,obj) ) 

#define IMgaModel_GetSourceControlInfo(This,scInfo)	\
    ( (This)->lpVtbl -> GetSourceControlInfo(This,scInfo) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IMgaModel_GetChildrenOfKind_Proxy( 
    IMgaModel * This,
    /* [in] */ BSTR kindname,
    /* [retval][out] */ IMgaFCOs **returnset);


void __RPC_STUB IMgaModel_GetChildrenOfKind_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE IMgaModel_get_ChildRelIDCounter_Proxy( 
    IMgaModel * This,
    /* [retval][out] */ long *pVal);


void __RPC_STUB IMgaModel_get_ChildRelIDCounter_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE IMgaModel_put_ChildRelIDCounter_Proxy( 
    IMgaModel * This,
    /* [in] */ long pVal);


void __RPC_STUB IMgaModel_put_ChildRelIDCounter_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE IMgaModel_CreateSimpleConnDisp_Proxy( 
    IMgaModel * This,
    /* [in] */ IMgaMetaRole *meta,
    /* [in] */ IMgaFCO *Src,
    /* [in] */ IMgaFCO *Dst,
    /* [in] */ IMgaFCO *Srcref,
    /* [in] */ IMgaFCO *Dstref,
    /* [retval][out] */ IMgaFCO **newobj);


void __RPC_STUB IMgaModel_CreateSimpleConnDisp_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE IMgaModel_CreateSimplerConnDisp_Proxy( 
    IMgaModel * This,
    /* [in] */ IMgaMetaRole *meta,
    /* [in] */ IMgaFCO *Src,
    /* [in] */ IMgaFCO *Dst,
    /* [retval][out] */ IMgaFCO **newobj);


void __RPC_STUB IMgaModel_CreateSimplerConnDisp_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE IMgaModel_MoveFCODisp_Proxy( 
    IMgaModel * This,
    /* [in] */ IMgaFCO *to_copy,
    /* [in] */ IMgaMetaRole *destrole,
    /* [retval][out] */ IMgaFCO **obj);


void __RPC_STUB IMgaModel_MoveFCODisp_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE IMgaModel_CopyFCODisp_Proxy( 
    IMgaModel * This,
    /* [in] */ IMgaFCO *to_move,
    /* [in] */ IMgaMetaRole *destrole,
    /* [retval][out] */ IMgaFCO **obj);


void __RPC_STUB IMgaModel_CopyFCODisp_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE IMgaModel_GetSourceControlInfo_Proxy( 
    IMgaModel * This,
    /* [retval][out] */ long *scInfo);


void __RPC_STUB IMgaModel_GetSourceControlInfo_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IMgaModel_INTERFACE_DEFINED__ */


#ifndef __IMgaAtom_INTERFACE_DEFINED__
#define __IMgaAtom_INTERFACE_DEFINED__

/* interface IMgaAtom */
/* [unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_IMgaAtom;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("270B4F9C-B17C-11D3-9AD1-00AA00B6FE26")
    IMgaAtom : public IMgaFCO
    {
    public:
    };
    
    
#else 	/* C style interface */

    typedef struct IMgaAtomVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IMgaAtom * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IMgaAtom * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IMgaAtom * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IMgaAtom * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IMgaAtom * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IMgaAtom * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IMgaAtom * This,
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
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Status )( 
            IMgaAtom * This,
            /* [retval][out] */ long *p);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_IsWritable )( 
            IMgaAtom * This,
            /* [retval][out] */ VARIANT_BOOL *p);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ID )( 
            IMgaAtom * This,
            /* [retval][out] */ ID_type *pVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Name )( 
            IMgaAtom * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Name )( 
            IMgaAtom * This,
            /* [in] */ BSTR newVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_AbsPath )( 
            IMgaAtom * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_MetaBase )( 
            IMgaAtom * This,
            /* [retval][out] */ IMgaMetaBase **pVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ObjType )( 
            IMgaAtom * This,
            /* [retval][out] */ objtype_enum *pVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Project )( 
            IMgaAtom * This,
            /* [retval][out] */ IMgaProject **pVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Territory )( 
            IMgaAtom * This,
            /* [retval][out] */ IMgaTerritory **pVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_IsEqual )( 
            IMgaAtom * This,
            /* [in] */ IMgaObject *o,
            /* [retval][out] */ VARIANT_BOOL *pVal);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetIsEqualDisp )( 
            IMgaAtom * This,
            /* [in] */ IMgaObject *o,
            /* [retval][out] */ VARIANT_BOOL *pVal);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetParent )( 
            IMgaAtom * This,
            /* [out] */ IMgaObject **pVal,
            /* [defaultvalue][out] */ objtype_enum *objtype);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *CheckProject )( 
            IMgaAtom * This,
            /* [in] */ IMgaProject *project);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *DestroyObject )( 
            IMgaAtom * This);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Open )( 
            IMgaAtom * This,
            /* [defaultvalue][in] */ openmode mode);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Close )( 
            IMgaAtom * This);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Associate )( 
            IMgaAtom * This,
            /* [in] */ VARIANT userdata);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentAssociation )( 
            IMgaAtom * This,
            /* [retval][out] */ VARIANT *userdata);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *SendEvent )( 
            IMgaAtom * This,
            /* [in] */ long mask);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_RelID )( 
            IMgaAtom * This,
            /* [retval][out] */ long *pVal);
        
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_RelID )( 
            IMgaAtom * This,
            /* [in] */ long newVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_IsLibObject )( 
            IMgaAtom * This,
            /* [retval][out] */ VARIANT_BOOL *pVal);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Check )( 
            IMgaAtom * This);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *CheckTree )( 
            IMgaAtom * This);
        
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Exempt )( 
            IMgaAtom * This,
            /* [in] */ VARIANT_BOOL newVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Exempt )( 
            IMgaAtom * This,
            /* [retval][out] */ VARIANT_BOOL *pVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ChildObjects )( 
            IMgaAtom * This,
            /* [retval][out] */ IMgaObjects **pVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ChildObjectByRelID )( 
            IMgaAtom * This,
            /* [in] */ long relid,
            /* [retval][out] */ IMgaObject **pVal);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetChildObjectByRelIDDisp )( 
            IMgaAtom * This,
            /* [in] */ long relid,
            /* [retval][out] */ IMgaObject **pVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ObjectByPath )( 
            IMgaAtom * This,
            /* [in] */ BSTR path,
            /* [retval][out] */ IMgaObject **pVal);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetObjectByPathDisp )( 
            IMgaAtom * This,
            /* [in] */ BSTR path,
            /* [retval][out] */ IMgaObject **pVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_NthObjectByPath )( 
            IMgaAtom * This,
            /* [in] */ long n_th,
            /* [in] */ BSTR path,
            /* [retval][out] */ IMgaObject **pVal);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetNthObjectByPathDisp )( 
            IMgaAtom * This,
            /* [in] */ long n_th,
            /* [in] */ BSTR path,
            /* [retval][out] */ IMgaObject **pVal);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *PutReadOnlyAccessWithPropagate )( 
            IMgaAtom * This,
            /* [in] */ VARIANT_BOOL pReadOnly);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *PutReadOnlyAccess )( 
            IMgaAtom * This,
            /* [in] */ VARIANT_BOOL pReadOnly);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *HasReadOnlyAccess )( 
            IMgaAtom * This,
            /* [retval][out] */ VARIANT_BOOL *pReadOnly);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetGuid )( 
            IMgaAtom * This,
            /* [out][in] */ long *l1,
            /* [out][in] */ long *l2,
            /* [out][in] */ long *l3,
            /* [out][in] */ long *l4);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *PutGuid )( 
            IMgaAtom * This,
            /* [in] */ long l1,
            /* [in] */ long l2,
            /* [in] */ long l3,
            /* [in] */ long l4);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetGuidDisp )( 
            IMgaAtom * This,
            /* [retval][out] */ BSTR *guid_str);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *PutGuidDisp )( 
            IMgaAtom * This,
            /* [in] */ BSTR guid_str);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Meta )( 
            IMgaAtom * This,
            /* [retval][out] */ IMgaMetaFCO **pVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_MetaRole )( 
            IMgaAtom * This,
            /* [retval][out] */ IMgaMetaRole **pVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ParentModel )( 
            IMgaAtom * This,
            /* [retval][out] */ IMgaModel **pVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ParentFolder )( 
            IMgaAtom * This,
            /* [retval][out] */ IMgaFolder **pVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Parts )( 
            IMgaAtom * This,
            /* [retval][out] */ IMgaParts **pVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Part )( 
            IMgaAtom * This,
            /* [in] */ IMgaMetaAspect *asp,
            /* [retval][out] */ IMgaPart **pVal);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetPartDisp )( 
            IMgaAtom * This,
            /* [in] */ IMgaMetaAspect *asp,
            /* [retval][out] */ IMgaPart **pVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_PartByMetaPart )( 
            IMgaAtom * This,
            /* [in] */ IMgaMetaPart *part,
            /* [retval][out] */ IMgaPart **pVal);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetPartByMetaPartDisp )( 
            IMgaAtom * This,
            /* [in] */ IMgaMetaPart *part,
            /* [retval][out] */ IMgaPart **pVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Attributes )( 
            IMgaAtom * This,
            /* [retval][out] */ IMgaAttributes **pVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Attribute )( 
            IMgaAtom * This,
            /* [in] */ IMgaMetaAttribute *meta,
            /* [retval][out] */ IMgaAttribute **pVal);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetAttributeDisp )( 
            IMgaAtom * This,
            /* [in] */ IMgaMetaAttribute *meta,
            /* [retval][out] */ IMgaAttribute **pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_AttributeByName )( 
            IMgaAtom * This,
            /* [in] */ BSTR name,
            /* [retval][out] */ VARIANT *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_AttributeByName )( 
            IMgaAtom * This,
            /* [in] */ BSTR name,
            /* [in] */ VARIANT newval);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetAttributeByNameDisp )( 
            IMgaAtom * This,
            /* [in] */ BSTR name,
            /* [retval][out] */ VARIANT *pVal);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *SetAttributeByNameDisp )( 
            IMgaAtom * This,
            /* [in] */ BSTR name,
            /* [in] */ VARIANT newval);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_StrAttrByName )( 
            IMgaAtom * This,
            /* [in] */ BSTR name,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_StrAttrByName )( 
            IMgaAtom * This,
            /* [in] */ BSTR name,
            /* [in] */ BSTR newval);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetStrAttrByNameDisp )( 
            IMgaAtom * This,
            /* [in] */ BSTR name,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *SetStrAttrByNameDisp )( 
            IMgaAtom * This,
            /* [in] */ BSTR name,
            /* [in] */ BSTR newval);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_IntAttrByName )( 
            IMgaAtom * This,
            /* [in] */ BSTR name,
            /* [retval][out] */ long *pVal);
        
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_IntAttrByName )( 
            IMgaAtom * This,
            /* [in] */ BSTR name,
            /* [in] */ long newval);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetIntAttrByNameDisp )( 
            IMgaAtom * This,
            /* [in] */ BSTR name,
            /* [retval][out] */ long *pVal);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *SetIntAttrByNameDisp )( 
            IMgaAtom * This,
            /* [in] */ BSTR name,
            /* [in] */ long newval);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_FloatAttrByName )( 
            IMgaAtom * This,
            /* [in] */ BSTR name,
            /* [retval][out] */ double *pVal);
        
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_FloatAttrByName )( 
            IMgaAtom * This,
            /* [in] */ BSTR name,
            /* [in] */ double newval);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetFloatAttrByNameDisp )( 
            IMgaAtom * This,
            /* [in] */ BSTR name,
            /* [retval][out] */ double *pVal);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *SetFloatAttrByNameDisp )( 
            IMgaAtom * This,
            /* [in] */ BSTR name,
            /* [in] */ double newval);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_BoolAttrByName )( 
            IMgaAtom * This,
            /* [in] */ BSTR name,
            /* [retval][out] */ VARIANT_BOOL *pVal);
        
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_BoolAttrByName )( 
            IMgaAtom * This,
            /* [in] */ BSTR name,
            /* [in] */ VARIANT_BOOL newval);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetBoolAttrByNameDisp )( 
            IMgaAtom * This,
            /* [in] */ BSTR name,
            /* [retval][out] */ VARIANT_BOOL *pVal);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *SetBoolAttrByNameDisp )( 
            IMgaAtom * This,
            /* [in] */ BSTR name,
            /* [in] */ VARIANT_BOOL newval);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_RefAttrByName )( 
            IMgaAtom * This,
            /* [in] */ BSTR name,
            /* [retval][out] */ IMgaFCO **pVal);
        
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_RefAttrByName )( 
            IMgaAtom * This,
            /* [in] */ BSTR name,
            /* [in] */ IMgaFCO *newval);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetRefAttrByNameDisp )( 
            IMgaAtom * This,
            /* [in] */ BSTR name,
            /* [retval][out] */ IMgaFCO **pVal);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *SetRefAttrByNameDisp )( 
            IMgaAtom * This,
            /* [in] */ BSTR name,
            /* [in] */ IMgaFCO *newval);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *ClearAttrByName )( 
            IMgaAtom * This,
            /* [in] */ BSTR name);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_RegistryNode )( 
            IMgaAtom * This,
            /* [in] */ BSTR path,
            /* [retval][out] */ IMgaRegNode **pVal);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetRegistryNodeDisp )( 
            IMgaAtom * This,
            /* [in] */ BSTR path,
            /* [retval][out] */ IMgaRegNode **pVal);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Registry )( 
            IMgaAtom * This,
            /* [defaultvalue][in] */ VARIANT_BOOL virtuals,
            /* [retval][out] */ IMgaRegNodes **pVal);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetRegistryDisp )( 
            IMgaAtom * This,
            /* [defaultvalue][in] */ VARIANT_BOOL virtuals,
            /* [retval][out] */ IMgaRegNodes **pVal);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_RegistryValue )( 
            IMgaAtom * This,
            /* [in] */ BSTR path,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_RegistryValue )( 
            IMgaAtom * This,
            /* [in] */ BSTR path,
            /* [in] */ BSTR newval);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetRegistryValueDisp )( 
            IMgaAtom * This,
            /* [in] */ BSTR path,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *SetRegistryValueDisp )( 
            IMgaAtom * This,
            /* [in] */ BSTR path,
            /* [in] */ BSTR newval);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Constraints )( 
            IMgaAtom * This,
            /* [in] */ VARIANT_BOOL includemeta,
            /* [retval][out] */ IMgaConstraints **pVal);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetConstraintsDisp )( 
            IMgaAtom * This,
            /* [in] */ VARIANT_BOOL includemeta,
            /* [retval][out] */ IMgaConstraints **pVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *AddConstraint )( 
            IMgaAtom * This,
            /* [in] */ IMgaConstraint *constraint);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *DefineConstraint )( 
            IMgaAtom * This,
            /* [in] */ BSTR name,
            /* [in] */ long mask,
            /* [in] */ BSTR expr,
            /* [out] */ IMgaConstraint **nconstraint);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_DerivedFrom )( 
            IMgaAtom * This,
            /* [retval][out] */ IMgaFCO **pVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_DerivedObjects )( 
            IMgaAtom * This,
            /* [retval][out] */ IMgaFCOs **pVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Type )( 
            IMgaAtom * This,
            /* [retval][out] */ IMgaFCO **pVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_BaseType )( 
            IMgaAtom * This,
            /* [retval][out] */ IMgaFCO **pVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ArcheType )( 
            IMgaAtom * This,
            /* [retval][out] */ IMgaFCO **pVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_IsInstance )( 
            IMgaAtom * This,
            /* [retval][out] */ VARIANT_BOOL *pVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_IsPrimaryDerived )( 
            IMgaAtom * This,
            /* [retval][out] */ VARIANT_BOOL *pVal);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *AttachToArcheType )( 
            IMgaAtom * This,
            /* [in] */ IMgaFCO *newtype,
            /* [in] */ VARIANT_BOOL instance);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *DetachFromArcheType )( 
            IMgaAtom * This);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetAbsMetaPath )( 
            IMgaAtom * This,
            /* [out][in] */ BSTR *abspath);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetRelMetaPath )( 
            IMgaAtom * This,
            /* [in] */ IMgaFCO *begfco,
            /* [out][in] */ BSTR *relpath,
            /* [defaultvalue][in] */ IMgaFCOs *refs);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_PartOfConns )( 
            IMgaAtom * This,
            /* [retval][out] */ IMgaConnPoints **pVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_MemberOfSets )( 
            IMgaAtom * This,
            /* [retval][out] */ IMgaFCOs **pVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ReferencedBy )( 
            IMgaAtom * This,
            /* [retval][out] */ IMgaFCOs **pVal);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *CreateCollection )( 
            IMgaAtom * This,
            /* [out][in] */ IMgaFCOs **pVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_RootFCO )( 
            IMgaAtom * This,
            /* [retval][out] */ IMgaFCO **pVal);
        
        END_INTERFACE
    } IMgaAtomVtbl;

    interface IMgaAtom
    {
        CONST_VTBL struct IMgaAtomVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IMgaAtom_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IMgaAtom_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IMgaAtom_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IMgaAtom_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IMgaAtom_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IMgaAtom_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IMgaAtom_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IMgaAtom_get_Status(This,p)	\
    ( (This)->lpVtbl -> get_Status(This,p) ) 

#define IMgaAtom_get_IsWritable(This,p)	\
    ( (This)->lpVtbl -> get_IsWritable(This,p) ) 

#define IMgaAtom_get_ID(This,pVal)	\
    ( (This)->lpVtbl -> get_ID(This,pVal) ) 

#define IMgaAtom_get_Name(This,pVal)	\
    ( (This)->lpVtbl -> get_Name(This,pVal) ) 

#define IMgaAtom_put_Name(This,newVal)	\
    ( (This)->lpVtbl -> put_Name(This,newVal) ) 

#define IMgaAtom_get_AbsPath(This,pVal)	\
    ( (This)->lpVtbl -> get_AbsPath(This,pVal) ) 

#define IMgaAtom_get_MetaBase(This,pVal)	\
    ( (This)->lpVtbl -> get_MetaBase(This,pVal) ) 

#define IMgaAtom_get_ObjType(This,pVal)	\
    ( (This)->lpVtbl -> get_ObjType(This,pVal) ) 

#define IMgaAtom_get_Project(This,pVal)	\
    ( (This)->lpVtbl -> get_Project(This,pVal) ) 

#define IMgaAtom_get_Territory(This,pVal)	\
    ( (This)->lpVtbl -> get_Territory(This,pVal) ) 

#define IMgaAtom_get_IsEqual(This,o,pVal)	\
    ( (This)->lpVtbl -> get_IsEqual(This,o,pVal) ) 

#define IMgaAtom_GetIsEqualDisp(This,o,pVal)	\
    ( (This)->lpVtbl -> GetIsEqualDisp(This,o,pVal) ) 

#define IMgaAtom_GetParent(This,pVal,objtype)	\
    ( (This)->lpVtbl -> GetParent(This,pVal,objtype) ) 

#define IMgaAtom_CheckProject(This,project)	\
    ( (This)->lpVtbl -> CheckProject(This,project) ) 

#define IMgaAtom_DestroyObject(This)	\
    ( (This)->lpVtbl -> DestroyObject(This) ) 

#define IMgaAtom_Open(This,mode)	\
    ( (This)->lpVtbl -> Open(This,mode) ) 

#define IMgaAtom_Close(This)	\
    ( (This)->lpVtbl -> Close(This) ) 

#define IMgaAtom_Associate(This,userdata)	\
    ( (This)->lpVtbl -> Associate(This,userdata) ) 

#define IMgaAtom_get_CurrentAssociation(This,userdata)	\
    ( (This)->lpVtbl -> get_CurrentAssociation(This,userdata) ) 

#define IMgaAtom_SendEvent(This,mask)	\
    ( (This)->lpVtbl -> SendEvent(This,mask) ) 

#define IMgaAtom_get_RelID(This,pVal)	\
    ( (This)->lpVtbl -> get_RelID(This,pVal) ) 

#define IMgaAtom_put_RelID(This,newVal)	\
    ( (This)->lpVtbl -> put_RelID(This,newVal) ) 

#define IMgaAtom_get_IsLibObject(This,pVal)	\
    ( (This)->lpVtbl -> get_IsLibObject(This,pVal) ) 

#define IMgaAtom_Check(This)	\
    ( (This)->lpVtbl -> Check(This) ) 

#define IMgaAtom_CheckTree(This)	\
    ( (This)->lpVtbl -> CheckTree(This) ) 

#define IMgaAtom_put_Exempt(This,newVal)	\
    ( (This)->lpVtbl -> put_Exempt(This,newVal) ) 

#define IMgaAtom_get_Exempt(This,pVal)	\
    ( (This)->lpVtbl -> get_Exempt(This,pVal) ) 

#define IMgaAtom_get_ChildObjects(This,pVal)	\
    ( (This)->lpVtbl -> get_ChildObjects(This,pVal) ) 

#define IMgaAtom_get_ChildObjectByRelID(This,relid,pVal)	\
    ( (This)->lpVtbl -> get_ChildObjectByRelID(This,relid,pVal) ) 

#define IMgaAtom_GetChildObjectByRelIDDisp(This,relid,pVal)	\
    ( (This)->lpVtbl -> GetChildObjectByRelIDDisp(This,relid,pVal) ) 

#define IMgaAtom_get_ObjectByPath(This,path,pVal)	\
    ( (This)->lpVtbl -> get_ObjectByPath(This,path,pVal) ) 

#define IMgaAtom_GetObjectByPathDisp(This,path,pVal)	\
    ( (This)->lpVtbl -> GetObjectByPathDisp(This,path,pVal) ) 

#define IMgaAtom_get_NthObjectByPath(This,n_th,path,pVal)	\
    ( (This)->lpVtbl -> get_NthObjectByPath(This,n_th,path,pVal) ) 

#define IMgaAtom_GetNthObjectByPathDisp(This,n_th,path,pVal)	\
    ( (This)->lpVtbl -> GetNthObjectByPathDisp(This,n_th,path,pVal) ) 

#define IMgaAtom_PutReadOnlyAccessWithPropagate(This,pReadOnly)	\
    ( (This)->lpVtbl -> PutReadOnlyAccessWithPropagate(This,pReadOnly) ) 

#define IMgaAtom_PutReadOnlyAccess(This,pReadOnly)	\
    ( (This)->lpVtbl -> PutReadOnlyAccess(This,pReadOnly) ) 

#define IMgaAtom_HasReadOnlyAccess(This,pReadOnly)	\
    ( (This)->lpVtbl -> HasReadOnlyAccess(This,pReadOnly) ) 

#define IMgaAtom_GetGuid(This,l1,l2,l3,l4)	\
    ( (This)->lpVtbl -> GetGuid(This,l1,l2,l3,l4) ) 

#define IMgaAtom_PutGuid(This,l1,l2,l3,l4)	\
    ( (This)->lpVtbl -> PutGuid(This,l1,l2,l3,l4) ) 

#define IMgaAtom_GetGuidDisp(This,guid_str)	\
    ( (This)->lpVtbl -> GetGuidDisp(This,guid_str) ) 

#define IMgaAtom_PutGuidDisp(This,guid_str)	\
    ( (This)->lpVtbl -> PutGuidDisp(This,guid_str) ) 


#define IMgaAtom_get_Meta(This,pVal)	\
    ( (This)->lpVtbl -> get_Meta(This,pVal) ) 

#define IMgaAtom_get_MetaRole(This,pVal)	\
    ( (This)->lpVtbl -> get_MetaRole(This,pVal) ) 

#define IMgaAtom_get_ParentModel(This,pVal)	\
    ( (This)->lpVtbl -> get_ParentModel(This,pVal) ) 

#define IMgaAtom_get_ParentFolder(This,pVal)	\
    ( (This)->lpVtbl -> get_ParentFolder(This,pVal) ) 

#define IMgaAtom_get_Parts(This,pVal)	\
    ( (This)->lpVtbl -> get_Parts(This,pVal) ) 

#define IMgaAtom_get_Part(This,asp,pVal)	\
    ( (This)->lpVtbl -> get_Part(This,asp,pVal) ) 

#define IMgaAtom_GetPartDisp(This,asp,pVal)	\
    ( (This)->lpVtbl -> GetPartDisp(This,asp,pVal) ) 

#define IMgaAtom_get_PartByMetaPart(This,part,pVal)	\
    ( (This)->lpVtbl -> get_PartByMetaPart(This,part,pVal) ) 

#define IMgaAtom_GetPartByMetaPartDisp(This,part,pVal)	\
    ( (This)->lpVtbl -> GetPartByMetaPartDisp(This,part,pVal) ) 

#define IMgaAtom_get_Attributes(This,pVal)	\
    ( (This)->lpVtbl -> get_Attributes(This,pVal) ) 

#define IMgaAtom_get_Attribute(This,meta,pVal)	\
    ( (This)->lpVtbl -> get_Attribute(This,meta,pVal) ) 

#define IMgaAtom_GetAttributeDisp(This,meta,pVal)	\
    ( (This)->lpVtbl -> GetAttributeDisp(This,meta,pVal) ) 

#define IMgaAtom_get_AttributeByName(This,name,pVal)	\
    ( (This)->lpVtbl -> get_AttributeByName(This,name,pVal) ) 

#define IMgaAtom_put_AttributeByName(This,name,newval)	\
    ( (This)->lpVtbl -> put_AttributeByName(This,name,newval) ) 

#define IMgaAtom_GetAttributeByNameDisp(This,name,pVal)	\
    ( (This)->lpVtbl -> GetAttributeByNameDisp(This,name,pVal) ) 

#define IMgaAtom_SetAttributeByNameDisp(This,name,newval)	\
    ( (This)->lpVtbl -> SetAttributeByNameDisp(This,name,newval) ) 

#define IMgaAtom_get_StrAttrByName(This,name,pVal)	\
    ( (This)->lpVtbl -> get_StrAttrByName(This,name,pVal) ) 

#define IMgaAtom_put_StrAttrByName(This,name,newval)	\
    ( (This)->lpVtbl -> put_StrAttrByName(This,name,newval) ) 

#define IMgaAtom_GetStrAttrByNameDisp(This,name,pVal)	\
    ( (This)->lpVtbl -> GetStrAttrByNameDisp(This,name,pVal) ) 

#define IMgaAtom_SetStrAttrByNameDisp(This,name,newval)	\
    ( (This)->lpVtbl -> SetStrAttrByNameDisp(This,name,newval) ) 

#define IMgaAtom_get_IntAttrByName(This,name,pVal)	\
    ( (This)->lpVtbl -> get_IntAttrByName(This,name,pVal) ) 

#define IMgaAtom_put_IntAttrByName(This,name,newval)	\
    ( (This)->lpVtbl -> put_IntAttrByName(This,name,newval) ) 

#define IMgaAtom_GetIntAttrByNameDisp(This,name,pVal)	\
    ( (This)->lpVtbl -> GetIntAttrByNameDisp(This,name,pVal) ) 

#define IMgaAtom_SetIntAttrByNameDisp(This,name,newval)	\
    ( (This)->lpVtbl -> SetIntAttrByNameDisp(This,name,newval) ) 

#define IMgaAtom_get_FloatAttrByName(This,name,pVal)	\
    ( (This)->lpVtbl -> get_FloatAttrByName(This,name,pVal) ) 

#define IMgaAtom_put_FloatAttrByName(This,name,newval)	\
    ( (This)->lpVtbl -> put_FloatAttrByName(This,name,newval) ) 

#define IMgaAtom_GetFloatAttrByNameDisp(This,name,pVal)	\
    ( (This)->lpVtbl -> GetFloatAttrByNameDisp(This,name,pVal) ) 

#define IMgaAtom_SetFloatAttrByNameDisp(This,name,newval)	\
    ( (This)->lpVtbl -> SetFloatAttrByNameDisp(This,name,newval) ) 

#define IMgaAtom_get_BoolAttrByName(This,name,pVal)	\
    ( (This)->lpVtbl -> get_BoolAttrByName(This,name,pVal) ) 

#define IMgaAtom_put_BoolAttrByName(This,name,newval)	\
    ( (This)->lpVtbl -> put_BoolAttrByName(This,name,newval) ) 

#define IMgaAtom_GetBoolAttrByNameDisp(This,name,pVal)	\
    ( (This)->lpVtbl -> GetBoolAttrByNameDisp(This,name,pVal) ) 

#define IMgaAtom_SetBoolAttrByNameDisp(This,name,newval)	\
    ( (This)->lpVtbl -> SetBoolAttrByNameDisp(This,name,newval) ) 

#define IMgaAtom_get_RefAttrByName(This,name,pVal)	\
    ( (This)->lpVtbl -> get_RefAttrByName(This,name,pVal) ) 

#define IMgaAtom_put_RefAttrByName(This,name,newval)	\
    ( (This)->lpVtbl -> put_RefAttrByName(This,name,newval) ) 

#define IMgaAtom_GetRefAttrByNameDisp(This,name,pVal)	\
    ( (This)->lpVtbl -> GetRefAttrByNameDisp(This,name,pVal) ) 

#define IMgaAtom_SetRefAttrByNameDisp(This,name,newval)	\
    ( (This)->lpVtbl -> SetRefAttrByNameDisp(This,name,newval) ) 

#define IMgaAtom_ClearAttrByName(This,name)	\
    ( (This)->lpVtbl -> ClearAttrByName(This,name) ) 

#define IMgaAtom_get_RegistryNode(This,path,pVal)	\
    ( (This)->lpVtbl -> get_RegistryNode(This,path,pVal) ) 

#define IMgaAtom_GetRegistryNodeDisp(This,path,pVal)	\
    ( (This)->lpVtbl -> GetRegistryNodeDisp(This,path,pVal) ) 

#define IMgaAtom_get_Registry(This,virtuals,pVal)	\
    ( (This)->lpVtbl -> get_Registry(This,virtuals,pVal) ) 

#define IMgaAtom_GetRegistryDisp(This,virtuals,pVal)	\
    ( (This)->lpVtbl -> GetRegistryDisp(This,virtuals,pVal) ) 

#define IMgaAtom_get_RegistryValue(This,path,pVal)	\
    ( (This)->lpVtbl -> get_RegistryValue(This,path,pVal) ) 

#define IMgaAtom_put_RegistryValue(This,path,newval)	\
    ( (This)->lpVtbl -> put_RegistryValue(This,path,newval) ) 

#define IMgaAtom_GetRegistryValueDisp(This,path,pVal)	\
    ( (This)->lpVtbl -> GetRegistryValueDisp(This,path,pVal) ) 

#define IMgaAtom_SetRegistryValueDisp(This,path,newval)	\
    ( (This)->lpVtbl -> SetRegistryValueDisp(This,path,newval) ) 

#define IMgaAtom_get_Constraints(This,includemeta,pVal)	\
    ( (This)->lpVtbl -> get_Constraints(This,includemeta,pVal) ) 

#define IMgaAtom_GetConstraintsDisp(This,includemeta,pVal)	\
    ( (This)->lpVtbl -> GetConstraintsDisp(This,includemeta,pVal) ) 

#define IMgaAtom_AddConstraint(This,constraint)	\
    ( (This)->lpVtbl -> AddConstraint(This,constraint) ) 

#define IMgaAtom_DefineConstraint(This,name,mask,expr,nconstraint)	\
    ( (This)->lpVtbl -> DefineConstraint(This,name,mask,expr,nconstraint) ) 

#define IMgaAtom_get_DerivedFrom(This,pVal)	\
    ( (This)->lpVtbl -> get_DerivedFrom(This,pVal) ) 

#define IMgaAtom_get_DerivedObjects(This,pVal)	\
    ( (This)->lpVtbl -> get_DerivedObjects(This,pVal) ) 

#define IMgaAtom_get_Type(This,pVal)	\
    ( (This)->lpVtbl -> get_Type(This,pVal) ) 

#define IMgaAtom_get_BaseType(This,pVal)	\
    ( (This)->lpVtbl -> get_BaseType(This,pVal) ) 

#define IMgaAtom_get_ArcheType(This,pVal)	\
    ( (This)->lpVtbl -> get_ArcheType(This,pVal) ) 

#define IMgaAtom_get_IsInstance(This,pVal)	\
    ( (This)->lpVtbl -> get_IsInstance(This,pVal) ) 

#define IMgaAtom_get_IsPrimaryDerived(This,pVal)	\
    ( (This)->lpVtbl -> get_IsPrimaryDerived(This,pVal) ) 

#define IMgaAtom_AttachToArcheType(This,newtype,instance)	\
    ( (This)->lpVtbl -> AttachToArcheType(This,newtype,instance) ) 

#define IMgaAtom_DetachFromArcheType(This)	\
    ( (This)->lpVtbl -> DetachFromArcheType(This) ) 

#define IMgaAtom_GetAbsMetaPath(This,abspath)	\
    ( (This)->lpVtbl -> GetAbsMetaPath(This,abspath) ) 

#define IMgaAtom_GetRelMetaPath(This,begfco,relpath,refs)	\
    ( (This)->lpVtbl -> GetRelMetaPath(This,begfco,relpath,refs) ) 

#define IMgaAtom_get_PartOfConns(This,pVal)	\
    ( (This)->lpVtbl -> get_PartOfConns(This,pVal) ) 

#define IMgaAtom_get_MemberOfSets(This,pVal)	\
    ( (This)->lpVtbl -> get_MemberOfSets(This,pVal) ) 

#define IMgaAtom_get_ReferencedBy(This,pVal)	\
    ( (This)->lpVtbl -> get_ReferencedBy(This,pVal) ) 

#define IMgaAtom_CreateCollection(This,pVal)	\
    ( (This)->lpVtbl -> CreateCollection(This,pVal) ) 

#define IMgaAtom_get_RootFCO(This,pVal)	\
    ( (This)->lpVtbl -> get_RootFCO(This,pVal) ) 


#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IMgaAtom_INTERFACE_DEFINED__ */


#ifndef __IMgaPart_INTERFACE_DEFINED__
#define __IMgaPart_INTERFACE_DEFINED__

/* interface IMgaPart */
/* [unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_IMgaPart;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("270B4F9E-B17C-11D3-9AD1-00AA00B6FE26")
    IMgaPart : public IDispatch
    {
    public:
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Model( 
            /* [retval][out] */ IMgaModel **pVal) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Meta( 
            /* [retval][out] */ IMgaMetaPart **pVal) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_MetaAspect( 
            /* [retval][out] */ IMgaMetaAspect **pVal) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_MetaRole( 
            /* [retval][out] */ IMgaMetaRole **pVal) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_FCO( 
            /* [retval][out] */ IMgaFCO **pVal) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_AccessMask( 
            /* [retval][out] */ long *pVal) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_RegistryMode( 
            /* [retval][out] */ VARIANT_BOOL *own) = 0;
        
        virtual /* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_RegistryMode( 
            /* [in] */ VARIANT_BOOL own) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_RegistryNode( 
            /* [in] */ BSTR path,
            /* [retval][out] */ IMgaRegNode **pVal) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetRegistryNodeDisp( 
            /* [in] */ BSTR path,
            /* [retval][out] */ IMgaRegNode **pVal) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Registry( 
            /* [defaultvalue][in] */ VARIANT_BOOL virtuals,
            /* [retval][out] */ IMgaRegNodes **pVal) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetRegistryDisp( 
            /* [defaultvalue][in] */ VARIANT_BOOL virtuals,
            /* [retval][out] */ IMgaRegNodes **pVal) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_RegistryValue( 
            /* [in] */ BSTR path,
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_RegistryValue( 
            /* [in] */ BSTR path,
            /* [in] */ BSTR newval) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetRegistryValueDisp( 
            /* [in] */ BSTR path,
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE SetRegistryValueDisp( 
            /* [in] */ BSTR path,
            /* [in] */ BSTR newval) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetGmeAttrs( 
            /* [out] */ BSTR *Icon,
            /* [out] */ long *xpos,
            /* [out] */ long *ypos) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE SetGmeAttrs( 
            /* [in] */ BSTR Icon,
            /* [in] */ long xpos,
            /* [in] */ long ypos) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IMgaPartVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IMgaPart * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IMgaPart * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IMgaPart * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IMgaPart * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IMgaPart * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IMgaPart * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IMgaPart * This,
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
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Model )( 
            IMgaPart * This,
            /* [retval][out] */ IMgaModel **pVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Meta )( 
            IMgaPart * This,
            /* [retval][out] */ IMgaMetaPart **pVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_MetaAspect )( 
            IMgaPart * This,
            /* [retval][out] */ IMgaMetaAspect **pVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_MetaRole )( 
            IMgaPart * This,
            /* [retval][out] */ IMgaMetaRole **pVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_FCO )( 
            IMgaPart * This,
            /* [retval][out] */ IMgaFCO **pVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_AccessMask )( 
            IMgaPart * This,
            /* [retval][out] */ long *pVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_RegistryMode )( 
            IMgaPart * This,
            /* [retval][out] */ VARIANT_BOOL *own);
        
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_RegistryMode )( 
            IMgaPart * This,
            /* [in] */ VARIANT_BOOL own);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_RegistryNode )( 
            IMgaPart * This,
            /* [in] */ BSTR path,
            /* [retval][out] */ IMgaRegNode **pVal);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetRegistryNodeDisp )( 
            IMgaPart * This,
            /* [in] */ BSTR path,
            /* [retval][out] */ IMgaRegNode **pVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Registry )( 
            IMgaPart * This,
            /* [defaultvalue][in] */ VARIANT_BOOL virtuals,
            /* [retval][out] */ IMgaRegNodes **pVal);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetRegistryDisp )( 
            IMgaPart * This,
            /* [defaultvalue][in] */ VARIANT_BOOL virtuals,
            /* [retval][out] */ IMgaRegNodes **pVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_RegistryValue )( 
            IMgaPart * This,
            /* [in] */ BSTR path,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_RegistryValue )( 
            IMgaPart * This,
            /* [in] */ BSTR path,
            /* [in] */ BSTR newval);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetRegistryValueDisp )( 
            IMgaPart * This,
            /* [in] */ BSTR path,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *SetRegistryValueDisp )( 
            IMgaPart * This,
            /* [in] */ BSTR path,
            /* [in] */ BSTR newval);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetGmeAttrs )( 
            IMgaPart * This,
            /* [out] */ BSTR *Icon,
            /* [out] */ long *xpos,
            /* [out] */ long *ypos);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *SetGmeAttrs )( 
            IMgaPart * This,
            /* [in] */ BSTR Icon,
            /* [in] */ long xpos,
            /* [in] */ long ypos);
        
        END_INTERFACE
    } IMgaPartVtbl;

    interface IMgaPart
    {
        CONST_VTBL struct IMgaPartVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IMgaPart_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IMgaPart_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IMgaPart_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IMgaPart_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IMgaPart_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IMgaPart_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IMgaPart_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IMgaPart_get_Model(This,pVal)	\
    ( (This)->lpVtbl -> get_Model(This,pVal) ) 

#define IMgaPart_get_Meta(This,pVal)	\
    ( (This)->lpVtbl -> get_Meta(This,pVal) ) 

#define IMgaPart_get_MetaAspect(This,pVal)	\
    ( (This)->lpVtbl -> get_MetaAspect(This,pVal) ) 

#define IMgaPart_get_MetaRole(This,pVal)	\
    ( (This)->lpVtbl -> get_MetaRole(This,pVal) ) 

#define IMgaPart_get_FCO(This,pVal)	\
    ( (This)->lpVtbl -> get_FCO(This,pVal) ) 

#define IMgaPart_get_AccessMask(This,pVal)	\
    ( (This)->lpVtbl -> get_AccessMask(This,pVal) ) 

#define IMgaPart_get_RegistryMode(This,own)	\
    ( (This)->lpVtbl -> get_RegistryMode(This,own) ) 

#define IMgaPart_put_RegistryMode(This,own)	\
    ( (This)->lpVtbl -> put_RegistryMode(This,own) ) 

#define IMgaPart_get_RegistryNode(This,path,pVal)	\
    ( (This)->lpVtbl -> get_RegistryNode(This,path,pVal) ) 

#define IMgaPart_GetRegistryNodeDisp(This,path,pVal)	\
    ( (This)->lpVtbl -> GetRegistryNodeDisp(This,path,pVal) ) 

#define IMgaPart_get_Registry(This,virtuals,pVal)	\
    ( (This)->lpVtbl -> get_Registry(This,virtuals,pVal) ) 

#define IMgaPart_GetRegistryDisp(This,virtuals,pVal)	\
    ( (This)->lpVtbl -> GetRegistryDisp(This,virtuals,pVal) ) 

#define IMgaPart_get_RegistryValue(This,path,pVal)	\
    ( (This)->lpVtbl -> get_RegistryValue(This,path,pVal) ) 

#define IMgaPart_put_RegistryValue(This,path,newval)	\
    ( (This)->lpVtbl -> put_RegistryValue(This,path,newval) ) 

#define IMgaPart_GetRegistryValueDisp(This,path,pVal)	\
    ( (This)->lpVtbl -> GetRegistryValueDisp(This,path,pVal) ) 

#define IMgaPart_SetRegistryValueDisp(This,path,newval)	\
    ( (This)->lpVtbl -> SetRegistryValueDisp(This,path,newval) ) 

#define IMgaPart_GetGmeAttrs(This,Icon,xpos,ypos)	\
    ( (This)->lpVtbl -> GetGmeAttrs(This,Icon,xpos,ypos) ) 

#define IMgaPart_SetGmeAttrs(This,Icon,xpos,ypos)	\
    ( (This)->lpVtbl -> SetGmeAttrs(This,Icon,xpos,ypos) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IMgaPart_INTERFACE_DEFINED__ */


#ifndef __IMgaReference_INTERFACE_DEFINED__
#define __IMgaReference_INTERFACE_DEFINED__

/* interface IMgaReference */
/* [unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_IMgaReference;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("83BA3233-B758-11D3-ABAE-000000000000")
    IMgaReference : public IMgaFCO
    {
    public:
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Referred( 
            /* [retval][out] */ IMgaFCO **pVal) = 0;
        
        virtual /* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_Referred( 
            /* [in] */ IMgaFCO *newVal) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_RefAspect( 
            /* [retval][out] */ IMgaMetaAspect **pVal) = 0;
        
        virtual /* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_RefAspect( 
            /* [in] */ IMgaMetaAspect *newVal) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_UsedByConns( 
            /* [retval][out] */ IMgaConnPoints **pVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE CompareToBase( 
            /* [out] */ short *status) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE RevertToBase( void) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE ClearRef( void) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IMgaReferenceVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IMgaReference * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IMgaReference * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IMgaReference * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IMgaReference * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IMgaReference * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IMgaReference * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IMgaReference * This,
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
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Status )( 
            IMgaReference * This,
            /* [retval][out] */ long *p);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_IsWritable )( 
            IMgaReference * This,
            /* [retval][out] */ VARIANT_BOOL *p);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ID )( 
            IMgaReference * This,
            /* [retval][out] */ ID_type *pVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Name )( 
            IMgaReference * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Name )( 
            IMgaReference * This,
            /* [in] */ BSTR newVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_AbsPath )( 
            IMgaReference * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_MetaBase )( 
            IMgaReference * This,
            /* [retval][out] */ IMgaMetaBase **pVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ObjType )( 
            IMgaReference * This,
            /* [retval][out] */ objtype_enum *pVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Project )( 
            IMgaReference * This,
            /* [retval][out] */ IMgaProject **pVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Territory )( 
            IMgaReference * This,
            /* [retval][out] */ IMgaTerritory **pVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_IsEqual )( 
            IMgaReference * This,
            /* [in] */ IMgaObject *o,
            /* [retval][out] */ VARIANT_BOOL *pVal);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetIsEqualDisp )( 
            IMgaReference * This,
            /* [in] */ IMgaObject *o,
            /* [retval][out] */ VARIANT_BOOL *pVal);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetParent )( 
            IMgaReference * This,
            /* [out] */ IMgaObject **pVal,
            /* [defaultvalue][out] */ objtype_enum *objtype);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *CheckProject )( 
            IMgaReference * This,
            /* [in] */ IMgaProject *project);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *DestroyObject )( 
            IMgaReference * This);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Open )( 
            IMgaReference * This,
            /* [defaultvalue][in] */ openmode mode);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Close )( 
            IMgaReference * This);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Associate )( 
            IMgaReference * This,
            /* [in] */ VARIANT userdata);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentAssociation )( 
            IMgaReference * This,
            /* [retval][out] */ VARIANT *userdata);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *SendEvent )( 
            IMgaReference * This,
            /* [in] */ long mask);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_RelID )( 
            IMgaReference * This,
            /* [retval][out] */ long *pVal);
        
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_RelID )( 
            IMgaReference * This,
            /* [in] */ long newVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_IsLibObject )( 
            IMgaReference * This,
            /* [retval][out] */ VARIANT_BOOL *pVal);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Check )( 
            IMgaReference * This);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *CheckTree )( 
            IMgaReference * This);
        
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Exempt )( 
            IMgaReference * This,
            /* [in] */ VARIANT_BOOL newVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Exempt )( 
            IMgaReference * This,
            /* [retval][out] */ VARIANT_BOOL *pVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ChildObjects )( 
            IMgaReference * This,
            /* [retval][out] */ IMgaObjects **pVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ChildObjectByRelID )( 
            IMgaReference * This,
            /* [in] */ long relid,
            /* [retval][out] */ IMgaObject **pVal);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetChildObjectByRelIDDisp )( 
            IMgaReference * This,
            /* [in] */ long relid,
            /* [retval][out] */ IMgaObject **pVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ObjectByPath )( 
            IMgaReference * This,
            /* [in] */ BSTR path,
            /* [retval][out] */ IMgaObject **pVal);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetObjectByPathDisp )( 
            IMgaReference * This,
            /* [in] */ BSTR path,
            /* [retval][out] */ IMgaObject **pVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_NthObjectByPath )( 
            IMgaReference * This,
            /* [in] */ long n_th,
            /* [in] */ BSTR path,
            /* [retval][out] */ IMgaObject **pVal);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetNthObjectByPathDisp )( 
            IMgaReference * This,
            /* [in] */ long n_th,
            /* [in] */ BSTR path,
            /* [retval][out] */ IMgaObject **pVal);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *PutReadOnlyAccessWithPropagate )( 
            IMgaReference * This,
            /* [in] */ VARIANT_BOOL pReadOnly);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *PutReadOnlyAccess )( 
            IMgaReference * This,
            /* [in] */ VARIANT_BOOL pReadOnly);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *HasReadOnlyAccess )( 
            IMgaReference * This,
            /* [retval][out] */ VARIANT_BOOL *pReadOnly);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetGuid )( 
            IMgaReference * This,
            /* [out][in] */ long *l1,
            /* [out][in] */ long *l2,
            /* [out][in] */ long *l3,
            /* [out][in] */ long *l4);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *PutGuid )( 
            IMgaReference * This,
            /* [in] */ long l1,
            /* [in] */ long l2,
            /* [in] */ long l3,
            /* [in] */ long l4);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetGuidDisp )( 
            IMgaReference * This,
            /* [retval][out] */ BSTR *guid_str);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *PutGuidDisp )( 
            IMgaReference * This,
            /* [in] */ BSTR guid_str);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Meta )( 
            IMgaReference * This,
            /* [retval][out] */ IMgaMetaFCO **pVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_MetaRole )( 
            IMgaReference * This,
            /* [retval][out] */ IMgaMetaRole **pVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ParentModel )( 
            IMgaReference * This,
            /* [retval][out] */ IMgaModel **pVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ParentFolder )( 
            IMgaReference * This,
            /* [retval][out] */ IMgaFolder **pVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Parts )( 
            IMgaReference * This,
            /* [retval][out] */ IMgaParts **pVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Part )( 
            IMgaReference * This,
            /* [in] */ IMgaMetaAspect *asp,
            /* [retval][out] */ IMgaPart **pVal);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetPartDisp )( 
            IMgaReference * This,
            /* [in] */ IMgaMetaAspect *asp,
            /* [retval][out] */ IMgaPart **pVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_PartByMetaPart )( 
            IMgaReference * This,
            /* [in] */ IMgaMetaPart *part,
            /* [retval][out] */ IMgaPart **pVal);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetPartByMetaPartDisp )( 
            IMgaReference * This,
            /* [in] */ IMgaMetaPart *part,
            /* [retval][out] */ IMgaPart **pVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Attributes )( 
            IMgaReference * This,
            /* [retval][out] */ IMgaAttributes **pVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Attribute )( 
            IMgaReference * This,
            /* [in] */ IMgaMetaAttribute *meta,
            /* [retval][out] */ IMgaAttribute **pVal);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetAttributeDisp )( 
            IMgaReference * This,
            /* [in] */ IMgaMetaAttribute *meta,
            /* [retval][out] */ IMgaAttribute **pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_AttributeByName )( 
            IMgaReference * This,
            /* [in] */ BSTR name,
            /* [retval][out] */ VARIANT *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_AttributeByName )( 
            IMgaReference * This,
            /* [in] */ BSTR name,
            /* [in] */ VARIANT newval);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetAttributeByNameDisp )( 
            IMgaReference * This,
            /* [in] */ BSTR name,
            /* [retval][out] */ VARIANT *pVal);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *SetAttributeByNameDisp )( 
            IMgaReference * This,
            /* [in] */ BSTR name,
            /* [in] */ VARIANT newval);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_StrAttrByName )( 
            IMgaReference * This,
            /* [in] */ BSTR name,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_StrAttrByName )( 
            IMgaReference * This,
            /* [in] */ BSTR name,
            /* [in] */ BSTR newval);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetStrAttrByNameDisp )( 
            IMgaReference * This,
            /* [in] */ BSTR name,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *SetStrAttrByNameDisp )( 
            IMgaReference * This,
            /* [in] */ BSTR name,
            /* [in] */ BSTR newval);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_IntAttrByName )( 
            IMgaReference * This,
            /* [in] */ BSTR name,
            /* [retval][out] */ long *pVal);
        
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_IntAttrByName )( 
            IMgaReference * This,
            /* [in] */ BSTR name,
            /* [in] */ long newval);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetIntAttrByNameDisp )( 
            IMgaReference * This,
            /* [in] */ BSTR name,
            /* [retval][out] */ long *pVal);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *SetIntAttrByNameDisp )( 
            IMgaReference * This,
            /* [in] */ BSTR name,
            /* [in] */ long newval);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_FloatAttrByName )( 
            IMgaReference * This,
            /* [in] */ BSTR name,
            /* [retval][out] */ double *pVal);
        
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_FloatAttrByName )( 
            IMgaReference * This,
            /* [in] */ BSTR name,
            /* [in] */ double newval);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetFloatAttrByNameDisp )( 
            IMgaReference * This,
            /* [in] */ BSTR name,
            /* [retval][out] */ double *pVal);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *SetFloatAttrByNameDisp )( 
            IMgaReference * This,
            /* [in] */ BSTR name,
            /* [in] */ double newval);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_BoolAttrByName )( 
            IMgaReference * This,
            /* [in] */ BSTR name,
            /* [retval][out] */ VARIANT_BOOL *pVal);
        
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_BoolAttrByName )( 
            IMgaReference * This,
            /* [in] */ BSTR name,
            /* [in] */ VARIANT_BOOL newval);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetBoolAttrByNameDisp )( 
            IMgaReference * This,
            /* [in] */ BSTR name,
            /* [retval][out] */ VARIANT_BOOL *pVal);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *SetBoolAttrByNameDisp )( 
            IMgaReference * This,
            /* [in] */ BSTR name,
            /* [in] */ VARIANT_BOOL newval);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_RefAttrByName )( 
            IMgaReference * This,
            /* [in] */ BSTR name,
            /* [retval][out] */ IMgaFCO **pVal);
        
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_RefAttrByName )( 
            IMgaReference * This,
            /* [in] */ BSTR name,
            /* [in] */ IMgaFCO *newval);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetRefAttrByNameDisp )( 
            IMgaReference * This,
            /* [in] */ BSTR name,
            /* [retval][out] */ IMgaFCO **pVal);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *SetRefAttrByNameDisp )( 
            IMgaReference * This,
            /* [in] */ BSTR name,
            /* [in] */ IMgaFCO *newval);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *ClearAttrByName )( 
            IMgaReference * This,
            /* [in] */ BSTR name);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_RegistryNode )( 
            IMgaReference * This,
            /* [in] */ BSTR path,
            /* [retval][out] */ IMgaRegNode **pVal);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetRegistryNodeDisp )( 
            IMgaReference * This,
            /* [in] */ BSTR path,
            /* [retval][out] */ IMgaRegNode **pVal);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Registry )( 
            IMgaReference * This,
            /* [defaultvalue][in] */ VARIANT_BOOL virtuals,
            /* [retval][out] */ IMgaRegNodes **pVal);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetRegistryDisp )( 
            IMgaReference * This,
            /* [defaultvalue][in] */ VARIANT_BOOL virtuals,
            /* [retval][out] */ IMgaRegNodes **pVal);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_RegistryValue )( 
            IMgaReference * This,
            /* [in] */ BSTR path,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_RegistryValue )( 
            IMgaReference * This,
            /* [in] */ BSTR path,
            /* [in] */ BSTR newval);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetRegistryValueDisp )( 
            IMgaReference * This,
            /* [in] */ BSTR path,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *SetRegistryValueDisp )( 
            IMgaReference * This,
            /* [in] */ BSTR path,
            /* [in] */ BSTR newval);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Constraints )( 
            IMgaReference * This,
            /* [in] */ VARIANT_BOOL includemeta,
            /* [retval][out] */ IMgaConstraints **pVal);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetConstraintsDisp )( 
            IMgaReference * This,
            /* [in] */ VARIANT_BOOL includemeta,
            /* [retval][out] */ IMgaConstraints **pVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *AddConstraint )( 
            IMgaReference * This,
            /* [in] */ IMgaConstraint *constraint);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *DefineConstraint )( 
            IMgaReference * This,
            /* [in] */ BSTR name,
            /* [in] */ long mask,
            /* [in] */ BSTR expr,
            /* [out] */ IMgaConstraint **nconstraint);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_DerivedFrom )( 
            IMgaReference * This,
            /* [retval][out] */ IMgaFCO **pVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_DerivedObjects )( 
            IMgaReference * This,
            /* [retval][out] */ IMgaFCOs **pVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Type )( 
            IMgaReference * This,
            /* [retval][out] */ IMgaFCO **pVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_BaseType )( 
            IMgaReference * This,
            /* [retval][out] */ IMgaFCO **pVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ArcheType )( 
            IMgaReference * This,
            /* [retval][out] */ IMgaFCO **pVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_IsInstance )( 
            IMgaReference * This,
            /* [retval][out] */ VARIANT_BOOL *pVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_IsPrimaryDerived )( 
            IMgaReference * This,
            /* [retval][out] */ VARIANT_BOOL *pVal);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *AttachToArcheType )( 
            IMgaReference * This,
            /* [in] */ IMgaFCO *newtype,
            /* [in] */ VARIANT_BOOL instance);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *DetachFromArcheType )( 
            IMgaReference * This);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetAbsMetaPath )( 
            IMgaReference * This,
            /* [out][in] */ BSTR *abspath);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetRelMetaPath )( 
            IMgaReference * This,
            /* [in] */ IMgaFCO *begfco,
            /* [out][in] */ BSTR *relpath,
            /* [defaultvalue][in] */ IMgaFCOs *refs);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_PartOfConns )( 
            IMgaReference * This,
            /* [retval][out] */ IMgaConnPoints **pVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_MemberOfSets )( 
            IMgaReference * This,
            /* [retval][out] */ IMgaFCOs **pVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ReferencedBy )( 
            IMgaReference * This,
            /* [retval][out] */ IMgaFCOs **pVal);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *CreateCollection )( 
            IMgaReference * This,
            /* [out][in] */ IMgaFCOs **pVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_RootFCO )( 
            IMgaReference * This,
            /* [retval][out] */ IMgaFCO **pVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Referred )( 
            IMgaReference * This,
            /* [retval][out] */ IMgaFCO **pVal);
        
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Referred )( 
            IMgaReference * This,
            /* [in] */ IMgaFCO *newVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_RefAspect )( 
            IMgaReference * This,
            /* [retval][out] */ IMgaMetaAspect **pVal);
        
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_RefAspect )( 
            IMgaReference * This,
            /* [in] */ IMgaMetaAspect *newVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_UsedByConns )( 
            IMgaReference * This,
            /* [retval][out] */ IMgaConnPoints **pVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *CompareToBase )( 
            IMgaReference * This,
            /* [out] */ short *status);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *RevertToBase )( 
            IMgaReference * This);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *ClearRef )( 
            IMgaReference * This);
        
        END_INTERFACE
    } IMgaReferenceVtbl;

    interface IMgaReference
    {
        CONST_VTBL struct IMgaReferenceVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IMgaReference_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IMgaReference_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IMgaReference_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IMgaReference_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IMgaReference_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IMgaReference_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IMgaReference_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IMgaReference_get_Status(This,p)	\
    ( (This)->lpVtbl -> get_Status(This,p) ) 

#define IMgaReference_get_IsWritable(This,p)	\
    ( (This)->lpVtbl -> get_IsWritable(This,p) ) 

#define IMgaReference_get_ID(This,pVal)	\
    ( (This)->lpVtbl -> get_ID(This,pVal) ) 

#define IMgaReference_get_Name(This,pVal)	\
    ( (This)->lpVtbl -> get_Name(This,pVal) ) 

#define IMgaReference_put_Name(This,newVal)	\
    ( (This)->lpVtbl -> put_Name(This,newVal) ) 

#define IMgaReference_get_AbsPath(This,pVal)	\
    ( (This)->lpVtbl -> get_AbsPath(This,pVal) ) 

#define IMgaReference_get_MetaBase(This,pVal)	\
    ( (This)->lpVtbl -> get_MetaBase(This,pVal) ) 

#define IMgaReference_get_ObjType(This,pVal)	\
    ( (This)->lpVtbl -> get_ObjType(This,pVal) ) 

#define IMgaReference_get_Project(This,pVal)	\
    ( (This)->lpVtbl -> get_Project(This,pVal) ) 

#define IMgaReference_get_Territory(This,pVal)	\
    ( (This)->lpVtbl -> get_Territory(This,pVal) ) 

#define IMgaReference_get_IsEqual(This,o,pVal)	\
    ( (This)->lpVtbl -> get_IsEqual(This,o,pVal) ) 

#define IMgaReference_GetIsEqualDisp(This,o,pVal)	\
    ( (This)->lpVtbl -> GetIsEqualDisp(This,o,pVal) ) 

#define IMgaReference_GetParent(This,pVal,objtype)	\
    ( (This)->lpVtbl -> GetParent(This,pVal,objtype) ) 

#define IMgaReference_CheckProject(This,project)	\
    ( (This)->lpVtbl -> CheckProject(This,project) ) 

#define IMgaReference_DestroyObject(This)	\
    ( (This)->lpVtbl -> DestroyObject(This) ) 

#define IMgaReference_Open(This,mode)	\
    ( (This)->lpVtbl -> Open(This,mode) ) 

#define IMgaReference_Close(This)	\
    ( (This)->lpVtbl -> Close(This) ) 

#define IMgaReference_Associate(This,userdata)	\
    ( (This)->lpVtbl -> Associate(This,userdata) ) 

#define IMgaReference_get_CurrentAssociation(This,userdata)	\
    ( (This)->lpVtbl -> get_CurrentAssociation(This,userdata) ) 

#define IMgaReference_SendEvent(This,mask)	\
    ( (This)->lpVtbl -> SendEvent(This,mask) ) 

#define IMgaReference_get_RelID(This,pVal)	\
    ( (This)->lpVtbl -> get_RelID(This,pVal) ) 

#define IMgaReference_put_RelID(This,newVal)	\
    ( (This)->lpVtbl -> put_RelID(This,newVal) ) 

#define IMgaReference_get_IsLibObject(This,pVal)	\
    ( (This)->lpVtbl -> get_IsLibObject(This,pVal) ) 

#define IMgaReference_Check(This)	\
    ( (This)->lpVtbl -> Check(This) ) 

#define IMgaReference_CheckTree(This)	\
    ( (This)->lpVtbl -> CheckTree(This) ) 

#define IMgaReference_put_Exempt(This,newVal)	\
    ( (This)->lpVtbl -> put_Exempt(This,newVal) ) 

#define IMgaReference_get_Exempt(This,pVal)	\
    ( (This)->lpVtbl -> get_Exempt(This,pVal) ) 

#define IMgaReference_get_ChildObjects(This,pVal)	\
    ( (This)->lpVtbl -> get_ChildObjects(This,pVal) ) 

#define IMgaReference_get_ChildObjectByRelID(This,relid,pVal)	\
    ( (This)->lpVtbl -> get_ChildObjectByRelID(This,relid,pVal) ) 

#define IMgaReference_GetChildObjectByRelIDDisp(This,relid,pVal)	\
    ( (This)->lpVtbl -> GetChildObjectByRelIDDisp(This,relid,pVal) ) 

#define IMgaReference_get_ObjectByPath(This,path,pVal)	\
    ( (This)->lpVtbl -> get_ObjectByPath(This,path,pVal) ) 

#define IMgaReference_GetObjectByPathDisp(This,path,pVal)	\
    ( (This)->lpVtbl -> GetObjectByPathDisp(This,path,pVal) ) 

#define IMgaReference_get_NthObjectByPath(This,n_th,path,pVal)	\
    ( (This)->lpVtbl -> get_NthObjectByPath(This,n_th,path,pVal) ) 

#define IMgaReference_GetNthObjectByPathDisp(This,n_th,path,pVal)	\
    ( (This)->lpVtbl -> GetNthObjectByPathDisp(This,n_th,path,pVal) ) 

#define IMgaReference_PutReadOnlyAccessWithPropagate(This,pReadOnly)	\
    ( (This)->lpVtbl -> PutReadOnlyAccessWithPropagate(This,pReadOnly) ) 

#define IMgaReference_PutReadOnlyAccess(This,pReadOnly)	\
    ( (This)->lpVtbl -> PutReadOnlyAccess(This,pReadOnly) ) 

#define IMgaReference_HasReadOnlyAccess(This,pReadOnly)	\
    ( (This)->lpVtbl -> HasReadOnlyAccess(This,pReadOnly) ) 

#define IMgaReference_GetGuid(This,l1,l2,l3,l4)	\
    ( (This)->lpVtbl -> GetGuid(This,l1,l2,l3,l4) ) 

#define IMgaReference_PutGuid(This,l1,l2,l3,l4)	\
    ( (This)->lpVtbl -> PutGuid(This,l1,l2,l3,l4) ) 

#define IMgaReference_GetGuidDisp(This,guid_str)	\
    ( (This)->lpVtbl -> GetGuidDisp(This,guid_str) ) 

#define IMgaReference_PutGuidDisp(This,guid_str)	\
    ( (This)->lpVtbl -> PutGuidDisp(This,guid_str) ) 


#define IMgaReference_get_Meta(This,pVal)	\
    ( (This)->lpVtbl -> get_Meta(This,pVal) ) 

#define IMgaReference_get_MetaRole(This,pVal)	\
    ( (This)->lpVtbl -> get_MetaRole(This,pVal) ) 

#define IMgaReference_get_ParentModel(This,pVal)	\
    ( (This)->lpVtbl -> get_ParentModel(This,pVal) ) 

#define IMgaReference_get_ParentFolder(This,pVal)	\
    ( (This)->lpVtbl -> get_ParentFolder(This,pVal) ) 

#define IMgaReference_get_Parts(This,pVal)	\
    ( (This)->lpVtbl -> get_Parts(This,pVal) ) 

#define IMgaReference_get_Part(This,asp,pVal)	\
    ( (This)->lpVtbl -> get_Part(This,asp,pVal) ) 

#define IMgaReference_GetPartDisp(This,asp,pVal)	\
    ( (This)->lpVtbl -> GetPartDisp(This,asp,pVal) ) 

#define IMgaReference_get_PartByMetaPart(This,part,pVal)	\
    ( (This)->lpVtbl -> get_PartByMetaPart(This,part,pVal) ) 

#define IMgaReference_GetPartByMetaPartDisp(This,part,pVal)	\
    ( (This)->lpVtbl -> GetPartByMetaPartDisp(This,part,pVal) ) 

#define IMgaReference_get_Attributes(This,pVal)	\
    ( (This)->lpVtbl -> get_Attributes(This,pVal) ) 

#define IMgaReference_get_Attribute(This,meta,pVal)	\
    ( (This)->lpVtbl -> get_Attribute(This,meta,pVal) ) 

#define IMgaReference_GetAttributeDisp(This,meta,pVal)	\
    ( (This)->lpVtbl -> GetAttributeDisp(This,meta,pVal) ) 

#define IMgaReference_get_AttributeByName(This,name,pVal)	\
    ( (This)->lpVtbl -> get_AttributeByName(This,name,pVal) ) 

#define IMgaReference_put_AttributeByName(This,name,newval)	\
    ( (This)->lpVtbl -> put_AttributeByName(This,name,newval) ) 

#define IMgaReference_GetAttributeByNameDisp(This,name,pVal)	\
    ( (This)->lpVtbl -> GetAttributeByNameDisp(This,name,pVal) ) 

#define IMgaReference_SetAttributeByNameDisp(This,name,newval)	\
    ( (This)->lpVtbl -> SetAttributeByNameDisp(This,name,newval) ) 

#define IMgaReference_get_StrAttrByName(This,name,pVal)	\
    ( (This)->lpVtbl -> get_StrAttrByName(This,name,pVal) ) 

#define IMgaReference_put_StrAttrByName(This,name,newval)	\
    ( (This)->lpVtbl -> put_StrAttrByName(This,name,newval) ) 

#define IMgaReference_GetStrAttrByNameDisp(This,name,pVal)	\
    ( (This)->lpVtbl -> GetStrAttrByNameDisp(This,name,pVal) ) 

#define IMgaReference_SetStrAttrByNameDisp(This,name,newval)	\
    ( (This)->lpVtbl -> SetStrAttrByNameDisp(This,name,newval) ) 

#define IMgaReference_get_IntAttrByName(This,name,pVal)	\
    ( (This)->lpVtbl -> get_IntAttrByName(This,name,pVal) ) 

#define IMgaReference_put_IntAttrByName(This,name,newval)	\
    ( (This)->lpVtbl -> put_IntAttrByName(This,name,newval) ) 

#define IMgaReference_GetIntAttrByNameDisp(This,name,pVal)	\
    ( (This)->lpVtbl -> GetIntAttrByNameDisp(This,name,pVal) ) 

#define IMgaReference_SetIntAttrByNameDisp(This,name,newval)	\
    ( (This)->lpVtbl -> SetIntAttrByNameDisp(This,name,newval) ) 

#define IMgaReference_get_FloatAttrByName(This,name,pVal)	\
    ( (This)->lpVtbl -> get_FloatAttrByName(This,name,pVal) ) 

#define IMgaReference_put_FloatAttrByName(This,name,newval)	\
    ( (This)->lpVtbl -> put_FloatAttrByName(This,name,newval) ) 

#define IMgaReference_GetFloatAttrByNameDisp(This,name,pVal)	\
    ( (This)->lpVtbl -> GetFloatAttrByNameDisp(This,name,pVal) ) 

#define IMgaReference_SetFloatAttrByNameDisp(This,name,newval)	\
    ( (This)->lpVtbl -> SetFloatAttrByNameDisp(This,name,newval) ) 

#define IMgaReference_get_BoolAttrByName(This,name,pVal)	\
    ( (This)->lpVtbl -> get_BoolAttrByName(This,name,pVal) ) 

#define IMgaReference_put_BoolAttrByName(This,name,newval)	\
    ( (This)->lpVtbl -> put_BoolAttrByName(This,name,newval) ) 

#define IMgaReference_GetBoolAttrByNameDisp(This,name,pVal)	\
    ( (This)->lpVtbl -> GetBoolAttrByNameDisp(This,name,pVal) ) 

#define IMgaReference_SetBoolAttrByNameDisp(This,name,newval)	\
    ( (This)->lpVtbl -> SetBoolAttrByNameDisp(This,name,newval) ) 

#define IMgaReference_get_RefAttrByName(This,name,pVal)	\
    ( (This)->lpVtbl -> get_RefAttrByName(This,name,pVal) ) 

#define IMgaReference_put_RefAttrByName(This,name,newval)	\
    ( (This)->lpVtbl -> put_RefAttrByName(This,name,newval) ) 

#define IMgaReference_GetRefAttrByNameDisp(This,name,pVal)	\
    ( (This)->lpVtbl -> GetRefAttrByNameDisp(This,name,pVal) ) 

#define IMgaReference_SetRefAttrByNameDisp(This,name,newval)	\
    ( (This)->lpVtbl -> SetRefAttrByNameDisp(This,name,newval) ) 

#define IMgaReference_ClearAttrByName(This,name)	\
    ( (This)->lpVtbl -> ClearAttrByName(This,name) ) 

#define IMgaReference_get_RegistryNode(This,path,pVal)	\
    ( (This)->lpVtbl -> get_RegistryNode(This,path,pVal) ) 

#define IMgaReference_GetRegistryNodeDisp(This,path,pVal)	\
    ( (This)->lpVtbl -> GetRegistryNodeDisp(This,path,pVal) ) 

#define IMgaReference_get_Registry(This,virtuals,pVal)	\
    ( (This)->lpVtbl -> get_Registry(This,virtuals,pVal) ) 

#define IMgaReference_GetRegistryDisp(This,virtuals,pVal)	\
    ( (This)->lpVtbl -> GetRegistryDisp(This,virtuals,pVal) ) 

#define IMgaReference_get_RegistryValue(This,path,pVal)	\
    ( (This)->lpVtbl -> get_RegistryValue(This,path,pVal) ) 

#define IMgaReference_put_RegistryValue(This,path,newval)	\
    ( (This)->lpVtbl -> put_RegistryValue(This,path,newval) ) 

#define IMgaReference_GetRegistryValueDisp(This,path,pVal)	\
    ( (This)->lpVtbl -> GetRegistryValueDisp(This,path,pVal) ) 

#define IMgaReference_SetRegistryValueDisp(This,path,newval)	\
    ( (This)->lpVtbl -> SetRegistryValueDisp(This,path,newval) ) 

#define IMgaReference_get_Constraints(This,includemeta,pVal)	\
    ( (This)->lpVtbl -> get_Constraints(This,includemeta,pVal) ) 

#define IMgaReference_GetConstraintsDisp(This,includemeta,pVal)	\
    ( (This)->lpVtbl -> GetConstraintsDisp(This,includemeta,pVal) ) 

#define IMgaReference_AddConstraint(This,constraint)	\
    ( (This)->lpVtbl -> AddConstraint(This,constraint) ) 

#define IMgaReference_DefineConstraint(This,name,mask,expr,nconstraint)	\
    ( (This)->lpVtbl -> DefineConstraint(This,name,mask,expr,nconstraint) ) 

#define IMgaReference_get_DerivedFrom(This,pVal)	\
    ( (This)->lpVtbl -> get_DerivedFrom(This,pVal) ) 

#define IMgaReference_get_DerivedObjects(This,pVal)	\
    ( (This)->lpVtbl -> get_DerivedObjects(This,pVal) ) 

#define IMgaReference_get_Type(This,pVal)	\
    ( (This)->lpVtbl -> get_Type(This,pVal) ) 

#define IMgaReference_get_BaseType(This,pVal)	\
    ( (This)->lpVtbl -> get_BaseType(This,pVal) ) 

#define IMgaReference_get_ArcheType(This,pVal)	\
    ( (This)->lpVtbl -> get_ArcheType(This,pVal) ) 

#define IMgaReference_get_IsInstance(This,pVal)	\
    ( (This)->lpVtbl -> get_IsInstance(This,pVal) ) 

#define IMgaReference_get_IsPrimaryDerived(This,pVal)	\
    ( (This)->lpVtbl -> get_IsPrimaryDerived(This,pVal) ) 

#define IMgaReference_AttachToArcheType(This,newtype,instance)	\
    ( (This)->lpVtbl -> AttachToArcheType(This,newtype,instance) ) 

#define IMgaReference_DetachFromArcheType(This)	\
    ( (This)->lpVtbl -> DetachFromArcheType(This) ) 

#define IMgaReference_GetAbsMetaPath(This,abspath)	\
    ( (This)->lpVtbl -> GetAbsMetaPath(This,abspath) ) 

#define IMgaReference_GetRelMetaPath(This,begfco,relpath,refs)	\
    ( (This)->lpVtbl -> GetRelMetaPath(This,begfco,relpath,refs) ) 

#define IMgaReference_get_PartOfConns(This,pVal)	\
    ( (This)->lpVtbl -> get_PartOfConns(This,pVal) ) 

#define IMgaReference_get_MemberOfSets(This,pVal)	\
    ( (This)->lpVtbl -> get_MemberOfSets(This,pVal) ) 

#define IMgaReference_get_ReferencedBy(This,pVal)	\
    ( (This)->lpVtbl -> get_ReferencedBy(This,pVal) ) 

#define IMgaReference_CreateCollection(This,pVal)	\
    ( (This)->lpVtbl -> CreateCollection(This,pVal) ) 

#define IMgaReference_get_RootFCO(This,pVal)	\
    ( (This)->lpVtbl -> get_RootFCO(This,pVal) ) 


#define IMgaReference_get_Referred(This,pVal)	\
    ( (This)->lpVtbl -> get_Referred(This,pVal) ) 

#define IMgaReference_put_Referred(This,newVal)	\
    ( (This)->lpVtbl -> put_Referred(This,newVal) ) 

#define IMgaReference_get_RefAspect(This,pVal)	\
    ( (This)->lpVtbl -> get_RefAspect(This,pVal) ) 

#define IMgaReference_put_RefAspect(This,newVal)	\
    ( (This)->lpVtbl -> put_RefAspect(This,newVal) ) 

#define IMgaReference_get_UsedByConns(This,pVal)	\
    ( (This)->lpVtbl -> get_UsedByConns(This,pVal) ) 

#define IMgaReference_CompareToBase(This,status)	\
    ( (This)->lpVtbl -> CompareToBase(This,status) ) 

#define IMgaReference_RevertToBase(This)	\
    ( (This)->lpVtbl -> RevertToBase(This) ) 

#define IMgaReference_ClearRef(This)	\
    ( (This)->lpVtbl -> ClearRef(This) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IMgaReference_INTERFACE_DEFINED__ */


#ifndef __IMgaSet_INTERFACE_DEFINED__
#define __IMgaSet_INTERFACE_DEFINED__

/* interface IMgaSet */
/* [unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_IMgaSet;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("83BA3235-B758-11D3-ABAE-000000000000")
    IMgaSet : public IMgaFCO
    {
    public:
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE AddMember( 
            /* [in] */ IMgaFCO *mem) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE RemoveMember( 
            /* [in] */ IMgaFCO *member) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE RemoveAll( void) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Members( 
            /* [retval][out] */ IMgaFCOs **pVal) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_IsMember( 
            /* [in] */ IMgaFCO *obj,
            /* [retval][out] */ VARIANT_BOOL *pVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE CompareToBase( 
            /* [out] */ short *status) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE RevertToBase( void) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetIsMemberDisp( 
            /* [in] */ IMgaFCO *obj,
            /* [retval][out] */ VARIANT_BOOL *pVal) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IMgaSetVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IMgaSet * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IMgaSet * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IMgaSet * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IMgaSet * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IMgaSet * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IMgaSet * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IMgaSet * This,
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
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Status )( 
            IMgaSet * This,
            /* [retval][out] */ long *p);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_IsWritable )( 
            IMgaSet * This,
            /* [retval][out] */ VARIANT_BOOL *p);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ID )( 
            IMgaSet * This,
            /* [retval][out] */ ID_type *pVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Name )( 
            IMgaSet * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Name )( 
            IMgaSet * This,
            /* [in] */ BSTR newVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_AbsPath )( 
            IMgaSet * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_MetaBase )( 
            IMgaSet * This,
            /* [retval][out] */ IMgaMetaBase **pVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ObjType )( 
            IMgaSet * This,
            /* [retval][out] */ objtype_enum *pVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Project )( 
            IMgaSet * This,
            /* [retval][out] */ IMgaProject **pVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Territory )( 
            IMgaSet * This,
            /* [retval][out] */ IMgaTerritory **pVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_IsEqual )( 
            IMgaSet * This,
            /* [in] */ IMgaObject *o,
            /* [retval][out] */ VARIANT_BOOL *pVal);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetIsEqualDisp )( 
            IMgaSet * This,
            /* [in] */ IMgaObject *o,
            /* [retval][out] */ VARIANT_BOOL *pVal);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetParent )( 
            IMgaSet * This,
            /* [out] */ IMgaObject **pVal,
            /* [defaultvalue][out] */ objtype_enum *objtype);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *CheckProject )( 
            IMgaSet * This,
            /* [in] */ IMgaProject *project);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *DestroyObject )( 
            IMgaSet * This);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Open )( 
            IMgaSet * This,
            /* [defaultvalue][in] */ openmode mode);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Close )( 
            IMgaSet * This);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Associate )( 
            IMgaSet * This,
            /* [in] */ VARIANT userdata);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentAssociation )( 
            IMgaSet * This,
            /* [retval][out] */ VARIANT *userdata);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *SendEvent )( 
            IMgaSet * This,
            /* [in] */ long mask);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_RelID )( 
            IMgaSet * This,
            /* [retval][out] */ long *pVal);
        
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_RelID )( 
            IMgaSet * This,
            /* [in] */ long newVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_IsLibObject )( 
            IMgaSet * This,
            /* [retval][out] */ VARIANT_BOOL *pVal);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Check )( 
            IMgaSet * This);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *CheckTree )( 
            IMgaSet * This);
        
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Exempt )( 
            IMgaSet * This,
            /* [in] */ VARIANT_BOOL newVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Exempt )( 
            IMgaSet * This,
            /* [retval][out] */ VARIANT_BOOL *pVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ChildObjects )( 
            IMgaSet * This,
            /* [retval][out] */ IMgaObjects **pVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ChildObjectByRelID )( 
            IMgaSet * This,
            /* [in] */ long relid,
            /* [retval][out] */ IMgaObject **pVal);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetChildObjectByRelIDDisp )( 
            IMgaSet * This,
            /* [in] */ long relid,
            /* [retval][out] */ IMgaObject **pVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ObjectByPath )( 
            IMgaSet * This,
            /* [in] */ BSTR path,
            /* [retval][out] */ IMgaObject **pVal);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetObjectByPathDisp )( 
            IMgaSet * This,
            /* [in] */ BSTR path,
            /* [retval][out] */ IMgaObject **pVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_NthObjectByPath )( 
            IMgaSet * This,
            /* [in] */ long n_th,
            /* [in] */ BSTR path,
            /* [retval][out] */ IMgaObject **pVal);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetNthObjectByPathDisp )( 
            IMgaSet * This,
            /* [in] */ long n_th,
            /* [in] */ BSTR path,
            /* [retval][out] */ IMgaObject **pVal);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *PutReadOnlyAccessWithPropagate )( 
            IMgaSet * This,
            /* [in] */ VARIANT_BOOL pReadOnly);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *PutReadOnlyAccess )( 
            IMgaSet * This,
            /* [in] */ VARIANT_BOOL pReadOnly);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *HasReadOnlyAccess )( 
            IMgaSet * This,
            /* [retval][out] */ VARIANT_BOOL *pReadOnly);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetGuid )( 
            IMgaSet * This,
            /* [out][in] */ long *l1,
            /* [out][in] */ long *l2,
            /* [out][in] */ long *l3,
            /* [out][in] */ long *l4);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *PutGuid )( 
            IMgaSet * This,
            /* [in] */ long l1,
            /* [in] */ long l2,
            /* [in] */ long l3,
            /* [in] */ long l4);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetGuidDisp )( 
            IMgaSet * This,
            /* [retval][out] */ BSTR *guid_str);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *PutGuidDisp )( 
            IMgaSet * This,
            /* [in] */ BSTR guid_str);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Meta )( 
            IMgaSet * This,
            /* [retval][out] */ IMgaMetaFCO **pVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_MetaRole )( 
            IMgaSet * This,
            /* [retval][out] */ IMgaMetaRole **pVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ParentModel )( 
            IMgaSet * This,
            /* [retval][out] */ IMgaModel **pVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ParentFolder )( 
            IMgaSet * This,
            /* [retval][out] */ IMgaFolder **pVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Parts )( 
            IMgaSet * This,
            /* [retval][out] */ IMgaParts **pVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Part )( 
            IMgaSet * This,
            /* [in] */ IMgaMetaAspect *asp,
            /* [retval][out] */ IMgaPart **pVal);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetPartDisp )( 
            IMgaSet * This,
            /* [in] */ IMgaMetaAspect *asp,
            /* [retval][out] */ IMgaPart **pVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_PartByMetaPart )( 
            IMgaSet * This,
            /* [in] */ IMgaMetaPart *part,
            /* [retval][out] */ IMgaPart **pVal);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetPartByMetaPartDisp )( 
            IMgaSet * This,
            /* [in] */ IMgaMetaPart *part,
            /* [retval][out] */ IMgaPart **pVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Attributes )( 
            IMgaSet * This,
            /* [retval][out] */ IMgaAttributes **pVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Attribute )( 
            IMgaSet * This,
            /* [in] */ IMgaMetaAttribute *meta,
            /* [retval][out] */ IMgaAttribute **pVal);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetAttributeDisp )( 
            IMgaSet * This,
            /* [in] */ IMgaMetaAttribute *meta,
            /* [retval][out] */ IMgaAttribute **pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_AttributeByName )( 
            IMgaSet * This,
            /* [in] */ BSTR name,
            /* [retval][out] */ VARIANT *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_AttributeByName )( 
            IMgaSet * This,
            /* [in] */ BSTR name,
            /* [in] */ VARIANT newval);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetAttributeByNameDisp )( 
            IMgaSet * This,
            /* [in] */ BSTR name,
            /* [retval][out] */ VARIANT *pVal);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *SetAttributeByNameDisp )( 
            IMgaSet * This,
            /* [in] */ BSTR name,
            /* [in] */ VARIANT newval);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_StrAttrByName )( 
            IMgaSet * This,
            /* [in] */ BSTR name,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_StrAttrByName )( 
            IMgaSet * This,
            /* [in] */ BSTR name,
            /* [in] */ BSTR newval);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetStrAttrByNameDisp )( 
            IMgaSet * This,
            /* [in] */ BSTR name,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *SetStrAttrByNameDisp )( 
            IMgaSet * This,
            /* [in] */ BSTR name,
            /* [in] */ BSTR newval);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_IntAttrByName )( 
            IMgaSet * This,
            /* [in] */ BSTR name,
            /* [retval][out] */ long *pVal);
        
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_IntAttrByName )( 
            IMgaSet * This,
            /* [in] */ BSTR name,
            /* [in] */ long newval);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetIntAttrByNameDisp )( 
            IMgaSet * This,
            /* [in] */ BSTR name,
            /* [retval][out] */ long *pVal);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *SetIntAttrByNameDisp )( 
            IMgaSet * This,
            /* [in] */ BSTR name,
            /* [in] */ long newval);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_FloatAttrByName )( 
            IMgaSet * This,
            /* [in] */ BSTR name,
            /* [retval][out] */ double *pVal);
        
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_FloatAttrByName )( 
            IMgaSet * This,
            /* [in] */ BSTR name,
            /* [in] */ double newval);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetFloatAttrByNameDisp )( 
            IMgaSet * This,
            /* [in] */ BSTR name,
            /* [retval][out] */ double *pVal);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *SetFloatAttrByNameDisp )( 
            IMgaSet * This,
            /* [in] */ BSTR name,
            /* [in] */ double newval);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_BoolAttrByName )( 
            IMgaSet * This,
            /* [in] */ BSTR name,
            /* [retval][out] */ VARIANT_BOOL *pVal);
        
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_BoolAttrByName )( 
            IMgaSet * This,
            /* [in] */ BSTR name,
            /* [in] */ VARIANT_BOOL newval);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetBoolAttrByNameDisp )( 
            IMgaSet * This,
            /* [in] */ BSTR name,
            /* [retval][out] */ VARIANT_BOOL *pVal);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *SetBoolAttrByNameDisp )( 
            IMgaSet * This,
            /* [in] */ BSTR name,
            /* [in] */ VARIANT_BOOL newval);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_RefAttrByName )( 
            IMgaSet * This,
            /* [in] */ BSTR name,
            /* [retval][out] */ IMgaFCO **pVal);
        
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_RefAttrByName )( 
            IMgaSet * This,
            /* [in] */ BSTR name,
            /* [in] */ IMgaFCO *newval);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetRefAttrByNameDisp )( 
            IMgaSet * This,
            /* [in] */ BSTR name,
            /* [retval][out] */ IMgaFCO **pVal);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *SetRefAttrByNameDisp )( 
            IMgaSet * This,
            /* [in] */ BSTR name,
            /* [in] */ IMgaFCO *newval);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *ClearAttrByName )( 
            IMgaSet * This,
            /* [in] */ BSTR name);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_RegistryNode )( 
            IMgaSet * This,
            /* [in] */ BSTR path,
            /* [retval][out] */ IMgaRegNode **pVal);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetRegistryNodeDisp )( 
            IMgaSet * This,
            /* [in] */ BSTR path,
            /* [retval][out] */ IMgaRegNode **pVal);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Registry )( 
            IMgaSet * This,
            /* [defaultvalue][in] */ VARIANT_BOOL virtuals,
            /* [retval][out] */ IMgaRegNodes **pVal);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetRegistryDisp )( 
            IMgaSet * This,
            /* [defaultvalue][in] */ VARIANT_BOOL virtuals,
            /* [retval][out] */ IMgaRegNodes **pVal);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_RegistryValue )( 
            IMgaSet * This,
            /* [in] */ BSTR path,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_RegistryValue )( 
            IMgaSet * This,
            /* [in] */ BSTR path,
            /* [in] */ BSTR newval);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetRegistryValueDisp )( 
            IMgaSet * This,
            /* [in] */ BSTR path,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *SetRegistryValueDisp )( 
            IMgaSet * This,
            /* [in] */ BSTR path,
            /* [in] */ BSTR newval);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Constraints )( 
            IMgaSet * This,
            /* [in] */ VARIANT_BOOL includemeta,
            /* [retval][out] */ IMgaConstraints **pVal);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetConstraintsDisp )( 
            IMgaSet * This,
            /* [in] */ VARIANT_BOOL includemeta,
            /* [retval][out] */ IMgaConstraints **pVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *AddConstraint )( 
            IMgaSet * This,
            /* [in] */ IMgaConstraint *constraint);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *DefineConstraint )( 
            IMgaSet * This,
            /* [in] */ BSTR name,
            /* [in] */ long mask,
            /* [in] */ BSTR expr,
            /* [out] */ IMgaConstraint **nconstraint);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_DerivedFrom )( 
            IMgaSet * This,
            /* [retval][out] */ IMgaFCO **pVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_DerivedObjects )( 
            IMgaSet * This,
            /* [retval][out] */ IMgaFCOs **pVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Type )( 
            IMgaSet * This,
            /* [retval][out] */ IMgaFCO **pVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_BaseType )( 
            IMgaSet * This,
            /* [retval][out] */ IMgaFCO **pVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ArcheType )( 
            IMgaSet * This,
            /* [retval][out] */ IMgaFCO **pVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_IsInstance )( 
            IMgaSet * This,
            /* [retval][out] */ VARIANT_BOOL *pVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_IsPrimaryDerived )( 
            IMgaSet * This,
            /* [retval][out] */ VARIANT_BOOL *pVal);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *AttachToArcheType )( 
            IMgaSet * This,
            /* [in] */ IMgaFCO *newtype,
            /* [in] */ VARIANT_BOOL instance);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *DetachFromArcheType )( 
            IMgaSet * This);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetAbsMetaPath )( 
            IMgaSet * This,
            /* [out][in] */ BSTR *abspath);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetRelMetaPath )( 
            IMgaSet * This,
            /* [in] */ IMgaFCO *begfco,
            /* [out][in] */ BSTR *relpath,
            /* [defaultvalue][in] */ IMgaFCOs *refs);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_PartOfConns )( 
            IMgaSet * This,
            /* [retval][out] */ IMgaConnPoints **pVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_MemberOfSets )( 
            IMgaSet * This,
            /* [retval][out] */ IMgaFCOs **pVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ReferencedBy )( 
            IMgaSet * This,
            /* [retval][out] */ IMgaFCOs **pVal);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *CreateCollection )( 
            IMgaSet * This,
            /* [out][in] */ IMgaFCOs **pVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_RootFCO )( 
            IMgaSet * This,
            /* [retval][out] */ IMgaFCO **pVal);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *AddMember )( 
            IMgaSet * This,
            /* [in] */ IMgaFCO *mem);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *RemoveMember )( 
            IMgaSet * This,
            /* [in] */ IMgaFCO *member);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *RemoveAll )( 
            IMgaSet * This);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Members )( 
            IMgaSet * This,
            /* [retval][out] */ IMgaFCOs **pVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_IsMember )( 
            IMgaSet * This,
            /* [in] */ IMgaFCO *obj,
            /* [retval][out] */ VARIANT_BOOL *pVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *CompareToBase )( 
            IMgaSet * This,
            /* [out] */ short *status);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *RevertToBase )( 
            IMgaSet * This);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetIsMemberDisp )( 
            IMgaSet * This,
            /* [in] */ IMgaFCO *obj,
            /* [retval][out] */ VARIANT_BOOL *pVal);
        
        END_INTERFACE
    } IMgaSetVtbl;

    interface IMgaSet
    {
        CONST_VTBL struct IMgaSetVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IMgaSet_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IMgaSet_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IMgaSet_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IMgaSet_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IMgaSet_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IMgaSet_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IMgaSet_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IMgaSet_get_Status(This,p)	\
    ( (This)->lpVtbl -> get_Status(This,p) ) 

#define IMgaSet_get_IsWritable(This,p)	\
    ( (This)->lpVtbl -> get_IsWritable(This,p) ) 

#define IMgaSet_get_ID(This,pVal)	\
    ( (This)->lpVtbl -> get_ID(This,pVal) ) 

#define IMgaSet_get_Name(This,pVal)	\
    ( (This)->lpVtbl -> get_Name(This,pVal) ) 

#define IMgaSet_put_Name(This,newVal)	\
    ( (This)->lpVtbl -> put_Name(This,newVal) ) 

#define IMgaSet_get_AbsPath(This,pVal)	\
    ( (This)->lpVtbl -> get_AbsPath(This,pVal) ) 

#define IMgaSet_get_MetaBase(This,pVal)	\
    ( (This)->lpVtbl -> get_MetaBase(This,pVal) ) 

#define IMgaSet_get_ObjType(This,pVal)	\
    ( (This)->lpVtbl -> get_ObjType(This,pVal) ) 

#define IMgaSet_get_Project(This,pVal)	\
    ( (This)->lpVtbl -> get_Project(This,pVal) ) 

#define IMgaSet_get_Territory(This,pVal)	\
    ( (This)->lpVtbl -> get_Territory(This,pVal) ) 

#define IMgaSet_get_IsEqual(This,o,pVal)	\
    ( (This)->lpVtbl -> get_IsEqual(This,o,pVal) ) 

#define IMgaSet_GetIsEqualDisp(This,o,pVal)	\
    ( (This)->lpVtbl -> GetIsEqualDisp(This,o,pVal) ) 

#define IMgaSet_GetParent(This,pVal,objtype)	\
    ( (This)->lpVtbl -> GetParent(This,pVal,objtype) ) 

#define IMgaSet_CheckProject(This,project)	\
    ( (This)->lpVtbl -> CheckProject(This,project) ) 

#define IMgaSet_DestroyObject(This)	\
    ( (This)->lpVtbl -> DestroyObject(This) ) 

#define IMgaSet_Open(This,mode)	\
    ( (This)->lpVtbl -> Open(This,mode) ) 

#define IMgaSet_Close(This)	\
    ( (This)->lpVtbl -> Close(This) ) 

#define IMgaSet_Associate(This,userdata)	\
    ( (This)->lpVtbl -> Associate(This,userdata) ) 

#define IMgaSet_get_CurrentAssociation(This,userdata)	\
    ( (This)->lpVtbl -> get_CurrentAssociation(This,userdata) ) 

#define IMgaSet_SendEvent(This,mask)	\
    ( (This)->lpVtbl -> SendEvent(This,mask) ) 

#define IMgaSet_get_RelID(This,pVal)	\
    ( (This)->lpVtbl -> get_RelID(This,pVal) ) 

#define IMgaSet_put_RelID(This,newVal)	\
    ( (This)->lpVtbl -> put_RelID(This,newVal) ) 

#define IMgaSet_get_IsLibObject(This,pVal)	\
    ( (This)->lpVtbl -> get_IsLibObject(This,pVal) ) 

#define IMgaSet_Check(This)	\
    ( (This)->lpVtbl -> Check(This) ) 

#define IMgaSet_CheckTree(This)	\
    ( (This)->lpVtbl -> CheckTree(This) ) 

#define IMgaSet_put_Exempt(This,newVal)	\
    ( (This)->lpVtbl -> put_Exempt(This,newVal) ) 

#define IMgaSet_get_Exempt(This,pVal)	\
    ( (This)->lpVtbl -> get_Exempt(This,pVal) ) 

#define IMgaSet_get_ChildObjects(This,pVal)	\
    ( (This)->lpVtbl -> get_ChildObjects(This,pVal) ) 

#define IMgaSet_get_ChildObjectByRelID(This,relid,pVal)	\
    ( (This)->lpVtbl -> get_ChildObjectByRelID(This,relid,pVal) ) 

#define IMgaSet_GetChildObjectByRelIDDisp(This,relid,pVal)	\
    ( (This)->lpVtbl -> GetChildObjectByRelIDDisp(This,relid,pVal) ) 

#define IMgaSet_get_ObjectByPath(This,path,pVal)	\
    ( (This)->lpVtbl -> get_ObjectByPath(This,path,pVal) ) 

#define IMgaSet_GetObjectByPathDisp(This,path,pVal)	\
    ( (This)->lpVtbl -> GetObjectByPathDisp(This,path,pVal) ) 

#define IMgaSet_get_NthObjectByPath(This,n_th,path,pVal)	\
    ( (This)->lpVtbl -> get_NthObjectByPath(This,n_th,path,pVal) ) 

#define IMgaSet_GetNthObjectByPathDisp(This,n_th,path,pVal)	\
    ( (This)->lpVtbl -> GetNthObjectByPathDisp(This,n_th,path,pVal) ) 

#define IMgaSet_PutReadOnlyAccessWithPropagate(This,pReadOnly)	\
    ( (This)->lpVtbl -> PutReadOnlyAccessWithPropagate(This,pReadOnly) ) 

#define IMgaSet_PutReadOnlyAccess(This,pReadOnly)	\
    ( (This)->lpVtbl -> PutReadOnlyAccess(This,pReadOnly) ) 

#define IMgaSet_HasReadOnlyAccess(This,pReadOnly)	\
    ( (This)->lpVtbl -> HasReadOnlyAccess(This,pReadOnly) ) 

#define IMgaSet_GetGuid(This,l1,l2,l3,l4)	\
    ( (This)->lpVtbl -> GetGuid(This,l1,l2,l3,l4) ) 

#define IMgaSet_PutGuid(This,l1,l2,l3,l4)	\
    ( (This)->lpVtbl -> PutGuid(This,l1,l2,l3,l4) ) 

#define IMgaSet_GetGuidDisp(This,guid_str)	\
    ( (This)->lpVtbl -> GetGuidDisp(This,guid_str) ) 

#define IMgaSet_PutGuidDisp(This,guid_str)	\
    ( (This)->lpVtbl -> PutGuidDisp(This,guid_str) ) 


#define IMgaSet_get_Meta(This,pVal)	\
    ( (This)->lpVtbl -> get_Meta(This,pVal) ) 

#define IMgaSet_get_MetaRole(This,pVal)	\
    ( (This)->lpVtbl -> get_MetaRole(This,pVal) ) 

#define IMgaSet_get_ParentModel(This,pVal)	\
    ( (This)->lpVtbl -> get_ParentModel(This,pVal) ) 

#define IMgaSet_get_ParentFolder(This,pVal)	\
    ( (This)->lpVtbl -> get_ParentFolder(This,pVal) ) 

#define IMgaSet_get_Parts(This,pVal)	\
    ( (This)->lpVtbl -> get_Parts(This,pVal) ) 

#define IMgaSet_get_Part(This,asp,pVal)	\
    ( (This)->lpVtbl -> get_Part(This,asp,pVal) ) 

#define IMgaSet_GetPartDisp(This,asp,pVal)	\
    ( (This)->lpVtbl -> GetPartDisp(This,asp,pVal) ) 

#define IMgaSet_get_PartByMetaPart(This,part,pVal)	\
    ( (This)->lpVtbl -> get_PartByMetaPart(This,part,pVal) ) 

#define IMgaSet_GetPartByMetaPartDisp(This,part,pVal)	\
    ( (This)->lpVtbl -> GetPartByMetaPartDisp(This,part,pVal) ) 

#define IMgaSet_get_Attributes(This,pVal)	\
    ( (This)->lpVtbl -> get_Attributes(This,pVal) ) 

#define IMgaSet_get_Attribute(This,meta,pVal)	\
    ( (This)->lpVtbl -> get_Attribute(This,meta,pVal) ) 

#define IMgaSet_GetAttributeDisp(This,meta,pVal)	\
    ( (This)->lpVtbl -> GetAttributeDisp(This,meta,pVal) ) 

#define IMgaSet_get_AttributeByName(This,name,pVal)	\
    ( (This)->lpVtbl -> get_AttributeByName(This,name,pVal) ) 

#define IMgaSet_put_AttributeByName(This,name,newval)	\
    ( (This)->lpVtbl -> put_AttributeByName(This,name,newval) ) 

#define IMgaSet_GetAttributeByNameDisp(This,name,pVal)	\
    ( (This)->lpVtbl -> GetAttributeByNameDisp(This,name,pVal) ) 

#define IMgaSet_SetAttributeByNameDisp(This,name,newval)	\
    ( (This)->lpVtbl -> SetAttributeByNameDisp(This,name,newval) ) 

#define IMgaSet_get_StrAttrByName(This,name,pVal)	\
    ( (This)->lpVtbl -> get_StrAttrByName(This,name,pVal) ) 

#define IMgaSet_put_StrAttrByName(This,name,newval)	\
    ( (This)->lpVtbl -> put_StrAttrByName(This,name,newval) ) 

#define IMgaSet_GetStrAttrByNameDisp(This,name,pVal)	\
    ( (This)->lpVtbl -> GetStrAttrByNameDisp(This,name,pVal) ) 

#define IMgaSet_SetStrAttrByNameDisp(This,name,newval)	\
    ( (This)->lpVtbl -> SetStrAttrByNameDisp(This,name,newval) ) 

#define IMgaSet_get_IntAttrByName(This,name,pVal)	\
    ( (This)->lpVtbl -> get_IntAttrByName(This,name,pVal) ) 

#define IMgaSet_put_IntAttrByName(This,name,newval)	\
    ( (This)->lpVtbl -> put_IntAttrByName(This,name,newval) ) 

#define IMgaSet_GetIntAttrByNameDisp(This,name,pVal)	\
    ( (This)->lpVtbl -> GetIntAttrByNameDisp(This,name,pVal) ) 

#define IMgaSet_SetIntAttrByNameDisp(This,name,newval)	\
    ( (This)->lpVtbl -> SetIntAttrByNameDisp(This,name,newval) ) 

#define IMgaSet_get_FloatAttrByName(This,name,pVal)	\
    ( (This)->lpVtbl -> get_FloatAttrByName(This,name,pVal) ) 

#define IMgaSet_put_FloatAttrByName(This,name,newval)	\
    ( (This)->lpVtbl -> put_FloatAttrByName(This,name,newval) ) 

#define IMgaSet_GetFloatAttrByNameDisp(This,name,pVal)	\
    ( (This)->lpVtbl -> GetFloatAttrByNameDisp(This,name,pVal) ) 

#define IMgaSet_SetFloatAttrByNameDisp(This,name,newval)	\
    ( (This)->lpVtbl -> SetFloatAttrByNameDisp(This,name,newval) ) 

#define IMgaSet_get_BoolAttrByName(This,name,pVal)	\
    ( (This)->lpVtbl -> get_BoolAttrByName(This,name,pVal) ) 

#define IMgaSet_put_BoolAttrByName(This,name,newval)	\
    ( (This)->lpVtbl -> put_BoolAttrByName(This,name,newval) ) 

#define IMgaSet_GetBoolAttrByNameDisp(This,name,pVal)	\
    ( (This)->lpVtbl -> GetBoolAttrByNameDisp(This,name,pVal) ) 

#define IMgaSet_SetBoolAttrByNameDisp(This,name,newval)	\
    ( (This)->lpVtbl -> SetBoolAttrByNameDisp(This,name,newval) ) 

#define IMgaSet_get_RefAttrByName(This,name,pVal)	\
    ( (This)->lpVtbl -> get_RefAttrByName(This,name,pVal) ) 

#define IMgaSet_put_RefAttrByName(This,name,newval)	\
    ( (This)->lpVtbl -> put_RefAttrByName(This,name,newval) ) 

#define IMgaSet_GetRefAttrByNameDisp(This,name,pVal)	\
    ( (This)->lpVtbl -> GetRefAttrByNameDisp(This,name,pVal) ) 

#define IMgaSet_SetRefAttrByNameDisp(This,name,newval)	\
    ( (This)->lpVtbl -> SetRefAttrByNameDisp(This,name,newval) ) 

#define IMgaSet_ClearAttrByName(This,name)	\
    ( (This)->lpVtbl -> ClearAttrByName(This,name) ) 

#define IMgaSet_get_RegistryNode(This,path,pVal)	\
    ( (This)->lpVtbl -> get_RegistryNode(This,path,pVal) ) 

#define IMgaSet_GetRegistryNodeDisp(This,path,pVal)	\
    ( (This)->lpVtbl -> GetRegistryNodeDisp(This,path,pVal) ) 

#define IMgaSet_get_Registry(This,virtuals,pVal)	\
    ( (This)->lpVtbl -> get_Registry(This,virtuals,pVal) ) 

#define IMgaSet_GetRegistryDisp(This,virtuals,pVal)	\
    ( (This)->lpVtbl -> GetRegistryDisp(This,virtuals,pVal) ) 

#define IMgaSet_get_RegistryValue(This,path,pVal)	\
    ( (This)->lpVtbl -> get_RegistryValue(This,path,pVal) ) 

#define IMgaSet_put_RegistryValue(This,path,newval)	\
    ( (This)->lpVtbl -> put_RegistryValue(This,path,newval) ) 

#define IMgaSet_GetRegistryValueDisp(This,path,pVal)	\
    ( (This)->lpVtbl -> GetRegistryValueDisp(This,path,pVal) ) 

#define IMgaSet_SetRegistryValueDisp(This,path,newval)	\
    ( (This)->lpVtbl -> SetRegistryValueDisp(This,path,newval) ) 

#define IMgaSet_get_Constraints(This,includemeta,pVal)	\
    ( (This)->lpVtbl -> get_Constraints(This,includemeta,pVal) ) 

#define IMgaSet_GetConstraintsDisp(This,includemeta,pVal)	\
    ( (This)->lpVtbl -> GetConstraintsDisp(This,includemeta,pVal) ) 

#define IMgaSet_AddConstraint(This,constraint)	\
    ( (This)->lpVtbl -> AddConstraint(This,constraint) ) 

#define IMgaSet_DefineConstraint(This,name,mask,expr,nconstraint)	\
    ( (This)->lpVtbl -> DefineConstraint(This,name,mask,expr,nconstraint) ) 

#define IMgaSet_get_DerivedFrom(This,pVal)	\
    ( (This)->lpVtbl -> get_DerivedFrom(This,pVal) ) 

#define IMgaSet_get_DerivedObjects(This,pVal)	\
    ( (This)->lpVtbl -> get_DerivedObjects(This,pVal) ) 

#define IMgaSet_get_Type(This,pVal)	\
    ( (This)->lpVtbl -> get_Type(This,pVal) ) 

#define IMgaSet_get_BaseType(This,pVal)	\
    ( (This)->lpVtbl -> get_BaseType(This,pVal) ) 

#define IMgaSet_get_ArcheType(This,pVal)	\
    ( (This)->lpVtbl -> get_ArcheType(This,pVal) ) 

#define IMgaSet_get_IsInstance(This,pVal)	\
    ( (This)->lpVtbl -> get_IsInstance(This,pVal) ) 

#define IMgaSet_get_IsPrimaryDerived(This,pVal)	\
    ( (This)->lpVtbl -> get_IsPrimaryDerived(This,pVal) ) 

#define IMgaSet_AttachToArcheType(This,newtype,instance)	\
    ( (This)->lpVtbl -> AttachToArcheType(This,newtype,instance) ) 

#define IMgaSet_DetachFromArcheType(This)	\
    ( (This)->lpVtbl -> DetachFromArcheType(This) ) 

#define IMgaSet_GetAbsMetaPath(This,abspath)	\
    ( (This)->lpVtbl -> GetAbsMetaPath(This,abspath) ) 

#define IMgaSet_GetRelMetaPath(This,begfco,relpath,refs)	\
    ( (This)->lpVtbl -> GetRelMetaPath(This,begfco,relpath,refs) ) 

#define IMgaSet_get_PartOfConns(This,pVal)	\
    ( (This)->lpVtbl -> get_PartOfConns(This,pVal) ) 

#define IMgaSet_get_MemberOfSets(This,pVal)	\
    ( (This)->lpVtbl -> get_MemberOfSets(This,pVal) ) 

#define IMgaSet_get_ReferencedBy(This,pVal)	\
    ( (This)->lpVtbl -> get_ReferencedBy(This,pVal) ) 

#define IMgaSet_CreateCollection(This,pVal)	\
    ( (This)->lpVtbl -> CreateCollection(This,pVal) ) 

#define IMgaSet_get_RootFCO(This,pVal)	\
    ( (This)->lpVtbl -> get_RootFCO(This,pVal) ) 


#define IMgaSet_AddMember(This,mem)	\
    ( (This)->lpVtbl -> AddMember(This,mem) ) 

#define IMgaSet_RemoveMember(This,member)	\
    ( (This)->lpVtbl -> RemoveMember(This,member) ) 

#define IMgaSet_RemoveAll(This)	\
    ( (This)->lpVtbl -> RemoveAll(This) ) 

#define IMgaSet_get_Members(This,pVal)	\
    ( (This)->lpVtbl -> get_Members(This,pVal) ) 

#define IMgaSet_get_IsMember(This,obj,pVal)	\
    ( (This)->lpVtbl -> get_IsMember(This,obj,pVal) ) 

#define IMgaSet_CompareToBase(This,status)	\
    ( (This)->lpVtbl -> CompareToBase(This,status) ) 

#define IMgaSet_RevertToBase(This)	\
    ( (This)->lpVtbl -> RevertToBase(This) ) 

#define IMgaSet_GetIsMemberDisp(This,obj,pVal)	\
    ( (This)->lpVtbl -> GetIsMemberDisp(This,obj,pVal) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IMgaSet_INTERFACE_DEFINED__ */


#ifndef __IMgaConnection_INTERFACE_DEFINED__
#define __IMgaConnection_INTERFACE_DEFINED__

/* interface IMgaConnection */
/* [unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_IMgaConnection;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("270B4FA0-B17C-11D3-9AD1-00AA00B6FE26")
    IMgaConnection : public IMgaFCO
    {
    public:
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE AddConnPoint( 
            /* [in] */ BSTR rolename,
            /* [in] */ long maxinrole,
            /* [in] */ IMgaFCO *Target,
            /* [in] */ IMgaFCOs *refs,
            /* [out] */ IMgaConnPoint **pVal) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_ConnPoints( 
            /* [retval][out] */ IMgaConnPoints **pVal) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE CompareToBase( 
            /* [in] */ IMgaConnPoint *connpoint,
            /* [out] */ short *status) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE RevertToBase( 
            /* [in] */ IMgaConnPoint *connpoint) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IMgaConnectionVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IMgaConnection * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IMgaConnection * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IMgaConnection * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IMgaConnection * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IMgaConnection * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IMgaConnection * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IMgaConnection * This,
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
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Status )( 
            IMgaConnection * This,
            /* [retval][out] */ long *p);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_IsWritable )( 
            IMgaConnection * This,
            /* [retval][out] */ VARIANT_BOOL *p);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ID )( 
            IMgaConnection * This,
            /* [retval][out] */ ID_type *pVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Name )( 
            IMgaConnection * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Name )( 
            IMgaConnection * This,
            /* [in] */ BSTR newVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_AbsPath )( 
            IMgaConnection * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_MetaBase )( 
            IMgaConnection * This,
            /* [retval][out] */ IMgaMetaBase **pVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ObjType )( 
            IMgaConnection * This,
            /* [retval][out] */ objtype_enum *pVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Project )( 
            IMgaConnection * This,
            /* [retval][out] */ IMgaProject **pVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Territory )( 
            IMgaConnection * This,
            /* [retval][out] */ IMgaTerritory **pVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_IsEqual )( 
            IMgaConnection * This,
            /* [in] */ IMgaObject *o,
            /* [retval][out] */ VARIANT_BOOL *pVal);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetIsEqualDisp )( 
            IMgaConnection * This,
            /* [in] */ IMgaObject *o,
            /* [retval][out] */ VARIANT_BOOL *pVal);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetParent )( 
            IMgaConnection * This,
            /* [out] */ IMgaObject **pVal,
            /* [defaultvalue][out] */ objtype_enum *objtype);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *CheckProject )( 
            IMgaConnection * This,
            /* [in] */ IMgaProject *project);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *DestroyObject )( 
            IMgaConnection * This);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Open )( 
            IMgaConnection * This,
            /* [defaultvalue][in] */ openmode mode);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Close )( 
            IMgaConnection * This);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Associate )( 
            IMgaConnection * This,
            /* [in] */ VARIANT userdata);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentAssociation )( 
            IMgaConnection * This,
            /* [retval][out] */ VARIANT *userdata);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *SendEvent )( 
            IMgaConnection * This,
            /* [in] */ long mask);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_RelID )( 
            IMgaConnection * This,
            /* [retval][out] */ long *pVal);
        
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_RelID )( 
            IMgaConnection * This,
            /* [in] */ long newVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_IsLibObject )( 
            IMgaConnection * This,
            /* [retval][out] */ VARIANT_BOOL *pVal);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Check )( 
            IMgaConnection * This);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *CheckTree )( 
            IMgaConnection * This);
        
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Exempt )( 
            IMgaConnection * This,
            /* [in] */ VARIANT_BOOL newVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Exempt )( 
            IMgaConnection * This,
            /* [retval][out] */ VARIANT_BOOL *pVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ChildObjects )( 
            IMgaConnection * This,
            /* [retval][out] */ IMgaObjects **pVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ChildObjectByRelID )( 
            IMgaConnection * This,
            /* [in] */ long relid,
            /* [retval][out] */ IMgaObject **pVal);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetChildObjectByRelIDDisp )( 
            IMgaConnection * This,
            /* [in] */ long relid,
            /* [retval][out] */ IMgaObject **pVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ObjectByPath )( 
            IMgaConnection * This,
            /* [in] */ BSTR path,
            /* [retval][out] */ IMgaObject **pVal);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetObjectByPathDisp )( 
            IMgaConnection * This,
            /* [in] */ BSTR path,
            /* [retval][out] */ IMgaObject **pVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_NthObjectByPath )( 
            IMgaConnection * This,
            /* [in] */ long n_th,
            /* [in] */ BSTR path,
            /* [retval][out] */ IMgaObject **pVal);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetNthObjectByPathDisp )( 
            IMgaConnection * This,
            /* [in] */ long n_th,
            /* [in] */ BSTR path,
            /* [retval][out] */ IMgaObject **pVal);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *PutReadOnlyAccessWithPropagate )( 
            IMgaConnection * This,
            /* [in] */ VARIANT_BOOL pReadOnly);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *PutReadOnlyAccess )( 
            IMgaConnection * This,
            /* [in] */ VARIANT_BOOL pReadOnly);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *HasReadOnlyAccess )( 
            IMgaConnection * This,
            /* [retval][out] */ VARIANT_BOOL *pReadOnly);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetGuid )( 
            IMgaConnection * This,
            /* [out][in] */ long *l1,
            /* [out][in] */ long *l2,
            /* [out][in] */ long *l3,
            /* [out][in] */ long *l4);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *PutGuid )( 
            IMgaConnection * This,
            /* [in] */ long l1,
            /* [in] */ long l2,
            /* [in] */ long l3,
            /* [in] */ long l4);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetGuidDisp )( 
            IMgaConnection * This,
            /* [retval][out] */ BSTR *guid_str);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *PutGuidDisp )( 
            IMgaConnection * This,
            /* [in] */ BSTR guid_str);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Meta )( 
            IMgaConnection * This,
            /* [retval][out] */ IMgaMetaFCO **pVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_MetaRole )( 
            IMgaConnection * This,
            /* [retval][out] */ IMgaMetaRole **pVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ParentModel )( 
            IMgaConnection * This,
            /* [retval][out] */ IMgaModel **pVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ParentFolder )( 
            IMgaConnection * This,
            /* [retval][out] */ IMgaFolder **pVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Parts )( 
            IMgaConnection * This,
            /* [retval][out] */ IMgaParts **pVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Part )( 
            IMgaConnection * This,
            /* [in] */ IMgaMetaAspect *asp,
            /* [retval][out] */ IMgaPart **pVal);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetPartDisp )( 
            IMgaConnection * This,
            /* [in] */ IMgaMetaAspect *asp,
            /* [retval][out] */ IMgaPart **pVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_PartByMetaPart )( 
            IMgaConnection * This,
            /* [in] */ IMgaMetaPart *part,
            /* [retval][out] */ IMgaPart **pVal);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetPartByMetaPartDisp )( 
            IMgaConnection * This,
            /* [in] */ IMgaMetaPart *part,
            /* [retval][out] */ IMgaPart **pVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Attributes )( 
            IMgaConnection * This,
            /* [retval][out] */ IMgaAttributes **pVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Attribute )( 
            IMgaConnection * This,
            /* [in] */ IMgaMetaAttribute *meta,
            /* [retval][out] */ IMgaAttribute **pVal);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetAttributeDisp )( 
            IMgaConnection * This,
            /* [in] */ IMgaMetaAttribute *meta,
            /* [retval][out] */ IMgaAttribute **pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_AttributeByName )( 
            IMgaConnection * This,
            /* [in] */ BSTR name,
            /* [retval][out] */ VARIANT *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_AttributeByName )( 
            IMgaConnection * This,
            /* [in] */ BSTR name,
            /* [in] */ VARIANT newval);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetAttributeByNameDisp )( 
            IMgaConnection * This,
            /* [in] */ BSTR name,
            /* [retval][out] */ VARIANT *pVal);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *SetAttributeByNameDisp )( 
            IMgaConnection * This,
            /* [in] */ BSTR name,
            /* [in] */ VARIANT newval);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_StrAttrByName )( 
            IMgaConnection * This,
            /* [in] */ BSTR name,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_StrAttrByName )( 
            IMgaConnection * This,
            /* [in] */ BSTR name,
            /* [in] */ BSTR newval);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetStrAttrByNameDisp )( 
            IMgaConnection * This,
            /* [in] */ BSTR name,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *SetStrAttrByNameDisp )( 
            IMgaConnection * This,
            /* [in] */ BSTR name,
            /* [in] */ BSTR newval);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_IntAttrByName )( 
            IMgaConnection * This,
            /* [in] */ BSTR name,
            /* [retval][out] */ long *pVal);
        
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_IntAttrByName )( 
            IMgaConnection * This,
            /* [in] */ BSTR name,
            /* [in] */ long newval);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetIntAttrByNameDisp )( 
            IMgaConnection * This,
            /* [in] */ BSTR name,
            /* [retval][out] */ long *pVal);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *SetIntAttrByNameDisp )( 
            IMgaConnection * This,
            /* [in] */ BSTR name,
            /* [in] */ long newval);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_FloatAttrByName )( 
            IMgaConnection * This,
            /* [in] */ BSTR name,
            /* [retval][out] */ double *pVal);
        
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_FloatAttrByName )( 
            IMgaConnection * This,
            /* [in] */ BSTR name,
            /* [in] */ double newval);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetFloatAttrByNameDisp )( 
            IMgaConnection * This,
            /* [in] */ BSTR name,
            /* [retval][out] */ double *pVal);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *SetFloatAttrByNameDisp )( 
            IMgaConnection * This,
            /* [in] */ BSTR name,
            /* [in] */ double newval);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_BoolAttrByName )( 
            IMgaConnection * This,
            /* [in] */ BSTR name,
            /* [retval][out] */ VARIANT_BOOL *pVal);
        
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_BoolAttrByName )( 
            IMgaConnection * This,
            /* [in] */ BSTR name,
            /* [in] */ VARIANT_BOOL newval);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetBoolAttrByNameDisp )( 
            IMgaConnection * This,
            /* [in] */ BSTR name,
            /* [retval][out] */ VARIANT_BOOL *pVal);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *SetBoolAttrByNameDisp )( 
            IMgaConnection * This,
            /* [in] */ BSTR name,
            /* [in] */ VARIANT_BOOL newval);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_RefAttrByName )( 
            IMgaConnection * This,
            /* [in] */ BSTR name,
            /* [retval][out] */ IMgaFCO **pVal);
        
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_RefAttrByName )( 
            IMgaConnection * This,
            /* [in] */ BSTR name,
            /* [in] */ IMgaFCO *newval);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetRefAttrByNameDisp )( 
            IMgaConnection * This,
            /* [in] */ BSTR name,
            /* [retval][out] */ IMgaFCO **pVal);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *SetRefAttrByNameDisp )( 
            IMgaConnection * This,
            /* [in] */ BSTR name,
            /* [in] */ IMgaFCO *newval);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *ClearAttrByName )( 
            IMgaConnection * This,
            /* [in] */ BSTR name);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_RegistryNode )( 
            IMgaConnection * This,
            /* [in] */ BSTR path,
            /* [retval][out] */ IMgaRegNode **pVal);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetRegistryNodeDisp )( 
            IMgaConnection * This,
            /* [in] */ BSTR path,
            /* [retval][out] */ IMgaRegNode **pVal);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Registry )( 
            IMgaConnection * This,
            /* [defaultvalue][in] */ VARIANT_BOOL virtuals,
            /* [retval][out] */ IMgaRegNodes **pVal);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetRegistryDisp )( 
            IMgaConnection * This,
            /* [defaultvalue][in] */ VARIANT_BOOL virtuals,
            /* [retval][out] */ IMgaRegNodes **pVal);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_RegistryValue )( 
            IMgaConnection * This,
            /* [in] */ BSTR path,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_RegistryValue )( 
            IMgaConnection * This,
            /* [in] */ BSTR path,
            /* [in] */ BSTR newval);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetRegistryValueDisp )( 
            IMgaConnection * This,
            /* [in] */ BSTR path,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *SetRegistryValueDisp )( 
            IMgaConnection * This,
            /* [in] */ BSTR path,
            /* [in] */ BSTR newval);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Constraints )( 
            IMgaConnection * This,
            /* [in] */ VARIANT_BOOL includemeta,
            /* [retval][out] */ IMgaConstraints **pVal);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetConstraintsDisp )( 
            IMgaConnection * This,
            /* [in] */ VARIANT_BOOL includemeta,
            /* [retval][out] */ IMgaConstraints **pVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *AddConstraint )( 
            IMgaConnection * This,
            /* [in] */ IMgaConstraint *constraint);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *DefineConstraint )( 
            IMgaConnection * This,
            /* [in] */ BSTR name,
            /* [in] */ long mask,
            /* [in] */ BSTR expr,
            /* [out] */ IMgaConstraint **nconstraint);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_DerivedFrom )( 
            IMgaConnection * This,
            /* [retval][out] */ IMgaFCO **pVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_DerivedObjects )( 
            IMgaConnection * This,
            /* [retval][out] */ IMgaFCOs **pVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Type )( 
            IMgaConnection * This,
            /* [retval][out] */ IMgaFCO **pVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_BaseType )( 
            IMgaConnection * This,
            /* [retval][out] */ IMgaFCO **pVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ArcheType )( 
            IMgaConnection * This,
            /* [retval][out] */ IMgaFCO **pVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_IsInstance )( 
            IMgaConnection * This,
            /* [retval][out] */ VARIANT_BOOL *pVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_IsPrimaryDerived )( 
            IMgaConnection * This,
            /* [retval][out] */ VARIANT_BOOL *pVal);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *AttachToArcheType )( 
            IMgaConnection * This,
            /* [in] */ IMgaFCO *newtype,
            /* [in] */ VARIANT_BOOL instance);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *DetachFromArcheType )( 
            IMgaConnection * This);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetAbsMetaPath )( 
            IMgaConnection * This,
            /* [out][in] */ BSTR *abspath);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetRelMetaPath )( 
            IMgaConnection * This,
            /* [in] */ IMgaFCO *begfco,
            /* [out][in] */ BSTR *relpath,
            /* [defaultvalue][in] */ IMgaFCOs *refs);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_PartOfConns )( 
            IMgaConnection * This,
            /* [retval][out] */ IMgaConnPoints **pVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_MemberOfSets )( 
            IMgaConnection * This,
            /* [retval][out] */ IMgaFCOs **pVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ReferencedBy )( 
            IMgaConnection * This,
            /* [retval][out] */ IMgaFCOs **pVal);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *CreateCollection )( 
            IMgaConnection * This,
            /* [out][in] */ IMgaFCOs **pVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_RootFCO )( 
            IMgaConnection * This,
            /* [retval][out] */ IMgaFCO **pVal);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *AddConnPoint )( 
            IMgaConnection * This,
            /* [in] */ BSTR rolename,
            /* [in] */ long maxinrole,
            /* [in] */ IMgaFCO *Target,
            /* [in] */ IMgaFCOs *refs,
            /* [out] */ IMgaConnPoint **pVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ConnPoints )( 
            IMgaConnection * This,
            /* [retval][out] */ IMgaConnPoints **pVal);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *CompareToBase )( 
            IMgaConnection * This,
            /* [in] */ IMgaConnPoint *connpoint,
            /* [out] */ short *status);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *RevertToBase )( 
            IMgaConnection * This,
            /* [in] */ IMgaConnPoint *connpoint);
        
        END_INTERFACE
    } IMgaConnectionVtbl;

    interface IMgaConnection
    {
        CONST_VTBL struct IMgaConnectionVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IMgaConnection_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IMgaConnection_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IMgaConnection_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IMgaConnection_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IMgaConnection_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IMgaConnection_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IMgaConnection_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IMgaConnection_get_Status(This,p)	\
    ( (This)->lpVtbl -> get_Status(This,p) ) 

#define IMgaConnection_get_IsWritable(This,p)	\
    ( (This)->lpVtbl -> get_IsWritable(This,p) ) 

#define IMgaConnection_get_ID(This,pVal)	\
    ( (This)->lpVtbl -> get_ID(This,pVal) ) 

#define IMgaConnection_get_Name(This,pVal)	\
    ( (This)->lpVtbl -> get_Name(This,pVal) ) 

#define IMgaConnection_put_Name(This,newVal)	\
    ( (This)->lpVtbl -> put_Name(This,newVal) ) 

#define IMgaConnection_get_AbsPath(This,pVal)	\
    ( (This)->lpVtbl -> get_AbsPath(This,pVal) ) 

#define IMgaConnection_get_MetaBase(This,pVal)	\
    ( (This)->lpVtbl -> get_MetaBase(This,pVal) ) 

#define IMgaConnection_get_ObjType(This,pVal)	\
    ( (This)->lpVtbl -> get_ObjType(This,pVal) ) 

#define IMgaConnection_get_Project(This,pVal)	\
    ( (This)->lpVtbl -> get_Project(This,pVal) ) 

#define IMgaConnection_get_Territory(This,pVal)	\
    ( (This)->lpVtbl -> get_Territory(This,pVal) ) 

#define IMgaConnection_get_IsEqual(This,o,pVal)	\
    ( (This)->lpVtbl -> get_IsEqual(This,o,pVal) ) 

#define IMgaConnection_GetIsEqualDisp(This,o,pVal)	\
    ( (This)->lpVtbl -> GetIsEqualDisp(This,o,pVal) ) 

#define IMgaConnection_GetParent(This,pVal,objtype)	\
    ( (This)->lpVtbl -> GetParent(This,pVal,objtype) ) 

#define IMgaConnection_CheckProject(This,project)	\
    ( (This)->lpVtbl -> CheckProject(This,project) ) 

#define IMgaConnection_DestroyObject(This)	\
    ( (This)->lpVtbl -> DestroyObject(This) ) 

#define IMgaConnection_Open(This,mode)	\
    ( (This)->lpVtbl -> Open(This,mode) ) 

#define IMgaConnection_Close(This)	\
    ( (This)->lpVtbl -> Close(This) ) 

#define IMgaConnection_Associate(This,userdata)	\
    ( (This)->lpVtbl -> Associate(This,userdata) ) 

#define IMgaConnection_get_CurrentAssociation(This,userdata)	\
    ( (This)->lpVtbl -> get_CurrentAssociation(This,userdata) ) 

#define IMgaConnection_SendEvent(This,mask)	\
    ( (This)->lpVtbl -> SendEvent(This,mask) ) 

#define IMgaConnection_get_RelID(This,pVal)	\
    ( (This)->lpVtbl -> get_RelID(This,pVal) ) 

#define IMgaConnection_put_RelID(This,newVal)	\
    ( (This)->lpVtbl -> put_RelID(This,newVal) ) 

#define IMgaConnection_get_IsLibObject(This,pVal)	\
    ( (This)->lpVtbl -> get_IsLibObject(This,pVal) ) 

#define IMgaConnection_Check(This)	\
    ( (This)->lpVtbl -> Check(This) ) 

#define IMgaConnection_CheckTree(This)	\
    ( (This)->lpVtbl -> CheckTree(This) ) 

#define IMgaConnection_put_Exempt(This,newVal)	\
    ( (This)->lpVtbl -> put_Exempt(This,newVal) ) 

#define IMgaConnection_get_Exempt(This,pVal)	\
    ( (This)->lpVtbl -> get_Exempt(This,pVal) ) 

#define IMgaConnection_get_ChildObjects(This,pVal)	\
    ( (This)->lpVtbl -> get_ChildObjects(This,pVal) ) 

#define IMgaConnection_get_ChildObjectByRelID(This,relid,pVal)	\
    ( (This)->lpVtbl -> get_ChildObjectByRelID(This,relid,pVal) ) 

#define IMgaConnection_GetChildObjectByRelIDDisp(This,relid,pVal)	\
    ( (This)->lpVtbl -> GetChildObjectByRelIDDisp(This,relid,pVal) ) 

#define IMgaConnection_get_ObjectByPath(This,path,pVal)	\
    ( (This)->lpVtbl -> get_ObjectByPath(This,path,pVal) ) 

#define IMgaConnection_GetObjectByPathDisp(This,path,pVal)	\
    ( (This)->lpVtbl -> GetObjectByPathDisp(This,path,pVal) ) 

#define IMgaConnection_get_NthObjectByPath(This,n_th,path,pVal)	\
    ( (This)->lpVtbl -> get_NthObjectByPath(This,n_th,path,pVal) ) 

#define IMgaConnection_GetNthObjectByPathDisp(This,n_th,path,pVal)	\
    ( (This)->lpVtbl -> GetNthObjectByPathDisp(This,n_th,path,pVal) ) 

#define IMgaConnection_PutReadOnlyAccessWithPropagate(This,pReadOnly)	\
    ( (This)->lpVtbl -> PutReadOnlyAccessWithPropagate(This,pReadOnly) ) 

#define IMgaConnection_PutReadOnlyAccess(This,pReadOnly)	\
    ( (This)->lpVtbl -> PutReadOnlyAccess(This,pReadOnly) ) 

#define IMgaConnection_HasReadOnlyAccess(This,pReadOnly)	\
    ( (This)->lpVtbl -> HasReadOnlyAccess(This,pReadOnly) ) 

#define IMgaConnection_GetGuid(This,l1,l2,l3,l4)	\
    ( (This)->lpVtbl -> GetGuid(This,l1,l2,l3,l4) ) 

#define IMgaConnection_PutGuid(This,l1,l2,l3,l4)	\
    ( (This)->lpVtbl -> PutGuid(This,l1,l2,l3,l4) ) 

#define IMgaConnection_GetGuidDisp(This,guid_str)	\
    ( (This)->lpVtbl -> GetGuidDisp(This,guid_str) ) 

#define IMgaConnection_PutGuidDisp(This,guid_str)	\
    ( (This)->lpVtbl -> PutGuidDisp(This,guid_str) ) 


#define IMgaConnection_get_Meta(This,pVal)	\
    ( (This)->lpVtbl -> get_Meta(This,pVal) ) 

#define IMgaConnection_get_MetaRole(This,pVal)	\
    ( (This)->lpVtbl -> get_MetaRole(This,pVal) ) 

#define IMgaConnection_get_ParentModel(This,pVal)	\
    ( (This)->lpVtbl -> get_ParentModel(This,pVal) ) 

#define IMgaConnection_get_ParentFolder(This,pVal)	\
    ( (This)->lpVtbl -> get_ParentFolder(This,pVal) ) 

#define IMgaConnection_get_Parts(This,pVal)	\
    ( (This)->lpVtbl -> get_Parts(This,pVal) ) 

#define IMgaConnection_get_Part(This,asp,pVal)	\
    ( (This)->lpVtbl -> get_Part(This,asp,pVal) ) 

#define IMgaConnection_GetPartDisp(This,asp,pVal)	\
    ( (This)->lpVtbl -> GetPartDisp(This,asp,pVal) ) 

#define IMgaConnection_get_PartByMetaPart(This,part,pVal)	\
    ( (This)->lpVtbl -> get_PartByMetaPart(This,part,pVal) ) 

#define IMgaConnection_GetPartByMetaPartDisp(This,part,pVal)	\
    ( (This)->lpVtbl -> GetPartByMetaPartDisp(This,part,pVal) ) 

#define IMgaConnection_get_Attributes(This,pVal)	\
    ( (This)->lpVtbl -> get_Attributes(This,pVal) ) 

#define IMgaConnection_get_Attribute(This,meta,pVal)	\
    ( (This)->lpVtbl -> get_Attribute(This,meta,pVal) ) 

#define IMgaConnection_GetAttributeDisp(This,meta,pVal)	\
    ( (This)->lpVtbl -> GetAttributeDisp(This,meta,pVal) ) 

#define IMgaConnection_get_AttributeByName(This,name,pVal)	\
    ( (This)->lpVtbl -> get_AttributeByName(This,name,pVal) ) 

#define IMgaConnection_put_AttributeByName(This,name,newval)	\
    ( (This)->lpVtbl -> put_AttributeByName(This,name,newval) ) 

#define IMgaConnection_GetAttributeByNameDisp(This,name,pVal)	\
    ( (This)->lpVtbl -> GetAttributeByNameDisp(This,name,pVal) ) 

#define IMgaConnection_SetAttributeByNameDisp(This,name,newval)	\
    ( (This)->lpVtbl -> SetAttributeByNameDisp(This,name,newval) ) 

#define IMgaConnection_get_StrAttrByName(This,name,pVal)	\
    ( (This)->lpVtbl -> get_StrAttrByName(This,name,pVal) ) 

#define IMgaConnection_put_StrAttrByName(This,name,newval)	\
    ( (This)->lpVtbl -> put_StrAttrByName(This,name,newval) ) 

#define IMgaConnection_GetStrAttrByNameDisp(This,name,pVal)	\
    ( (This)->lpVtbl -> GetStrAttrByNameDisp(This,name,pVal) ) 

#define IMgaConnection_SetStrAttrByNameDisp(This,name,newval)	\
    ( (This)->lpVtbl -> SetStrAttrByNameDisp(This,name,newval) ) 

#define IMgaConnection_get_IntAttrByName(This,name,pVal)	\
    ( (This)->lpVtbl -> get_IntAttrByName(This,name,pVal) ) 

#define IMgaConnection_put_IntAttrByName(This,name,newval)	\
    ( (This)->lpVtbl -> put_IntAttrByName(This,name,newval) ) 

#define IMgaConnection_GetIntAttrByNameDisp(This,name,pVal)	\
    ( (This)->lpVtbl -> GetIntAttrByNameDisp(This,name,pVal) ) 

#define IMgaConnection_SetIntAttrByNameDisp(This,name,newval)	\
    ( (This)->lpVtbl -> SetIntAttrByNameDisp(This,name,newval) ) 

#define IMgaConnection_get_FloatAttrByName(This,name,pVal)	\
    ( (This)->lpVtbl -> get_FloatAttrByName(This,name,pVal) ) 

#define IMgaConnection_put_FloatAttrByName(This,name,newval)	\
    ( (This)->lpVtbl -> put_FloatAttrByName(This,name,newval) ) 

#define IMgaConnection_GetFloatAttrByNameDisp(This,name,pVal)	\
    ( (This)->lpVtbl -> GetFloatAttrByNameDisp(This,name,pVal) ) 

#define IMgaConnection_SetFloatAttrByNameDisp(This,name,newval)	\
    ( (This)->lpVtbl -> SetFloatAttrByNameDisp(This,name,newval) ) 

#define IMgaConnection_get_BoolAttrByName(This,name,pVal)	\
    ( (This)->lpVtbl -> get_BoolAttrByName(This,name,pVal) ) 

#define IMgaConnection_put_BoolAttrByName(This,name,newval)	\
    ( (This)->lpVtbl -> put_BoolAttrByName(This,name,newval) ) 

#define IMgaConnection_GetBoolAttrByNameDisp(This,name,pVal)	\
    ( (This)->lpVtbl -> GetBoolAttrByNameDisp(This,name,pVal) ) 

#define IMgaConnection_SetBoolAttrByNameDisp(This,name,newval)	\
    ( (This)->lpVtbl -> SetBoolAttrByNameDisp(This,name,newval) ) 

#define IMgaConnection_get_RefAttrByName(This,name,pVal)	\
    ( (This)->lpVtbl -> get_RefAttrByName(This,name,pVal) ) 

#define IMgaConnection_put_RefAttrByName(This,name,newval)	\
    ( (This)->lpVtbl -> put_RefAttrByName(This,name,newval) ) 

#define IMgaConnection_GetRefAttrByNameDisp(This,name,pVal)	\
    ( (This)->lpVtbl -> GetRefAttrByNameDisp(This,name,pVal) ) 

#define IMgaConnection_SetRefAttrByNameDisp(This,name,newval)	\
    ( (This)->lpVtbl -> SetRefAttrByNameDisp(This,name,newval) ) 

#define IMgaConnection_ClearAttrByName(This,name)	\
    ( (This)->lpVtbl -> ClearAttrByName(This,name) ) 

#define IMgaConnection_get_RegistryNode(This,path,pVal)	\
    ( (This)->lpVtbl -> get_RegistryNode(This,path,pVal) ) 

#define IMgaConnection_GetRegistryNodeDisp(This,path,pVal)	\
    ( (This)->lpVtbl -> GetRegistryNodeDisp(This,path,pVal) ) 

#define IMgaConnection_get_Registry(This,virtuals,pVal)	\
    ( (This)->lpVtbl -> get_Registry(This,virtuals,pVal) ) 

#define IMgaConnection_GetRegistryDisp(This,virtuals,pVal)	\
    ( (This)->lpVtbl -> GetRegistryDisp(This,virtuals,pVal) ) 

#define IMgaConnection_get_RegistryValue(This,path,pVal)	\
    ( (This)->lpVtbl -> get_RegistryValue(This,path,pVal) ) 

#define IMgaConnection_put_RegistryValue(This,path,newval)	\
    ( (This)->lpVtbl -> put_RegistryValue(This,path,newval) ) 

#define IMgaConnection_GetRegistryValueDisp(This,path,pVal)	\
    ( (This)->lpVtbl -> GetRegistryValueDisp(This,path,pVal) ) 

#define IMgaConnection_SetRegistryValueDisp(This,path,newval)	\
    ( (This)->lpVtbl -> SetRegistryValueDisp(This,path,newval) ) 

#define IMgaConnection_get_Constraints(This,includemeta,pVal)	\
    ( (This)->lpVtbl -> get_Constraints(This,includemeta,pVal) ) 

#define IMgaConnection_GetConstraintsDisp(This,includemeta,pVal)	\
    ( (This)->lpVtbl -> GetConstraintsDisp(This,includemeta,pVal) ) 

#define IMgaConnection_AddConstraint(This,constraint)	\
    ( (This)->lpVtbl -> AddConstraint(This,constraint) ) 

#define IMgaConnection_DefineConstraint(This,name,mask,expr,nconstraint)	\
    ( (This)->lpVtbl -> DefineConstraint(This,name,mask,expr,nconstraint) ) 

#define IMgaConnection_get_DerivedFrom(This,pVal)	\
    ( (This)->lpVtbl -> get_DerivedFrom(This,pVal) ) 

#define IMgaConnection_get_DerivedObjects(This,pVal)	\
    ( (This)->lpVtbl -> get_DerivedObjects(This,pVal) ) 

#define IMgaConnection_get_Type(This,pVal)	\
    ( (This)->lpVtbl -> get_Type(This,pVal) ) 

#define IMgaConnection_get_BaseType(This,pVal)	\
    ( (This)->lpVtbl -> get_BaseType(This,pVal) ) 

#define IMgaConnection_get_ArcheType(This,pVal)	\
    ( (This)->lpVtbl -> get_ArcheType(This,pVal) ) 

#define IMgaConnection_get_IsInstance(This,pVal)	\
    ( (This)->lpVtbl -> get_IsInstance(This,pVal) ) 

#define IMgaConnection_get_IsPrimaryDerived(This,pVal)	\
    ( (This)->lpVtbl -> get_IsPrimaryDerived(This,pVal) ) 

#define IMgaConnection_AttachToArcheType(This,newtype,instance)	\
    ( (This)->lpVtbl -> AttachToArcheType(This,newtype,instance) ) 

#define IMgaConnection_DetachFromArcheType(This)	\
    ( (This)->lpVtbl -> DetachFromArcheType(This) ) 

#define IMgaConnection_GetAbsMetaPath(This,abspath)	\
    ( (This)->lpVtbl -> GetAbsMetaPath(This,abspath) ) 

#define IMgaConnection_GetRelMetaPath(This,begfco,relpath,refs)	\
    ( (This)->lpVtbl -> GetRelMetaPath(This,begfco,relpath,refs) ) 

#define IMgaConnection_get_PartOfConns(This,pVal)	\
    ( (This)->lpVtbl -> get_PartOfConns(This,pVal) ) 

#define IMgaConnection_get_MemberOfSets(This,pVal)	\
    ( (This)->lpVtbl -> get_MemberOfSets(This,pVal) ) 

#define IMgaConnection_get_ReferencedBy(This,pVal)	\
    ( (This)->lpVtbl -> get_ReferencedBy(This,pVal) ) 

#define IMgaConnection_CreateCollection(This,pVal)	\
    ( (This)->lpVtbl -> CreateCollection(This,pVal) ) 

#define IMgaConnection_get_RootFCO(This,pVal)	\
    ( (This)->lpVtbl -> get_RootFCO(This,pVal) ) 


#define IMgaConnection_AddConnPoint(This,rolename,maxinrole,Target,refs,pVal)	\
    ( (This)->lpVtbl -> AddConnPoint(This,rolename,maxinrole,Target,refs,pVal) ) 

#define IMgaConnection_get_ConnPoints(This,pVal)	\
    ( (This)->lpVtbl -> get_ConnPoints(This,pVal) ) 

#define IMgaConnection_CompareToBase(This,connpoint,status)	\
    ( (This)->lpVtbl -> CompareToBase(This,connpoint,status) ) 

#define IMgaConnection_RevertToBase(This,connpoint)	\
    ( (This)->lpVtbl -> RevertToBase(This,connpoint) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IMgaConnection_INTERFACE_DEFINED__ */


#ifndef __IMgaSimpleConnection_INTERFACE_DEFINED__
#define __IMgaSimpleConnection_INTERFACE_DEFINED__

/* interface IMgaSimpleConnection */
/* [unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_IMgaSimpleConnection;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("83BA3237-B758-11D3-ABAE-000000000000")
    IMgaSimpleConnection : public IMgaConnection
    {
    public:
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Src( 
            /* [retval][out] */ IMgaFCO **pVal) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Dst( 
            /* [retval][out] */ IMgaFCO **pVal) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_SrcReferences( 
            /* [retval][out] */ IMgaFCOs **pVal) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_DstReferences( 
            /* [retval][out] */ IMgaFCOs **pVal) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE SetDst( 
            /* [in] */ IMgaFCOs *references,
            /* [in] */ IMgaFCO *Target) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE SetSrc( 
            /* [in] */ IMgaFCOs *references,
            /* [in] */ IMgaFCO *Target) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IMgaSimpleConnectionVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IMgaSimpleConnection * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IMgaSimpleConnection * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IMgaSimpleConnection * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IMgaSimpleConnection * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IMgaSimpleConnection * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IMgaSimpleConnection * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IMgaSimpleConnection * This,
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
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Status )( 
            IMgaSimpleConnection * This,
            /* [retval][out] */ long *p);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_IsWritable )( 
            IMgaSimpleConnection * This,
            /* [retval][out] */ VARIANT_BOOL *p);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ID )( 
            IMgaSimpleConnection * This,
            /* [retval][out] */ ID_type *pVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Name )( 
            IMgaSimpleConnection * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Name )( 
            IMgaSimpleConnection * This,
            /* [in] */ BSTR newVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_AbsPath )( 
            IMgaSimpleConnection * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_MetaBase )( 
            IMgaSimpleConnection * This,
            /* [retval][out] */ IMgaMetaBase **pVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ObjType )( 
            IMgaSimpleConnection * This,
            /* [retval][out] */ objtype_enum *pVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Project )( 
            IMgaSimpleConnection * This,
            /* [retval][out] */ IMgaProject **pVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Territory )( 
            IMgaSimpleConnection * This,
            /* [retval][out] */ IMgaTerritory **pVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_IsEqual )( 
            IMgaSimpleConnection * This,
            /* [in] */ IMgaObject *o,
            /* [retval][out] */ VARIANT_BOOL *pVal);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetIsEqualDisp )( 
            IMgaSimpleConnection * This,
            /* [in] */ IMgaObject *o,
            /* [retval][out] */ VARIANT_BOOL *pVal);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetParent )( 
            IMgaSimpleConnection * This,
            /* [out] */ IMgaObject **pVal,
            /* [defaultvalue][out] */ objtype_enum *objtype);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *CheckProject )( 
            IMgaSimpleConnection * This,
            /* [in] */ IMgaProject *project);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *DestroyObject )( 
            IMgaSimpleConnection * This);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Open )( 
            IMgaSimpleConnection * This,
            /* [defaultvalue][in] */ openmode mode);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Close )( 
            IMgaSimpleConnection * This);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Associate )( 
            IMgaSimpleConnection * This,
            /* [in] */ VARIANT userdata);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentAssociation )( 
            IMgaSimpleConnection * This,
            /* [retval][out] */ VARIANT *userdata);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *SendEvent )( 
            IMgaSimpleConnection * This,
            /* [in] */ long mask);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_RelID )( 
            IMgaSimpleConnection * This,
            /* [retval][out] */ long *pVal);
        
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_RelID )( 
            IMgaSimpleConnection * This,
            /* [in] */ long newVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_IsLibObject )( 
            IMgaSimpleConnection * This,
            /* [retval][out] */ VARIANT_BOOL *pVal);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Check )( 
            IMgaSimpleConnection * This);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *CheckTree )( 
            IMgaSimpleConnection * This);
        
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Exempt )( 
            IMgaSimpleConnection * This,
            /* [in] */ VARIANT_BOOL newVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Exempt )( 
            IMgaSimpleConnection * This,
            /* [retval][out] */ VARIANT_BOOL *pVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ChildObjects )( 
            IMgaSimpleConnection * This,
            /* [retval][out] */ IMgaObjects **pVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ChildObjectByRelID )( 
            IMgaSimpleConnection * This,
            /* [in] */ long relid,
            /* [retval][out] */ IMgaObject **pVal);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetChildObjectByRelIDDisp )( 
            IMgaSimpleConnection * This,
            /* [in] */ long relid,
            /* [retval][out] */ IMgaObject **pVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ObjectByPath )( 
            IMgaSimpleConnection * This,
            /* [in] */ BSTR path,
            /* [retval][out] */ IMgaObject **pVal);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetObjectByPathDisp )( 
            IMgaSimpleConnection * This,
            /* [in] */ BSTR path,
            /* [retval][out] */ IMgaObject **pVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_NthObjectByPath )( 
            IMgaSimpleConnection * This,
            /* [in] */ long n_th,
            /* [in] */ BSTR path,
            /* [retval][out] */ IMgaObject **pVal);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetNthObjectByPathDisp )( 
            IMgaSimpleConnection * This,
            /* [in] */ long n_th,
            /* [in] */ BSTR path,
            /* [retval][out] */ IMgaObject **pVal);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *PutReadOnlyAccessWithPropagate )( 
            IMgaSimpleConnection * This,
            /* [in] */ VARIANT_BOOL pReadOnly);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *PutReadOnlyAccess )( 
            IMgaSimpleConnection * This,
            /* [in] */ VARIANT_BOOL pReadOnly);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *HasReadOnlyAccess )( 
            IMgaSimpleConnection * This,
            /* [retval][out] */ VARIANT_BOOL *pReadOnly);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetGuid )( 
            IMgaSimpleConnection * This,
            /* [out][in] */ long *l1,
            /* [out][in] */ long *l2,
            /* [out][in] */ long *l3,
            /* [out][in] */ long *l4);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *PutGuid )( 
            IMgaSimpleConnection * This,
            /* [in] */ long l1,
            /* [in] */ long l2,
            /* [in] */ long l3,
            /* [in] */ long l4);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetGuidDisp )( 
            IMgaSimpleConnection * This,
            /* [retval][out] */ BSTR *guid_str);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *PutGuidDisp )( 
            IMgaSimpleConnection * This,
            /* [in] */ BSTR guid_str);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Meta )( 
            IMgaSimpleConnection * This,
            /* [retval][out] */ IMgaMetaFCO **pVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_MetaRole )( 
            IMgaSimpleConnection * This,
            /* [retval][out] */ IMgaMetaRole **pVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ParentModel )( 
            IMgaSimpleConnection * This,
            /* [retval][out] */ IMgaModel **pVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ParentFolder )( 
            IMgaSimpleConnection * This,
            /* [retval][out] */ IMgaFolder **pVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Parts )( 
            IMgaSimpleConnection * This,
            /* [retval][out] */ IMgaParts **pVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Part )( 
            IMgaSimpleConnection * This,
            /* [in] */ IMgaMetaAspect *asp,
            /* [retval][out] */ IMgaPart **pVal);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetPartDisp )( 
            IMgaSimpleConnection * This,
            /* [in] */ IMgaMetaAspect *asp,
            /* [retval][out] */ IMgaPart **pVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_PartByMetaPart )( 
            IMgaSimpleConnection * This,
            /* [in] */ IMgaMetaPart *part,
            /* [retval][out] */ IMgaPart **pVal);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetPartByMetaPartDisp )( 
            IMgaSimpleConnection * This,
            /* [in] */ IMgaMetaPart *part,
            /* [retval][out] */ IMgaPart **pVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Attributes )( 
            IMgaSimpleConnection * This,
            /* [retval][out] */ IMgaAttributes **pVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Attribute )( 
            IMgaSimpleConnection * This,
            /* [in] */ IMgaMetaAttribute *meta,
            /* [retval][out] */ IMgaAttribute **pVal);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetAttributeDisp )( 
            IMgaSimpleConnection * This,
            /* [in] */ IMgaMetaAttribute *meta,
            /* [retval][out] */ IMgaAttribute **pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_AttributeByName )( 
            IMgaSimpleConnection * This,
            /* [in] */ BSTR name,
            /* [retval][out] */ VARIANT *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_AttributeByName )( 
            IMgaSimpleConnection * This,
            /* [in] */ BSTR name,
            /* [in] */ VARIANT newval);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetAttributeByNameDisp )( 
            IMgaSimpleConnection * This,
            /* [in] */ BSTR name,
            /* [retval][out] */ VARIANT *pVal);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *SetAttributeByNameDisp )( 
            IMgaSimpleConnection * This,
            /* [in] */ BSTR name,
            /* [in] */ VARIANT newval);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_StrAttrByName )( 
            IMgaSimpleConnection * This,
            /* [in] */ BSTR name,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_StrAttrByName )( 
            IMgaSimpleConnection * This,
            /* [in] */ BSTR name,
            /* [in] */ BSTR newval);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetStrAttrByNameDisp )( 
            IMgaSimpleConnection * This,
            /* [in] */ BSTR name,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *SetStrAttrByNameDisp )( 
            IMgaSimpleConnection * This,
            /* [in] */ BSTR name,
            /* [in] */ BSTR newval);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_IntAttrByName )( 
            IMgaSimpleConnection * This,
            /* [in] */ BSTR name,
            /* [retval][out] */ long *pVal);
        
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_IntAttrByName )( 
            IMgaSimpleConnection * This,
            /* [in] */ BSTR name,
            /* [in] */ long newval);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetIntAttrByNameDisp )( 
            IMgaSimpleConnection * This,
            /* [in] */ BSTR name,
            /* [retval][out] */ long *pVal);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *SetIntAttrByNameDisp )( 
            IMgaSimpleConnection * This,
            /* [in] */ BSTR name,
            /* [in] */ long newval);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_FloatAttrByName )( 
            IMgaSimpleConnection * This,
            /* [in] */ BSTR name,
            /* [retval][out] */ double *pVal);
        
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_FloatAttrByName )( 
            IMgaSimpleConnection * This,
            /* [in] */ BSTR name,
            /* [in] */ double newval);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetFloatAttrByNameDisp )( 
            IMgaSimpleConnection * This,
            /* [in] */ BSTR name,
            /* [retval][out] */ double *pVal);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *SetFloatAttrByNameDisp )( 
            IMgaSimpleConnection * This,
            /* [in] */ BSTR name,
            /* [in] */ double newval);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_BoolAttrByName )( 
            IMgaSimpleConnection * This,
            /* [in] */ BSTR name,
            /* [retval][out] */ VARIANT_BOOL *pVal);
        
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_BoolAttrByName )( 
            IMgaSimpleConnection * This,
            /* [in] */ BSTR name,
            /* [in] */ VARIANT_BOOL newval);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetBoolAttrByNameDisp )( 
            IMgaSimpleConnection * This,
            /* [in] */ BSTR name,
            /* [retval][out] */ VARIANT_BOOL *pVal);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *SetBoolAttrByNameDisp )( 
            IMgaSimpleConnection * This,
            /* [in] */ BSTR name,
            /* [in] */ VARIANT_BOOL newval);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_RefAttrByName )( 
            IMgaSimpleConnection * This,
            /* [in] */ BSTR name,
            /* [retval][out] */ IMgaFCO **pVal);
        
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_RefAttrByName )( 
            IMgaSimpleConnection * This,
            /* [in] */ BSTR name,
            /* [in] */ IMgaFCO *newval);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetRefAttrByNameDisp )( 
            IMgaSimpleConnection * This,
            /* [in] */ BSTR name,
            /* [retval][out] */ IMgaFCO **pVal);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *SetRefAttrByNameDisp )( 
            IMgaSimpleConnection * This,
            /* [in] */ BSTR name,
            /* [in] */ IMgaFCO *newval);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *ClearAttrByName )( 
            IMgaSimpleConnection * This,
            /* [in] */ BSTR name);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_RegistryNode )( 
            IMgaSimpleConnection * This,
            /* [in] */ BSTR path,
            /* [retval][out] */ IMgaRegNode **pVal);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetRegistryNodeDisp )( 
            IMgaSimpleConnection * This,
            /* [in] */ BSTR path,
            /* [retval][out] */ IMgaRegNode **pVal);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Registry )( 
            IMgaSimpleConnection * This,
            /* [defaultvalue][in] */ VARIANT_BOOL virtuals,
            /* [retval][out] */ IMgaRegNodes **pVal);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetRegistryDisp )( 
            IMgaSimpleConnection * This,
            /* [defaultvalue][in] */ VARIANT_BOOL virtuals,
            /* [retval][out] */ IMgaRegNodes **pVal);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_RegistryValue )( 
            IMgaSimpleConnection * This,
            /* [in] */ BSTR path,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_RegistryValue )( 
            IMgaSimpleConnection * This,
            /* [in] */ BSTR path,
            /* [in] */ BSTR newval);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetRegistryValueDisp )( 
            IMgaSimpleConnection * This,
            /* [in] */ BSTR path,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *SetRegistryValueDisp )( 
            IMgaSimpleConnection * This,
            /* [in] */ BSTR path,
            /* [in] */ BSTR newval);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Constraints )( 
            IMgaSimpleConnection * This,
            /* [in] */ VARIANT_BOOL includemeta,
            /* [retval][out] */ IMgaConstraints **pVal);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetConstraintsDisp )( 
            IMgaSimpleConnection * This,
            /* [in] */ VARIANT_BOOL includemeta,
            /* [retval][out] */ IMgaConstraints **pVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *AddConstraint )( 
            IMgaSimpleConnection * This,
            /* [in] */ IMgaConstraint *constraint);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *DefineConstraint )( 
            IMgaSimpleConnection * This,
            /* [in] */ BSTR name,
            /* [in] */ long mask,
            /* [in] */ BSTR expr,
            /* [out] */ IMgaConstraint **nconstraint);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_DerivedFrom )( 
            IMgaSimpleConnection * This,
            /* [retval][out] */ IMgaFCO **pVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_DerivedObjects )( 
            IMgaSimpleConnection * This,
            /* [retval][out] */ IMgaFCOs **pVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Type )( 
            IMgaSimpleConnection * This,
            /* [retval][out] */ IMgaFCO **pVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_BaseType )( 
            IMgaSimpleConnection * This,
            /* [retval][out] */ IMgaFCO **pVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ArcheType )( 
            IMgaSimpleConnection * This,
            /* [retval][out] */ IMgaFCO **pVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_IsInstance )( 
            IMgaSimpleConnection * This,
            /* [retval][out] */ VARIANT_BOOL *pVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_IsPrimaryDerived )( 
            IMgaSimpleConnection * This,
            /* [retval][out] */ VARIANT_BOOL *pVal);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *AttachToArcheType )( 
            IMgaSimpleConnection * This,
            /* [in] */ IMgaFCO *newtype,
            /* [in] */ VARIANT_BOOL instance);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *DetachFromArcheType )( 
            IMgaSimpleConnection * This);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetAbsMetaPath )( 
            IMgaSimpleConnection * This,
            /* [out][in] */ BSTR *abspath);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetRelMetaPath )( 
            IMgaSimpleConnection * This,
            /* [in] */ IMgaFCO *begfco,
            /* [out][in] */ BSTR *relpath,
            /* [defaultvalue][in] */ IMgaFCOs *refs);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_PartOfConns )( 
            IMgaSimpleConnection * This,
            /* [retval][out] */ IMgaConnPoints **pVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_MemberOfSets )( 
            IMgaSimpleConnection * This,
            /* [retval][out] */ IMgaFCOs **pVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ReferencedBy )( 
            IMgaSimpleConnection * This,
            /* [retval][out] */ IMgaFCOs **pVal);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *CreateCollection )( 
            IMgaSimpleConnection * This,
            /* [out][in] */ IMgaFCOs **pVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_RootFCO )( 
            IMgaSimpleConnection * This,
            /* [retval][out] */ IMgaFCO **pVal);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *AddConnPoint )( 
            IMgaSimpleConnection * This,
            /* [in] */ BSTR rolename,
            /* [in] */ long maxinrole,
            /* [in] */ IMgaFCO *Target,
            /* [in] */ IMgaFCOs *refs,
            /* [out] */ IMgaConnPoint **pVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ConnPoints )( 
            IMgaSimpleConnection * This,
            /* [retval][out] */ IMgaConnPoints **pVal);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *CompareToBase )( 
            IMgaSimpleConnection * This,
            /* [in] */ IMgaConnPoint *connpoint,
            /* [out] */ short *status);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *RevertToBase )( 
            IMgaSimpleConnection * This,
            /* [in] */ IMgaConnPoint *connpoint);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Src )( 
            IMgaSimpleConnection * This,
            /* [retval][out] */ IMgaFCO **pVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Dst )( 
            IMgaSimpleConnection * This,
            /* [retval][out] */ IMgaFCO **pVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_SrcReferences )( 
            IMgaSimpleConnection * This,
            /* [retval][out] */ IMgaFCOs **pVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_DstReferences )( 
            IMgaSimpleConnection * This,
            /* [retval][out] */ IMgaFCOs **pVal);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *SetDst )( 
            IMgaSimpleConnection * This,
            /* [in] */ IMgaFCOs *references,
            /* [in] */ IMgaFCO *Target);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *SetSrc )( 
            IMgaSimpleConnection * This,
            /* [in] */ IMgaFCOs *references,
            /* [in] */ IMgaFCO *Target);
        
        END_INTERFACE
    } IMgaSimpleConnectionVtbl;

    interface IMgaSimpleConnection
    {
        CONST_VTBL struct IMgaSimpleConnectionVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IMgaSimpleConnection_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IMgaSimpleConnection_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IMgaSimpleConnection_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IMgaSimpleConnection_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IMgaSimpleConnection_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IMgaSimpleConnection_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IMgaSimpleConnection_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IMgaSimpleConnection_get_Status(This,p)	\
    ( (This)->lpVtbl -> get_Status(This,p) ) 

#define IMgaSimpleConnection_get_IsWritable(This,p)	\
    ( (This)->lpVtbl -> get_IsWritable(This,p) ) 

#define IMgaSimpleConnection_get_ID(This,pVal)	\
    ( (This)->lpVtbl -> get_ID(This,pVal) ) 

#define IMgaSimpleConnection_get_Name(This,pVal)	\
    ( (This)->lpVtbl -> get_Name(This,pVal) ) 

#define IMgaSimpleConnection_put_Name(This,newVal)	\
    ( (This)->lpVtbl -> put_Name(This,newVal) ) 

#define IMgaSimpleConnection_get_AbsPath(This,pVal)	\
    ( (This)->lpVtbl -> get_AbsPath(This,pVal) ) 

#define IMgaSimpleConnection_get_MetaBase(This,pVal)	\
    ( (This)->lpVtbl -> get_MetaBase(This,pVal) ) 

#define IMgaSimpleConnection_get_ObjType(This,pVal)	\
    ( (This)->lpVtbl -> get_ObjType(This,pVal) ) 

#define IMgaSimpleConnection_get_Project(This,pVal)	\
    ( (This)->lpVtbl -> get_Project(This,pVal) ) 

#define IMgaSimpleConnection_get_Territory(This,pVal)	\
    ( (This)->lpVtbl -> get_Territory(This,pVal) ) 

#define IMgaSimpleConnection_get_IsEqual(This,o,pVal)	\
    ( (This)->lpVtbl -> get_IsEqual(This,o,pVal) ) 

#define IMgaSimpleConnection_GetIsEqualDisp(This,o,pVal)	\
    ( (This)->lpVtbl -> GetIsEqualDisp(This,o,pVal) ) 

#define IMgaSimpleConnection_GetParent(This,pVal,objtype)	\
    ( (This)->lpVtbl -> GetParent(This,pVal,objtype) ) 

#define IMgaSimpleConnection_CheckProject(This,project)	\
    ( (This)->lpVtbl -> CheckProject(This,project) ) 

#define IMgaSimpleConnection_DestroyObject(This)	\
    ( (This)->lpVtbl -> DestroyObject(This) ) 

#define IMgaSimpleConnection_Open(This,mode)	\
    ( (This)->lpVtbl -> Open(This,mode) ) 

#define IMgaSimpleConnection_Close(This)	\
    ( (This)->lpVtbl -> Close(This) ) 

#define IMgaSimpleConnection_Associate(This,userdata)	\
    ( (This)->lpVtbl -> Associate(This,userdata) ) 

#define IMgaSimpleConnection_get_CurrentAssociation(This,userdata)	\
    ( (This)->lpVtbl -> get_CurrentAssociation(This,userdata) ) 

#define IMgaSimpleConnection_SendEvent(This,mask)	\
    ( (This)->lpVtbl -> SendEvent(This,mask) ) 

#define IMgaSimpleConnection_get_RelID(This,pVal)	\
    ( (This)->lpVtbl -> get_RelID(This,pVal) ) 

#define IMgaSimpleConnection_put_RelID(This,newVal)	\
    ( (This)->lpVtbl -> put_RelID(This,newVal) ) 

#define IMgaSimpleConnection_get_IsLibObject(This,pVal)	\
    ( (This)->lpVtbl -> get_IsLibObject(This,pVal) ) 

#define IMgaSimpleConnection_Check(This)	\
    ( (This)->lpVtbl -> Check(This) ) 

#define IMgaSimpleConnection_CheckTree(This)	\
    ( (This)->lpVtbl -> CheckTree(This) ) 

#define IMgaSimpleConnection_put_Exempt(This,newVal)	\
    ( (This)->lpVtbl -> put_Exempt(This,newVal) ) 

#define IMgaSimpleConnection_get_Exempt(This,pVal)	\
    ( (This)->lpVtbl -> get_Exempt(This,pVal) ) 

#define IMgaSimpleConnection_get_ChildObjects(This,pVal)	\
    ( (This)->lpVtbl -> get_ChildObjects(This,pVal) ) 

#define IMgaSimpleConnection_get_ChildObjectByRelID(This,relid,pVal)	\
    ( (This)->lpVtbl -> get_ChildObjectByRelID(This,relid,pVal) ) 

#define IMgaSimpleConnection_GetChildObjectByRelIDDisp(This,relid,pVal)	\
    ( (This)->lpVtbl -> GetChildObjectByRelIDDisp(This,relid,pVal) ) 

#define IMgaSimpleConnection_get_ObjectByPath(This,path,pVal)	\
    ( (This)->lpVtbl -> get_ObjectByPath(This,path,pVal) ) 

#define IMgaSimpleConnection_GetObjectByPathDisp(This,path,pVal)	\
    ( (This)->lpVtbl -> GetObjectByPathDisp(This,path,pVal) ) 

#define IMgaSimpleConnection_get_NthObjectByPath(This,n_th,path,pVal)	\
    ( (This)->lpVtbl -> get_NthObjectByPath(This,n_th,path,pVal) ) 

#define IMgaSimpleConnection_GetNthObjectByPathDisp(This,n_th,path,pVal)	\
    ( (This)->lpVtbl -> GetNthObjectByPathDisp(This,n_th,path,pVal) ) 

#define IMgaSimpleConnection_PutReadOnlyAccessWithPropagate(This,pReadOnly)	\
    ( (This)->lpVtbl -> PutReadOnlyAccessWithPropagate(This,pReadOnly) ) 

#define IMgaSimpleConnection_PutReadOnlyAccess(This,pReadOnly)	\
    ( (This)->lpVtbl -> PutReadOnlyAccess(This,pReadOnly) ) 

#define IMgaSimpleConnection_HasReadOnlyAccess(This,pReadOnly)	\
    ( (This)->lpVtbl -> HasReadOnlyAccess(This,pReadOnly) ) 

#define IMgaSimpleConnection_GetGuid(This,l1,l2,l3,l4)	\
    ( (This)->lpVtbl -> GetGuid(This,l1,l2,l3,l4) ) 

#define IMgaSimpleConnection_PutGuid(This,l1,l2,l3,l4)	\
    ( (This)->lpVtbl -> PutGuid(This,l1,l2,l3,l4) ) 

#define IMgaSimpleConnection_GetGuidDisp(This,guid_str)	\
    ( (This)->lpVtbl -> GetGuidDisp(This,guid_str) ) 

#define IMgaSimpleConnection_PutGuidDisp(This,guid_str)	\
    ( (This)->lpVtbl -> PutGuidDisp(This,guid_str) ) 


#define IMgaSimpleConnection_get_Meta(This,pVal)	\
    ( (This)->lpVtbl -> get_Meta(This,pVal) ) 

#define IMgaSimpleConnection_get_MetaRole(This,pVal)	\
    ( (This)->lpVtbl -> get_MetaRole(This,pVal) ) 

#define IMgaSimpleConnection_get_ParentModel(This,pVal)	\
    ( (This)->lpVtbl -> get_ParentModel(This,pVal) ) 

#define IMgaSimpleConnection_get_ParentFolder(This,pVal)	\
    ( (This)->lpVtbl -> get_ParentFolder(This,pVal) ) 

#define IMgaSimpleConnection_get_Parts(This,pVal)	\
    ( (This)->lpVtbl -> get_Parts(This,pVal) ) 

#define IMgaSimpleConnection_get_Part(This,asp,pVal)	\
    ( (This)->lpVtbl -> get_Part(This,asp,pVal) ) 

#define IMgaSimpleConnection_GetPartDisp(This,asp,pVal)	\
    ( (This)->lpVtbl -> GetPartDisp(This,asp,pVal) ) 

#define IMgaSimpleConnection_get_PartByMetaPart(This,part,pVal)	\
    ( (This)->lpVtbl -> get_PartByMetaPart(This,part,pVal) ) 

#define IMgaSimpleConnection_GetPartByMetaPartDisp(This,part,pVal)	\
    ( (This)->lpVtbl -> GetPartByMetaPartDisp(This,part,pVal) ) 

#define IMgaSimpleConnection_get_Attributes(This,pVal)	\
    ( (This)->lpVtbl -> get_Attributes(This,pVal) ) 

#define IMgaSimpleConnection_get_Attribute(This,meta,pVal)	\
    ( (This)->lpVtbl -> get_Attribute(This,meta,pVal) ) 

#define IMgaSimpleConnection_GetAttributeDisp(This,meta,pVal)	\
    ( (This)->lpVtbl -> GetAttributeDisp(This,meta,pVal) ) 

#define IMgaSimpleConnection_get_AttributeByName(This,name,pVal)	\
    ( (This)->lpVtbl -> get_AttributeByName(This,name,pVal) ) 

#define IMgaSimpleConnection_put_AttributeByName(This,name,newval)	\
    ( (This)->lpVtbl -> put_AttributeByName(This,name,newval) ) 

#define IMgaSimpleConnection_GetAttributeByNameDisp(This,name,pVal)	\
    ( (This)->lpVtbl -> GetAttributeByNameDisp(This,name,pVal) ) 

#define IMgaSimpleConnection_SetAttributeByNameDisp(This,name,newval)	\
    ( (This)->lpVtbl -> SetAttributeByNameDisp(This,name,newval) ) 

#define IMgaSimpleConnection_get_StrAttrByName(This,name,pVal)	\
    ( (This)->lpVtbl -> get_StrAttrByName(This,name,pVal) ) 

#define IMgaSimpleConnection_put_StrAttrByName(This,name,newval)	\
    ( (This)->lpVtbl -> put_StrAttrByName(This,name,newval) ) 

#define IMgaSimpleConnection_GetStrAttrByNameDisp(This,name,pVal)	\
    ( (This)->lpVtbl -> GetStrAttrByNameDisp(This,name,pVal) ) 

#define IMgaSimpleConnection_SetStrAttrByNameDisp(This,name,newval)	\
    ( (This)->lpVtbl -> SetStrAttrByNameDisp(This,name,newval) ) 

#define IMgaSimpleConnection_get_IntAttrByName(This,name,pVal)	\
    ( (This)->lpVtbl -> get_IntAttrByName(This,name,pVal) ) 

#define IMgaSimpleConnection_put_IntAttrByName(This,name,newval)	\
    ( (This)->lpVtbl -> put_IntAttrByName(This,name,newval) ) 

#define IMgaSimpleConnection_GetIntAttrByNameDisp(This,name,pVal)	\
    ( (This)->lpVtbl -> GetIntAttrByNameDisp(This,name,pVal) ) 

#define IMgaSimpleConnection_SetIntAttrByNameDisp(This,name,newval)	\
    ( (This)->lpVtbl -> SetIntAttrByNameDisp(This,name,newval) ) 

#define IMgaSimpleConnection_get_FloatAttrByName(This,name,pVal)	\
    ( (This)->lpVtbl -> get_FloatAttrByName(This,name,pVal) ) 

#define IMgaSimpleConnection_put_FloatAttrByName(This,name,newval)	\
    ( (This)->lpVtbl -> put_FloatAttrByName(This,name,newval) ) 

#define IMgaSimpleConnection_GetFloatAttrByNameDisp(This,name,pVal)	\
    ( (This)->lpVtbl -> GetFloatAttrByNameDisp(This,name,pVal) ) 

#define IMgaSimpleConnection_SetFloatAttrByNameDisp(This,name,newval)	\
    ( (This)->lpVtbl -> SetFloatAttrByNameDisp(This,name,newval) ) 

#define IMgaSimpleConnection_get_BoolAttrByName(This,name,pVal)	\
    ( (This)->lpVtbl -> get_BoolAttrByName(This,name,pVal) ) 

#define IMgaSimpleConnection_put_BoolAttrByName(This,name,newval)	\
    ( (This)->lpVtbl -> put_BoolAttrByName(This,name,newval) ) 

#define IMgaSimpleConnection_GetBoolAttrByNameDisp(This,name,pVal)	\
    ( (This)->lpVtbl -> GetBoolAttrByNameDisp(This,name,pVal) ) 

#define IMgaSimpleConnection_SetBoolAttrByNameDisp(This,name,newval)	\
    ( (This)->lpVtbl -> SetBoolAttrByNameDisp(This,name,newval) ) 

#define IMgaSimpleConnection_get_RefAttrByName(This,name,pVal)	\
    ( (This)->lpVtbl -> get_RefAttrByName(This,name,pVal) ) 

#define IMgaSimpleConnection_put_RefAttrByName(This,name,newval)	\
    ( (This)->lpVtbl -> put_RefAttrByName(This,name,newval) ) 

#define IMgaSimpleConnection_GetRefAttrByNameDisp(This,name,pVal)	\
    ( (This)->lpVtbl -> GetRefAttrByNameDisp(This,name,pVal) ) 

#define IMgaSimpleConnection_SetRefAttrByNameDisp(This,name,newval)	\
    ( (This)->lpVtbl -> SetRefAttrByNameDisp(This,name,newval) ) 

#define IMgaSimpleConnection_ClearAttrByName(This,name)	\
    ( (This)->lpVtbl -> ClearAttrByName(This,name) ) 

#define IMgaSimpleConnection_get_RegistryNode(This,path,pVal)	\
    ( (This)->lpVtbl -> get_RegistryNode(This,path,pVal) ) 

#define IMgaSimpleConnection_GetRegistryNodeDisp(This,path,pVal)	\
    ( (This)->lpVtbl -> GetRegistryNodeDisp(This,path,pVal) ) 

#define IMgaSimpleConnection_get_Registry(This,virtuals,pVal)	\
    ( (This)->lpVtbl -> get_Registry(This,virtuals,pVal) ) 

#define IMgaSimpleConnection_GetRegistryDisp(This,virtuals,pVal)	\
    ( (This)->lpVtbl -> GetRegistryDisp(This,virtuals,pVal) ) 

#define IMgaSimpleConnection_get_RegistryValue(This,path,pVal)	\
    ( (This)->lpVtbl -> get_RegistryValue(This,path,pVal) ) 

#define IMgaSimpleConnection_put_RegistryValue(This,path,newval)	\
    ( (This)->lpVtbl -> put_RegistryValue(This,path,newval) ) 

#define IMgaSimpleConnection_GetRegistryValueDisp(This,path,pVal)	\
    ( (This)->lpVtbl -> GetRegistryValueDisp(This,path,pVal) ) 

#define IMgaSimpleConnection_SetRegistryValueDisp(This,path,newval)	\
    ( (This)->lpVtbl -> SetRegistryValueDisp(This,path,newval) ) 

#define IMgaSimpleConnection_get_Constraints(This,includemeta,pVal)	\
    ( (This)->lpVtbl -> get_Constraints(This,includemeta,pVal) ) 

#define IMgaSimpleConnection_GetConstraintsDisp(This,includemeta,pVal)	\
    ( (This)->lpVtbl -> GetConstraintsDisp(This,includemeta,pVal) ) 

#define IMgaSimpleConnection_AddConstraint(This,constraint)	\
    ( (This)->lpVtbl -> AddConstraint(This,constraint) ) 

#define IMgaSimpleConnection_DefineConstraint(This,name,mask,expr,nconstraint)	\
    ( (This)->lpVtbl -> DefineConstraint(This,name,mask,expr,nconstraint) ) 

#define IMgaSimpleConnection_get_DerivedFrom(This,pVal)	\
    ( (This)->lpVtbl -> get_DerivedFrom(This,pVal) ) 

#define IMgaSimpleConnection_get_DerivedObjects(This,pVal)	\
    ( (This)->lpVtbl -> get_DerivedObjects(This,pVal) ) 

#define IMgaSimpleConnection_get_Type(This,pVal)	\
    ( (This)->lpVtbl -> get_Type(This,pVal) ) 

#define IMgaSimpleConnection_get_BaseType(This,pVal)	\
    ( (This)->lpVtbl -> get_BaseType(This,pVal) ) 

#define IMgaSimpleConnection_get_ArcheType(This,pVal)	\
    ( (This)->lpVtbl -> get_ArcheType(This,pVal) ) 

#define IMgaSimpleConnection_get_IsInstance(This,pVal)	\
    ( (This)->lpVtbl -> get_IsInstance(This,pVal) ) 

#define IMgaSimpleConnection_get_IsPrimaryDerived(This,pVal)	\
    ( (This)->lpVtbl -> get_IsPrimaryDerived(This,pVal) ) 

#define IMgaSimpleConnection_AttachToArcheType(This,newtype,instance)	\
    ( (This)->lpVtbl -> AttachToArcheType(This,newtype,instance) ) 

#define IMgaSimpleConnection_DetachFromArcheType(This)	\
    ( (This)->lpVtbl -> DetachFromArcheType(This) ) 

#define IMgaSimpleConnection_GetAbsMetaPath(This,abspath)	\
    ( (This)->lpVtbl -> GetAbsMetaPath(This,abspath) ) 

#define IMgaSimpleConnection_GetRelMetaPath(This,begfco,relpath,refs)	\
    ( (This)->lpVtbl -> GetRelMetaPath(This,begfco,relpath,refs) ) 

#define IMgaSimpleConnection_get_PartOfConns(This,pVal)	\
    ( (This)->lpVtbl -> get_PartOfConns(This,pVal) ) 

#define IMgaSimpleConnection_get_MemberOfSets(This,pVal)	\
    ( (This)->lpVtbl -> get_MemberOfSets(This,pVal) ) 

#define IMgaSimpleConnection_get_ReferencedBy(This,pVal)	\
    ( (This)->lpVtbl -> get_ReferencedBy(This,pVal) ) 

#define IMgaSimpleConnection_CreateCollection(This,pVal)	\
    ( (This)->lpVtbl -> CreateCollection(This,pVal) ) 

#define IMgaSimpleConnection_get_RootFCO(This,pVal)	\
    ( (This)->lpVtbl -> get_RootFCO(This,pVal) ) 


#define IMgaSimpleConnection_AddConnPoint(This,rolename,maxinrole,Target,refs,pVal)	\
    ( (This)->lpVtbl -> AddConnPoint(This,rolename,maxinrole,Target,refs,pVal) ) 

#define IMgaSimpleConnection_get_ConnPoints(This,pVal)	\
    ( (This)->lpVtbl -> get_ConnPoints(This,pVal) ) 

#define IMgaSimpleConnection_CompareToBase(This,connpoint,status)	\
    ( (This)->lpVtbl -> CompareToBase(This,connpoint,status) ) 

#define IMgaSimpleConnection_RevertToBase(This,connpoint)	\
    ( (This)->lpVtbl -> RevertToBase(This,connpoint) ) 


#define IMgaSimpleConnection_get_Src(This,pVal)	\
    ( (This)->lpVtbl -> get_Src(This,pVal) ) 

#define IMgaSimpleConnection_get_Dst(This,pVal)	\
    ( (This)->lpVtbl -> get_Dst(This,pVal) ) 

#define IMgaSimpleConnection_get_SrcReferences(This,pVal)	\
    ( (This)->lpVtbl -> get_SrcReferences(This,pVal) ) 

#define IMgaSimpleConnection_get_DstReferences(This,pVal)	\
    ( (This)->lpVtbl -> get_DstReferences(This,pVal) ) 

#define IMgaSimpleConnection_SetDst(This,references,Target)	\
    ( (This)->lpVtbl -> SetDst(This,references,Target) ) 

#define IMgaSimpleConnection_SetSrc(This,references,Target)	\
    ( (This)->lpVtbl -> SetSrc(This,references,Target) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IMgaSimpleConnection_INTERFACE_DEFINED__ */


#ifndef __IMgaConnPoint_INTERFACE_DEFINED__
#define __IMgaConnPoint_INTERFACE_DEFINED__

/* interface IMgaConnPoint */
/* [unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_IMgaConnPoint;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("cb8fa000-c1fd-11d3-9ad2-00aa00b6fe26")
    IMgaConnPoint : public IDispatch
    {
    public:
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Owner( 
            /* [retval][out] */ IMgaConnection **pVal) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_ConnRole( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_ConnRole( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Target( 
            /* [retval][out] */ IMgaFCO **pVal) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_References( 
            /* [retval][out] */ IMgaFCOs **pVal) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Remove( void) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IMgaConnPointVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IMgaConnPoint * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IMgaConnPoint * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IMgaConnPoint * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IMgaConnPoint * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IMgaConnPoint * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IMgaConnPoint * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IMgaConnPoint * This,
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
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Owner )( 
            IMgaConnPoint * This,
            /* [retval][out] */ IMgaConnection **pVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ConnRole )( 
            IMgaConnPoint * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ConnRole )( 
            IMgaConnPoint * This,
            /* [in] */ BSTR newVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Target )( 
            IMgaConnPoint * This,
            /* [retval][out] */ IMgaFCO **pVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_References )( 
            IMgaConnPoint * This,
            /* [retval][out] */ IMgaFCOs **pVal);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Remove )( 
            IMgaConnPoint * This);
        
        END_INTERFACE
    } IMgaConnPointVtbl;

    interface IMgaConnPoint
    {
        CONST_VTBL struct IMgaConnPointVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IMgaConnPoint_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IMgaConnPoint_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IMgaConnPoint_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IMgaConnPoint_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IMgaConnPoint_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IMgaConnPoint_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IMgaConnPoint_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IMgaConnPoint_get_Owner(This,pVal)	\
    ( (This)->lpVtbl -> get_Owner(This,pVal) ) 

#define IMgaConnPoint_get_ConnRole(This,pVal)	\
    ( (This)->lpVtbl -> get_ConnRole(This,pVal) ) 

#define IMgaConnPoint_put_ConnRole(This,newVal)	\
    ( (This)->lpVtbl -> put_ConnRole(This,newVal) ) 

#define IMgaConnPoint_get_Target(This,pVal)	\
    ( (This)->lpVtbl -> get_Target(This,pVal) ) 

#define IMgaConnPoint_get_References(This,pVal)	\
    ( (This)->lpVtbl -> get_References(This,pVal) ) 

#define IMgaConnPoint_Remove(This)	\
    ( (This)->lpVtbl -> Remove(This) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IMgaConnPoint_INTERFACE_DEFINED__ */


#ifndef __IMgaRegNode_INTERFACE_DEFINED__
#define __IMgaRegNode_INTERFACE_DEFINED__

/* interface IMgaRegNode */
/* [unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_IMgaRegNode;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("83BA323D-B758-11D3-ABAE-000000000000")
    IMgaRegNode : public IDispatch
    {
    public:
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Name( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Path( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Value( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_Value( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_FCOValue( 
            /* [retval][out] */ IMgaFCO **pVal) = 0;
        
        virtual /* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_FCOValue( 
            /* [in] */ IMgaFCO *newVal) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_SubNodes( 
            /* [defaultvalue][in] */ VARIANT_BOOL virtuals,
            /* [retval][out] */ IMgaRegNodes **p) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetSubNodesDisp( 
            /* [defaultvalue][in] */ VARIANT_BOOL virtuals,
            /* [retval][out] */ IMgaRegNodes **p) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_SubNodeByName( 
            /* [in] */ BSTR name,
            /* [retval][out] */ IMgaRegNode **pVal) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetSubNodeByNameDisp( 
            /* [in] */ BSTR name,
            /* [retval][out] */ IMgaRegNode **pVal) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_ParentNode( 
            /* [retval][out] */ IMgaRegNode **p) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Status( 
            /* [out] */ long *status) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Opacity( 
            /* [retval][out] */ VARIANT_BOOL *p) = 0;
        
        virtual /* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_Opacity( 
            /* [in] */ VARIANT_BOOL p) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Clear( void) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE RemoveTree( void) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IMgaRegNodeVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IMgaRegNode * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IMgaRegNode * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IMgaRegNode * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IMgaRegNode * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IMgaRegNode * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IMgaRegNode * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IMgaRegNode * This,
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
            IMgaRegNode * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Path )( 
            IMgaRegNode * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Value )( 
            IMgaRegNode * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Value )( 
            IMgaRegNode * This,
            /* [in] */ BSTR newVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_FCOValue )( 
            IMgaRegNode * This,
            /* [retval][out] */ IMgaFCO **pVal);
        
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_FCOValue )( 
            IMgaRegNode * This,
            /* [in] */ IMgaFCO *newVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_SubNodes )( 
            IMgaRegNode * This,
            /* [defaultvalue][in] */ VARIANT_BOOL virtuals,
            /* [retval][out] */ IMgaRegNodes **p);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetSubNodesDisp )( 
            IMgaRegNode * This,
            /* [defaultvalue][in] */ VARIANT_BOOL virtuals,
            /* [retval][out] */ IMgaRegNodes **p);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_SubNodeByName )( 
            IMgaRegNode * This,
            /* [in] */ BSTR name,
            /* [retval][out] */ IMgaRegNode **pVal);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetSubNodeByNameDisp )( 
            IMgaRegNode * This,
            /* [in] */ BSTR name,
            /* [retval][out] */ IMgaRegNode **pVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ParentNode )( 
            IMgaRegNode * This,
            /* [retval][out] */ IMgaRegNode **p);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Status )( 
            IMgaRegNode * This,
            /* [out] */ long *status);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Opacity )( 
            IMgaRegNode * This,
            /* [retval][out] */ VARIANT_BOOL *p);
        
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Opacity )( 
            IMgaRegNode * This,
            /* [in] */ VARIANT_BOOL p);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Clear )( 
            IMgaRegNode * This);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *RemoveTree )( 
            IMgaRegNode * This);
        
        END_INTERFACE
    } IMgaRegNodeVtbl;

    interface IMgaRegNode
    {
        CONST_VTBL struct IMgaRegNodeVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IMgaRegNode_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IMgaRegNode_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IMgaRegNode_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IMgaRegNode_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IMgaRegNode_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IMgaRegNode_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IMgaRegNode_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IMgaRegNode_get_Name(This,pVal)	\
    ( (This)->lpVtbl -> get_Name(This,pVal) ) 

#define IMgaRegNode_get_Path(This,pVal)	\
    ( (This)->lpVtbl -> get_Path(This,pVal) ) 

#define IMgaRegNode_get_Value(This,pVal)	\
    ( (This)->lpVtbl -> get_Value(This,pVal) ) 

#define IMgaRegNode_put_Value(This,newVal)	\
    ( (This)->lpVtbl -> put_Value(This,newVal) ) 

#define IMgaRegNode_get_FCOValue(This,pVal)	\
    ( (This)->lpVtbl -> get_FCOValue(This,pVal) ) 

#define IMgaRegNode_put_FCOValue(This,newVal)	\
    ( (This)->lpVtbl -> put_FCOValue(This,newVal) ) 

#define IMgaRegNode_get_SubNodes(This,virtuals,p)	\
    ( (This)->lpVtbl -> get_SubNodes(This,virtuals,p) ) 

#define IMgaRegNode_GetSubNodesDisp(This,virtuals,p)	\
    ( (This)->lpVtbl -> GetSubNodesDisp(This,virtuals,p) ) 

#define IMgaRegNode_get_SubNodeByName(This,name,pVal)	\
    ( (This)->lpVtbl -> get_SubNodeByName(This,name,pVal) ) 

#define IMgaRegNode_GetSubNodeByNameDisp(This,name,pVal)	\
    ( (This)->lpVtbl -> GetSubNodeByNameDisp(This,name,pVal) ) 

#define IMgaRegNode_get_ParentNode(This,p)	\
    ( (This)->lpVtbl -> get_ParentNode(This,p) ) 

#define IMgaRegNode_get_Status(This,status)	\
    ( (This)->lpVtbl -> get_Status(This,status) ) 

#define IMgaRegNode_get_Opacity(This,p)	\
    ( (This)->lpVtbl -> get_Opacity(This,p) ) 

#define IMgaRegNode_put_Opacity(This,p)	\
    ( (This)->lpVtbl -> put_Opacity(This,p) ) 

#define IMgaRegNode_Clear(This)	\
    ( (This)->lpVtbl -> Clear(This) ) 

#define IMgaRegNode_RemoveTree(This)	\
    ( (This)->lpVtbl -> RemoveTree(This) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IMgaRegNode_INTERFACE_DEFINED__ */


#ifndef __IMgaFilter_INTERFACE_DEFINED__
#define __IMgaFilter_INTERFACE_DEFINED__

/* interface IMgaFilter */
/* [unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_IMgaFilter;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("c8f6e970-c1fd-11d3-9ad2-00aa00b6fe26")
    IMgaFilter : public IDispatch
    {
    public:
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Name( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_Name( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Kind( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_Kind( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Role( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_Role( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_ObjType( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_ObjType( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Level( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_Level( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Project( 
            /* [retval][out] */ IMgaProject **pVal) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IMgaFilterVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IMgaFilter * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IMgaFilter * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IMgaFilter * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IMgaFilter * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IMgaFilter * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IMgaFilter * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IMgaFilter * This,
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
            IMgaFilter * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Name )( 
            IMgaFilter * This,
            /* [in] */ BSTR newVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Kind )( 
            IMgaFilter * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Kind )( 
            IMgaFilter * This,
            /* [in] */ BSTR newVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Role )( 
            IMgaFilter * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Role )( 
            IMgaFilter * This,
            /* [in] */ BSTR newVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ObjType )( 
            IMgaFilter * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ObjType )( 
            IMgaFilter * This,
            /* [in] */ BSTR newVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Level )( 
            IMgaFilter * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Level )( 
            IMgaFilter * This,
            /* [in] */ BSTR newVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Project )( 
            IMgaFilter * This,
            /* [retval][out] */ IMgaProject **pVal);
        
        END_INTERFACE
    } IMgaFilterVtbl;

    interface IMgaFilter
    {
        CONST_VTBL struct IMgaFilterVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IMgaFilter_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IMgaFilter_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IMgaFilter_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IMgaFilter_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IMgaFilter_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IMgaFilter_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IMgaFilter_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IMgaFilter_get_Name(This,pVal)	\
    ( (This)->lpVtbl -> get_Name(This,pVal) ) 

#define IMgaFilter_put_Name(This,newVal)	\
    ( (This)->lpVtbl -> put_Name(This,newVal) ) 

#define IMgaFilter_get_Kind(This,pVal)	\
    ( (This)->lpVtbl -> get_Kind(This,pVal) ) 

#define IMgaFilter_put_Kind(This,newVal)	\
    ( (This)->lpVtbl -> put_Kind(This,newVal) ) 

#define IMgaFilter_get_Role(This,pVal)	\
    ( (This)->lpVtbl -> get_Role(This,pVal) ) 

#define IMgaFilter_put_Role(This,newVal)	\
    ( (This)->lpVtbl -> put_Role(This,newVal) ) 

#define IMgaFilter_get_ObjType(This,pVal)	\
    ( (This)->lpVtbl -> get_ObjType(This,pVal) ) 

#define IMgaFilter_put_ObjType(This,newVal)	\
    ( (This)->lpVtbl -> put_ObjType(This,newVal) ) 

#define IMgaFilter_get_Level(This,pVal)	\
    ( (This)->lpVtbl -> get_Level(This,pVal) ) 

#define IMgaFilter_put_Level(This,newVal)	\
    ( (This)->lpVtbl -> put_Level(This,newVal) ) 

#define IMgaFilter_get_Project(This,pVal)	\
    ( (This)->lpVtbl -> get_Project(This,pVal) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IMgaFilter_INTERFACE_DEFINED__ */


#ifndef __IMgaAttribute_INTERFACE_DEFINED__
#define __IMgaAttribute_INTERFACE_DEFINED__

/* interface IMgaAttribute */
/* [unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_IMgaAttribute;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("CBF20084-BD43-11D3-9AD2-00AA00B6FE26")
    IMgaAttribute : public IDispatch
    {
    public:
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Meta( 
            /* [retval][out] */ IMgaMetaAttribute **pVal) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Value( 
            /* [retval][out] */ VARIANT *pVal) = 0;
        
        virtual /* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_Value( 
            /* [in] */ VARIANT newVal) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Owner( 
            /* [retval][out] */ IMgaFCO **pVal) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Status( 
            /* [retval][out] */ long *status) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_OrigValue( 
            /* [retval][out] */ VARIANT *pVal) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_HasChanged( 
            /* [retval][out] */ VARIANT_BOOL *pVal) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_StringValue( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_StringValue( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_IntValue( 
            /* [retval][out] */ long *pVal) = 0;
        
        virtual /* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_IntValue( 
            /* [in] */ long newVal) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_BoolValue( 
            /* [retval][out] */ VARIANT_BOOL *pVal) = 0;
        
        virtual /* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_BoolValue( 
            /* [in] */ VARIANT_BOOL newVal) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_FloatValue( 
            /* [retval][out] */ double *pVal) = 0;
        
        virtual /* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_FloatValue( 
            /* [in] */ double newVal) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_FCOValue( 
            /* [retval][out] */ IMgaFCO **pVal) = 0;
        
        virtual /* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_FCOValue( 
            /* [in] */ IMgaFCO *newVal) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_RegistryNode( 
            /* [in] */ BSTR path,
            /* [retval][out] */ IMgaRegNode **pVal) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetRegistryNodeDisp( 
            /* [in] */ BSTR path,
            /* [retval][out] */ IMgaRegNode **pVal) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Registry( 
            /* [defaultvalue][in] */ VARIANT_BOOL virtuals,
            /* [retval][out] */ IMgaRegNodes **pVal) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetRegistryDisp( 
            /* [defaultvalue][in] */ VARIANT_BOOL virtuals,
            /* [retval][out] */ IMgaRegNodes **pVal) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_RegistryValue( 
            /* [in] */ BSTR path,
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_RegistryValue( 
            /* [in] */ BSTR path,
            /* [in] */ BSTR newval) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetRegistryValueDisp( 
            /* [in] */ BSTR path,
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE SetRegistryValueDisp( 
            /* [in] */ BSTR path,
            /* [in] */ BSTR newval) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Clear( void) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IMgaAttributeVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IMgaAttribute * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IMgaAttribute * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IMgaAttribute * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IMgaAttribute * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IMgaAttribute * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IMgaAttribute * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IMgaAttribute * This,
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
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Meta )( 
            IMgaAttribute * This,
            /* [retval][out] */ IMgaMetaAttribute **pVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Value )( 
            IMgaAttribute * This,
            /* [retval][out] */ VARIANT *pVal);
        
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Value )( 
            IMgaAttribute * This,
            /* [in] */ VARIANT newVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Owner )( 
            IMgaAttribute * This,
            /* [retval][out] */ IMgaFCO **pVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Status )( 
            IMgaAttribute * This,
            /* [retval][out] */ long *status);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_OrigValue )( 
            IMgaAttribute * This,
            /* [retval][out] */ VARIANT *pVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_HasChanged )( 
            IMgaAttribute * This,
            /* [retval][out] */ VARIANT_BOOL *pVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_StringValue )( 
            IMgaAttribute * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_StringValue )( 
            IMgaAttribute * This,
            /* [in] */ BSTR newVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_IntValue )( 
            IMgaAttribute * This,
            /* [retval][out] */ long *pVal);
        
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_IntValue )( 
            IMgaAttribute * This,
            /* [in] */ long newVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_BoolValue )( 
            IMgaAttribute * This,
            /* [retval][out] */ VARIANT_BOOL *pVal);
        
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_BoolValue )( 
            IMgaAttribute * This,
            /* [in] */ VARIANT_BOOL newVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_FloatValue )( 
            IMgaAttribute * This,
            /* [retval][out] */ double *pVal);
        
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_FloatValue )( 
            IMgaAttribute * This,
            /* [in] */ double newVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_FCOValue )( 
            IMgaAttribute * This,
            /* [retval][out] */ IMgaFCO **pVal);
        
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_FCOValue )( 
            IMgaAttribute * This,
            /* [in] */ IMgaFCO *newVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_RegistryNode )( 
            IMgaAttribute * This,
            /* [in] */ BSTR path,
            /* [retval][out] */ IMgaRegNode **pVal);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetRegistryNodeDisp )( 
            IMgaAttribute * This,
            /* [in] */ BSTR path,
            /* [retval][out] */ IMgaRegNode **pVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Registry )( 
            IMgaAttribute * This,
            /* [defaultvalue][in] */ VARIANT_BOOL virtuals,
            /* [retval][out] */ IMgaRegNodes **pVal);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetRegistryDisp )( 
            IMgaAttribute * This,
            /* [defaultvalue][in] */ VARIANT_BOOL virtuals,
            /* [retval][out] */ IMgaRegNodes **pVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_RegistryValue )( 
            IMgaAttribute * This,
            /* [in] */ BSTR path,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_RegistryValue )( 
            IMgaAttribute * This,
            /* [in] */ BSTR path,
            /* [in] */ BSTR newval);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetRegistryValueDisp )( 
            IMgaAttribute * This,
            /* [in] */ BSTR path,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *SetRegistryValueDisp )( 
            IMgaAttribute * This,
            /* [in] */ BSTR path,
            /* [in] */ BSTR newval);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Clear )( 
            IMgaAttribute * This);
        
        END_INTERFACE
    } IMgaAttributeVtbl;

    interface IMgaAttribute
    {
        CONST_VTBL struct IMgaAttributeVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IMgaAttribute_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IMgaAttribute_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IMgaAttribute_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IMgaAttribute_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IMgaAttribute_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IMgaAttribute_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IMgaAttribute_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IMgaAttribute_get_Meta(This,pVal)	\
    ( (This)->lpVtbl -> get_Meta(This,pVal) ) 

#define IMgaAttribute_get_Value(This,pVal)	\
    ( (This)->lpVtbl -> get_Value(This,pVal) ) 

#define IMgaAttribute_put_Value(This,newVal)	\
    ( (This)->lpVtbl -> put_Value(This,newVal) ) 

#define IMgaAttribute_get_Owner(This,pVal)	\
    ( (This)->lpVtbl -> get_Owner(This,pVal) ) 

#define IMgaAttribute_get_Status(This,status)	\
    ( (This)->lpVtbl -> get_Status(This,status) ) 

#define IMgaAttribute_get_OrigValue(This,pVal)	\
    ( (This)->lpVtbl -> get_OrigValue(This,pVal) ) 

#define IMgaAttribute_get_HasChanged(This,pVal)	\
    ( (This)->lpVtbl -> get_HasChanged(This,pVal) ) 

#define IMgaAttribute_get_StringValue(This,pVal)	\
    ( (This)->lpVtbl -> get_StringValue(This,pVal) ) 

#define IMgaAttribute_put_StringValue(This,newVal)	\
    ( (This)->lpVtbl -> put_StringValue(This,newVal) ) 

#define IMgaAttribute_get_IntValue(This,pVal)	\
    ( (This)->lpVtbl -> get_IntValue(This,pVal) ) 

#define IMgaAttribute_put_IntValue(This,newVal)	\
    ( (This)->lpVtbl -> put_IntValue(This,newVal) ) 

#define IMgaAttribute_get_BoolValue(This,pVal)	\
    ( (This)->lpVtbl -> get_BoolValue(This,pVal) ) 

#define IMgaAttribute_put_BoolValue(This,newVal)	\
    ( (This)->lpVtbl -> put_BoolValue(This,newVal) ) 

#define IMgaAttribute_get_FloatValue(This,pVal)	\
    ( (This)->lpVtbl -> get_FloatValue(This,pVal) ) 

#define IMgaAttribute_put_FloatValue(This,newVal)	\
    ( (This)->lpVtbl -> put_FloatValue(This,newVal) ) 

#define IMgaAttribute_get_FCOValue(This,pVal)	\
    ( (This)->lpVtbl -> get_FCOValue(This,pVal) ) 

#define IMgaAttribute_put_FCOValue(This,newVal)	\
    ( (This)->lpVtbl -> put_FCOValue(This,newVal) ) 

#define IMgaAttribute_get_RegistryNode(This,path,pVal)	\
    ( (This)->lpVtbl -> get_RegistryNode(This,path,pVal) ) 

#define IMgaAttribute_GetRegistryNodeDisp(This,path,pVal)	\
    ( (This)->lpVtbl -> GetRegistryNodeDisp(This,path,pVal) ) 

#define IMgaAttribute_get_Registry(This,virtuals,pVal)	\
    ( (This)->lpVtbl -> get_Registry(This,virtuals,pVal) ) 

#define IMgaAttribute_GetRegistryDisp(This,virtuals,pVal)	\
    ( (This)->lpVtbl -> GetRegistryDisp(This,virtuals,pVal) ) 

#define IMgaAttribute_get_RegistryValue(This,path,pVal)	\
    ( (This)->lpVtbl -> get_RegistryValue(This,path,pVal) ) 

#define IMgaAttribute_put_RegistryValue(This,path,newval)	\
    ( (This)->lpVtbl -> put_RegistryValue(This,path,newval) ) 

#define IMgaAttribute_GetRegistryValueDisp(This,path,pVal)	\
    ( (This)->lpVtbl -> GetRegistryValueDisp(This,path,pVal) ) 

#define IMgaAttribute_SetRegistryValueDisp(This,path,newval)	\
    ( (This)->lpVtbl -> SetRegistryValueDisp(This,path,newval) ) 

#define IMgaAttribute_Clear(This)	\
    ( (This)->lpVtbl -> Clear(This) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IMgaAttribute_INTERFACE_DEFINED__ */


#ifndef __IMgaFolders_INTERFACE_DEFINED__
#define __IMgaFolders_INTERFACE_DEFINED__

/* interface IMgaFolders */
/* [unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_IMgaFolders;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("c59c2210-c1fd-11d3-9ad2-00aa00b6fe26")
    IMgaFolders : public IDispatch
    {
    public:
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Count( 
            /* [retval][out] */ long *p) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Item( 
            /* [in] */ long n,
            /* [retval][out] */ IMgaFolder **p) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get__NewEnum( 
            /* [retval][out] */ IUnknown **p) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetAll( 
            /* [in] */ long count,
            /* [size_is][out] */ IMgaFolder **p) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Insert( 
            /* [in] */ IMgaFolder *p,
            /* [in] */ long at) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Append( 
            /* [in] */ IMgaFolder *p) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Find( 
            /* [in] */ IMgaFolder *p,
            /* [in] */ long start,
            /* [retval][out] */ long *res) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Remove( 
            /* [in] */ long n) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IMgaFoldersVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IMgaFolders * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IMgaFolders * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IMgaFolders * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IMgaFolders * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IMgaFolders * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IMgaFolders * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IMgaFolders * This,
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
            IMgaFolders * This,
            /* [retval][out] */ long *p);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Item )( 
            IMgaFolders * This,
            /* [in] */ long n,
            /* [retval][out] */ IMgaFolder **p);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get__NewEnum )( 
            IMgaFolders * This,
            /* [retval][out] */ IUnknown **p);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetAll )( 
            IMgaFolders * This,
            /* [in] */ long count,
            /* [size_is][out] */ IMgaFolder **p);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Insert )( 
            IMgaFolders * This,
            /* [in] */ IMgaFolder *p,
            /* [in] */ long at);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Append )( 
            IMgaFolders * This,
            /* [in] */ IMgaFolder *p);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Find )( 
            IMgaFolders * This,
            /* [in] */ IMgaFolder *p,
            /* [in] */ long start,
            /* [retval][out] */ long *res);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Remove )( 
            IMgaFolders * This,
            /* [in] */ long n);
        
        END_INTERFACE
    } IMgaFoldersVtbl;

    interface IMgaFolders
    {
        CONST_VTBL struct IMgaFoldersVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IMgaFolders_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IMgaFolders_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IMgaFolders_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IMgaFolders_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IMgaFolders_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IMgaFolders_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IMgaFolders_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IMgaFolders_get_Count(This,p)	\
    ( (This)->lpVtbl -> get_Count(This,p) ) 

#define IMgaFolders_get_Item(This,n,p)	\
    ( (This)->lpVtbl -> get_Item(This,n,p) ) 

#define IMgaFolders_get__NewEnum(This,p)	\
    ( (This)->lpVtbl -> get__NewEnum(This,p) ) 

#define IMgaFolders_GetAll(This,count,p)	\
    ( (This)->lpVtbl -> GetAll(This,count,p) ) 

#define IMgaFolders_Insert(This,p,at)	\
    ( (This)->lpVtbl -> Insert(This,p,at) ) 

#define IMgaFolders_Append(This,p)	\
    ( (This)->lpVtbl -> Append(This,p) ) 

#define IMgaFolders_Find(This,p,start,res)	\
    ( (This)->lpVtbl -> Find(This,p,start,res) ) 

#define IMgaFolders_Remove(This,n)	\
    ( (This)->lpVtbl -> Remove(This,n) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IMgaFolders_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_Mga_0000_0023 */
/* [local] */ 

#ifdef __cplusplus
extern "C++"    
{            
template<> struct ::TypeName_MgaColl2Elem<IMgaFolders>
{ typedef IMgaFolders collection_type; typedef IMgaFolder element_type; };
template<> struct ::TypeName_MgaElem2Coll<IMgaFolder>
{ typedef IMgaFolders collection_type; typedef IMgaFolder element_type; };
}            
#endif


extern RPC_IF_HANDLE __MIDL_itf_Mga_0000_0023_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_Mga_0000_0023_v0_0_s_ifspec;

#ifndef __IMgaFCOs_INTERFACE_DEFINED__
#define __IMgaFCOs_INTERFACE_DEFINED__

/* interface IMgaFCOs */
/* [unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_IMgaFCOs;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("c5f4c2f0-c1fd-11d3-9ad2-00aa00b6fe26")
    IMgaFCOs : public IDispatch
    {
    public:
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Count( 
            /* [retval][out] */ long *p) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Item( 
            /* [in] */ long n,
            /* [retval][out] */ IMgaFCO **p) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get__NewEnum( 
            /* [retval][out] */ IUnknown **p) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetAll( 
            /* [in] */ long count,
            /* [size_is][out] */ IMgaFCO **p) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Insert( 
            /* [in] */ IMgaFCO *p,
            /* [in] */ long at) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Append( 
            /* [in] */ IMgaFCO *p) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Find( 
            /* [in] */ IMgaFCO *p,
            /* [in] */ long start,
            /* [retval][out] */ long *res) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Remove( 
            /* [in] */ long n) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IMgaFCOsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IMgaFCOs * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IMgaFCOs * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IMgaFCOs * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IMgaFCOs * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IMgaFCOs * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IMgaFCOs * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IMgaFCOs * This,
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
            IMgaFCOs * This,
            /* [retval][out] */ long *p);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Item )( 
            IMgaFCOs * This,
            /* [in] */ long n,
            /* [retval][out] */ IMgaFCO **p);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get__NewEnum )( 
            IMgaFCOs * This,
            /* [retval][out] */ IUnknown **p);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetAll )( 
            IMgaFCOs * This,
            /* [in] */ long count,
            /* [size_is][out] */ IMgaFCO **p);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Insert )( 
            IMgaFCOs * This,
            /* [in] */ IMgaFCO *p,
            /* [in] */ long at);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Append )( 
            IMgaFCOs * This,
            /* [in] */ IMgaFCO *p);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Find )( 
            IMgaFCOs * This,
            /* [in] */ IMgaFCO *p,
            /* [in] */ long start,
            /* [retval][out] */ long *res);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Remove )( 
            IMgaFCOs * This,
            /* [in] */ long n);
        
        END_INTERFACE
    } IMgaFCOsVtbl;

    interface IMgaFCOs
    {
        CONST_VTBL struct IMgaFCOsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IMgaFCOs_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IMgaFCOs_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IMgaFCOs_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IMgaFCOs_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IMgaFCOs_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IMgaFCOs_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IMgaFCOs_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IMgaFCOs_get_Count(This,p)	\
    ( (This)->lpVtbl -> get_Count(This,p) ) 

#define IMgaFCOs_get_Item(This,n,p)	\
    ( (This)->lpVtbl -> get_Item(This,n,p) ) 

#define IMgaFCOs_get__NewEnum(This,p)	\
    ( (This)->lpVtbl -> get__NewEnum(This,p) ) 

#define IMgaFCOs_GetAll(This,count,p)	\
    ( (This)->lpVtbl -> GetAll(This,count,p) ) 

#define IMgaFCOs_Insert(This,p,at)	\
    ( (This)->lpVtbl -> Insert(This,p,at) ) 

#define IMgaFCOs_Append(This,p)	\
    ( (This)->lpVtbl -> Append(This,p) ) 

#define IMgaFCOs_Find(This,p,start,res)	\
    ( (This)->lpVtbl -> Find(This,p,start,res) ) 

#define IMgaFCOs_Remove(This,n)	\
    ( (This)->lpVtbl -> Remove(This,n) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IMgaFCOs_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_Mga_0000_0024 */
/* [local] */ 

#ifdef __cplusplus
extern "C++"    
{            
template<> struct ::TypeName_MgaColl2Elem<IMgaFCOs>
{ typedef IMgaFCOs collection_type; typedef IMgaFCO element_type; };
template<> struct ::TypeName_MgaElem2Coll<IMgaFCO>
{ typedef IMgaFCOs collection_type; typedef IMgaFCO element_type; };
}            
#endif


extern RPC_IF_HANDLE __MIDL_itf_Mga_0000_0024_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_Mga_0000_0024_v0_0_s_ifspec;

#ifndef __IMgaAttributes_INTERFACE_DEFINED__
#define __IMgaAttributes_INTERFACE_DEFINED__

/* interface IMgaAttributes */
/* [unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_IMgaAttributes;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("c6f3f340-c1fd-11d3-9ad2-00aa00b6fe26")
    IMgaAttributes : public IDispatch
    {
    public:
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Count( 
            /* [retval][out] */ long *p) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Item( 
            /* [in] */ long n,
            /* [retval][out] */ IMgaAttribute **p) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get__NewEnum( 
            /* [retval][out] */ IUnknown **p) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetAll( 
            /* [in] */ long count,
            /* [size_is][out] */ IMgaAttribute **p) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Insert( 
            /* [in] */ IMgaAttribute *p,
            /* [in] */ long at) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Append( 
            /* [in] */ IMgaAttribute *p) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Find( 
            /* [in] */ IMgaAttribute *p,
            /* [in] */ long start,
            /* [retval][out] */ long *res) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Remove( 
            /* [in] */ long n) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IMgaAttributesVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IMgaAttributes * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IMgaAttributes * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IMgaAttributes * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IMgaAttributes * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IMgaAttributes * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IMgaAttributes * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IMgaAttributes * This,
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
            IMgaAttributes * This,
            /* [retval][out] */ long *p);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Item )( 
            IMgaAttributes * This,
            /* [in] */ long n,
            /* [retval][out] */ IMgaAttribute **p);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get__NewEnum )( 
            IMgaAttributes * This,
            /* [retval][out] */ IUnknown **p);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetAll )( 
            IMgaAttributes * This,
            /* [in] */ long count,
            /* [size_is][out] */ IMgaAttribute **p);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Insert )( 
            IMgaAttributes * This,
            /* [in] */ IMgaAttribute *p,
            /* [in] */ long at);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Append )( 
            IMgaAttributes * This,
            /* [in] */ IMgaAttribute *p);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Find )( 
            IMgaAttributes * This,
            /* [in] */ IMgaAttribute *p,
            /* [in] */ long start,
            /* [retval][out] */ long *res);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Remove )( 
            IMgaAttributes * This,
            /* [in] */ long n);
        
        END_INTERFACE
    } IMgaAttributesVtbl;

    interface IMgaAttributes
    {
        CONST_VTBL struct IMgaAttributesVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IMgaAttributes_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IMgaAttributes_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IMgaAttributes_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IMgaAttributes_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IMgaAttributes_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IMgaAttributes_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IMgaAttributes_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IMgaAttributes_get_Count(This,p)	\
    ( (This)->lpVtbl -> get_Count(This,p) ) 

#define IMgaAttributes_get_Item(This,n,p)	\
    ( (This)->lpVtbl -> get_Item(This,n,p) ) 

#define IMgaAttributes_get__NewEnum(This,p)	\
    ( (This)->lpVtbl -> get__NewEnum(This,p) ) 

#define IMgaAttributes_GetAll(This,count,p)	\
    ( (This)->lpVtbl -> GetAll(This,count,p) ) 

#define IMgaAttributes_Insert(This,p,at)	\
    ( (This)->lpVtbl -> Insert(This,p,at) ) 

#define IMgaAttributes_Append(This,p)	\
    ( (This)->lpVtbl -> Append(This,p) ) 

#define IMgaAttributes_Find(This,p,start,res)	\
    ( (This)->lpVtbl -> Find(This,p,start,res) ) 

#define IMgaAttributes_Remove(This,n)	\
    ( (This)->lpVtbl -> Remove(This,n) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IMgaAttributes_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_Mga_0000_0025 */
/* [local] */ 

#ifdef __cplusplus
extern "C++"    
{            
template<> struct ::TypeName_MgaColl2Elem<IMgaAttributes>
{ typedef IMgaAttributes collection_type; typedef IMgaAttribute element_type; };
template<> struct ::TypeName_MgaElem2Coll<IMgaAttribute>
{ typedef IMgaAttributes collection_type; typedef IMgaAttribute element_type; };
}            
#endif


extern RPC_IF_HANDLE __MIDL_itf_Mga_0000_0025_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_Mga_0000_0025_v0_0_s_ifspec;

#ifndef __IMgaParts_INTERFACE_DEFINED__
#define __IMgaParts_INTERFACE_DEFINED__

/* interface IMgaParts */
/* [unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_IMgaParts;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("c71a26f0-c1fd-11d3-9ad2-00aa00b6fe26")
    IMgaParts : public IDispatch
    {
    public:
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Count( 
            /* [retval][out] */ long *p) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Item( 
            /* [in] */ long n,
            /* [retval][out] */ IMgaPart **p) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get__NewEnum( 
            /* [retval][out] */ IUnknown **p) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetAll( 
            /* [in] */ long count,
            /* [size_is][out] */ IMgaPart **p) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Insert( 
            /* [in] */ IMgaPart *p,
            /* [in] */ long at) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Append( 
            /* [in] */ IMgaPart *p) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Find( 
            /* [in] */ IMgaPart *p,
            /* [in] */ long start,
            /* [retval][out] */ long *res) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Remove( 
            /* [in] */ long n) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IMgaPartsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IMgaParts * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IMgaParts * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IMgaParts * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IMgaParts * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IMgaParts * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IMgaParts * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IMgaParts * This,
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
            IMgaParts * This,
            /* [retval][out] */ long *p);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Item )( 
            IMgaParts * This,
            /* [in] */ long n,
            /* [retval][out] */ IMgaPart **p);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get__NewEnum )( 
            IMgaParts * This,
            /* [retval][out] */ IUnknown **p);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetAll )( 
            IMgaParts * This,
            /* [in] */ long count,
            /* [size_is][out] */ IMgaPart **p);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Insert )( 
            IMgaParts * This,
            /* [in] */ IMgaPart *p,
            /* [in] */ long at);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Append )( 
            IMgaParts * This,
            /* [in] */ IMgaPart *p);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Find )( 
            IMgaParts * This,
            /* [in] */ IMgaPart *p,
            /* [in] */ long start,
            /* [retval][out] */ long *res);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Remove )( 
            IMgaParts * This,
            /* [in] */ long n);
        
        END_INTERFACE
    } IMgaPartsVtbl;

    interface IMgaParts
    {
        CONST_VTBL struct IMgaPartsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IMgaParts_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IMgaParts_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IMgaParts_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IMgaParts_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IMgaParts_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IMgaParts_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IMgaParts_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IMgaParts_get_Count(This,p)	\
    ( (This)->lpVtbl -> get_Count(This,p) ) 

#define IMgaParts_get_Item(This,n,p)	\
    ( (This)->lpVtbl -> get_Item(This,n,p) ) 

#define IMgaParts_get__NewEnum(This,p)	\
    ( (This)->lpVtbl -> get__NewEnum(This,p) ) 

#define IMgaParts_GetAll(This,count,p)	\
    ( (This)->lpVtbl -> GetAll(This,count,p) ) 

#define IMgaParts_Insert(This,p,at)	\
    ( (This)->lpVtbl -> Insert(This,p,at) ) 

#define IMgaParts_Append(This,p)	\
    ( (This)->lpVtbl -> Append(This,p) ) 

#define IMgaParts_Find(This,p,start,res)	\
    ( (This)->lpVtbl -> Find(This,p,start,res) ) 

#define IMgaParts_Remove(This,n)	\
    ( (This)->lpVtbl -> Remove(This,n) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IMgaParts_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_Mga_0000_0026 */
/* [local] */ 

#ifdef __cplusplus
extern "C++"    
{            
template<> struct ::TypeName_MgaColl2Elem<IMgaParts>
{ typedef IMgaParts collection_type; typedef IMgaPart element_type; };
template<> struct ::TypeName_MgaElem2Coll<IMgaPart>
{ typedef IMgaParts collection_type; typedef IMgaPart element_type; };
}            
#endif


extern RPC_IF_HANDLE __MIDL_itf_Mga_0000_0026_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_Mga_0000_0026_v0_0_s_ifspec;

#ifndef __IMgaConnPoints_INTERFACE_DEFINED__
#define __IMgaConnPoints_INTERFACE_DEFINED__

/* interface IMgaConnPoints */
/* [unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_IMgaConnPoints;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("c7f19c60-c1fd-11d3-9ad2-00aa00b6fe26")
    IMgaConnPoints : public IDispatch
    {
    public:
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Count( 
            /* [retval][out] */ long *p) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Item( 
            /* [in] */ long n,
            /* [retval][out] */ IMgaConnPoint **p) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get__NewEnum( 
            /* [retval][out] */ IUnknown **p) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetAll( 
            /* [in] */ long count,
            /* [size_is][out] */ IMgaConnPoint **p) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Insert( 
            /* [in] */ IMgaConnPoint *p,
            /* [in] */ long at) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Append( 
            /* [in] */ IMgaConnPoint *p) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Find( 
            /* [in] */ IMgaConnPoint *p,
            /* [in] */ long start,
            /* [retval][out] */ long *res) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Remove( 
            /* [in] */ long n) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IMgaConnPointsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IMgaConnPoints * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IMgaConnPoints * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IMgaConnPoints * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IMgaConnPoints * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IMgaConnPoints * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IMgaConnPoints * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IMgaConnPoints * This,
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
            IMgaConnPoints * This,
            /* [retval][out] */ long *p);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Item )( 
            IMgaConnPoints * This,
            /* [in] */ long n,
            /* [retval][out] */ IMgaConnPoint **p);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get__NewEnum )( 
            IMgaConnPoints * This,
            /* [retval][out] */ IUnknown **p);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetAll )( 
            IMgaConnPoints * This,
            /* [in] */ long count,
            /* [size_is][out] */ IMgaConnPoint **p);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Insert )( 
            IMgaConnPoints * This,
            /* [in] */ IMgaConnPoint *p,
            /* [in] */ long at);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Append )( 
            IMgaConnPoints * This,
            /* [in] */ IMgaConnPoint *p);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Find )( 
            IMgaConnPoints * This,
            /* [in] */ IMgaConnPoint *p,
            /* [in] */ long start,
            /* [retval][out] */ long *res);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Remove )( 
            IMgaConnPoints * This,
            /* [in] */ long n);
        
        END_INTERFACE
    } IMgaConnPointsVtbl;

    interface IMgaConnPoints
    {
        CONST_VTBL struct IMgaConnPointsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IMgaConnPoints_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IMgaConnPoints_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IMgaConnPoints_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IMgaConnPoints_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IMgaConnPoints_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IMgaConnPoints_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IMgaConnPoints_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IMgaConnPoints_get_Count(This,p)	\
    ( (This)->lpVtbl -> get_Count(This,p) ) 

#define IMgaConnPoints_get_Item(This,n,p)	\
    ( (This)->lpVtbl -> get_Item(This,n,p) ) 

#define IMgaConnPoints_get__NewEnum(This,p)	\
    ( (This)->lpVtbl -> get__NewEnum(This,p) ) 

#define IMgaConnPoints_GetAll(This,count,p)	\
    ( (This)->lpVtbl -> GetAll(This,count,p) ) 

#define IMgaConnPoints_Insert(This,p,at)	\
    ( (This)->lpVtbl -> Insert(This,p,at) ) 

#define IMgaConnPoints_Append(This,p)	\
    ( (This)->lpVtbl -> Append(This,p) ) 

#define IMgaConnPoints_Find(This,p,start,res)	\
    ( (This)->lpVtbl -> Find(This,p,start,res) ) 

#define IMgaConnPoints_Remove(This,n)	\
    ( (This)->lpVtbl -> Remove(This,n) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IMgaConnPoints_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_Mga_0000_0027 */
/* [local] */ 

#ifdef __cplusplus
extern "C++"    
{            
template<> struct ::TypeName_MgaColl2Elem<IMgaConnPoints>
{ typedef IMgaConnPoints collection_type; typedef IMgaConnPoint element_type; };
template<> struct ::TypeName_MgaElem2Coll<IMgaConnPoint>
{ typedef IMgaConnPoints collection_type; typedef IMgaConnPoint element_type; };
}            
#endif


extern RPC_IF_HANDLE __MIDL_itf_Mga_0000_0027_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_Mga_0000_0027_v0_0_s_ifspec;

#ifndef __IMgaRegNodes_INTERFACE_DEFINED__
#define __IMgaRegNodes_INTERFACE_DEFINED__

/* interface IMgaRegNodes */
/* [unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_IMgaRegNodes;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("c79f1840-c1fd-11d3-9ad2-00aa00b6fe26")
    IMgaRegNodes : public IDispatch
    {
    public:
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Count( 
            /* [retval][out] */ long *p) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Item( 
            /* [in] */ long n,
            /* [retval][out] */ IMgaRegNode **p) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get__NewEnum( 
            /* [retval][out] */ IUnknown **p) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetAll( 
            /* [in] */ long count,
            /* [size_is][out] */ IMgaRegNode **p) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Insert( 
            /* [in] */ IMgaRegNode *p,
            /* [in] */ long at) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Append( 
            /* [in] */ IMgaRegNode *p) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Find( 
            /* [in] */ IMgaRegNode *p,
            /* [in] */ long start,
            /* [retval][out] */ long *res) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Remove( 
            /* [in] */ long n) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IMgaRegNodesVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IMgaRegNodes * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IMgaRegNodes * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IMgaRegNodes * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IMgaRegNodes * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IMgaRegNodes * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IMgaRegNodes * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IMgaRegNodes * This,
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
            IMgaRegNodes * This,
            /* [retval][out] */ long *p);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Item )( 
            IMgaRegNodes * This,
            /* [in] */ long n,
            /* [retval][out] */ IMgaRegNode **p);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get__NewEnum )( 
            IMgaRegNodes * This,
            /* [retval][out] */ IUnknown **p);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetAll )( 
            IMgaRegNodes * This,
            /* [in] */ long count,
            /* [size_is][out] */ IMgaRegNode **p);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Insert )( 
            IMgaRegNodes * This,
            /* [in] */ IMgaRegNode *p,
            /* [in] */ long at);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Append )( 
            IMgaRegNodes * This,
            /* [in] */ IMgaRegNode *p);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Find )( 
            IMgaRegNodes * This,
            /* [in] */ IMgaRegNode *p,
            /* [in] */ long start,
            /* [retval][out] */ long *res);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Remove )( 
            IMgaRegNodes * This,
            /* [in] */ long n);
        
        END_INTERFACE
    } IMgaRegNodesVtbl;

    interface IMgaRegNodes
    {
        CONST_VTBL struct IMgaRegNodesVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IMgaRegNodes_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IMgaRegNodes_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IMgaRegNodes_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IMgaRegNodes_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IMgaRegNodes_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IMgaRegNodes_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IMgaRegNodes_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IMgaRegNodes_get_Count(This,p)	\
    ( (This)->lpVtbl -> get_Count(This,p) ) 

#define IMgaRegNodes_get_Item(This,n,p)	\
    ( (This)->lpVtbl -> get_Item(This,n,p) ) 

#define IMgaRegNodes_get__NewEnum(This,p)	\
    ( (This)->lpVtbl -> get__NewEnum(This,p) ) 

#define IMgaRegNodes_GetAll(This,count,p)	\
    ( (This)->lpVtbl -> GetAll(This,count,p) ) 

#define IMgaRegNodes_Insert(This,p,at)	\
    ( (This)->lpVtbl -> Insert(This,p,at) ) 

#define IMgaRegNodes_Append(This,p)	\
    ( (This)->lpVtbl -> Append(This,p) ) 

#define IMgaRegNodes_Find(This,p,start,res)	\
    ( (This)->lpVtbl -> Find(This,p,start,res) ) 

#define IMgaRegNodes_Remove(This,n)	\
    ( (This)->lpVtbl -> Remove(This,n) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IMgaRegNodes_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_Mga_0000_0028 */
/* [local] */ 

#ifdef __cplusplus
extern "C++"    
{            
template<> struct ::TypeName_MgaColl2Elem<IMgaRegNodes>
{ typedef IMgaRegNodes collection_type; typedef IMgaRegNode element_type; };
template<> struct ::TypeName_MgaElem2Coll<IMgaRegNode>
{ typedef IMgaRegNodes collection_type; typedef IMgaRegNode element_type; };
}            
#endif


extern RPC_IF_HANDLE __MIDL_itf_Mga_0000_0028_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_Mga_0000_0028_v0_0_s_ifspec;

#ifndef __IMgaAddOns_INTERFACE_DEFINED__
#define __IMgaAddOns_INTERFACE_DEFINED__

/* interface IMgaAddOns */
/* [unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_IMgaAddOns;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("c8a5ec80-c1fd-11d3-9ad2-00aa00b6fe26")
    IMgaAddOns : public IDispatch
    {
    public:
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Count( 
            /* [retval][out] */ long *p) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Item( 
            /* [in] */ long n,
            /* [retval][out] */ IMgaAddOn **p) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get__NewEnum( 
            /* [retval][out] */ IUnknown **p) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetAll( 
            /* [in] */ long count,
            /* [size_is][out] */ IMgaAddOn **p) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Insert( 
            /* [in] */ IMgaAddOn *p,
            /* [in] */ long at) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Append( 
            /* [in] */ IMgaAddOn *p) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Find( 
            /* [in] */ IMgaAddOn *p,
            /* [in] */ long start,
            /* [retval][out] */ long *res) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Remove( 
            /* [in] */ long n) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IMgaAddOnsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IMgaAddOns * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IMgaAddOns * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IMgaAddOns * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IMgaAddOns * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IMgaAddOns * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IMgaAddOns * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IMgaAddOns * This,
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
            IMgaAddOns * This,
            /* [retval][out] */ long *p);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Item )( 
            IMgaAddOns * This,
            /* [in] */ long n,
            /* [retval][out] */ IMgaAddOn **p);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get__NewEnum )( 
            IMgaAddOns * This,
            /* [retval][out] */ IUnknown **p);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetAll )( 
            IMgaAddOns * This,
            /* [in] */ long count,
            /* [size_is][out] */ IMgaAddOn **p);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Insert )( 
            IMgaAddOns * This,
            /* [in] */ IMgaAddOn *p,
            /* [in] */ long at);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Append )( 
            IMgaAddOns * This,
            /* [in] */ IMgaAddOn *p);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Find )( 
            IMgaAddOns * This,
            /* [in] */ IMgaAddOn *p,
            /* [in] */ long start,
            /* [retval][out] */ long *res);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Remove )( 
            IMgaAddOns * This,
            /* [in] */ long n);
        
        END_INTERFACE
    } IMgaAddOnsVtbl;

    interface IMgaAddOns
    {
        CONST_VTBL struct IMgaAddOnsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IMgaAddOns_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IMgaAddOns_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IMgaAddOns_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IMgaAddOns_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IMgaAddOns_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IMgaAddOns_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IMgaAddOns_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IMgaAddOns_get_Count(This,p)	\
    ( (This)->lpVtbl -> get_Count(This,p) ) 

#define IMgaAddOns_get_Item(This,n,p)	\
    ( (This)->lpVtbl -> get_Item(This,n,p) ) 

#define IMgaAddOns_get__NewEnum(This,p)	\
    ( (This)->lpVtbl -> get__NewEnum(This,p) ) 

#define IMgaAddOns_GetAll(This,count,p)	\
    ( (This)->lpVtbl -> GetAll(This,count,p) ) 

#define IMgaAddOns_Insert(This,p,at)	\
    ( (This)->lpVtbl -> Insert(This,p,at) ) 

#define IMgaAddOns_Append(This,p)	\
    ( (This)->lpVtbl -> Append(This,p) ) 

#define IMgaAddOns_Find(This,p,start,res)	\
    ( (This)->lpVtbl -> Find(This,p,start,res) ) 

#define IMgaAddOns_Remove(This,n)	\
    ( (This)->lpVtbl -> Remove(This,n) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IMgaAddOns_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_Mga_0000_0029 */
/* [local] */ 

#ifdef __cplusplus
extern "C++"    
{            
template<> struct ::TypeName_MgaColl2Elem<IMgaAddOns>
{ typedef IMgaAddOns collection_type; typedef IMgaAddOn element_type; };
template<> struct ::TypeName_MgaElem2Coll<IMgaAddOn>
{ typedef IMgaAddOns collection_type; typedef IMgaAddOn element_type; };
}            
#endif


extern RPC_IF_HANDLE __MIDL_itf_Mga_0000_0029_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_Mga_0000_0029_v0_0_s_ifspec;

#ifndef __IMgaTerritories_INTERFACE_DEFINED__
#define __IMgaTerritories_INTERFACE_DEFINED__

/* interface IMgaTerritories */
/* [unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_IMgaTerritories;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("c87caa70-c1fd-11d3-9ad2-00aa00b6fe26")
    IMgaTerritories : public IDispatch
    {
    public:
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Count( 
            /* [retval][out] */ long *p) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Item( 
            /* [in] */ long n,
            /* [retval][out] */ IMgaTerritory **p) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get__NewEnum( 
            /* [retval][out] */ IUnknown **p) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetAll( 
            /* [in] */ long count,
            /* [size_is][out] */ IMgaTerritory **p) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Insert( 
            /* [in] */ IMgaTerritory *p,
            /* [in] */ long at) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Append( 
            /* [in] */ IMgaTerritory *p) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Find( 
            /* [in] */ IMgaTerritory *p,
            /* [in] */ long start,
            /* [retval][out] */ long *res) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Remove( 
            /* [in] */ long n) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IMgaTerritoriesVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IMgaTerritories * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IMgaTerritories * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IMgaTerritories * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IMgaTerritories * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IMgaTerritories * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IMgaTerritories * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IMgaTerritories * This,
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
            IMgaTerritories * This,
            /* [retval][out] */ long *p);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Item )( 
            IMgaTerritories * This,
            /* [in] */ long n,
            /* [retval][out] */ IMgaTerritory **p);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get__NewEnum )( 
            IMgaTerritories * This,
            /* [retval][out] */ IUnknown **p);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetAll )( 
            IMgaTerritories * This,
            /* [in] */ long count,
            /* [size_is][out] */ IMgaTerritory **p);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Insert )( 
            IMgaTerritories * This,
            /* [in] */ IMgaTerritory *p,
            /* [in] */ long at);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Append )( 
            IMgaTerritories * This,
            /* [in] */ IMgaTerritory *p);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Find )( 
            IMgaTerritories * This,
            /* [in] */ IMgaTerritory *p,
            /* [in] */ long start,
            /* [retval][out] */ long *res);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Remove )( 
            IMgaTerritories * This,
            /* [in] */ long n);
        
        END_INTERFACE
    } IMgaTerritoriesVtbl;

    interface IMgaTerritories
    {
        CONST_VTBL struct IMgaTerritoriesVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IMgaTerritories_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IMgaTerritories_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IMgaTerritories_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IMgaTerritories_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IMgaTerritories_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IMgaTerritories_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IMgaTerritories_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IMgaTerritories_get_Count(This,p)	\
    ( (This)->lpVtbl -> get_Count(This,p) ) 

#define IMgaTerritories_get_Item(This,n,p)	\
    ( (This)->lpVtbl -> get_Item(This,n,p) ) 

#define IMgaTerritories_get__NewEnum(This,p)	\
    ( (This)->lpVtbl -> get__NewEnum(This,p) ) 

#define IMgaTerritories_GetAll(This,count,p)	\
    ( (This)->lpVtbl -> GetAll(This,count,p) ) 

#define IMgaTerritories_Insert(This,p,at)	\
    ( (This)->lpVtbl -> Insert(This,p,at) ) 

#define IMgaTerritories_Append(This,p)	\
    ( (This)->lpVtbl -> Append(This,p) ) 

#define IMgaTerritories_Find(This,p,start,res)	\
    ( (This)->lpVtbl -> Find(This,p,start,res) ) 

#define IMgaTerritories_Remove(This,n)	\
    ( (This)->lpVtbl -> Remove(This,n) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IMgaTerritories_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_Mga_0000_0030 */
/* [local] */ 

#ifdef __cplusplus
extern "C++"    
{            
template<> struct ::TypeName_MgaColl2Elem<IMgaTerritories>
{ typedef IMgaTerritories collection_type; typedef IMgaTerritory element_type; };
template<> struct ::TypeName_MgaElem2Coll<IMgaTerritory>
{ typedef IMgaTerritories collection_type; typedef IMgaTerritory element_type; };
}            
#endif


extern RPC_IF_HANDLE __MIDL_itf_Mga_0000_0030_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_Mga_0000_0030_v0_0_s_ifspec;

#ifndef __IMgaComponents_INTERFACE_DEFINED__
#define __IMgaComponents_INTERFACE_DEFINED__

/* interface IMgaComponents */
/* [unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_IMgaComponents;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("c8cda760-c1fd-11d3-9ad2-00aa00b6fe26")
    IMgaComponents : public IDispatch
    {
    public:
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Count( 
            /* [retval][out] */ long *p) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Item( 
            /* [in] */ long n,
            /* [retval][out] */ IMgaComponent **p) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get__NewEnum( 
            /* [retval][out] */ IUnknown **p) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetAll( 
            /* [in] */ long count,
            /* [size_is][out] */ IMgaComponent **p) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Insert( 
            /* [in] */ IMgaComponent *p,
            /* [in] */ long at) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Append( 
            /* [in] */ IMgaComponent *p) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Find( 
            /* [in] */ IMgaComponent *p,
            /* [in] */ long start,
            /* [retval][out] */ long *res) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Remove( 
            /* [in] */ long n) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IMgaComponentsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IMgaComponents * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IMgaComponents * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IMgaComponents * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IMgaComponents * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IMgaComponents * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IMgaComponents * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IMgaComponents * This,
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
            IMgaComponents * This,
            /* [retval][out] */ long *p);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Item )( 
            IMgaComponents * This,
            /* [in] */ long n,
            /* [retval][out] */ IMgaComponent **p);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get__NewEnum )( 
            IMgaComponents * This,
            /* [retval][out] */ IUnknown **p);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetAll )( 
            IMgaComponents * This,
            /* [in] */ long count,
            /* [size_is][out] */ IMgaComponent **p);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Insert )( 
            IMgaComponents * This,
            /* [in] */ IMgaComponent *p,
            /* [in] */ long at);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Append )( 
            IMgaComponents * This,
            /* [in] */ IMgaComponent *p);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Find )( 
            IMgaComponents * This,
            /* [in] */ IMgaComponent *p,
            /* [in] */ long start,
            /* [retval][out] */ long *res);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Remove )( 
            IMgaComponents * This,
            /* [in] */ long n);
        
        END_INTERFACE
    } IMgaComponentsVtbl;

    interface IMgaComponents
    {
        CONST_VTBL struct IMgaComponentsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IMgaComponents_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IMgaComponents_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IMgaComponents_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IMgaComponents_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IMgaComponents_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IMgaComponents_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IMgaComponents_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IMgaComponents_get_Count(This,p)	\
    ( (This)->lpVtbl -> get_Count(This,p) ) 

#define IMgaComponents_get_Item(This,n,p)	\
    ( (This)->lpVtbl -> get_Item(This,n,p) ) 

#define IMgaComponents_get__NewEnum(This,p)	\
    ( (This)->lpVtbl -> get__NewEnum(This,p) ) 

#define IMgaComponents_GetAll(This,count,p)	\
    ( (This)->lpVtbl -> GetAll(This,count,p) ) 

#define IMgaComponents_Insert(This,p,at)	\
    ( (This)->lpVtbl -> Insert(This,p,at) ) 

#define IMgaComponents_Append(This,p)	\
    ( (This)->lpVtbl -> Append(This,p) ) 

#define IMgaComponents_Find(This,p,start,res)	\
    ( (This)->lpVtbl -> Find(This,p,start,res) ) 

#define IMgaComponents_Remove(This,n)	\
    ( (This)->lpVtbl -> Remove(This,n) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IMgaComponents_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_Mga_0000_0031 */
/* [local] */ 

#ifdef __cplusplus
extern "C++"    
{            
template<> struct ::TypeName_MgaColl2Elem<IMgaComponents>
{ typedef IMgaComponents collection_type; typedef IMgaComponent element_type; };
template<> struct ::TypeName_MgaElem2Coll<IMgaComponent>
{ typedef IMgaComponents collection_type; typedef IMgaComponent element_type; };
}            
#endif


extern RPC_IF_HANDLE __MIDL_itf_Mga_0000_0031_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_Mga_0000_0031_v0_0_s_ifspec;

#ifndef __IMgaClients_INTERFACE_DEFINED__
#define __IMgaClients_INTERFACE_DEFINED__

/* interface IMgaClients */
/* [unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_IMgaClients;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("c9d8df93-c1fd-11d3-9ad2-00aa00b6fe26")
    IMgaClients : public IDispatch
    {
    public:
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Count( 
            /* [retval][out] */ long *p) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Item( 
            /* [in] */ long n,
            /* [retval][out] */ IMgaClient **p) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get__NewEnum( 
            /* [retval][out] */ IUnknown **p) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetAll( 
            /* [in] */ long count,
            /* [size_is][out] */ IMgaClient **p) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Insert( 
            /* [in] */ IMgaClient *p,
            /* [in] */ long at) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Append( 
            /* [in] */ IMgaClient *p) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Find( 
            /* [in] */ IMgaClient *p,
            /* [in] */ long start,
            /* [retval][out] */ long *res) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Remove( 
            /* [in] */ long n) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IMgaClientsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IMgaClients * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IMgaClients * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IMgaClients * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IMgaClients * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IMgaClients * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IMgaClients * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IMgaClients * This,
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
            IMgaClients * This,
            /* [retval][out] */ long *p);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Item )( 
            IMgaClients * This,
            /* [in] */ long n,
            /* [retval][out] */ IMgaClient **p);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get__NewEnum )( 
            IMgaClients * This,
            /* [retval][out] */ IUnknown **p);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetAll )( 
            IMgaClients * This,
            /* [in] */ long count,
            /* [size_is][out] */ IMgaClient **p);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Insert )( 
            IMgaClients * This,
            /* [in] */ IMgaClient *p,
            /* [in] */ long at);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Append )( 
            IMgaClients * This,
            /* [in] */ IMgaClient *p);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Find )( 
            IMgaClients * This,
            /* [in] */ IMgaClient *p,
            /* [in] */ long start,
            /* [retval][out] */ long *res);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Remove )( 
            IMgaClients * This,
            /* [in] */ long n);
        
        END_INTERFACE
    } IMgaClientsVtbl;

    interface IMgaClients
    {
        CONST_VTBL struct IMgaClientsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IMgaClients_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IMgaClients_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IMgaClients_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IMgaClients_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IMgaClients_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IMgaClients_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IMgaClients_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IMgaClients_get_Count(This,p)	\
    ( (This)->lpVtbl -> get_Count(This,p) ) 

#define IMgaClients_get_Item(This,n,p)	\
    ( (This)->lpVtbl -> get_Item(This,n,p) ) 

#define IMgaClients_get__NewEnum(This,p)	\
    ( (This)->lpVtbl -> get__NewEnum(This,p) ) 

#define IMgaClients_GetAll(This,count,p)	\
    ( (This)->lpVtbl -> GetAll(This,count,p) ) 

#define IMgaClients_Insert(This,p,at)	\
    ( (This)->lpVtbl -> Insert(This,p,at) ) 

#define IMgaClients_Append(This,p)	\
    ( (This)->lpVtbl -> Append(This,p) ) 

#define IMgaClients_Find(This,p,start,res)	\
    ( (This)->lpVtbl -> Find(This,p,start,res) ) 

#define IMgaClients_Remove(This,n)	\
    ( (This)->lpVtbl -> Remove(This,n) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IMgaClients_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_Mga_0000_0032 */
/* [local] */ 

#ifdef __cplusplus
extern "C++"    
{            
template<> struct ::TypeName_MgaColl2Elem<IMgaClients>
{ typedef IMgaClients collection_type; typedef IMgaClient element_type; };
template<> struct ::TypeName_MgaElem2Coll<IMgaClient>
{ typedef IMgaClients collection_type; typedef IMgaClient element_type; };
}            
#endif


extern RPC_IF_HANDLE __MIDL_itf_Mga_0000_0032_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_Mga_0000_0032_v0_0_s_ifspec;

#ifndef __IMgaObjects_INTERFACE_DEFINED__
#define __IMgaObjects_INTERFACE_DEFINED__

/* interface IMgaObjects */
/* [unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_IMgaObjects;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("c5aac2f0-c1fd-11d3-9ad2-00aa00b6fe26")
    IMgaObjects : public IDispatch
    {
    public:
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Count( 
            /* [retval][out] */ long *p) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Item( 
            /* [in] */ long n,
            /* [retval][out] */ IMgaObject **p) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get__NewEnum( 
            /* [retval][out] */ IUnknown **p) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetAll( 
            /* [in] */ long count,
            /* [size_is][out] */ IMgaObject **p) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Insert( 
            /* [in] */ IMgaObject *p,
            /* [in] */ long at) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Append( 
            /* [in] */ IMgaObject *p) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Find( 
            /* [in] */ IMgaObject *p,
            /* [in] */ long start,
            /* [retval][out] */ long *res) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Remove( 
            /* [in] */ long n) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IMgaObjectsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IMgaObjects * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IMgaObjects * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IMgaObjects * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IMgaObjects * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IMgaObjects * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IMgaObjects * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IMgaObjects * This,
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
            IMgaObjects * This,
            /* [retval][out] */ long *p);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Item )( 
            IMgaObjects * This,
            /* [in] */ long n,
            /* [retval][out] */ IMgaObject **p);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get__NewEnum )( 
            IMgaObjects * This,
            /* [retval][out] */ IUnknown **p);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetAll )( 
            IMgaObjects * This,
            /* [in] */ long count,
            /* [size_is][out] */ IMgaObject **p);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Insert )( 
            IMgaObjects * This,
            /* [in] */ IMgaObject *p,
            /* [in] */ long at);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Append )( 
            IMgaObjects * This,
            /* [in] */ IMgaObject *p);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Find )( 
            IMgaObjects * This,
            /* [in] */ IMgaObject *p,
            /* [in] */ long start,
            /* [retval][out] */ long *res);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Remove )( 
            IMgaObjects * This,
            /* [in] */ long n);
        
        END_INTERFACE
    } IMgaObjectsVtbl;

    interface IMgaObjects
    {
        CONST_VTBL struct IMgaObjectsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IMgaObjects_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IMgaObjects_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IMgaObjects_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IMgaObjects_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IMgaObjects_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IMgaObjects_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IMgaObjects_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IMgaObjects_get_Count(This,p)	\
    ( (This)->lpVtbl -> get_Count(This,p) ) 

#define IMgaObjects_get_Item(This,n,p)	\
    ( (This)->lpVtbl -> get_Item(This,n,p) ) 

#define IMgaObjects_get__NewEnum(This,p)	\
    ( (This)->lpVtbl -> get__NewEnum(This,p) ) 

#define IMgaObjects_GetAll(This,count,p)	\
    ( (This)->lpVtbl -> GetAll(This,count,p) ) 

#define IMgaObjects_Insert(This,p,at)	\
    ( (This)->lpVtbl -> Insert(This,p,at) ) 

#define IMgaObjects_Append(This,p)	\
    ( (This)->lpVtbl -> Append(This,p) ) 

#define IMgaObjects_Find(This,p,start,res)	\
    ( (This)->lpVtbl -> Find(This,p,start,res) ) 

#define IMgaObjects_Remove(This,n)	\
    ( (This)->lpVtbl -> Remove(This,n) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IMgaObjects_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_Mga_0000_0033 */
/* [local] */ 

#ifdef __cplusplus
extern "C++"    
{            
template<> struct ::TypeName_MgaColl2Elem<IMgaObjects>
{ typedef IMgaObjects collection_type; typedef IMgaObject element_type; };
template<> struct ::TypeName_MgaElem2Coll<IMgaObject>
{ typedef IMgaObjects collection_type; typedef IMgaObject element_type; };
}            
#endif


extern RPC_IF_HANDLE __MIDL_itf_Mga_0000_0033_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_Mga_0000_0033_v0_0_s_ifspec;

#ifndef __IMgaO_INTERFACE_DEFINED__
#define __IMgaO_INTERFACE_DEFINED__

/* interface IMgaO */
/* [unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_IMgaO;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("C356B135-961D-4B6C-8B1F-257E19117CC1")
    IMgaO : public IDispatch
    {
    public:
    };
    
    
#else 	/* C style interface */

    typedef struct IMgaOVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IMgaO * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IMgaO * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IMgaO * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IMgaO * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IMgaO * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IMgaO * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IMgaO * This,
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
        
        END_INTERFACE
    } IMgaOVtbl;

    interface IMgaO
    {
        CONST_VTBL struct IMgaOVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IMgaO_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IMgaO_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IMgaO_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IMgaO_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IMgaO_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IMgaO_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IMgaO_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IMgaO_INTERFACE_DEFINED__ */


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


