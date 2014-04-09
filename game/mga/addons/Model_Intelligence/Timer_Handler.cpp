// $Id: generate_cpp_class.py 3685 2012-09-26 14:45:04Z dfeiock $

#include "StdAfx.h"
#include "Timer_Handler.h"

#if !defined (__GAME_INLINE__)
#include "Timer_Handler.inl"
#endif  // !defined __GAME_INLINE__

#include "game/mga/component/Console_Service.h"
#include <sstream>

namespace GAME
{

int Timer_Handler::handle_object_created (Mga::Object_in obj)
{
  if (this->is_timing_)
    return 0;

  // Reset the timer, and start timing the new chain of events.
  this->timer_.start ();
  this->is_timing_ = true;

  return 0;
}

int Timer_Handler::handle_notification_ready (void)
{
  if (!this->is_timing_)
    return 0;

  // Stop the timer, and display result to the console.
  this->timer_.stop ();
  this->is_timing_ = false;

  ACE_Time_Value duration;
  this->timer_.elapsed_time (duration);

  std::ostringstream msg;
  msg << "Elapsed time: " << duration.sec () << "." << duration.usec () << " second(s)";
  GME_CONSOLE_SERVICE->message (msg.str ());

  // Reset the timer for the next chain of events.
  this->timer_.reset ();

  return 0;
}

} // namespace GAME
