#ifndef _MODEL_INTELLIGENCE_IF_THEN_ELSE_FAILURE_OBJECT_H_
#define _MODEL_INTELLIGENCE_IF_THEN_ELSE_FAILURE_OBJECT_H_

#include "Failure_Object.h"
#include "Boolean_Expr.h"

class If_Then_Else_Expr;

class If_Then_Else_Failure_Object : public Failure_Object
{
public:
	If_Then_Else_Failure_Object();
	If_Then_Else_Failure_Object(Boolean_Expr * expr);
	~If_Then_Else_Failure_Object();
	virtual void accept (Failure_Visitor & v);

private:
	If_Then_Else_Expr * expr_;

};

#endif // !_MODEL_INTELLIGENCE_IF_THEN_ELSE_FAILURE_OBJECT_H_