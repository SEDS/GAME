#ifndef _MODEL_INTELLIGENCE_FAILURE_VISITOR_H_
#define _MODEL_INTELLIGENCE_FAILURE_VISITOR_H_

#include "And_Failure_Object.h"
#include "Or_Failure_Object.h"
#include "Equal_Failure_Object.h"
#include "Inequal_Failure_Object.h"
#include "Greater_Than_Equal_Failure_Object.h"
#include "Greater_Than_Failure_Object.h"
#include "Lesser_Than_Equal_Failure_Object.h"
#include "Lesser_Than_Failure_Object.h"
#include "If_Then_Else_Failure_Object.h"

class Failure_Visitor
{
public:
	Failure_Visitor();
	~Failure_Visitor();
	virtual void Visit_And_Failure_Object (const And_Failure_Object & object)=0;
	virtual void Visit_Or_Failure_Object (const Or_Failure_Object & object)=0;
	virtual void Visit_Equal_Failure_Object (const Equal_Failure_Object & object)=0;
	virtual void Visit_Inequal_Failure_Object (const Inequal_Failure_Object & object)=0;
	virtual void Visit_Greater_Than_Equal_Failure_Object (const Greater_Than_Equal_Failure_Object & object)=0;
	virtual void Visit_Greater_Than_Failure_Object (const Greater_Than_Failure_Object & object)=0;
	virtual void Visit_Lesser_Than_Equal_Failure_Object (const Lesser_Than_Equal_Failure_Object & object)=0;
	virtual void Visit_Lesser_Than_Failure_Object (const Lesser_Than_Failure_Object & object)=0;
	virtual void Visit_If_Then_Else_Failure_Object (const If_Then_Else_Failure_Object & object)=0;

private:

};

#endif // !_MODEL_INTELLIGENCE_FAILURE_VISITOR_H_
