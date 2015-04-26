#include "stdafx.h"
#include "Greater_Than_Equal_Failure_Object.h"
#include "Failure_Visitor.h"
#include "Greater_Equal_Expr.h"

Greater_Than_Equal_Failure_Object::Greater_Than_Equal_Failure_Object()
{
}

Greater_Than_Equal_Failure_Object::Greater_Than_Equal_Failure_Object(Boolean_Expr * expr)
	:expr_(dynamic_cast<Greater_Equal_Expr *>(expr))
{
}

Greater_Than_Equal_Failure_Object::~Greater_Than_Equal_Failure_Object()
{
}

void Greater_Than_Equal_Failure_Object::accept (Failure_Visitor & v)
{
	v.Visit_Greater_Than_Equal_Failure_Object(*this);
}