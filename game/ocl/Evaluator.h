// -*- C++ -*-

//=============================================================================
/**
* @file         Evaluator.h
*
* @author       James H. Hill
*/
//=============================================================================

#ifndef _GAME_OCL_EVALUATOR_H_
#define _GAME_OCL_EVALUATOR_H_

#include "Ocl_Parser.h"

// Forward decl.
class Boolean_Expr;

namespace GAME
{
	namespace Ocl
	{

		/**
		* @class Evaluator
		*
		* OCL expression evaluator object. The evaluator can evaluate OCL
		* expression string, and precompiled OCL expressions. The evalutor
		* is not bound to a specific object, which allows the same OCL epression
		* to be evaluated against different objects.
		*/
		class GAME_OCL_Export Evaluator
		{
		public:
			/// Default constructor.
			Evaluator (void);

			/// Destructor.
			~Evaluator (void);

			/**
			* Evaluate an OCL expression. The OCL expression is in string format. This
			* version will first parse the string, and then perform the evaluation. If
			* the parsing fails, then an exception is thrown.
			*
			* @param[in]         self          Object to apply constraint
			* @param[in]         expr          OCL expression
			*/
			bool evaluate (GAME::Mga::Object_in self, const std::string & expr);

			/**
			* Evaluate an OCL expression. The OCL expression in this version of evaluator
			* has already been compiled.
			*
			* @param[in]         self          Object to apply constraint
			* @param[in]         expr          Compiled OCL expression
			*/
			bool evaluate (GAME::Mga::Object_in self, const std::vector <Boolean_Expr *> & ocl_expr);

		private:
			/// OCL parser for the evaluator.
			OCL_Parser parser_;
		};

	}
}

#if defined (__GAME_INLINE__)
#include "Evaluator.inl"
#endif

#endif  // !defined _GAME_OCL_EVALUATOR_H_
