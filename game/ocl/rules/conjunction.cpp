#include "StdAfx.h"
#include "conjunction_impl.hpp"

namespace GAME
{
	namespace Ocl
	{

		void instantiate_conjunction_grammar (void)
		{
			typedef std::string::const_iterator iterator_type;
			conjunction <iterator_type> g;
		}

	}
}