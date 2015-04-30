#ifndef _MODEL_INTELLIGENCE_IF_THEN_ELSE_EXPR_FAILURE_H_
#define _MODEL_INTELLIGENCE_IF_THEN_ELSE_EXPR_FAILURE_H_

#include "Expr_Failure.h"
#include "Boolean_Expr.h"
#include "If_Then_Else_Expr.h"

/**
* @class If_Then_Else_Expr_Failure
*
* Class derived from Expr_Failure. This class deals with the
* If-then-else expression failures.
*/
class If_Then_Else_Expr_Failure : public Expr_Failure
{
public:
	/// Default constructor.
	If_Then_Else_Expr_Failure (void);

	/**
	* Initializing constructor.
	*
	* @param[in]     expr     The failed If Then Else Expression.
	*/
	If_Then_Else_Expr_Failure (Boolean_Expr * expr);

	/// Destructor.
	~If_Then_Else_Expr_Failure (void);

	/**
	* accept method for visiting the If Then Else Expression failures.
	*
	* @param[in]     v        Reference of the Expr_Failure_Visitor.
	*/
	virtual void accept (Expr_Failure_Visitor & v);

	/**
	* get_origin method for retrieving the failed If Then Else Expression.
	*
	* @return        The failed If Then Else Expression.
	*/
	virtual If_Then_Else_Expr * get_origin (void);

private:

};

#endif // !_MODEL_INTELLIGENCE_IF_THEN_ELSE_EXPR_FAILURE_H_