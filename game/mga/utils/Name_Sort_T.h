// -*- C++ -*-

//=============================================================================
/**
 * @file        Name_Sort_T.h
 *
 * @author      James H. Hill
 */
//=============================================================================

#ifndef _GAME_MGA_UTILS_NAME_SORT_T_H_
#define _GAME_MGA_UTILS_NAME_SORT_T_H_

#include <string>

namespace GAME
{
namespace Mga
{

/**
 * @class Name_Sort_T
 *
 */
class Name_Sort_T
{
public:
  /// Default constructor.
  Name_Sort_T (void);

  /**
   * Functor for determine which position is greater.
   *
   * @param[in]       lhs         Left-hand side of the operator
   * @param[in]       rhs         Right-hand side of the sort.
   */
  template <typename T>
  bool operator () (const T & lhs, const T & rhs);
};

}
}

#include "Name_Sort_T.cpp"

#endif  // !defined _GAME_MGA_UTILS_NAME_SORT_T_H_
