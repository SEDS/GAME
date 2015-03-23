// $Id$

#include "stdafx.h"
#include "Errors.h"

#if !defined (__GAME_INLINE__)
#include "Errors.inl"
#endif

namespace GAME
{
namespace Mga
{

//
// init
//
void Errors::init (void)
{
  this->errors_.bind (E_MGA_NOT_IMPLEMENTED, "Method not implemented");
  this->errors_.bind (E_MGA_NOT_SUPPORTED, "Operation not supported");

  this->errors_.bind (E_MGA_MODULE_INCOMPATIBILITY, "Module incompatibility");
  this->errors_.bind (E_MGA_PARADIGM_NOTREG, "Paradigm is not registered");
  this->errors_.bind (E_MGA_PARADIGM_INVALID, "Invalid paradigm");
  this->errors_.bind (E_MGA_COMPONENT_ERROR, "Some addons not loaded/initialized");

  this->errors_.bind (E_MGA_DATA_INCONSISTENCY, "Inconsistent data in database");
  this->errors_.bind (E_MGA_META_INCOMPATIBILITY, "Meta incompatibility");

  this->errors_.bind (E_MGA_PROJECT_OPEN, "Project already open");
  this->errors_.bind (E_MGA_PROJECT_NOT_OPEN, "Project is not open");
  this->errors_.bind (E_MGA_READ_ONLY_ACCESS, "Project is read-only");
  this->errors_.bind (E_MGA_NOT_IN_TERRITORY, "Object unknown in territory");
  this->errors_.bind (E_MGA_NOT_IN_TRANSACTION, "Project not in transaction");
  this->errors_.bind (E_MGA_ALREADY_IN_TRANSACTION, "Project already in transaction");
  this->errors_.bind (E_MGA_MUST_ABORT, "Transaction must abort");
  this->errors_.bind (E_MGA_TARGET_DESTROYED, "Target already destroyed");
  this->errors_.bind (E_MGA_FOREIGN_PROJECT, "Not the callee object's project");
  this->errors_.bind (E_MGA_FOREIGN_OBJECT, "Object does not belong to this project");

  this->errors_.bind (E_MGA_OBJECT_DELETED, "Object is deleted");
  this->errors_.bind (E_MGA_OBJECT_ZOMBIE, "Object is a zombie");
  this->errors_.bind (E_MGA_ZOMBIE_NOPROJECT, "Object's project is destroyed");
  this->errors_.bind (E_MGA_ZOMBIE_CLOSED_PROJECT, "Object's project is closed");

  this->errors_.bind (E_MGA_INVALID_ARG, "Invalid argument");
  this->errors_.bind (E_MGA_ARG_RANGE, "Argument out of range");
  this->errors_.bind (E_MGA_INPTR_NULL, "Null input COM pointer");
  this->errors_.bind (E_MGA_OUTPTR_NONEMPTY, "Non-empty output COM pointer");
  this->errors_.bind (E_MGA_OUTPTR_NULL, "Null output COM pointer");

  this->errors_.bind (E_MGA_NAME_NOT_FOUND, "Name not found");
  this->errors_.bind (E_MGA_NAME_DUPLICATE, "Duplicate name");
  this->errors_.bind (E_MGA_META_VIOLATION, "Meta violation");
  this->errors_.bind (E_MGA_NOT_CHANGEABLE, "Object is unchangeable");
  this->errors_.bind (E_MGA_OP_REFUSED, "Operation refused");
  this->errors_.bind (E_MGA_LIBOBJECT, "Object is a library object");

  this->errors_.bind (E_META_INVALIDATTR, "Unknown attribute");
  this->errors_.bind (E_META_INVALIDASPECT, "Unknown aspect");
  this->errors_.bind (E_MGA_ACCESS_TYPE, "Access method conflicts with attribute type");
  this->errors_.bind (E_MGA_BAD_ENUMVALUE, "Invalid enumeration value");

  this->errors_.bind (E_MGA_REFPORTS_USED, "Reference is used for connections");
  this->errors_.bind (E_MGA_VIRTUAL_NODE, "Node is virtual");
  this->errors_.bind (E_MGA_BAD_POSITIONVALUE, "Bad position value");
  this->errors_.bind (E_MGA_ROOTFCO, "Operation not allowed on root FCOs");
  this->errors_.bind (E_MGA_NOT_ROOTOBJECT, "Operation not allowed on non-root FCOs");
  this->errors_.bind (E_MGA_BAD_COLLENGTH, "Bad collection length");
  this->errors_.bind (E_MGA_INVALID_ROLE, "Invalid role or part");
  this->errors_.bind (E_MGA_BAD_ID, "Invalid object id format");
  this->errors_.bind (E_MGA_NOT_DERIVABLE, "Object is not derivable");
  this->errors_.bind (E_MGA_OBJECT_NOT_MEMBER, "Object is not a member");
  this->errors_.bind (E_MGA_NOT_CONNECTIBLE, "Object is not connectible");
  this->errors_.bind (E_MGA_NO_ROLE, "Role not specified");
  this->errors_.bind (E_MGA_CONNROLE_USED, "Exceeded connection role limit");
  this->errors_.bind (E_MGA_NOT_DERIVED, "Object is not derived");
  this->errors_.bind (E_MGA_NOT_INSTANCE, "Object is not an instance");
  this->errors_.bind (E_MGA_INSTANCE, "Object is a type");
  this->errors_.bind (E_MGA_REFERENCE_EXPECTED, "Object is not a reference");
  this->errors_.bind (E_MGA_FILTERFORMAT, "Invalid filter format");
  this->errors_.bind (E_MGA_GEN_OUT_OF_SPACE, "Cannot generate unique value");
  this->errors_.bind (E_MGA_INVALID_TARGET, "Invalid reference target");
  this->errors_.bind (E_MGA_LONG_DERIVCHAIN, "Derive chain too long");
  this->errors_.bind (E_MGA_LIB_DIFF, "Invalid library changes");

  this->errors_.bind (E_MGA_BAD_MASKVALUE, "Invalid event mask value");
  this->errors_.bind (E_MGA_CONSTRAINT_VIOLATION, "Constraint violation");

  this->errors_.bind (E_MGA_ERRCODE_ERROR, "Error code out of range");
}

//
// lookup
//
void Errors::lookup (size_t error_code, std::string & msg) const
{
  if (0 != this->errors_.find (error_code, msg))
    msg = std::string ("unknown error code");
}

}
}
