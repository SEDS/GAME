// -*- C++ -*-

//=============================================================================
/**
 * @file        Static_Assert.h
 *
 * $Id$
 *
 * @author      James H. Hill
 */
//=============================================================================

#ifndef _GAME_MGA_STATIC_ASSERT_H_
#define _GAME_MGA_STATIC_ASSERT_H_

namespace GAME
{

/**
 * @struct assert
 *
 * Template metaprogramming object for asserting a statement.
 */
template <bool>
struct __static_assert;

template < >
struct __static_assert <true>
{
  static const bool result_type = true;
};

/**
 * @struct negate
 *
 * Template metaprogramming object for negating an assertion.
 */
template <bool result>
struct negate;

template < >
struct negate <false>
{
  static const bool result_type = true;
};

template < >
struct negate <true>
{
  static const bool result_type = false;
};

namespace Mga
{
namespace assertion
{

template <typename T>
struct is_extension_class
{
  static const bool result_type = true;
};

template < >
struct is_extension_class <Object>
{
  static const bool result_type = false;
};

template < >
struct is_extension_class <FCO>
{
  static const bool result_type = false;
};

template < >
struct is_extension_class <Model>
{
  static const bool result_type = false;
};

template < >
struct is_extension_class <Reference>
{
  static const bool result_type = false;
};

template < >
struct is_extension_class <Set>
{
  static const bool result_type = false;
};

template < >
struct is_extension_class <Atom>
{
  static const bool result_type = false;
};

}
}

}

#endif  // !define _GAME_MGA_ASSERT_H_
