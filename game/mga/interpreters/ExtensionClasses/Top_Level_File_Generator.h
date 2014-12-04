// -*- C++ -*-

//=============================================================================
/**
 * @file       Top_Level_File_Generator.h
 *
 * $Id$
 *
 * @author     James H. Hill
 */
//=============================================================================

#ifndef _EXTENSION_CLASSES_TOP_LEVEL_FILE_GENERATOR_H_
#define _EXTENSION_CLASSES_TOP_LEVEL_FILE_GENERATOR_H_

#include <set>
#include <string>
#include "game/mga/Project.h"

// Forward decl.
class Object_Manager;

namespace GAME
{
namespace Mga
{

/**
 * @class Top_Level_File_Generator
 *
 * Utility class that is responsible for generating the top level
 * include file that includes all the header files for the objects
 * in the project.
 */
class Top_Level_File_Generator
{
public:
  /// Default constructor.
  Top_Level_File_Generator (void);

  /// Destructor.
  ~Top_Level_File_Generator (void);

  /**
   * Generate both the workspace and project specification.
   *
   * @param[in]         location        Location of the generation
   * @param[in]         items           List of extension classes.
   */
  void generate (const std::string & location,
                 const Project & proj,
                 const Object_Manager * obj_mgr);

private:
  // Walk folders/sheets to write the include statements
  void walk (const Folder_in folder, const Object_Manager * obj_mgr, std::ofstream & outfile);
  void walk (const Model_in sheet, const Object_Manager * obj_mgr, std::ofstream & outfile);

  // Generate a new include header
  void generate (const Folder_in root, const Object_Manager * obj_mgr, const std::string & location);
  void generate (const Model_in sheet, const Object_Manager * obj_mgr, const std::string & location);

  std::string get_filename (const Object_in item, const std::string & location);
  std::string get_macro_guard (const Object_in item);
  bool needs_suffix (const Object_in item);

  void init_stream (std::ofstream & outfile,
                    const std::string & macro_guard);

  void fini_stream (std::ofstream & outfile,
                    const std::string & macro_guard);

  static const std::string suffix_;
};

}
}

#endif  // !defined _EXTENSION_CLASSES_TOP_LEVEL_FILE_GENERATOR_H_
