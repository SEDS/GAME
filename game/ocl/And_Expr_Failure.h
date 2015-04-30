#ifndef _MODEL_INTELLIGENCE_AND_EXPR_FAILURE_H_
#define _MODEL_INTELLIGENCE_AND_EXPR_FAILURE_H_

#include "Conjunction_Expr_Failure.h"
#include "Boolean_Expr.h"
#include "And_Expr.h"

/**
* @class And_Expr_Failure
*
* Class derived from Conjunction_Expr_Failure. This class deals with
* the failure of anding operation. 
*/
class And_Expr_Failure : public Conjunction_Expr_Failure
{
public:
	/// Default Constructor.
	And_Expr_Failure (void);

	/**
	* Initializing constructor.
	*
	* @param[in]     expr     The failed And Expression.
	*/
	And_Expr_Failure (And_Expr * expr);

	/// Destructor.
	~And_Expr_Failure (void);

	/**
	* accept method for visiting the And Expression failures.
	*
	* @param[in]     v        Reference of the Expr_Failure_Visitor.
	*/
	virtual void accept (Expr_Failure_Visitor & v);

	/**
	* get_origin method for retrieving the failed And Expression.
	*
	* @return        The failed And Expression.
	*/
	virtual And_Expr * get_origin (void);

private:

};

#endif // !_MODEL_INTELLIGENCE_AND_EXPR_FAILURE_H_
