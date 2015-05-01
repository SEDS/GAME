#ifndef _MODEL_INTELLIGENCE_LESSER_EQUAL_EXPR_FAILURE_H_
#define _MODEL_INTELLIGENCE_LESSER_EQUAL_EXPR_FAILURE_H_

#include "Comparison_Expr_Failure.h"
#include "Boolean_Expr.h"
#include "Lesser_Equal_Expr.h"

/**
* @class Lesser_Equal_Expr_Failure
*
* Class derived from Comparison_Expr_Failure. This class deals with the
* failure of the less than equal to relation between two variables.
*/
class Lesser_Equal_Expr_Failure : public Comparison_Expr_Failure
{
public:
	/// Default constructor.
	Lesser_Equal_Expr_Failure (void);

	/**
	* Initializing constructor.
	*
	* @param[in]     expr     The failed Lesser Equal Expression.
	*/
	Lesser_Equal_Expr_Failure (Lesser_Equal_Expr * expr);

	/// Destructor.
	virtual ~Lesser_Equal_Expr_Failure (void);

	/**
	* accept method for visiting the Lesser Equal Expression failures.
	*
	* @param[in]     v        Reference of the Expr_Failure_Visitor.
	*/
	virtual void accept (Expr_Failure_Visitor & v);

	/**
	* get_origin method for retrieving the failed Lesser Equal Expression.
	*
	* @return        The failed Lesser Equal Expression.
	*/
	virtual Lesser_Equal_Expr * get_origin (void);

private:

};

#endif // !_MODEL_INTELLIGENCE_LESSER_EQUAL_EXPR_FAILURE_H_
