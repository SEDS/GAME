#include "stdafx.h"
#include "game/mga/Project.h"
#include "game/mga/Transaction.h"
#include "game/mga/XML.h"
#include "game/ocl/Evaluator.h"

void run_test (const GAME::Mga::Project & project)
{
  using namespace GAME::Mga;

  // Start a read-only transaction.
  Transaction ro_trans (project, TRANSACTION_READ_ONLY);

  // Locater ShapeClassDiagram, which should be under RootFolder
  RootFolder root = project.root_folder ();
  Object obj = root->find_object_by_path ("ShapesClassDiagram");

  // Manually run a constraint against the model.
  GAME::Ocl::Evaluator eval;

  const std::string c1 = "self.parts (Class).size = 3";
  bool result = eval.evaluate (obj, c1);
  std::cerr << c1 << " : " << (result ? "PASSED" : "FAILED") << std::endl;

  const std::string c2 = "self.parts (Class).size = 2";
  result = eval.evaluate (obj, c2);
  std::cerr << c2 << " : " << (result ? "PASSED" : "FAILED") << std::endl;
}

int main (int argc, char * argv [])
{
  try
  {
    using namespace GAME::Mga;

    const std::string file = "Simple_Example.xme";
    const std::string connstr ="MGA=Simple_Example.mga";

    // Convert the XME project into an MGA project.
    XML_Parser parser;
    Project project = Project::_create (connstr, "UML");
    parser.parse (file, project);

    run_test (project);

    project.close ();
  }
  catch (const GAME::Mga::Failed_Result & ex)
  {
    ACE_ERROR ((LM_ERROR,
                ACE_TEXT ("%T (%P) - %M - %s\n"),
                ex.message ().c_str ()));
  }
  catch (const GAME::Mga::Exception & ex)
  {
    ACE_ERROR ((LM_ERROR,
                ACE_TEXT ("%T (%P) - %M - %s\n"),
                ex.message ().c_str ()));
  }
  catch (...)
  {
    ACE_ERROR ((LM_ERROR,
                ACE_TEXT ("%T (%P) - %M - caught unknown exception\n")));
  }

  return 1;
}
