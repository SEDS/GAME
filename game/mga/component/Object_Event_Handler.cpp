// $Id$

#include "stdafx.h"
#include "Object_Event_Handler.h"

#if !defined (__GAME_INLINE__)
#include "Object_Event_Handler.inl"
#endif  // !defined __GAME_INLINE__

#include "Console_Service.h"

namespace GAME
{
namespace Mga
{

//
// Top_Level_Event_Handler
//
Top_Level_Event_Handler::Top_Level_Event_Handler (unsigned long mask)
: Object_Event_Handler (mask, false)
{

}

//
// Top_Level_Event_Handler
//
Top_Level_Event_Handler::~Top_Level_Event_Handler (void)
{

}

int Top_Level_Event_Handler::handle_notification_ready (void)
{
  GME_CONSOLE_SERVICE->initialize (this->project_);
  return 0;
}

} // namespace GAME
} // namespace Mga
