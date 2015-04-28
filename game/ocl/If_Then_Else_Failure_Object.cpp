#include "stdafx.h"
#include "If_Then_Else_Failure_Object.h"
#include "Failure_Visitor.h"
#include "If_Then_Else_Expr.h"


If_Then_Else_Failure_Object::If_Then_Else_Failure_Object()
	:expr_(0)
{
}

If_Then_Else_Failure_Object::If_Then_Else_Failure_Object(Boolean_Expr * expr)
	:expr_(dynamic_cast<If_Then_Else_Expr *>(expr))
{
}

If_Then_Else_Failure_Object::~If_Then_Else_Failure_Object()
{
}

void If_Then_Else_Failure_Object::accept (Failure_Visitor & v)
{
	v.Visit_If_Then_Else_Failure_Object(*this);
}

 Boolean_Expr * If_Then_Else_Failure_Object::get_origin()
 {
	 return expr_;
 }