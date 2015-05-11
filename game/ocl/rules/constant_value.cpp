#include "StdAfx.h"
#include "constant_value_impl.hpp"

namespace GAME
{
	namespace Ocl
	{

		void instantiate_constant_value_grammar (void)
		{
			typedef std::string::const_iterator iterator_type;
			constant_value <iterator_type> g;
		}

	}
}