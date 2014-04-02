// $Id$

#include "StdAfx.h"
#include "GAME_Model_Open_Addon_Impl.h"
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
typedef GAME::Mga::Addon_Impl_T <GAME_Model_Open_Addon_Impl,
                                 GAME_Model_Open_Addon>
                                 GAME_Model_Open_Addon_ComponentEx;

DECLARE_GAME_COMPONENT_EX (GAME_Model_Open_Addon_ComponentEx, GAME_Model_Open_Addon_Addon);

#define DLL_NAME "GAME_Model_Open_Addon"

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

GAME_Model_Open_Addon::GAME_Model_Open_Addon (void)
: GAME::Mga::Top_Level_Event_Handler (eventmask)
{

}

GAME_Model_Open_Addon::~GAME_Model_Open_Addon (void)
{
  ACE_Framework_Repository::instance ()->remove_dll_components (DLL_NAME);
}

int GAME_Model_Open_Addon::initialize (GAME::Mga::Project project)
{
  this->sink_->register_handler (OBJTYPE_MODEL, new Model_Open_Handler ());
  return 0;
}

Model_Open_Handler::Model_Open_Handler (void)
  : Object_Event_Handler (OBJEVENT_OPENMODEL, true)
{

}

Model_Open_Handler::~Model_Open_Handler (void)
{

}

int Model_Open_Handler::handle_model_open (GAME::Mga::Object_in obj)
{
  ::AfxMessageBox (obj->path (".", false).c_str ());
  return 0;
}
