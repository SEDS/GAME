#ifndef _MODEL_INTELLIGENCE_GREATER_THAN_EQUAL_FAILURE_OBJECT_H_
#define _MODEL_INTELLIGENCE_GREATER_THAN_EQUAL_FAILURE_OBJECT_H_

#include "Comparision_Failure_Object.h"
#include "Boolean_Expr.h"

class Greater_Equal_Expr;

class Greater_Than_Equal_Failure_Object : public Comparision_Failure_Object
{
public:
	Greater_Than_Equal_Failure_Object();
	Greater_Than_Equal_Failure_Object(Boolean_Expr * expr);
	~Greater_Than_Equal_Failure_Object();
	virtual void accept (Failure_Visitor & v);

private:
	Greater_Equal_Expr * expr_;

};

#endif // !_MODEL_INTELLIGENCE_GREATER_THAN_EQUAL_FAILURE_OBJECT_H_
