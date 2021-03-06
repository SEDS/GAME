#!/usr/bin/env/ python
import getopt
import sys
import string
import uuid
import os
import re
import argparse

def generate_mwc_file (filename, pathname):

    filename_mwc = filename + ".mwc"

    #Creating string template for .mwc file
    temp_mwc = string.Template ("""

workspace (${filename}) {
  cmdline += -include $$GAME_ROOT/MPC/config \\
             
  ${filename}.mpc
}""")

    replace_mwc = {'filename' : filename}

    #Creating a file object in write mode.
    FILE_mwc = open (pathname + filename_mwc, "w")

    FILE_mwc.write (temp_mwc.substitute (replace_mwc))

    FILE_mwc.close ()

##################################################################

def generate_mpc_file (filename, pathname, comp_guid, paradigm):

    filename_mpc = filename + ".mpc"

    #Creating string template for .mpc file
    temp_mpc = string.Template ("""// $$Id$$

project (${project_name}) : boost_base, game_mga_component, game_mga_utils, game_lib {
  sharedname = $project_name

  pch_header = StdAfx.h
  pch_source = StdAfx.cpp

  Source_Files {
    $idl_filename
    $cpp_filename
    $module_filename
  }

  Resource_Files {
    Component.rc
  }
  
  specific (wix) {
    gme_install        = 1
    gme_component_type = 2
    gme_progid         = ${company}.AddOn.$filename
    gme_uuid           = $uuid_value
    gme_paradigms      = $paradigm
    gme_description    = $filename AddOn
    gme_tooltip        = $filename AddOn
  }
}
""")

    
    replace_mpc = {'project_name' : filename,
                   'filename' : filename,
                   'cpp_filename' : filename + '_Impl.cpp',
                   'module_filename' : filename + '_Module.cpp',
                   'idl_filename' : filename + '.idl',
                   'uuid_value' : comp_guid,
                   'paradigm' : paradigm,
                   'company' : 'GAME' }

    #Creating a file object in write mode.
    FILE_mpc = open (pathname + filename_mpc, "w")
    FILE_mpc.write (temp_mpc.substitute (replace_mpc))
    FILE_mpc.close ()

##################################################################

def generate_stdafx_hfile (filename, pathname):
    filename_stdafx_h = "StdAfx.h"

    #Creating string template for StdAfx.h file
    temp_stdafx_h = string.Template ("""// -*- C++ -**

// stdafx.h : include file for standard system include files,
//      or project specific include files that are used frequently,
//      but are changed infrequently

#if !defined(AFX_STDAFX_H__C4EFDDFC_C095_4509_B571_632F0986D162__INCLUDED_)
#define AFX_STDAFX_H__C4EFDDFC_C095_4509_B571_632F0986D162__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#define STRICT
#ifndef _WIN32_WINNT
  #if _MSC_VER > 1400
    #define _WIN32_WINNT 0x0500
  #else
    #define _WIN32_WINNT 0x0400
  #endif
#endif
#define _ATL_APARTMENT_THREADED

#include <afxwin.h>
#include <afxdisp.h>
#include <atlbase.h>

#include <atlcom.h>
#include <atlcoll.h>

#include "$filename.h"

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_STDAFX_H__C4EFDDFC_C095_4509_B571_632F0986D162__INCLUDED)
""")

    replace_stdafx_h = {'filename' : filename}

    #Creating a file object in write mode.
    FILE_stdafx_h = open (pathname + filename_stdafx_h, "w")
    FILE_stdafx_h.write (temp_stdafx_h.substitute (replace_stdafx_h))
    FILE_stdafx_h.close ()

##################################################################

def generate_stdafx_cppfile (pathname):
    filename_stdafx_cpp = "StdAfx.cpp"

    #Creating file contents of StdAfx.cpp file
    temp_stdafx_cpp = ("""// $Id$

#include "StdAfx.h"

""")

    #Creating a file object in write mode.
    FILE_stdafx_cpp = open (pathname + filename_stdafx_cpp, "w")
    FILE_stdafx_cpp.write (temp_stdafx_cpp)
    FILE_stdafx_cpp.close ()

##################################################################

def generate_resource_hfile (pathname):
    filename_resource = "Resource.h"

    #Creating file contents for Resource.h file
    temp_resource = ("""//{{NO_DEPENDENCIES}}
// Microsoft Visual C++ generated include file.
// Used by Component.rc
//
#define IDS_PROJNAME                    100
#define IDC_LIST1                       201
#define IDC_STRING_LIST                 202

// Next default values for new objects
// 
#ifdef APSTUDIO_INVOKED
#ifndef APSTUDIO_READONLY_SYMBOLS
#define _APS_NEXT_RESOURCE_VALUE        202
#define _APS_NEXT_COMMAND_VALUE         32768
#define _APS_NEXT_CONTROL_VALUE         203
#define _APS_NEXT_SYMED_VALUE           101
#endif
#endif
""")

    #Creating a file object in write mode.
    FILE_resource = open (pathname + filename_resource, "w")

    FILE_resource.write (temp_resource)

    FILE_resource.close ()

##################################################################

def generate_component_rcfile (pathname):
    filename_componentrc = "Component.rc"

    #Creating file contents for Component.rc file
    temp_componentrc = ("""
//Microsoft Developer Studio generated resource script.
//
#include "resource.h"

#define APSTUDIO_READONLY_SYMBOLS
/////////////////////////////////////////////////////////////////////////////
//
// Generated from the TEXTINCLUDE 2 resource.
//
#include "afxres.h"

/////////////////////////////////////////////////////////////////////////////
#undef APSTUDIO_READONLY_SYMBOLS

/////////////////////////////////////////////////////////////////////////////
// English (U.S.) resources

#if !defined(AFX_RESOURCE_DLL) || defined(AFX_TARG_ENU)
#ifdef _WIN32
LANGUAGE LANG_ENGLISH, SUBLANG_ENGLISH_US
#pragma code_page(1252)
#endif //_WIN32

#ifdef APSTUDIO_INVOKED
/////////////////////////////////////////////////////////////////////////////
//
// TEXTINCLUDE
//

1 TEXTINCLUDE 
BEGIN
    "resource.h\\0"
END

2 TEXTINCLUDE 
BEGIN
    "#include ""afxres.h""\\r\\n"
    "\\0"
END

#endif    // APSTUDIO_INVOKED


/////////////////////////////////////////////////////////////////////////////
//
// Version
//

VS_VERSION_INFO VERSIONINFO
 FILEVERSION 1,0,0,1
 PRODUCTVERSION 1,0,0,1
 FILEFLAGSMASK 0x3fL
#ifdef _DEBUG
 FILEFLAGS 0x1L
#else
 FILEFLAGS 0x0L
#endif
 FILEOS 0x4L
 FILETYPE 0x2L
 FILESUBTYPE 0x0L
BEGIN
    BLOCK "StringFileInfo"
    BEGIN
        BLOCK "040904B0"
        BEGIN
            VALUE "FileDescription", "Interpreter Module"
            VALUE "FileVersion", "1, 0, 0, 1"
            VALUE "InternalName", "Interpreter"
            VALUE "LegalCopyright", "Copyright 2000"
            VALUE "OriginalFilename", "Interpreter.DLL"
            VALUE "ProductName", "Interpreter Module"
            VALUE "ProductVersion", "1, 0, 0, 1"
        END
    END
    BLOCK "VarFileInfo"
    BEGIN
        VALUE "Translation", 0x409, 1200
    END
END


/////////////////////////////////////////////////////////////////////////////
//
// String Table
//

STRINGTABLE 
BEGIN
    IDS_PROJNAME            "Component"
END

#endif    // English (U.S.) resources
/////////////////////////////////////////////////////////////////////////////



#ifndef APSTUDIO_INVOKED

/////////////////////////////////////////////////////////////////////////////
#endif    // not APSTUDIO_INVOKED

""")


    #Creating a file object in write mode.
    FILE_componentrc = open (pathname + filename_componentrc, "w")
    FILE_componentrc.write (temp_componentrc)
    FILE_componentrc.close ()

##################################################################

def generate_idl_file (filename, pathname, comp_guid, lib_guid):
    filename_idl = filename + ".idl"

    #Creating string template for .idl file
    temp_idl = string.Template ("""// -*- IDL -*-

//=============================================================================
/**
 * @file      ${filename}.idl
 *
 * $$Id$$
 *
 * @author    Tanumoy Pati
 */
//=============================================================================

#ifndef $idl_filename_caps
#define $idl_filename_caps

#include <Gme.idl>
#include <Core.idl>

[
  uuid (${lib_guid}),
  version (1.0),
]
library ${filename}_AddonLib
{
	importlib ("stdole32.tlb");

	[uuid (${comp_guid})]
	coclass ${filename}_Addon
	{
            [default] interface IMgaComponentEx;
            interface IMgaComponent;
            interface IGMEVersionInfo;
	};
};

#endif  // !defined $idl_filename_caps
""")

    replace_idl = {'idl_filename_caps' : '_' + filename.upper() + '_IDL_',
                   'filename' : filename,
                   'lib_guid' : lib_guid,
                   'comp_guid' : comp_guid }

    #Creating a file object in write mode.
    FILE_idl = open (pathname + filename_idl, "w")

    FILE_idl.write (temp_idl.substitute (replace_idl))

    FILE_idl.close ()

##################################################################

def generate_impl_h_file (filename, pathname, paradigm):
    filename_impl_h = filename + "_Impl.h"

    #Creating string template for .h file
    temp_impl_h = string.Template ("""// -*- C++ -*-

//=============================================================================
/**
 * @file       ${filename}.h
 *
 * $$Id$$
 *
 * @author     Tanumoy Pati
 */
//=============================================================================

#ifndef $h_filename_caps
#define $h_filename_caps

#include <string>
#include <set>
#include <map>

#include "ace/Hash_Map_Manager.h"
#include "ace/Null_Mutex.h"
#include "ace/SString.h"

#include "game/mga/FCO.h"
#include "game/mga/component/Addon_Impl_T.h"
#include "game/mga/component/ComponentEx_T.h"
#include "game/mga/component/Event_Handler.h"

GAME_DEFAULT_ADDON_IMPL ($filename,
                         "$classname",
                         "$paradigm",
                         "${paradigm}.AddOn.$classname");

/**
 * @class $classname
 *
 * Raw component interface for the add-on.
 */
class $classname :
  public GAME::Mga::Top_Level_Event_Handler
{
public:
  /// TODO Update with the global event mask for the add-on
  static const unsigned long eventmask = 0;
  
  /// Default constructor.
  $classname (void);

  /// Destructor.
  virtual ~$classname (void);

  virtual int initialize (GAME::Mga::Project project);
};


#endif
""")

    replace_impl_h = {'h_filename_caps' : '_' + filename.upper() + '_IMPL_H_',
                      'filename' : filename + '_Impl',
                      'classname' : filename,
                      'paradigm' : paradigm}

    #Creating a file object in write mode.
    FILE_impl_h = open (pathname + filename_impl_h, "w")

    FILE_impl_h.write (temp_impl_h.substitute (replace_impl_h))

    FILE_impl_h.close ()

##################################################################

def generate_impl_cpp_file (filename, pathname):
    filename_impl_cpp = filename + "_Impl.cpp"

    #Creating string template for .cpp file
    temp_impl_cpp = string.Template ("""// $$Id$$

#include "StdAfx.h"
#include "$filename.h"
#include "game/mga/component/ComponentEx_T.h"

#include "game/mga/Atom.h"
#include "game/mga/Model.h"
#include "game/mga/Object.h"
#include "game/mga/Connection.h"
#include "game/mga/MetaBase.h"
#include "game/mga/MetaFCO.h"
#include "game/mga/Reference.h"
#include "game/mga/utils/Point.h"

#include "ace/Singleton.h"
#include "ace/Null_Mutex.h"

#include "boost/bind.hpp"

#include <algorithm>
#include <sstream>

/// Type definition of the add-on implementation.
typedef GAME::Mga::Addon_Impl_T <$filename,
                                 $classname>
                                 ${classname}_ComponentEx;

DECLARE_GAME_COMPONENT_EX (${classname}_ComponentEx, ${classname}_Addon);

#define DLL_NAME "$classname"

/**
 * Adapter for the ACE_DLL_Singleton_T object. This allows singletons
 * defined in this module to operate correctly with the ACE framework.
 */
template <typename T>
class Singleton_DLL_Adapter : public T
{
public:
  const ACE_TCHAR * name (void) const
  {
    return DLL_NAME;
  }

  const ACE_TCHAR * dll_name (void) const
  {
    return DLL_NAME;
  }
};

//
// $classname
//
$classname::$classname (void)
: GAME::Mga::Top_Level_Event_Handler (eventmask)
{

}

//
// ~$classname
//
$classname::~$classname (void)
{
  ACE_Framework_Repository::instance ()->remove_dll_components (DLL_NAME);
}

//
// initialize
//
int $classname::initialize (GAME::Mga::Project project)
{
  ::AfxMessageBox ("add-on is initialized");
  return 0;
}

""")

    replace_impl_cpp = {'filename' : filename + '_Impl',
                        'classname' : filename}

    #Creating a file object in write mode.
    FILE_impl_cpp = open (pathname + filename_impl_cpp, "w")

    FILE_impl_cpp.write (temp_impl_cpp.substitute (replace_impl_cpp))

    FILE_impl_cpp.close ()

##################################################################

def generate_module_cpp_file (filename, pathname, comp_guid):
    filename_module_cpp = filename + "_Module.cpp"

    #Creating string template for _Module.cpp file
    temp_module_cpp = string.Template ("""// $$Id$$

#include "StdAfx.h"
#include "resource.h"

#include "${filename}_i.c"

/**
 * ${filename}_Module
 */
class ${filename}_Module :
  public CAtlDllModuleT < ${filename}_Module >
{
public :
  DECLARE_LIBID (LIBID_${filename}_AddonLib)

  DECLARE_REGISTRY_APPID_RESOURCEID (2008, "{$comp_guid}")
};

static ${filename}_Module _AtlModule;

//
// DllCanUnloadNow
//
STDAPI DllCanUnloadNow (void)
{
  return (::AfxDllCanUnloadNow () == S_OK && _AtlModule.GetLockCount () == 0) ? S_OK : S_FALSE;
}

//
// DllGetClassObject
//
STDAPI DllGetClassObject (REFCLSID rclsid, REFIID riid, LPVOID* ppv)
{
  return _AtlModule.GetClassObject (rclsid, riid, ppv);
}

//
// DllRegisterServer
//
STDAPI DllRegisterServer (void)
{
  return _AtlModule.DllRegisterServer ();
}

//
// DllUnregisterServer
//
STDAPI DllUnregisterServer (void)
{
  return _AtlModule.DllUnregisterServer ();
}

///////////////////////////////////////////////////////////////////////////////
//

/**
 * @class ${filename}_App
 *
 * The application for the $filename. This is like the
 * main entry point for the component's module/application.
 */
class ${filename}_App : public CWinApp
{
public:
  //
  // Component_Module_App
  //
  ${filename}_App (void)
    : CWinApp ("GAME $filename")
  {
  }

  //
  // InitInstance
  //
  virtual BOOL InitInstance (void)
  {
    _AtlModule.InitLibId ();
    return CWinApp::InitInstance();
  }

  //
  // ExitInstance
  //
  virtual int ExitInstance (void)
  {
    _AtlModule.Term ();
    return CWinApp::ExitInstance();
  }

  DECLARE_MESSAGE_MAP ()
};

BEGIN_MESSAGE_MAP (${filename}_App, CWinApp)
END_MESSAGE_MAP()

static ${filename}_App _theApp;

""")

    replace_module_cpp = {'filename' : filename,
                          'comp_guid' : comp_guid}

    #Creating a file object in write mode.
    FILE_module_cpp = open (pathname + filename_module_cpp, "w")
    FILE_module_cpp.write (temp_module_cpp.substitute (replace_module_cpp))
    FILE_module_cpp.close ()
    
##################################################################

def generate_reg_file (filename, pathname, comp_guid, paradigm, suffix):
    filename_reg = filename + suffix + '.reg'

    #Creating string template for *.reg file
    temp_reg = string.Template ("""REGEDIT4

[HKEY_CURRENT_USER\Software\Classes]

[HKEY_CURRENT_USER\Software\Classes\CLSID]

[HKEY_CURRENT_USER\Software\Classes\CLSID\{$comp_guid}]
@="${company}.AddOn.$filename"

[HKEY_CURRENT_USER\Software\Classes\CLSID\{$comp_guid}\ProgID]
@="${company}.AddOn.$filename"

[HKEY_CURRENT_USER\Software\Classes\CLSID\{$comp_guid}\InProcServer32]
@="${filename}${suffix}.dll"

[HKEY_CURRENT_USER\Software\Classes\${company}.AddOn.$filename]
@="${company}.AddOn.$filename"

[HKEY_CURRENT_USER\Software\Classes\${company}.AddOn.$filename\CLSID]
@="{$comp_guid}"

[HKEY_CURRENT_USER\Software\GME\Components\${company}.AddOn.$filename]
"Tooltip"=""
"Paradigm"="$paradigm"
"Type"=dword:00000002
"Description"="${filename}"

[HKEY_CURRENT_USER\Software\GME\Components\${company}.AddOn.$filename\Associated]

""")

    replace_reg = {'filename' : filename,
                   'comp_guid' : comp_guid,
                   'paradigm' : paradigm,
                   'company' : 'GAME',
                   'suffix' : suffix }

    #Creating a file object in write mode.
    FILE_reg = open (pathname + filename_reg, "w")
    FILE_reg.write (temp_reg.substitute (replace_reg))
    FILE_reg.close ()

##################################################################

def validity_check (guid):
    if re.match ('^(\{){0,1}[0-9a-fA-F]{8}\-[0-9a-fA-F]{4}\-[0-9a-fA-F]{4}\-[0-9a-fA-F]{4}\-[0-9a-fA-F]{12}(\}){0,1}$', guid):
        return True
    
    print ("Invalid Guid !")

##################################################################

def main (*argv):

    #Initializing the variable values
    comp_guid = uuid.uuid4 ()
    lib_guid = uuid.uuid4 ()
    pathname = os.getcwd () + os.sep
    filename = 'Default'
    paradigm = '*'

    #setting options and corresponding argument values
    parser = argparse.ArgumentParser ()
    parser.add_argument ('--name', type=str, required=True, help='Name of the addon')
    parser.add_argument ('--paradigm', type=str, help='Paradigms the interpreter works with ("*" for all paradigms)')
    parser.add_argument ('-o', '--directory', type=str, help='Output directory')
    parser.add_argument ('--component-guid', type=str, help='Component GUID to use (avoids automatic GUID generation)')
    parser.add_argument ('--library-guid', type=str, help='Library GUID to use (avoids automatic GUID generation)')
    parser.add_argument ('--has-icon', action='store_true', help='Flag to control icon support generation')
    parser.add_argument ('--no-workspace', action='store_true', help='Prevents generating a MWC file for this addon')

    args = parser.parse_args (sys.argv[1:])

    filename = args.name

    if args.paradigm:
        paradigm = args.paradigm

    if args.directory:
        pathname = os.path.join (os.getcwd (), args.directory + os.sep)
        if not os.path.isdir (pathname):
            os.makedirs (pathname)

    if args.component_guid:
        if not validity_check (args.component_guid):
            return 1
        comp_guid = args.component_guid

    if args.library_guid:
        if not validity_check (args.library_guid):
            return 1
        lib_guid = args.library_guid

    if args.has_icon:
        has_icon = True

    #Calling respective function for creating .mwc file
    if not args.no_workspace:
        generate_mwc_file (filename, pathname)

    #Calling respective function for creating .mpc file
    generate_mpc_file (filename, pathname, comp_guid, paradigm)

    #Calling respective function for creating .idl file
    generate_idl_file (filename, pathname, comp_guid, lib_guid)

    #Calling respective function for creating stdafx.h file
    generate_stdafx_hfile (filename, pathname)

    #Calling respective function for creating stdafx.cpp file
    generate_stdafx_cppfile (pathname)

    #Calling respective function for creating Resource.h file
    generate_resource_hfile (pathname)

    #Calling respective function for creating Component.rc file
    generate_component_rcfile (pathname)

    #Calling respective function for creating _Module.cpp file
    generate_module_cpp_file (filename, pathname, comp_guid)

    #Calling respective function for creating *d.reg file
    generate_reg_file (filename, pathname, comp_guid, paradigm, 'd')
    generate_reg_file (filename, pathname, comp_guid, paradigm, '')
    
    #Calling respective function for creating _Impl.h file
    generate_impl_h_file (filename, pathname, paradigm)

    #Calling respective function for creating _Impl.cpp file
    generate_impl_cpp_file (filename, pathname)


if __name__ == "__main__":
    SystemExit (main ())
