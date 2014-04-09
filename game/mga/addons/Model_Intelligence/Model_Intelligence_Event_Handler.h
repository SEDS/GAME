// -*- C++ -*-

//==============================================================================
/**
 *  @file        Model_Intelligence_Event_Handler.h
 *
 *  $Id: generate_cpp_class.py 3685 2012-09-26 14:45:04Z dfeiock $
 *
 *  @author      INSERT NAME HERE
 */
//==============================================================================

#ifndef _GAME_MODEL_INTELLIGENCE_EVENT_HANDLER_H_
#define _GAME_MODEL_INTELLIGENCE_EVENT_HANDLER_H_

#include "game/mga/component/Object_Event_Handler.h"
#include <map>

// Forward decl.
class Boolean_Expr;

namespace GAME
{
/**
 * @class Model_Intelligence_Event_Handler
 *
 * Base class for the object event handlers. It extends the GAME::Mga::Object_Event_Handler
 * and adds caching support for the compiled expressions.
 */
class Model_Intelligence_Event_Handler : public Mga::Object_Event_Handler
{
public:
  /// Default constructor.
  Model_Intelligence_Event_Handler (unsigned long mask, bool destroy_on_close = true);

  /// Destructor.
  virtual ~Model_Intelligence_Event_Handler (void);        

protected:
  // Caching the constraints for model intelligence
  std::map <std::string,
            std::vector <Boolean_Expr *>> cache_;
};

} // namespace GAME

#if defined (__GAME_INLINE__)
#include "Model_Intelligence_Event_Handler.inl"
#endif  // !defined __GAME_INLINE__

#endif  // _GAME_MODEL_INTELLIGENCE_EVENT_HANDLER_H_
