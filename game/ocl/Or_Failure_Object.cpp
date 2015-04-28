#include "stdafx.h"
#include "Or_Failure_Object.h"
#include "Failure_Visitor.h"
#include "Or_Expr.h"

Or_Failure_Object ::Or_Failure_Object ()
	:expr_(0)
{
}

Or_Failure_Object ::Or_Failure_Object (Boolean_Expr * expr)
	:expr_(dynamic_cast<Or_Expr *>(expr))
{
}

Or_Failure_Object ::~Or_Failure_Object ()
{
}

void Or_Failure_Object::accept (Failure_Visitor & v)
{
	v.Visit_Or_Failure_Object(*this);
}

Boolean_Expr * Or_Failure_Object::get_origin()
{
	return expr_;
}