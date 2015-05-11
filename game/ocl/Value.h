// -*- C++ -*-

//=============================================================================
/**
* @file          Value.h
*
* $Id$
*
* @author        Tanumoy Pati
*/
//=============================================================================

#ifndef _GAME_OCL_VALUE_H_
#define _GAME_OCL_VALUE_H_

#include "OCL_export.h"

namespace GAME
{
	namespace Ocl
	{

		/**
		* @class Value
		*
		* Base class for any value types
		*/
		class GAME_OCL_Export Value
		{
		public:
			/// Default constructor.
			Value (void);

			/// Destructor.
			~Value (void);

			// Pure virtual method to check if the variables are equal
			virtual bool is_equal (Value * v) = 0;

			// Pure virtual method to check if one variable is greater
			virtual bool is_greater (Value * v) = 0;

			// Pure virtual method to check if the variables are greater or equal
			virtual bool is_greater_equal (Value * v) = 0;

			// Pure virtual method to check if one variable is lesser
			virtual bool is_lesser (Value * v) = 0;

			// Pure virtual method to check if the variables are lesser or equal
			virtual bool is_lesser_equal (Value * v) = 0;

			// Pure virtual method to get the difference between two variables
			virtual bool get_diff (Value * v, double & count) = 0;

			// Pure virtual method to get the summation between two variables
			virtual bool get_sum (Value * v, double & count) = 0;
		};

	}
}

#endif