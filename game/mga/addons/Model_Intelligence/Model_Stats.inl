// -*- C++ -*-
// $Id: generate_cpp_class.py 3685 2012-09-26 14:45:04Z dfeiock $

GAME_INLINE
Model_Stats::Model_Stats (void)
: is_timing_ (false),
  create_count_ (0)
{

}

GAME_INLINE
Model_Stats::~Model_Stats (void)
{

}

GAME_INLINE
bool Model_Stats::is_timing (void) const
{
  return this->is_timing_;
}

GAME_INLINE
const ACE_High_Res_Timer & Model_Stats::sys_time (void) const
{
  return this->sys_time_;
}

GAME_INLINE
const ACE_High_Res_Timer & Model_Stats::user_time (void) const
{
  return this->user_time_;
}

GAME_INLINE
void Model_Stats::increment_create_count (void)
{
  ++ this->create_count_;
}

GAME_INLINE
size_t Model_Stats::create_count (void) const
{
  return this->create_count_;
}

GAME_INLINE
void Model_Stats::start_timing (void)
{
  this->sys_time_.start_incr ();
  this->is_timing_ = true;
}

GAME_INLINE
void Model_Stats::stop_timing (void)
{
  this->sys_time_.stop_incr ();
  this->is_timing_ = false;
}

/////////////////////////////////////////////////////////////////////////////////////////
// User_Time_Guard

GAME_INLINE
User_Time_Guard::User_Time_Guard (Model_Stats & stats)
: stats_ (stats)
{
  this->stats_.switch_to_user_time ();
}

GAME_INLINE
User_Time_Guard::~User_Time_Guard (void)
{
  this->stats_.switch_to_sys_time ();
}
