// $Id$

#include "StdAfx.h"
#include "Top_Level_File_Generator.h"
#include "Functors.h"
#include "Object_Class_Definition.h"
#include "Object_Manager.h"

#include <fstream>

namespace GAME
{
namespace Mga
{

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
  for (auto iter : obj_mgr->objects ())
  {
    Object parent (iter.item ()->get_object ()->parent ());

    while (!parent.is_nil ())
    {
      std::ofstream * hfile = 0;

      // Get the stream or create a new one if we haven't seen this
      // parent yet.
      if (0 != this->streams_.find (parent->name (), hfile))
        hfile = this->allocate_stream (parent, location);

      // Write the include for this definition
      *hfile << include_t (iter.item ()->compute_path ("/", false) + ".h");

      // Go to the next parent
      parent = parent->parent ();
    }
  }

  // Now that we have all the includes written, finialize the streams
  for (auto iter : this->streams_)
    this->finialize_stream (iter.item ());
}

//
// allocate_stream
//
std::ofstream * Top_Level_File_Generator::
allocate_stream (const Object_in item,
                 const std::string & location)
{
  const std::string filename = location + "/" + item->path ("/", false) + "/" + item->name () + ".h";

  std::string macro_guard = "_" + item->path ("_", false) + "_H_";
  std::transform (macro_guard.begin (),
                  macro_guard.end (),
                  macro_guard.begin (),
                  &::toupper);

  std::ofstream * hfile = new std::ofstream (filename);

  // Write the broilerplate
  *hfile
    << "// -*- C++ -*-" << std::endl
    << std::endl
    << "#ifndef " << macro_guard << std::endl
    << "#define " << macro_guard << std::endl
    << std::endl;

  // Store the stream
  this->streams_.bind (item->name (), hfile);

  return hfile;
}

//
// finialize_stream
//
void Top_Level_File_Generator::
finialize_stream (std::ofstream * hfile)
{
  *hfile
    << std::endl
    << "#endif" << std::endl;

  hfile->close ();
  delete (hfile);
}

}
}
