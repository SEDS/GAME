#include "StdAfx.h"
#include "comparison_impl.hpp"

namespace GAME
{
	namespace Ocl
	{

		void instantiate_comparison_grammar (void)
		{
			typedef std::string::const_iterator iterator_type;
			comparison <iterator_type> g;
		}

	}
}