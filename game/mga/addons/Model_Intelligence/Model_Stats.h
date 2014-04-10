// -*- C++ -*-

//==============================================================================
/**
 *  @file        Model_Stats.h
 *
 *  $Id: generate_cpp_class.py 3685 2012-09-26 14:45:04Z dfeiock $
 *
 *  @author      INSERT NAME HERE
 */
//==============================================================================

#ifndef _GAME_MODEL_STATS_H_
#define _GAME_MODEL_STATS_H_

#include "game/config.h"

#include "ace/High_Res_Timer.h"
#include "ace/Singleton.h"
#include "ace/Null_Mutex.h"

#include <ostream>

namespace GAME
{
namespace Mga
{
// Forward decl.
class Console_Service;
}
}

/**
 * @class Model_Stats
 *
 * The statistics for the model intelligence engine.
 */
struct Model_Stats
{
public:
  /// Default constructor.
  Model_Stats (void);

  /// Destructor.
  ~Model_Stats (void);

  /// Reset the stats.
  void reset (void);

  /// Increment the number of models created.
  void increment_create_count (void);
  
  /// Get the number of models created.
  size_t create_count (void) const;

  /// Start the timing process.
  void start_timing (void);

  /// Stop the timing process.
  void stop_timing (void);

  /// Switch to timing user time.
  void switch_to_user_time (void);

  /// Switch to timing system time.
  void switch_to_sys_time (void);

  /// Test if the object is timing.
  bool is_timing (void) const;

  const ACE_High_Res_Timer & sys_time (void) const;
  const ACE_High_Res_Timer & user_time (void) const;

private:
  /// Timing state for the stats.
  bool is_timing_;

  /// Number of elements created.
  size_t create_count_;

  /// Amount of time spent by the system. 
  ACE_High_Res_Timer sys_time_;

  /// Amount of time spent by the user.
  ACE_High_Res_Timer user_time_;
};

typedef ACE_Singleton <Model_Stats, ACE_Null_Mutex> MODEL_STATS;

GAME::Mga::Console_Service & operator << (GAME::Mga::Console_Service &, const Model_Stats &);

/**
 * @class User_Time_Guard
 *
 * Guard that starts user time when this object is constructed. When 
 * the guard object is destroyed, the model stats switch back to system
 * time.
 */
class User_Time_Guard
{
public:
  /**
   * Initializing constructor
   *
   * @param[in]       stats         Target model stats object
   */
  User_Time_Guard (Model_Stats & stats);

  /// Destructor
  ~User_Time_Guard (void);

private:
  /// Target model stats object
  Model_Stats & stats_;
};

#if defined (__GAME_INLINE__)
#include "Model_Stats.inl"
#endif  // !defined __GAME_INLINE__

#endif  // _GAME_MODEL_STATS_H_
