// $Id: generate_cpp_class.py 3679 2012-04-30 02:25:20Z hillj $

#include "stdafx.h"
#include "Object_Builder.h"

#if !defined (__GAME_INLINE__)
#include "Object_Builder.inl"
#endif  // !defined __GAME_INLINE__

#include "Object_Manager.h"

#include "game/mga/Model.h"
#include "game/mga/RootFolder.h"

void Object_Builder::visit_RootFolder (GAME::Mga::RootFolder_in folder)
{
  this->visit_Folder_i (folder);
}

void Object_Builder::visit_Folder (GAME::Mga::Folder_in folder)
{
  this->visit_Folder_i (folder);
}

void Object_Builder::visit_Atom (GAME::Mga::Atom_in atom)
{
  OBJECT_MANAGER->build (atom);
}

void Object_Builder::visit_Model (GAME::Mga::Model_in model)
{
  // Visit all the children in this model (or paradigm sheet).
  std::vector <GAME::Mga::FCO> children;
  model->children (children);

  for (GAME::Mga::FCO fco : children)
    fco->accept (this);
}

void Object_Builder::visit_Folder_i (GAME::Mga::Folder_in folder)
{
  // Visit all the SheetFolder elements in the model.
  for (GAME::Mga::Folder sheet_folder : folder->folders ())
    sheet_folder->accept (this);

  // Visit all the paradigm sheets.
  for (GAME::Mga::Model paradigm_sheet : folder->children <GAME::Mga::Model> ())
    paradigm_sheet->accept (this);
}
