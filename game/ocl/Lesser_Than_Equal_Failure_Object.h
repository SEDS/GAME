#ifndef _MODEL_INTELLIGENCE_LESSER_THAN_EQUAL_FAILURE_OBJECT_H_
#define _MODEL_INTELLIGENCE_LESSER_THAN_EQUAL_FAILURE_OBJECT_H_

#include "Comparision_Failure_Object.h"
#include "Boolean_Expr.h"

class Lesser_Equal_Expr;

class Lesser_Than_Equal_Failure_Object : public Comparision_Failure_Object
{
public:
	Lesser_Than_Equal_Failure_Object();
	Lesser_Than_Equal_Failure_Object(Boolean_Expr * expr);
	~Lesser_Than_Equal_Failure_Object();
	virtual void accept (Failure_Visitor & v);
	virtual Boolean_Expr * get_origin();

private:
	Lesser_Equal_Expr * expr_;

};

#endif // !_MODEL_INTELLIGENCE_LESSER_THAN_EQUAL_FAILURE_OBJECT_H_
