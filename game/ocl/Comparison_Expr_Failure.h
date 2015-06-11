#ifndef _MODEL_INTELLIGENCE_COMPARISON_EXPR_FAILURE_H_
#define _MODEL_INTELLIGENCE_COMPARISON_EXPR_FAILURE_H_

#include "Equality_Expr_Failure.h"
#include "Comparison_Expr.h"

namespace GAME
{
namespace Ocl
{

/**
* @class Comparison_Expr_Failure
*
* Class derived from Equality_Expr_Failure. This class forms the
* base class of failures for comparisons like "=", ">=", "<="
*/
class Comparison_Expr_Failure : public Equality_Expr_Failure
{
public:
	/// Default Constructor.
	Comparison_Expr_Failure (void);

	/**
	* Initializing constructor.
	*
	* @param[in]     expr     The failed Comparison Expression.
	*/
	Comparison_Expr_Failure (Comparison_Expr * expr);

	/// Destructor.
	virtual ~Comparison_Expr_Failure (void);
};

}
}

#endif // !_MODEL_INTELLIGENCE_COMPARISON_EXPR_FAILURE_H_