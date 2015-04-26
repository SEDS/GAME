#ifndef _MODEL_INTELLIGENCE_EQUAL_FAILURE_OBJECT_H_
#define _MODEL_INTELLIGENCE_EQUAL_FAILURE_OBJECT_H_

#include "Comparision_Failure_Object.h"
#include "Boolean_Expr.h"

class Equal_Expr;

class Equal_Failure_Object : public Comparision_Failure_Object
{
public:
	Equal_Failure_Object();
	Equal_Failure_Object(Boolean_Expr * expr);
	~Equal_Failure_Object();
	virtual void accept (Failure_Visitor & v);

private:
	Equal_Expr * expr_;

};

#endif // !_MODEL_INTELLIGENCE_EQUAL_FAILURE_OBJECT_H_
