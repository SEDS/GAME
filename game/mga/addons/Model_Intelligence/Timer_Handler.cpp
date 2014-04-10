// $Id: generate_cpp_class.py 3685 2012-09-26 14:45:04Z dfeiock $

#include "StdAfx.h"
#include "Timer_Handler.h"

#if !defined (__GAME_INLINE__)
#include "Timer_Handler.inl"
#endif  // !defined __GAME_INLINE__

#include "Model_Stats.h"
#include "game/mga/component/Console_Service.h"

namespace GAME
{

int Timer_Handler::handle_object_created (Mga::Object_in obj)
{
  Model_Stats * stats = MODEL_STATS::instance ();

  if (stats->is_timing ())
    stats->increment_create_count ();

  return 0;
}

int Timer_Handler::handle_notification_ready (void)
{
  Model_Stats * stats = MODEL_STATS::instance ();

  if (!stats->is_timing ())
    return 0;

  // Stop the timer, and write the stats to the console.
  stats->stop_timing ();
  *GME_CONSOLE_SERVICE << *stats;

  // Reset the stats for the next set of actions.
  stats->reset ();

  return 0;
}

} // namespace GAME
