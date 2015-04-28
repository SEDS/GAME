#ifndef _MODEL_INTELLIGENCE_EQUALITY_FAILURE_OBJECT_H_
#define _MODEL_INTELLIGENCE_EQUALITY_FAILURE_OBJECT_H_

#include "Failure_Object.h"
#include "Boolean_Expr.h"

class Equality_Expr;

class Equality_Failure_Object : public Failure_Object
{
public:
	Equality_Failure_Object();
	~Equality_Failure_Object();
	virtual void accept(Failure_Visitor & v)=0;
	virtual Boolean_Expr * get_origin()=0;

private:

};

#endif // !_MODEL_INTELLIGENCE_EQUALITY_FAILURE_OBJECT_H_
