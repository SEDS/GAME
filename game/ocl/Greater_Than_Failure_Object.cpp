#include "stdafx.h"
#include "Greater_Than_Failure_Object.h"
#include "Failure_Visitor.h"
#include "Greater_Expr.h"

Greater_Than_Failure_Object::Greater_Than_Failure_Object()
	:expr_(0)
{
}

Greater_Than_Failure_Object::Greater_Than_Failure_Object(Boolean_Expr * expr)
	:expr_(dynamic_cast<Greater_Expr *>(expr))
{
}

Greater_Than_Failure_Object::~Greater_Than_Failure_Object()
{
}

void Greater_Than_Failure_Object::accept (Failure_Visitor & v)
{
	v.Visit_Greater_Than_Failure_Object(*this);
}

Boolean_Expr * Greater_Than_Failure_Object::get_origin()
{
	return expr_;
}