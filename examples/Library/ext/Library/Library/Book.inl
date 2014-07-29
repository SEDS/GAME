// -*- C++ -*-
// $Id$

namespace Library
{
  //
  // Book_Impl
  //
  GAME_INLINE Book_Impl::Book_Impl (void)
  {
  }

  //
  // Book_Impl
  //
  GAME_INLINE Book_Impl::Book_Impl (IMgaAtom * ptr)
  {
    this->object_ = ptr;
  }

  //
  // ~Book_Impl
  //
  GAME_INLINE Book_Impl::~Book_Impl (void)
  {
  }

  //
  // Title
  //
  GAME_INLINE void Book_Impl::Title (const std::string & val)
  {
    static const std::string attr_name ("Title");
    this->attribute (attr_name)->string_value (val);
  }

  //
  // Title
  //
  GAME_INLINE std::string Book_Impl::Title (void) const
  {
    static const std::string attr_name ("Title");
    return this->attribute (attr_name)->string_value ();
  }

  //
  // Author
  //
  GAME_INLINE void Book_Impl::Author (const std::string & val)
  {
    static const std::string attr_name ("Author");
    this->attribute (attr_name)->string_value (val);
  }

  //
  // Author
  //
  GAME_INLINE std::string Book_Impl::Author (void) const
  {
    static const std::string attr_name ("Author");
    return this->attribute (attr_name)->string_value ();
  }

  //
  // Genre
  //
  GAME_INLINE void Book_Impl::Genre (const std::string & val)
  {
    static const std::string attr_name ("Genre");
    this->attribute (attr_name)->string_value (val);
  }

  //
  // Genre
  //
  GAME_INLINE std::string Book_Impl::Genre (void) const
  {
    static const std::string attr_name ("Genre");
    return this->attribute (attr_name)->string_value ();
  }

  //
  // Quantity
  //
  GAME_INLINE void Book_Impl::Quantity (long val)
  {
    static const std::string attr_name ("Quantity");
    this->attribute (attr_name)->int_value (val);
  }

  //
  // Quantity
  //
  GAME_INLINE long Book_Impl::Quantity (void) const
  {
    static const std::string attr_name ("Quantity");
    return this->attribute (attr_name)->int_value ();
  }

  //
  // ISBN
  //
  GAME_INLINE void Book_Impl::ISBN (double val)
  {
    static const std::string attr_name ("ISBN");
    this->attribute (attr_name)->double_value (val);
  }

  //
  // ISBN
  //
  GAME_INLINE double Book_Impl::ISBN (void) const
  {
    static const std::string attr_name ("ISBN");
    return this->attribute (attr_name)->double_value ();
  }
}

