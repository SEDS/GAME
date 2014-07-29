// -*- C++ -*-
// $Id$

namespace Library
{
  //
  // Patron_Impl
  //
  GAME_INLINE Patron_Impl::Patron_Impl (void)
  {
  }

  //
  // Patron_Impl
  //
  GAME_INLINE Patron_Impl::Patron_Impl (IMgaAtom * ptr)
  {
    this->object_ = ptr;
  }

  //
  // ~Patron_Impl
  //
  GAME_INLINE Patron_Impl::~Patron_Impl (void)
  {
  }

  //
  // Name
  //
  GAME_INLINE void Patron_Impl::Name (const std::string & val)
  {
    static const std::string attr_name ("Name");
    this->attribute (attr_name)->string_value (val);
  }

  //
  // Name
  //
  GAME_INLINE std::string Patron_Impl::Name (void) const
  {
    static const std::string attr_name ("Name");
    return this->attribute (attr_name)->string_value ();
  }

  //
  // SSN
  //
  GAME_INLINE void Patron_Impl::SSN (double val)
  {
    static const std::string attr_name ("SSN");
    this->attribute (attr_name)->double_value (val);
  }

  //
  // SSN
  //
  GAME_INLINE double Patron_Impl::SSN (void) const
  {
    static const std::string attr_name ("SSN");
    return this->attribute (attr_name)->double_value ();
  }

  //
  // HomeAddress
  //
  GAME_INLINE void Patron_Impl::HomeAddress (const std::string & val)
  {
    static const std::string attr_name ("HomeAddress");
    this->attribute (attr_name)->string_value (val);
  }

  //
  // HomeAddress
  //
  GAME_INLINE std::string Patron_Impl::HomeAddress (void) const
  {
    static const std::string attr_name ("HomeAddress");
    return this->attribute (attr_name)->string_value ();
  }

  //
  // Gender
  //
  GAME_INLINE void Patron_Impl::Gender (const std::string & val)
  {
    static const std::string attr_name ("Gender");
    this->attribute (attr_name)->string_value (val);
  }

  //
  // Gender
  //
  GAME_INLINE std::string Patron_Impl::Gender (void) const
  {
    static const std::string attr_name ("Gender");
    return this->attribute (attr_name)->string_value ();
  }

  //
  // Age
  //
  GAME_INLINE void Patron_Impl::Age (long val)
  {
    static const std::string attr_name ("Age");
    this->attribute (attr_name)->int_value (val);
  }

  //
  // Age
  //
  GAME_INLINE long Patron_Impl::Age (void) const
  {
    static const std::string attr_name ("Age");
    return this->attribute (attr_name)->int_value ();
  }
}

