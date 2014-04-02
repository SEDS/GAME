// -*- C++ -*-

//=============================================================================
/**
 * @file       GAME_Model_Open_Addon_Impl.h
 *
 * $Id$
 *
 * @author     Tanumoy Pati
 */
//=============================================================================

#ifndef _GAME_MODEL_OPEN_ADDON_IMPL_H_
#define _GAME_MODEL_OPEN_ADDON_IMPL_H_

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
#include "game/mga/component/Object_Event_Handler.h"

GAME_DEFAULT_ADDON_IMPL (GAME_Model_Open_Addon_Impl,
                         "GAME_Model_Open_Addon",
                         "*",
                         "*.AddOn.GAME_Model_Open_Addon");

/**
 * @class GAME_Model_Open_Addon
 *
 * Raw component interface for the add-on.
 */
class GAME_Model_Open_Addon :
  public GAME::Mga::Top_Level_Event_Handler
{
public:
  /// Register add-on to receive model open event.
  static const unsigned long eventmask = OBJEVENT_OPENMODEL;
  
  /// Default constructor.
  GAME_Model_Open_Addon (void);

  /// Destructor.
  virtual ~GAME_Model_Open_Addon (void);

  virtual int initialize (GAME::Mga::Project project);
};

/**
 * @class Model_Open_Handler
 *
 * Event handler that shows the path of the opened model.
 */
class Model_Open_Handler : public GAME::Mga::Object_Event_Handler
{
public:
  Model_Open_Handler (void);

  virtual ~Model_Open_Handler (void);

  virtual int handle_model_open (GAME::Mga::Object_in obj);
};

#endif
