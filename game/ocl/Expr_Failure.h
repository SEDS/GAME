#ifndef _MODEL_INTELLIGENCE_EXPR_FAILURE_H_
#define _MODEL_INTELLIGENCE_EXPR_FAILURE_H_

#include "Boolean_Expr.h"
#include "Expr_Failure_Visitor.h"

/**
* @class Expr_Failure
*
* Base class for any expression failures.
*/
class Expr_Failure
{
public:
	/// Default constructor.
	Expr_Failure (void);

	/**
	* Initializing constructor.
	*
	* @param[in]     expr     The failed Expression.
	*/
	Expr_Failure (Boolean_Expr * expr);

	/// Destructor.
	virtual ~Expr_Failure (void);

	/**
	* Pure virtual accept method used by derived classes for visiting 
	* the Expression failures.
	*
	* @param[in]     v        Reference of the Expr_Failure_Visitor.
	*/
	virtual void accept (Expr_Failure_Visitor & v) = 0;

	/**
	* get_origin method for retrieving the failed Expression.
	*
	* @return        The failed Expression.
	*/
	virtual Boolean_Expr * get_origin (void);

protected:
	// Store the failed expression.
	Boolean_Expr * expr_;

};

#endif // !_MODEL_INTELLIGENCE_EXPR_FAILURE_H_
