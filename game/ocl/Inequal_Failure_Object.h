#ifndef _MODEL_INTELLIGENCE_INEQUAL_FAILURE_OBJECT_H_
#define _MODEL_INTELLIGENCE_INEQUAL_FAILURE_OBJECT_H_

#include "Comparision_Failure_Object.h"
#include "Boolean_Expr.h"

class Not_Equal_Expr;

class Inequal_Failure_Object : public Comparision_Failure_Object
{
public:
	Inequal_Failure_Object();
	Inequal_Failure_Object(Boolean_Expr * expr);
	~Inequal_Failure_Object();
	virtual void accept (Failure_Visitor & v);
	virtual Boolean_Expr * get_origin();

private:
	Not_Equal_Expr * expr_;

};

#endif // !_MODEL_INTELLIGENCE_INEQUAL_FAILURE_OBJECT_H_
