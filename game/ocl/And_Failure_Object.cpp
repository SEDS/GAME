#include "stdafx.h"
#include "And_Failure_Object.h"
#include "Failure_Visitor.h"
#include "And_Expr.h"

And_Failure_Object::And_Failure_Object()
	:expr_(0)
{
}

And_Failure_Object::And_Failure_Object(Boolean_Expr * expr)
	:expr_(dynamic_cast<And_Expr *>(expr))
{
}

And_Failure_Object::~And_Failure_Object()
{
}

void And_Failure_Object::accept (Failure_Visitor & v)
{
	v.Visit_And_Failure_Object(*this);
}

Boolean_Expr * And_Failure_Object::get_origin()
{
	return expr_;
}