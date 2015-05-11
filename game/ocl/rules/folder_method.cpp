#include "StdAfx.h"
#include "folder_method_impl.hpp"

namespace GAME
{
	namespace Ocl
	{

		void instantiate_folder_method_grammar (void)
		{
			typedef std::string::const_iterator iterator_type;
			folder_method <iterator_type> g;
		}

	}
}