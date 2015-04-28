#include "stdafx.h"
#include "Inequal_Failure_Object.h"
#include "Failure_Visitor.h"
#include "Not_Equal_Expr.h"

Inequal_Failure_Object::Inequal_Failure_Object()
	:expr_(0)
{
}

Inequal_Failure_Object::Inequal_Failure_Object(Boolean_Expr * expr)
	:expr_(dynamic_cast<Not_Equal_Expr *>(expr))
{
}

Inequal_Failure_Object::~Inequal_Failure_Object()
{
}

void Inequal_Failure_Object::accept (Failure_Visitor & v)
{
	v.Visit_Inequal_Failure_Object(*this);
}

Boolean_Expr * Inequal_Failure_Object::get_origin()
{
	return expr_;
}