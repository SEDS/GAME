#ifndef _MODEL_INTELLIGENCE_CONJUNCTION_FAILURE_OBJECT_H_
#define _MODEL_INTELLIGENCE_CONJUNCTION_FAILURE_OBJECT_H_

#include "Equality_Failure_Object.h"

class Conjunction_Expr;

class Conjunction_Failure_Object : public Equality_Failure_Object
{
public:
	Conjunction_Failure_Object();
	~Conjunction_Failure_Object();
	virtual void accept (Failure_Visitor & v)=0;
	virtual Boolean_Expr * get_origin()=0;

private:

};

#endif // !_MODEL_INTELLIGENCE_CONJUNCTION_FAILURE_OBJECT_H_
