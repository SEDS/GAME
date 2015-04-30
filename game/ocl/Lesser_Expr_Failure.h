#ifndef _MODEL_INTELLIGENCE_LESSER_EXPR_FAILURE_H_
#define _MODEL_INTELLIGENCE_LESSER_EXPR_FAILURE_H_

#include "Comparison_Expr_Failure.h"
#include "Boolean_Expr.h"
#include "Lesser_Expr.h"

/**
* @class Lesser_Expr_Failure
*
* Class derived from Comparison_Expr_Failure. This class deals with the
* failure of the less than relation between two variables.
*/
class Lesser_Expr_Failure : public Comparison_Expr_Failure
{
public:
	/// Default Constructor.
	Lesser_Expr_Failure (void);

	/**
	* Initializing constructor.
	*
	* @param[in]     expr     The failed Lesser Expression.
	*/
	Lesser_Expr_Failure (Lesser_Expr * expr);

	/// Destructor.
	~Lesser_Expr_Failure (void);

	/**
	* accept method for visiting the Lesser Expression failures.
	*
	* @param[in]     v        Reference of the Expr_Failure_Visitor.
	*/
	virtual void accept (Expr_Failure_Visitor & v);

	/**
	* get_origin method for retrieving the failed Lesser Expression.
	*
	* @return        The failed Lesser Expression.
	*/
	virtual Lesser_Expr * get_origin();

private:

};

#endif // !_MODEL_INTELLIGENCE_LESSER_EXPR_FAILURE_H_
