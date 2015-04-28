#include "stdafx.h"
#include "Lesser_Than_Failure_Object.h"
#include "Failure_Visitor.h"
#include "Lesser_Expr.h"

Lesser_Than_Failure_Object::Lesser_Than_Failure_Object()
	:expr_(0)
{
}

Lesser_Than_Failure_Object::Lesser_Than_Failure_Object(Boolean_Expr * expr)
	:expr_(dynamic_cast<Lesser_Expr *>(expr))
{
}

Lesser_Than_Failure_Object::~Lesser_Than_Failure_Object()
{
}

void Lesser_Than_Failure_Object::accept (Failure_Visitor & v)
{
	v.Visit_Lesser_Than_Failure_Object(*this);
}

Boolean_Expr * Lesser_Than_Failure_Object::get_origin()
{
	return expr_;
}