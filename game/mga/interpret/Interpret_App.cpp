// $Id$

#include "stdafx.h"
#include "Interpret_App.h"

#if !defined (__GAME_INLINE__)
#include "Interpret_App.inl"
#endif

#include "Parameter_Parser.h"

#include "game/mga/XML.h"
#include "game/mga/ComponentEx.h"
#include "game/mga/Transaction.h"
#include "game/mga/utils/Windows_Registry.h"

#include "boost/config/warning_disable.hpp"
#include "boost/spirit/include/qi.hpp"
#include "boost/spirit/include/karma.hpp"
#include "boost/fusion/adapted/std_pair.hpp"

#include "ace/ACE.h"
#include "ace/Get_Opt.h"
#include "ace/OS_NS_string.h"
#include "ace/OS_NS_unistd.h"
#include "ace/Lib_Find.h"
#include "ace/streams.h"

#include <sstream>

static const char * __HELP__ =
"GME's automation modeling engine (GAME) application\n"
"\n"
"USAGE: gme_interpret [OPTIONS] FILE\n"
"\n"
"General Options:\n"
"  -s, --save                      save project after usage\n"
"  -x, --interpreter=PROGID        program id of interpreter\n"
"\n"
"  --param=NAME=VALUE              set the value of a parameter\n"
"\n"
"  --disable-addons                disable GAME auto add-ons\n"
"  --interative                    enable interactive behavior\n"
"\n"
"  -l, --list                      list model interpreters\n"
"\n"
"Informative Options:\n"
"  -h, --help                      print this help message\n"
"  -v, --verbose                   print verbose output\n"
"  --debug                         print debugging output\n";

//
// run_main
//
int GAME_Automation_App::run_main (int argc, char * argv [])
{
  if (this->parse_args (argc, argv) != 0)
    ACE_ERROR_RETURN ((LM_ERROR,
                       ACE_TEXT ("%T (%t) - %M - failed to parse command-line arguments\n")),
                       -1);

  try
  {
    if (this->opts_.list_)
    {
      for (const std::string & project : this->opts_.project_)
        this->list_interpreters (project);
    }
    else
    {
      for (const std::string & project : this->opts_.project_)
        this->process_file (project);
    }

    return 0;
  }
  catch (const GAME::Mga::Exception & ex)
  {
    ACE_ERROR ((LM_ERROR,
                ACE_TEXT ("%T (%t) - %M - %s\n"),
                ex.message ().c_str ()));
  }

  return 1;
}

//
// process_file
//
int GAME_Automation_App::process_file (const std::string & file)
{
  // Open the project for writing.
  if (this->open_gme_project (file) != 0)
    ACE_ERROR_RETURN ((LM_ERROR,
                       ACE_TEXT ("%T (%t) - %M - failed to open GAME project [file=%s]\n"),
                       file.c_str ()),
                       -1);

  if (!this->opts_.interpreter_.empty ())
    this->run (this->opts_.interpreter_);

  // Close the GAME project.
  if (this->opts_.autosave_)
    this->save_gme_project ();

  this->project_.close ();

  return 0;
}

//
// list_interpreters
//
int GAME_Automation_App::list_interpreters (const std::string & file)
{
  // Open the project for writing.
  if (this->open_gme_project (file) != 0)
    ACE_ERROR_RETURN ((LM_ERROR,
                       ACE_TEXT ("%T (%t) - %M - failed to open GAME project [file=%s]\n"),
                       file.c_str ()),
                       -1);

  // Get the interpreters registered for this project.
  GAME::Mga::Readonly_Transaction t (this->project_);
  std::map <std::string, std::string> listing;
  GAME::Mga::Windows_Registry::get_registered_interpreters (this->project_, listing);

  // Print the list of registered interpreters.
  using namespace boost::spirit;
  std::cerr
    << std::endl
    << this->project_.name () << " Model Interpreters" << std::endl
    << "------------------------------------------" << std::endl
    << karma::format (*("  . " << karma::string << " (" << karma::string << ")" << karma::eol), listing);

  // Make sure we close the project.
  this->project_.close ();

  return 0;
}

//
// parse_args
//
int GAME_Automation_App::parse_args (int argc, char * argv [])
{
  const char * optargs = "hp:x:sl";

  ACE_Get_Opt get_opt (argc, argv, optargs);

  get_opt.long_option ("interepter", 'x', ACE_Get_Opt::ARG_REQUIRED);
  get_opt.long_option ("save", 's', ACE_Get_Opt::NO_ARG);

  get_opt.long_option ("param", ACE_Get_Opt::ARG_REQUIRED);

  get_opt.long_option ("disable-addons");
  get_opt.long_option ("interactive");

  get_opt.long_option ("list", 'l');

  get_opt.long_option ("help", 'h');

  char opt;

  while ((opt = get_opt ()) != EOF)
  {
    switch (opt)
    {
    case 0:
      if (ACE_OS::strcmp ("interpreter", get_opt.long_option ()) == 0)
      {
        this->opts_.interpreter_ = get_opt.opt_arg ();
      }
      else if (ACE_OS::strcmp ("disable-addons", get_opt.long_option ()) == 0)
      {
        this->opts_.enable_auto_addons_ = false;
      }
      else if (ACE_OS::strcmp ("interactive", get_opt.long_option ()) == 0)
      {
        this->opts_.interactive_ = true;
      }
      else if (ACE_OS::strcmp ("param", get_opt.long_option ()) == 0)
      {
        Parameter_Parser p;
        p.parse (get_opt.opt_arg (), this->opts_.params_);
      }
      else if (ACE_OS::strcmp ("save", get_opt.long_option ()) == 0)
      {
        this->opts_.autosave_ = true;
      }
      else if (ACE_OS::strcmp ("list", get_opt.long_option ()) == 0)
      {
        this->opts_.list_ = true;
      }
      else if (ACE_OS::strcmp ("help", get_opt.long_option ()) == 0)
      {
        this->print_help ();
      }

      break;

    case 'l':
      this->opts_.list_ = true;
      break;

    case 'h':
      this->print_help ();
      break;

    case 'x':
      this->opts_.interpreter_ = get_opt.opt_arg ();
      break;
    }
  }

  // The remaining arguments are the project file.
  for (int i = get_opt.opt_ind (); i < get_opt.argc (); ++ i)
    this->opts_.project_.insert (get_opt.argv ()[i]);

  if (this->opts_.project_.empty ())
    ACE_ERROR_RETURN ((LM_ERROR,
                       ACE_TEXT ("%T (%t) - %M - missing project file\n")),
                       -1);

  return 0;
}

//
// print_help
//
void GAME_Automation_App::print_help (void)
{
  std::cerr << ::__HELP__ << std::endl;
  ACE_OS::exit (0);
}

//
// open_gme_project
//
int GAME_Automation_App::open_gme_project (const std::string & file)
{
  // Determine if the project is a MGA file, or an XME file.
  this->is_mga_file_ = file.rfind (".mga") != std::string::npos;

  if (this->is_mga_file_)
  {
    std::ostringstream connstr;
    connstr << "MGA=" << file;

    ACE_DEBUG ((LM_INFO,
                ACE_TEXT ("%T (%t) - %M - opening %s for processing\n"),
                file.c_str ()));

    this->project_ = GAME::Mga::Project::_open (connstr.str ());
  }
  else
  {
    // Get information about the XML file.
    GAME::Mga::XML_Parser parser;
    GAME::Mga::XML_Info info;

    parser.get_info (file, info);

    ACE_TCHAR pathname[MAX_PATH];
    if (ACE::get_temp_dir (pathname, MAX_PATH - 20) != -1)
    {
      // Create a temporary filename for the project.
      ACE_OS::strcat (pathname, "game-XXXXXX.mga");
      ACE_HANDLE fd = ACE_OS::mkstemp (pathname);

      ACE_DEBUG ((LM_DEBUG,
                  ACE_TEXT ("%T (%t) - %M - creating temporary file '%s'\n"),
                  pathname));

      if (fd == 0)
        return -1;

      // Delete the temporary file, which we aren't using.
      ACE_OS::close (fd);
      ACE_OS::unlink (pathname);

      // Create the full pathname.
      std::ostringstream connstr;
      connstr << "MGA=" << pathname;

      // Create a empty PICML project and import the XML file.
      ACE_DEBUG ((LM_INFO,
                  ACE_TEXT ("%T (%t) - %M - importing '%s' for processing\n"),
                  file.c_str ()));

      this->project_ = GAME::Mga::Project::_create (connstr.str (), info.paradigm_);
      parser.parse (file, this->project_);
    }
    else
      ACE_ERROR_RETURN ((LM_ERROR,
                         ACE_TEXT ("%T (%t) - %M - failed to open temp file [%m]\n")),
                         -1);
  }

  // Make sure we have the add-ons enabled. Otherwise, the
  // project may enter an inconsistent state.
  this->current_file_ = file;
  this->project_.enable_auto_addons (this->opts_.enable_auto_addons_);

  return 0;
}

//
// save_gme_project
//
int GAME_Automation_App::save_gme_project (void)
{
  if (this->is_mga_file_)
  {
    this->project_.save ();
  }
  else
  {
    // Save the temporary filename for the .mga file.
    std::string tempfile = this->project_.connstr ().substr (4);

    ACE_DEBUG ((LM_INFO,
                ACE_TEXT ("%T (%t) - %M - exporting project as %s\n"),
                tempfile.c_str ()));

    // Export the project to the source XML file.
    GAME::Mga::XML_Dumper dumper;
    dumper.write (this->current_file_, this->project_);

    ACE_OS::unlink (tempfile.c_str ());
  }

  return 0;
}

//
// run
//
int GAME_Automation_App::run (const std::string & progid)
{
  ACE_DEBUG ((LM_DEBUG,
              ACE_TEXT ("%T (%t) - %M - running the interpreter %s\n"),
              progid.c_str ()));

  // Load the specified interpreter.
  GAME::Mga::ComponentEx interpreter = GAME::Mga::ComponentEx_Impl::_load (progid);
  interpreter->initialize (this->project_);
  interpreter->interactive (this->opts_.interactive_);

  // Pass the parameters to the interpreter.
  for (auto param : this->opts_.params_)
    interpreter->parameter (param.first, param.second);

  GAME::Mga::Collection_T_Impl <GAME::Mga::FCO::interface_type, IMgaFCOs> impl;
  GAME::Mga::Collection_T_Impl_Proxy <GAME::Mga::FCO::interface_type> proxy (impl);
  GAME::Mga::Collection_T <GAME::Mga::FCO> selected (impl);

  // Initialize the interpreter and then invoke it.
  interpreter->invoke (this->project_,
                       0,
                       selected,
                       0);

  return 0;
}
