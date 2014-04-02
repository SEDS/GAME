// $Id$

#include "StdAfx.h"
#include "resource.h"

#include "GAME_Model_Open_Addon_i.c"

/**
 * GAME_Model_Open_Addon_Module
 */
class GAME_Model_Open_Addon_Module :
  public CAtlDllModuleT < GAME_Model_Open_Addon_Module >
{
public :
  DECLARE_LIBID (LIBID_GAME_Model_Open_Addon_AddonLib)

  DECLARE_REGISTRY_APPID_RESOURCEID (2008, "{74c1a6db-8921-45f0-8489-209f3e9c3833}")
};

static GAME_Model_Open_Addon_Module _AtlModule;

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
 * @class GAME_Model_Open_Addon_App
 *
 * The application for the GAME_Model_Open_Addon. This is like the
 * main entry point for the component's module/application.
 */
class GAME_Model_Open_Addon_App : public CWinApp
{
public:
  //
  // Component_Module_App
  //
  GAME_Model_Open_Addon_App (void)
    : CWinApp ("GAME GAME_Model_Open_Addon")
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

BEGIN_MESSAGE_MAP (GAME_Model_Open_Addon_App, CWinApp)
END_MESSAGE_MAP()

static GAME_Model_Open_Addon_App _theApp;

