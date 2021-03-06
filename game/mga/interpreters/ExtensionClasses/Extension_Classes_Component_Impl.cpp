// $Id: Extension_Classes_Component_Impl.cpp 2486 2010-09-08 17:29:09Z alhad $

#include "StdAfx.h"
#include "Extension_Classes_Component.h"
#include "Extension_Classes_Component_Impl.h"
#include "Main_Dialog.h"

#include "Export_File_Generator.h"
#include "Extension_Classes_Visitor.h"
#include "Fwd_Decl_Generator.h"
#include "Impl_Factory_Generator.h"
#include "Init_Generator.h"
#include "Mpc_File_Generator.h"
#include "Mwc_File_Generator.h"
#include "Pch_File_Generator.h"
#include "Visitor_Generator.h"
#include "Top_Level_File_Generator.h"
#include "Object_Manager.h"
#include "Object_Builder.h"
#include "RootFolder_Generator.h"

#include "game/mga/Atom.h"
#include "game/mga/Model.h"
#include "game/mga/Transaction.h"
#include "game/mga/component/Console_Service.h"
#include "game/mga/Utils.h"
#include "game/mga/component/Interpreter_T.h"
#include "game/mga/utils/Project_Settings.h"

#include <direct.h>
#include <algorithm>

#include <string>
#include <sstream>
#include <iostream>
#include <fstream>
#include <cstdio>

GAME_DECLARE_INTERPRETER (Extension_Classes_Component, Extension_Classes_Component_Impl);

#define INTERPRETER_NAME        "GAME Extension Class Generator"
#define INTERPRETER_PARADIGM    "MetaGME"
#define INTERPRETER_PROGID      "GAME.Interpreter.ExtensionClasses"

//
// Quotas_Integrator_Impl
//
Extension_Classes_Component_Impl::Extension_Classes_Component_Impl (void)
: GAME::Mga::Interpreter_Impl_Base (INTERPRETER_NAME,
                                    INTERPRETER_PARADIGM,
                                    INTERPRETER_PROGID)
{

}

//
// ~Extension_Classes_Component_Impl
//
Extension_Classes_Component_Impl::~Extension_Classes_Component_Impl (void)
{

}

//
// invoke_ex
//
int Extension_Classes_Component_Impl::
invoke_ex (GAME::Mga::Project project,
           GAME::Mga::FCO_in focus,
           GAME::Mga::Collection_T <GAME::Mga::FCO> & selected,
           long flags)
{
  try
  {
    // Start a new transaction.
    GAME::Mga::Transaction t (project);

    // Load the project settings for next time.
    this->load_project_settings (project);

    if (this->is_interactive_)
    {
      Main_Dialog dialog (::AfxGetMainWnd ());

      // Initialize the dialog before showing it.
      dialog.opts_.output_dir_ = this->output_.c_str ();
      dialog.opts_.exclude_mwc_ = this->exclude_mwc_;

      // Show the dialog.
      if (dialog.DoModal () == IDCANCEL)
        return 0;

      // Store the selected values.
      this->output_ = dialog.opts_.output_dir_.GetBuffer ();
      this->exclude_mwc_ = dialog.opts_.exclude_mwc_;
    }

    const std::string pch_basename = "stdafx";
    GAME::Mga::Folder root = project.root_folder ();

    // First, build all the elements that we are interested in generating
    // an extension class. The builder will build each object, and any
    // dependent objects of the object.
    Object_Builder builder;
    root->accept (&builder);

    std::ostringstream ostr;
    ostr << "Generating extension classes for " << OBJECT_MANAGER->objects ().current_size () << " objects...";
    GME_CONSOLE_SERVICE->info (ostr.str ().c_str ());

    // Visit all elements in the model and gather each object that
    // should be generated as an extension class.
    std::set <GAME::Mga::Object> ext_classes;
    GAME::Mga::Extension_Classes_Visitor ecv (this->output_, root, pch_basename);

    for (const auto & entry : OBJECT_MANAGER->objects ())
      ecv.generate (entry.item ());

    // Generate workspace, project, and precompiled header files.
    if (!this->exclude_mwc_)
    {
      GAME::Mga::Mwc_File_Generator mwc_gen;
      mwc_gen.generate (this->output_, project);
    }

    GAME::Mga::Mpc_File_Generator mpc_gen;
    mpc_gen.generate (this->output_, project, pch_basename, OBJECT_MANAGER);

    GAME::Mga::Pch_File_Generator pch_gen;
    pch_gen.generate (this->output_, project, pch_basename);

    GAME::Mga::Fwd_Decl_Generator fwd_gen;
    fwd_gen.generate (this->output_, project, OBJECT_MANAGER);

    GAME::Mga::Visitor_Generator visitor_gen;
    visitor_gen.generate (this->output_, project, pch_basename, OBJECT_MANAGER);

    GAME::Mga::Init_Generator init_gen;
    init_gen.generate (this->output_, project, pch_basename);

    GAME::Mga::Impl_Factory_Generator impl_factory_gen;
    impl_factory_gen.generate (this->output_, project, pch_basename, OBJECT_MANAGER);

    GAME::Mga::Top_Level_File_Generator top_level_gen;
    top_level_gen.generate (this->output_, project, OBJECT_MANAGER);
    
    GAME::Mga::Export_File_Generator export_file_gen;
    export_file_gen.generate (this->output_, project);

    GAME::Mga::RootFolder_Generator root_folder_gen;
    root_folder_gen.generate (this->output_, project, pch_basename, OBJECT_MANAGER);

    if (this->is_interactive_)
      ::AfxMessageBox ("Successfully generated extension class files.", MB_OK | MB_ICONINFORMATION);

    // Save the project settings for next time.
    this->save_project_settings (project);
    t.commit ();
  }
  catch (const GAME::Mga::Exception & ex)
  {
    if (this->is_interactive_)
      ::AfxMessageBox (ex.message ().c_str (), MB_OK);
  }

  return 0;
}

//
// set_parameter
//
int Extension_Classes_Component_Impl::
set_parameter (const std::string & name, const std::string & value)
{
  if (name == "OutputPath")
    this->output_ = value;

  return 0;
}

//
// load_project_settings
//
void Extension_Classes_Component_Impl::
load_project_settings (GAME::Mga::Project proj)
{
  GAME::Mga::Project_Settings settings (proj, "GAME/ExtensionClasses");

  if (this->output_.empty ())
    settings.get_value ("OutputPath", this->output_);

  settings.get_value ("ExcludeMWC", this->exclude_mwc_);
}

//
// save_project_settings
//
void Extension_Classes_Component_Impl::
save_project_settings (GAME::Mga::Project proj)
{
  GAME::Mga::Project_Settings settings (proj, "GAME/ExtensionClasses");
  settings.set_value ("OutputPath", this->output_);
  settings.set_value ("ExcludeMWC", this->exclude_mwc_);
}
