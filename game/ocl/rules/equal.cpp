#include "StdAfx.h"
#include "equal_impl.hpp"

namespace GAME
{
	namespace Ocl
	{

		void instantiate_equal_grammar (void)
		{
			typedef std::string::const_iterator iterator_type;
			equal <iterator_type> g;
		}

	}
}