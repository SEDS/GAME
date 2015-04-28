#ifndef _MODEL_INTELLIGENCE_OR_FAILURE_OBJECT_H_
#define _MODEL_INTELLIGENCE_OR_FAILURE_OBJECT_H_

#include "Conjunction_Failure_Object.h"
#include "Boolean_Expr.h"

class Or_Expr;

class Or_Failure_Object : public Conjunction_Failure_Object
{
public:
	Or_Failure_Object ();
	Or_Failure_Object (Boolean_Expr * expr);
	~Or_Failure_Object ();
	virtual void accept (Failure_Visitor & v);
	virtual Boolean_Expr * get_origin();

private:
	Or_Expr * expr_;
};

#endif // !_MODEL_INTELLIGENCE_OR_FAILURE_OBJECT_H_
