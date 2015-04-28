#ifndef _MODEL_INTELLIGENCE_AND_FAILURE_OBJECT_H_
#define _MODEL_INTELLIGENCE_AND_FAILURE_OBJECT_H_

#include "Conjunction_Failure_Object.h"
#include "Boolean_Expr.h"

class And_Expr;

class And_Failure_Object : public Conjunction_Failure_Object
{
public:
	And_Failure_Object();
	And_Failure_Object(Boolean_Expr * expr);
	~And_Failure_Object();
	virtual void accept (Failure_Visitor & v);
	virtual Boolean_Expr * get_origin();

private:
	And_Expr * expr_;

};

#endif // !_MODEL_INTELLIGENCE_AND_FAILURE_OBJECT_H_
