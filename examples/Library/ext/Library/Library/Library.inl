// -*- C++ -*-
// $Id$

namespace Library
{
  //
  // Library_Impl
  //
  GAME_INLINE Library_Impl::Library_Impl (void)
  {
  }

  //
  // Library_Impl
  //
  GAME_INLINE Library_Impl::Library_Impl (IMgaModel * ptr)
  {
    this->object_ = ptr;
  }

  //
  // ~Library_Impl
  //
  GAME_INLINE Library_Impl::~Library_Impl (void)
  {
  }

  //
  // LibraryName
  //
  GAME_INLINE void Library_Impl::LibraryName (const std::string & val)
  {
    static const std::string attr_name ("LibraryName");
    this->attribute (attr_name)->string_value (val);
  }

  //
  // LibraryName
  //
  GAME_INLINE std::string Library_Impl::LibraryName (void) const
  {
    static const std::string attr_name ("LibraryName");
    return this->attribute (attr_name)->string_value ();
  }

  //
  // LibraryAddress
  //
  GAME_INLINE void Library_Impl::LibraryAddress (const std::string & val)
  {
    static const std::string attr_name ("LibraryAddress");
    this->attribute (attr_name)->string_value (val);
  }

  //
  // LibraryAddress
  //
  GAME_INLINE std::string Library_Impl::LibraryAddress (void) const
  {
    static const std::string attr_name ("LibraryAddress");
    return this->attribute (attr_name)->string_value ();
  }
}

