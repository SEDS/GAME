// -*- C++ -*-

//=============================================================================
/**
 * @file        Position_Sort_T.h
 *
 * @author      James H. Hill
 */
//=============================================================================

#ifndef _GAME_MGA_UTILS_POSITION_SORT_T_H_
#define _GAME_MGA_UTILS_POSITION_SORT_T_H_

#include <string>

#include "Point.h"

namespace GAME
{
namespace Mga
{

/**
 * @class Position_Sort_T
 *
 * Parameterizable functor for sorting UDM elements based on their
 * position in the model.
 */
template <typename T, typename SORT>
class Position_Sort_T
{
public:
  /// Default constructor.
  Position_Sort_T (void);

  /**
   * Copy constructor.
   *
   * @param[in]       sorter        The actual sorter.
   */
  Position_Sort_T (const std::string & aspect, const SORT & sorter);

  /**
   * Functor for determine which position is greater.
   *
   * @param[in]       lhs         Left-hand side of the operator
   * @param[in]       rhs         Right-hand side of the sort.
   */
  bool operator () (const T & lhs, const T & rhs);

  /**
   * Assignment operator.
   *
   * @param[in]       rhs         Right-hand side of operator
   * @return          Reference to this object.
   */
  const Position_Sort_T & operator = (const Position_Sort_T & rhs);

private:
  /// The aspect used to sort the elements.
  const std::string aspect_;

  /// Functor that is responsible for sorting.
  SORT sorter_;
};

/**
 * @struct PS_Left_To_Right
 */
struct PS_Left_To_Right
{
  bool operator () (const GAME::Mga::Point & lhs, const GAME::Mga::Point & rhs)
  {
    return lhs.x_value () < rhs.x_value ();
  }
};

/**
 * @struct PS_Top_To_Bottom
 */
struct PS_Top_To_Bottom
{
  bool operator () (const GAME::Mga::Point & lhs, const GAME::Mga::Point & rhs)
  {
    return lhs.y_value () < rhs.y_value ();
  }
};

}
}

#include "Position_Sort_T.cpp"

#endif  // !defined _GAME_MGA_UTILS_POSITION_SORT_T_H_
