#ifndef _MODEL_INTELLIGENCE_CONJUNCTION_FAILURE_OBJECT_H_
#define _MODEL_INTELLIGENCE_CONJUNCTION_FAILURE_OBJECT_H_

#include "Failure_Object.h"

class Conjunction_Failure_Object : public Failure_Object
{
public:
	Conjunction_Failure_Object();
	~Conjunction_Failure_Object();
	virtual void accept (Failure_Visitor & v)=0;

private:

};

#endif // !_MODEL_INTELLIGENCE_CONJUNCTION_FAILURE_OBJECT_H_
