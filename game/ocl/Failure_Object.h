#ifndef _MODEL_INTELLIGENCE_FAILURE_OBJECT_H_
#define _MODEL_INTELLIGENCE_FAILURE_OBJECT_H_

class Failure_Visitor;

class Failure_Object
{
public:
	Failure_Object();
	~Failure_Object();
	virtual void accept (Failure_Visitor & v)=0;

private:

};

#endif // !_MODEL_INTELLIGENCE_FAILURE_OBJECT_
