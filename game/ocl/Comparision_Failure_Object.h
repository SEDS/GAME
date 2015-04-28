#ifndef _MODEL_INTELLIGENCE_COMPARISION_FAILURE_OBJECT_H_
#define _MODEL_INTELLIGENCE_COMPARISION_FAILURE_OBJECT_H_

#include "Equality_Failure_Object.h"

class Comparison_Expr;

class Comparision_Failure_Object : public Equality_Failure_Object
{
public:
	Comparision_Failure_Object();
	~Comparision_Failure_Object();
	virtual void accept (Failure_Visitor & v)=0;
	virtual Boolean_Expr * get_origin()=0;

private:

};

#endif // !_MODEL_INTELLIGENCE_COMPARISION_FAILURE_OBJECT_H_
