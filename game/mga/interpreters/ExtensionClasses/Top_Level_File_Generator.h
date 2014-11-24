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
#include <iostream>
#include "game/mga/Project.h"

#include "ace/RW_Thread_Mutex.h"
#include "ace/Hash_Map_Manager_T.h"
#include "ace/Null_Mutex.h"


// Forward decl.
class Object_Manager;
class Object_Class_Definition;

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
  std::ofstream * allocate_stream (const Object_in item,
                                   const std::string & location);

  void finialize_stream (std::ofstream * hfile);

  void generate_top (const std::string & location,
                     const Project & proj,
                     const Object_Manager * obj_mgr);

  typedef
    ACE_Hash_Map_Manager <std::string,
                          std::ofstream *,
                          ACE_RW_Thread_Mutex> map_type;
  map_type streams_;
};

}
}

#endif  // !defined _EXTENSION_CLASSES_TOP_LEVEL_FILE_GENERATOR_H_
