#ifndef _MODEL_INTELLIGENCE_AND_FAILURE_OBJECT_H_
#define _MODEL_INTELLIGENCE_AND_FAILURE_OBJECT_H_

#include "Conjunction_Failure_Object.h"
#include "Context.h"

class And_Failure_Object : public Conjunction_Failure_Object
{
public:
	And_Failure_Object();
	And_Failure_Object(Ocl_Context res);
	~And_Failure_Object();

private:
	Ocl_Context res_;

};

#endif // !_MODEL_INTELLIGENCE_AND_FAILURE_OBJECT_H_
