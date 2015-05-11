// $Id$

#include "StdAfx.h"
#include "grammar_impl.hpp"

namespace GAME
{
	namespace Ocl
	{

		void instantiate_grammar (void)
		{
			typedef std::string::const_iterator iterator_type;
			OCL_Parser_Grammar <iterator_type> g;
		}

	}
}