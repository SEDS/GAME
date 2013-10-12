// $Id$

#include "StdAfx.h"
#include "RootFolder_Generator.h"
#include "Functors.h"
#include "Object_Manager.h"
#include "Object_Class_Definition.h"

#include "game/mga/Object.h"
#include "game/mga/Project.h"
#include "game/mga/Utils.h"

#include "CCF/CodeGenerationKit/IndentationCxx.hpp"
#include "CCF/CodeGenerationKit/IndentationImplanter.hpp"

#include <fstream>
#include <iomanip>

namespace GAME
{
namespace Mga
{

/**
 * @struct generate_container_method
 */
struct generate_include
{
  generate_include (std::ofstream & cxx_file)
    : cxx_file_ (cxx_file)
  {

  }

  void operator () (const Object_Manager::map_type::ENTRY & entry) const
  {
    if (!entry.int_id_->in_root_folder ())
      return;

    this->cxx_file_ << include_t (entry.int_id_->compute_path ("/", false) + ".h");
  }

private:
  std::ofstream & cxx_file_;
};

/**
 * @struct generate_container_method
 */
struct generate_container_method
{
  generate_container_method (std::ofstream & hxx_file, std::ofstream & cxx_file)
    : hxx_file_ (hxx_file),
      cxx_file_ (cxx_file)
  {

  }

  void operator () (const Object_Manager::map_type::ENTRY & entry) const
  {
    if (!entry.int_id_->in_root_folder ())
      return;

    const std::string name = entry.int_id_->name ();

    this->hxx_file_
      << std::endl
      << "size_t get_" << name << " (std::vector <" << name << "> & items) const;"
      << "::GAME::Mga::Iterator <" << name << "> get_" << name << " (void) const;";

    this->cxx_file_
      << "size_t RootFolder_Impl::get_" << name << " (std::vector <" << name << "> & items) const"
      << "{"
      << "return this->children (items);"
      << "}"
      << "::GAME::Mga::Iterator <" << name << "> RootFolder_Impl::get_" << name << " (void) const"
      << "{"
      << "return this->children <" << name << "> ();"
      << "}";
  }

private:
  std::ofstream & hxx_file_;
  std::ofstream & cxx_file_;
};

RootFolder_Generator::RootFolder_Generator (void)
{

}

RootFolder_Generator::~RootFolder_Generator (void)
{

}

bool RootFolder_Generator::
generate (const std::string & location,
          const Project & proj,
          const std::string & pch_basename,
          const Object_Manager * obj_mgr)
{
  // Open the .mpc file for writing.
  const std::string project_name = proj.name ();
  const std::string basename = location + "/" + GAME::Utils::normalize (proj.root_folder ()->name ()) + "/RootFolder";
  const std::string h_filename = basename + ".h";
  const std::string cxx_filename = basename + ".cpp";

  std::string export_name = project_name;
  std::transform (export_name.begin (),
                  export_name.end (),
                  export_name.begin (),
                  &::toupper);

  std::ofstream hxx_file (h_filename.c_str ());
  std::ofstream cxx_file (cxx_filename.c_str ());

  if (!hxx_file.is_open () || !cxx_file.is_open ())
    return false;

  // Scope implanter so it flushes its buffer before closing the file.

  {
    Indentation::Implanter <Indentation::Cxx, char> header_indent (hxx_file);
    Indentation::Implanter <Indentation::Cxx, char> source_indent (cxx_file);

    // Write the preamble to both files.
    hxx_file
      << "// -*- C++ -*-" << std::endl
      << std::endl
      << std::left << std::setw (78) << std::setfill ('=') << "//" << std::endl
      << "/**" << std::endl
      << " * @file    RootFolder.h" << std::endl
      << " *" << std::endl
      << " * $" << "Id" << "$" << std::endl
      << " *" << std::endl
      << " * @author  Alhad Mokashi <amokashi at iupui dot edu>" << std::endl
      << " *          James H. Hill <hillj at cs dot iupui dot edu>" << std::endl
      << " */" << std::endl
      << std::left << std::setw (78) << std::setfill ('=') << "//" << std::endl
      << std::endl
      << "#ifndef _" << export_name << "_ROOTFOLDER_H_" << std::endl
      << "#define _" << export_name << "_ROOTFOLDER_H_" << std::endl
      << std::endl
      << include_t ("game/mga/RootFolder.h")
      << std::endl
      << include_t (project_name + "_fwd.h")
      << include_t (project_name + "_export.h")
      << std::endl
      << "namespace " << project_name
      << "{"
      << "// Forward decl. and type definitions" << std::endl
      << "class RootFolder_Impl;"
      << "typedef RootFolder_Impl * RootFolder_in;"
      << "typedef ::GAME::Mga::Smart_Ptr < RootFolder_Impl > RootFolder;"
      << std::endl
      << "/**" << std::endl
      << " * @class RootFolder_Impl" << std::endl
      << " *" << std::endl
      << " * Implementation of the root folder model element." << std::endl
      << " */" << std::endl
      << "class " << export_name << "_Export RootFolder_Impl" << " : public virtual ::GAME::Mga::RootFolder_Impl"
      << "{"
      << "public:" << std::endl
      << "/// Tag type of this extension class." << std::endl
      << "typedef ::GAME::Mga::folder_tag_t type_tag;"
      << std::endl
      << "/// Type definition of this class's interface." << std::endl
      << "typedef IMgaFolder interface_type;"
      << std::endl
      << "/// Metaname for this extension class." << std::endl
      << "static const std::string metaname;"
      << std::endl
      << "/// Default constructor." << std::endl
      << "RootFolder_Impl (void);"
      << std::endl
      << "/**" << std::endl
      << " * Initializing constructor." << std::endl
      << " *" << std::endl
      << " * @param[in]       folder        The source folder interface." << std::endl
      << " */" << std::endl
      << "RootFolder_Impl (IMgaFolder * folder);"
      << std::endl
      << "/// Destructor." << std::endl
      << "virtual ~RootFolder_Impl (void);"
      << std::endl
      << "/// Accept a visitor for this model element." << std::endl
      << "virtual void accept (::GAME::Mga::Visitor * v);";

    cxx_file
      << "// $" << "Id" << "$" << std::endl
      << std::endl
      << include_t (pch_basename + ".h")
      << include_t ("RootFolder.h")
      << include_t ("Visitor.h")
      << std::endl;

    // Write the extension class source files.
    std::for_each (obj_mgr->objects ().begin (),
                   obj_mgr->objects ().end (),
                   generate_include (cxx_file));

    cxx_file
      << std::endl
      << "namespace " << project_name
      << "{"
      << "const std::string RootFolder_Impl::metaname (\"RootFolder\");"
      << std::endl
      << "RootFolder_Impl::RootFolder_Impl (void)"
      << "{"
      << "}"
      << "RootFolder_Impl::RootFolder_Impl (IMgaFolder * folder)" << std::endl
      << ": ::GAME::Mga::RootFolder_Impl (folder)"
      << "{"
      << "}"
      << "RootFolder_Impl::~RootFolder_Impl (void)"
      << "{"
      << "}"
      << "void RootFolder_Impl::accept (::GAME::Mga::Visitor * v)"
      << "{"
      << "Visitor * this_visitor = dynamic_cast <Visitor *> (v);"
      << std::endl
      << "if (0 != this_visitor)" << std::endl
      << "  this_visitor->visit_RootFolder (this);"
      << "else" << std::endl
      << "  v->visit_Folder (this);"
      << "}";

    // Write the extension class source files.
    std::for_each (obj_mgr->objects ().begin (),
                   obj_mgr->objects ().end (),
                   generate_container_method (hxx_file, cxx_file));

    // Write the postamble to both files.
    hxx_file
      << "};"
      << "}"
      << "#endif" << std::endl;

    cxx_file
      << "}" << std::endl;
  }

  // Close both of the files.
  hxx_file.close ();
  cxx_file.close ();

  return true;
}

}
}
