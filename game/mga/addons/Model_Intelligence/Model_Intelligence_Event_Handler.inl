// -*- C++ -*-
// $Id: generate_cpp_class.py 3685 2012-09-26 14:45:04Z dfeiock $

namespace GAME
{
       
//
// Model_Intelligence_Event_Handler
//
GAME_INLINE
Model_Intelligence_Event_Handler::
Model_Intelligence_Event_Handler (unsigned long mask, bool destroy_on_close)
: Mga::Object_Event_Handler (mask, destroy_on_close)
{

}

//
// ~Model_Intelligence_Event_Handler
//
GAME_INLINE
Model_Intelligence_Event_Handler::~Model_Intelligence_Event_Handler (void)
{

}

} // namespace GAME
