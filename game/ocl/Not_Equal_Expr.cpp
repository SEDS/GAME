// $Id: Equal_Expr.cpp 2905 2012-05-17 21:55:36Z tpati $

#include "stdafx.h"
#include "Not_Equal_Expr.h"
#include "Attribute_Expr.h"
#include "Object_Value.h"

#include "game/mga/Atom.h"
#include "game/mga/Model.h"

namespace GAME
{
	namespace Ocl
	{

		//
		// Constructor
		//
		Not_Equal_Expr::Not_Equal_Expr (Value_Expr * left, Value_Expr * right)
			: lhs_ (left),
			rhs_ (right)
		{
		}

		//
		// Destructor
		//
		Not_Equal_Expr::~Not_Equal_Expr (void)
		{
		}

		//
		// evaluate
		//
		bool Not_Equal_Expr::evaluate (Ocl_Context & res)
		{
			return !this->lhs_->evaluate (res)->is_equal (this->rhs_->evaluate (res));
		}

		//
		// filter_evaluate
		//
		bool Not_Equal_Expr::filter_evaluate (Ocl_Context & res, GAME::Mga::FCO & current)
		{
			res.cur_fco = current;

			// TODO What should be the initial value of ret?
			bool ret;

			if (this->lhs_->is_filter () || this->rhs_->is_filter ())
				ret = this->lhs_->filter_evaluate (res)->is_equal (this->rhs_->filter_evaluate (res));


			if (!ret)
				return true;

			return false;
		}

		//
		// is_association
		//
		bool Not_Equal_Expr::is_association (void)
		{
			if (this->lhs_->is_association () && this->rhs_->is_association ())
				return true;

			return false;
		}

		//
		// is_containment
		//
		bool Not_Equal_Expr::is_containment (void)
		{
			if (this->lhs_->is_containment () && this->rhs_->is_containment ())
				return true;

			return false;
		}

		//
		// is_reference
		//
		bool Not_Equal_Expr::is_reference (void)
		{
			if (this->lhs_->is_reference () && this->rhs_->is_reference ())
				return true;

			return false;
		}

	}
}