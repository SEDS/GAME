#include "stdafx.h"
#include "Equal_Failure_Object.h"
#include "Failure_Visitor.h"
#include "Equal_Expr.h"

Equal_Failure_Object::Equal_Failure_Object()
{
}

Equal_Failure_Object::Equal_Failure_Object(Boolean_Expr * expr)
	:expr_(dynamic_cast<Equal_Expr *>(expr))
{
}

Equal_Failure_Object::~Equal_Failure_Object()
{
}

void Equal_Failure_Object::accept (Failure_Visitor & v)
{
	v.Visit_Equal_Failure_Object(*this);
}