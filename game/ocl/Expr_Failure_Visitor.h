#ifndef _MODEL_INTELLIGENCE_EXPR_FAILURE_VISITOR_H_
#define _MODEL_INTELLIGENCE_EXPR_FAILURE_VISITOR_H_

/// Forward Declaration of the Expression classes.
class Boolean_Expr;
class And_Expr_Failure;
class Or_Expr_Failure;
class Equal_Expr_Failure;
class Not_Equal_Expr_Failure;
class Greater_Equal_Expr_Failure;
class Greater_Expr_Failure;
class If_Then_Else_Expr_Failure;
class Lesser_Expr_Failure;
class Lesser_Equal_Expr_Failure;

/**
* @class Expr_Failure_Visitor
*
* Base class for any expression failure visitors.
*/
class Expr_Failure_Visitor
{
public:
	/// Default Constructor.
	Expr_Failure_Visitor();

	/// Destructor.
	~Expr_Failure_Visitor();

	/**
	* Pure virtual visit_and_expr_failure method to visiting the 
	* And Expression failures.
	*
	* @param[in]     object        Object of the And_Expr_Failure.
	*/
	virtual void Visit_And_Expr_Failure (const And_Expr_Failure & object) = 0;

	/**
	* Pure virtual visit_or_expr_failure method to visiting the 
	* Or Expression failures.
	*
	* @param[in]     object        Object of the Or_Expr_Failure.
	*/
	virtual void Visit_Or_Expr_Failure (const Or_Expr_Failure & object)=0;

	/**
	* Pure virtual visit_equal_expr_failure method to visiting the 
	* Equal Expression failures.
	*
	* @param[in]     object        Reference of the Equal_Expr_Failure.
	*/
	virtual void Visit_Equal_Expr_Failure (const Equal_Expr_Failure & object)=0;

	/**
	* Pure virtual visit_not_equal_expr_failure method to visiting the 
	* Not Equal Expression failures.
	*
	* @param[in]     object        Object of the Not_Equal_Expr_Failure.
	*/
	virtual void Visit_Not_Equal_Expr_Failure (const Not_Equal_Expr_Failure & object)=0;

	/**
	* Pure virtual visit_greater_equal_expr_failure method to visiting the 
	* Greater Equal Expression failures.
	*
	* @param[in]     object        Object of the Greater_Equal_Expr_Failure.
	*/
	virtual void Visit_Greater_Equal_Expr_Failure (const Greater_Equal_Expr_Failure & object)=0;

	/**
	* Pure virtual visit_greater_expr_failure method to visiting the 
	* Greater Expression failures.
	*
	* @param[in]     object        Object of the Greater_Expr_Failure.
	*/
	virtual void Visit_Greater_Expr_Failure (const Greater_Expr_Failure & object)=0;

	/**
	* Pure virtual visit_lesser_equal_expr_failure method to visiting the 
	* Lesser Equal Expression failures.
	*
	* @param[in]     object        Object of the Lesser_Equal_Expr_Failure.
	*/
	virtual void Visit_Lesser_Equal_Expr_Failure (const Lesser_Equal_Expr_Failure & object)=0;

	/**
	* Pure virtual visit_lesser_expr_failure method to visiting the 
	* Lesser Expression failures.
	*
	* @param[in]     object        Object of the Lesser_Expr_Failure.
	*/
	virtual void Visit_Lesser_Expr_Failure (const Lesser_Expr_Failure & object)=0;

	/**
	* Pure virtual visit_if_then_else_expr_failure method to visiting the 
	* If Then Else Expression failures.
	*
	* @param[in]     object        Object of the If_Then_Else_Expr_Failure.
	*/
	virtual void Visit_If_Then_Else_Expr_Failure (const If_Then_Else_Expr_Failure & object)=0;

private:

};

#endif // !_MODEL_INTELLIGENCE_EXPR_FAILURE_VISITOR_H_
