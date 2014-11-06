namespace GAME
{
namespace Mga
{

template <typename T, typename SORT>
Position_Sort_T <T, SORT>::Position_Sort_T (void)
{

}

template <typename T, typename SORT>
Position_Sort_T <T, SORT>::
Position_Sort_T (const std::string & aspect, const SORT & sorter)
: aspect_ (aspect),
  sorter_ (sorter)
{

}

template <typename T, typename SORT>
bool Position_Sort_T <T, SORT>::operator () (const T & lhs, const T & rhs)
{
  Point lhs_position, rhs_position;

  if (get_position (this->aspect_, lhs, lhs_position) && 
      get_position (this->aspect_, rhs, rhs_position))
  {
    return this->sorter_ (lhs_position, rhs_position);
  }

  return false;
}

template <typename T, typename SORT>
const Position_Sort_T <T, SORT> &
Position_Sort_T <T, SORT>::operator = (const Position_Sort_T <T, SORT> & sorter)
{
  this->sorter_ = sorter.sorter_;
  return *this;
}

}
}
