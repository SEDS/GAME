// $Id$

#include "stdafx.h"
#include "Property_Locator.h"

#if !defined (__GAME_INLINE__)
#include "Property_Locator.inl"
#endif

#include "game/mga/Attribute.h"
#include "game/mga/MetaAttribute.h"
#include "game/mga/Folder.h"
#include "game/mga/RootFolder.h"
#include "game/mga/Model.h"

#include <algorithm>

//
// Property_Locator
//
Property_Locator::
Property_Locator (const Property_Tag_Config & config)
: config_ (config)
{

}

//
// visit_Folder
//
void Property_Locator::
visit_RootFolder (GAME::Mga::RootFolder_in folder)
{
  this->visit_Folder (folder);
}

//
// visit_Folder
//
void Property_Locator::visit_Folder (GAME::Mga::Folder_in folder)
{
  // Check if the name has a property.
  this->check_name (folder);

  // Now, visit all the folders in this folder.
  for (GAME::Mga::Folder child_folder : folder->folders ())
    child_folder->accept (this);

  // Then, visit all the FCOs in the folder.
  for (GAME::Mga::FCO fco : folder->children <GAME::Mga::FCO> ())
    this->visit_FCO (fco);
}

//
// visit_FCO
//
void Property_Locator::visit_FCO (GAME::Mga::FCO_in fco)
{
  // Check if the FCO's name has a property.
  this->check_name (fco);

  // Visit all the attributes in the FCO.
  for (GAME::Mga::Attribute attr : fco->attributes ())
    this->visit_Attribute (attr);

  // Let's visit this FCO as well.
  fco->accept (this);
}

//
// check_name
//
void Property_Locator::check_name (GAME::Mga::Object_in obj)
{
  // Get the object's name
  const std::string name = obj->name ();

  // List all the properties in the name.
  std::set <std::string> props;
  Property_Lister lister;

  bool retval = lister.evaluate (name.begin (),
                                 name.end (),
                                 this->config_,
                                 props);

  // Store the folder if its name has a property.
  if (retval && !props.empty ())
    this->names_.insert (obj);
}

//
// visit_Model
//
void Property_Locator::visit_Model (GAME::Mga::Model_in model)
{
  for (GAME::Mga::FCO fco : model->children <GAME::Mga::FCO> ())
    this->visit_FCO (fco);
}

//
// visit_Attribute
//
void Property_Locator::visit_Attribute (GAME::Mga::Attribute_in attr)
{
  // Determine if attribute string has a template parameter. Right now,
  // we can only handle string value types.
  if (attr->meta ()->type () != ATTVAL_STRING)
    return;

  // Get the attribute's value.
  const std::string value = attr->string_value ();

  // List all the properties in the attribute's value.
  std::set <std::string> props;
  Property_Lister lister;

  bool retval = lister.evaluate (value.begin (),
                                 value.end (),
                                 this->config_,
                                 props);

  // Save the attribute if it has a single property.
  if (retval && !props.empty ())
    this->attrs_.push_back (attr);
}
