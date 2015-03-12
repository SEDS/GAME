namespace GAME
{
namespace Mga
{

Name_Sort_T::Name_Sort_T (void)
{

}

template <typename T>
bool Name_Sort_T::operator () (const T & lhs, const T & rhs)
{
  const std::string & name = lhs->name ();
  return name.compare (rhs->name ()) < 0;
}

}
}
