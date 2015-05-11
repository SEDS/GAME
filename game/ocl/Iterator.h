// -*- C++ -*-

//=============================================================================
/**
* @file          Iterator.h
*
* $Id: $
*
* @author        Tanumoy Pati
*/
//=============================================================================

#ifndef _GAME_MODEL_INTELLIGENCE_ITERATOR_H_
#define _GAME_MODEL_INTELLIGENCE_ITERATOR_H_

#include <iostream>
#include <vector>
#include "game/mga/Model.h"

#include "Context.h"
#include "Value.h"
#include "Boolean_Expr.h"
#include "Value_Expr.h"

namespace GAME
{
	namespace Ocl
	{

		/**
		* @class Iterator
		*
		* Base class for all iterators
		*/
		class Iterator
		{
		public:
			/// Default constructor.
			Iterator (void);

			/// Destructor.
			~Iterator (void);

			// Pure virtual method for evaluating respective boolean expression
			virtual Value * evaluate (Ocl_Context & res,
				std::vector <GAME::Mga::FCO> & coll,
				std::vector <std::string> & decl,
				std::string & decl_type,
				Boolean_Expr * expr) = 0;

			// Pure virtual method for evaluating respective value expression
			virtual Value * evaluate (Ocl_Context & res,
				std::vector <GAME::Mga::FCO> & coll,
				std::vector <std::string> & decl,
				std::string & decl_type,
				Value_Expr * valexpr) = 0;

			// pure virtual is_association method  to check if this iterator
			// is a part of association constraint
			virtual bool is_association (void) = 0;

			// pure virtual is_contianment method  to check if this iterator
			// is a part of containment constraint
			virtual bool is_containment (void) = 0;

			// pure virtual is_reference method  to check if this iterator
			// is a part of reference constraint
			virtual bool is_reference (void) = 0;

		};

	}
}

#endif