// $Id: generate_cpp_class.py 3685 2012-09-26 14:45:04Z dfeiock $

#include "StdAfx.h"
#include "Model_Stats.h"

#if !defined (__GAME_INLINE__)
#include "Model_Stats.inl"
#endif  // !defined __GAME_INLINE__

#include <sstream>
#include "game/mga/component/Console_Service.h"

void Model_Stats::reset (void)
{
  // Reset the counter.
  this->create_count_ = 0;

  // Reset all the timers.
  this->user_time_.reset ();
  this->sys_time_.reset ();
}

void Model_Stats::switch_to_user_time (void)
{
  this->sys_time_.stop_incr ();
  this->user_time_.start_incr ();
}

void Model_Stats::switch_to_sys_time (void)
{
  this->sys_time_.start_incr ();
  this->user_time_.stop_incr ();
}

std::ostream & operator << (std::ostream & ostr, const ACE_High_Res_Timer & timer)
{
  ACE_Time_Value duration;
  timer.elapsed_time_incr (duration);

  ostr << duration.sec () << "." << duration.usec () << " second(s)";
  return ostr;
}

GAME::Mga::Console_Service & operator << (GAME::Mga::Console_Service & console, const Model_Stats & stats)
{
  std::ostringstream msg1;
  msg1 << "Successfully created " << stats.create_count () << " model(s)";
  console.info (msg1.str ());

  std::ostringstream msg2;
  msg2 << "System time: " << stats.sys_time () << "; User time: " << stats.user_time (); 
  console.info (msg2.str ());

  return console;
}
