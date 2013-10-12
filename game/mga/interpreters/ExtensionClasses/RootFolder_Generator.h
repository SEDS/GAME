// -*- C++ -*-

//=============================================================================
/**
 * @file      RootFolder_Generator.h
 *
 * $Id$
 *
 * @author    James H. Hill <hillj at cs dot iupui dot edu>
 */
//=============================================================================

#ifndef _EXTENSION_CLASSES_ROOTFOLDER_GENERATOR_H_
#define _EXTENSION_CLASSES_ROOTFOLDER_GENERATOR_H_

#include <set>
#include <string>
#include "game/mga/GME_fwd.h"

class Object_Manager;

namespace GAME
{
namespace Mga
{
/**
 * @class RootFolder_Generator
 *
 * Generate the RootFolder object for the project. This generator should
 * be invoked after all the extension classes for the objects in the metamodel
 * have been added to the object manager and generated.
 */
class RootFolder_Generator
{
public:
  /// Default constructor.
  RootFolder_Generator (void);

  /// Destructor.
  virtual ~RootFolder_Generator (void);

  /**
   * Generate both the workspace and project specification.
   *
   * @param[in]         location        Location of the generation
   * @param[in]         items           List of extension classes.
   */
  bool generate (const std::string & location,
                 const Project & proj,
                 const std::string & pch_basename,
                 const Object_Manager * obj_mgr);
};

}
}

#endif  // !defined _EXTENSION_CLASSES_MPC_FILE_GENERATOR_H_
