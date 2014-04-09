// -*- C++ -*-

//==============================================================================
/**
 *  @file        Timer_Handler.h
 *
 *  $Id: generate_cpp_class.py 3685 2012-09-26 14:45:04Z dfeiock $
 *
 *  @author      INSERT NAME HERE
 */
//==============================================================================

#ifndef _GAME_TIMER_HANDLER_H_
#define _GAME_TIMER_HANDLER_H_

#include "game/mga/component/Object_Event_Handler.h"
#include "ace/High_Res_Timer.h"

namespace GAME
{

/**
 * @class Timer_Handler
 *
 * Handler that measures how long it takes for the model intelligence 
 * add-on to complete its action. It is measured from the time the first
 * event on an object occurs until the model is in a ready state.
 */
class Timer_Handler : public Mga::Object_Event_Handler
{
public:
  /// Default constructor.
  Timer_Handler (void);

  /// Destructor.
  virtual ~Timer_Handler (void);     

  virtual int handle_object_created (Mga::Object_in obj);

  virtual int handle_notification_ready (void);

private:
  /// Timer object for the handler.
  ACE_High_Res_Timer timer_;

  /// Timing state of the timer object.
  bool is_timing_;
};

} // namespace GAME

#if defined (__GAME_INLINE__)
#include "Timer_Handler.inl"
#endif  // !defined __GAME_INLINE__

#endif  // _GAME_TIMER_HANDLER_H_
