#ifndef _MODEL_INTELLIGENCE_EQUAL_EXPR_FAILURE_H_
#define _MODEL_INTELLIGENCE_EQUAL_EXPR_FAILURE_H_

#include "Comparison_Expr_Failure.h"
#include "Boolean_Expr.h"
#include "Equal_Expr.h"

/**
* @class Equal_Expr_Failure
*
* Class derived from Comparison_Expr_Failure. This class deals
* with the failure of the equality between two variables. 
*/
class Equal_Expr_Failure : public Comparison_Expr_Failure
{
public:
	/// Default constructor.
	Equal_Expr_Failure (void);

	/**
	* Initializing constructor.
	*
	* @param[in]     expr     The failed Equal Expression.
	*/
	Equal_Expr_Failure (Equal_Expr * expr);

	/// Destructor.
	virtual ~Equal_Expr_Failure (void);

	/**
	* accept method for visiting the Equal Expression failures.
	*
	* @param[in]     v        Reference of the Expr_Failure_Visitor.
	*/
	virtual void accept (Expr_Failure_Visitor & v);

	/**
	* get_origin method for retrieving the failed Equal Expression.
	*
	* @return        The failed Equal Expression.
	*/
	virtual Equal_Expr * get_origin (void);

private:

};

#endif // !_MODEL_INTELLIGENCE_EQUAL_EXPR_FAILURE_H_
