#ifndef _MODEL_INTELLIGENCE_CONJUNCTION_EXPR_FAILURE_H_
#define _MODEL_INTELLIGENCE_CONJUNCTION_EXPR_FAILURE_H_

#include "Equality_Expr_Failure.h"
#include "Conjunction_Expr.h"

/**
* @class Conjunction_Expr_Failure
*
* Class derived from Equality_Expr_Failure. This class forms the
* base class for conjunction failures for "and" and "or" failures.
*/
class Conjunction_Expr_Failure : public Equality_Expr_Failure
{
public:
	/// Default Constructor
	Conjunction_Expr_Failure (void);

	/**
	* Initializing constructor.
	*
	* @param[in]     expr     The failed Conjunction Expression.
	*/
	Conjunction_Expr_Failure (Conjunction_Expr * expr);

	/// Destructor
	virtual ~Conjunction_Expr_Failure (void);
};

#endif // !_MODEL_INTELLIGENCE_CONJUNCTION_EXPR_FAILURE_H_
