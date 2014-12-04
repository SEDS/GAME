// $Id$

#include "StdAfx.h"
#include "Top_Level_File_Generator.h"
#include "Functors.h"
#include "Object_Class_Definition.h"
#include "Object_Manager.h"
#include "Model.h"

#include "game/mga/component/Console_Service.h"

#include <fstream>
#include <iostream>
#include <string>
#include <sstream>

namespace GAME
{
namespace Mga
{

const std::string Top_Level_File_Generator::suffix_ = "ParadigmSheet";

//
// Top_Level_File_Generator
//
Top_Level_File_Generator::Top_Level_File_Generator (void)
{

}

//
// Top_Level_File_Generator
//
Top_Level_File_Generator::~Top_Level_File_Generator (void)
{

}

//
// generate
//
void Top_Level_File_Generator::
generate (const std::string & location,
          const Project & proj,
          const Object_Manager * obj_mgr)
{
  auto root = proj.root_folder ();

  // First, generate the main include file
  this->generate (root, obj_mgr, location);

  // Now generate the include files for all of the SheetFolders and ParadigmSheets
  for (Folder folder : root->folders ())
  {
    this->generate (folder, obj_mgr, location);

    // Generate ParadigmSheets within a SheetFolder
    for (Model sheet : folder->children <Model> ())
      this->generate (sheet, obj_mgr, location);
  }

  // Handle root-level ParadigmSheets
  for (Model sheet : root->children <Model> ())
    this->generate (sheet, obj_mgr, location);
}

//
// generate
//
void Top_Level_File_Generator::
generate (Folder_in folder,
          const Object_Manager * obj_mgr,
          const std::string & location)
{
  std::string guard = this->get_macro_guard (folder);
  std::ofstream outfile (this->get_filename (folder, location));

  this->init_stream (outfile, guard);
  this->walk (folder, obj_mgr, outfile);
  this->fini_stream (outfile, guard);
}

//
// generate
//
void Top_Level_File_Generator::
generate (Model_in sheet,
          const Object_Manager * obj_mgr,
          const std::string & location)
{
  std::string guard = this->get_macro_guard (sheet);
  std::ofstream outfile (this->get_filename (sheet, location));

  this->init_stream (outfile, guard);
  this->walk (sheet, obj_mgr, outfile);
  this->fini_stream (outfile, guard);
}

//
// get_filename
//
std::string Top_Level_File_Generator::
get_filename (const Object_in obj,
              const std::string & location)
{
  std::string filename = location + "/" + obj->path ("/", false) + "/" + obj->name ();

  if (this->needs_suffix (obj))
    filename += this->suffix_;

  filename += ".h";
  return filename;
}

//
// needs_suffix
//
bool Top_Level_File_Generator::
needs_suffix (const Object_in obj)
{
  // If the item is a folder or ends in "ParadigmSheet" then we
  // don't need the suffix.  Otherwise, we do.
  if (obj->type () == OBJTYPE_FOLDER)
    return false;
  else if (std::equal (this->suffix_.rbegin (),
                       this->suffix_.rend (),
                       obj->name ().rbegin ()))
    return false;

  return true;
}

//
// get_macro_guard
//
std::string Top_Level_File_Generator::
get_macro_guard (const Object_in obj)
{
  std::string macro_guard = "_" + obj->path ("_", false);

  if (this->needs_suffix (obj))
    macro_guard += this->suffix_;

  macro_guard += "_H_";

  // Convert the macro guard to all caps
  std::transform (macro_guard.begin (),
                  macro_guard.end (),
                  macro_guard.begin (),
                  &::toupper);

  return macro_guard;
}

//
// walk
//
void Top_Level_File_Generator::
walk (Folder_in folder,
      const Object_Manager * obj_mgr,
      std::ofstream & outfile)
{
  // Handle recursive folders in case we get the root folder
  for (Folder subfolder : folder->folders ())
    this->walk (subfolder, obj_mgr, outfile);

  // Handle children (i.e. ParadigmSheets)
  for (Model sheet : folder->children <Model> ())
    this->walk (sheet, obj_mgr, outfile);
}

//
// walk
//
void Top_Level_File_Generator::
walk (Model_in sheet,
      const Object_Manager * obj_mgr,
      std::ofstream & outfile)
{
  // The object is always a ParadigmSheet and we only get here
  // by verifying that the sheet belongs to our target.  So as long
  // as an Object_Class_Defintion's first parent is the sheet, then
  // we need to write the include statement.
  for (auto entry : obj_mgr->objects ())
  {
    Object parent (entry.item ()->get_object ()->parent ());

    if (parent->name () == sheet->name ())
      outfile << include_t (entry.item ()->compute_path ("/", false) + ".h");
  }
}

//
// init_stream
//
void Top_Level_File_Generator::
init_stream (std::ofstream & outfile,
             const std::string & macro_guard)
{
  // Write the broilerplate
  outfile
    << "// -*- C++ -*-" << std::endl
    << std::endl
    << "#ifndef " << macro_guard << std::endl
    << "#define " << macro_guard << std::endl
    << std::endl;
}

//
// fini_stream
//
void Top_Level_File_Generator::
fini_stream (std::ofstream & outfile,
             const std::string & macro_guard)
{
  outfile
    << std::endl
    << "#endif // !defined " << macro_guard << std::endl;
}

}
}
