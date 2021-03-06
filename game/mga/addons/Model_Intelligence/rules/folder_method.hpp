#ifndef _RULE_FOLDER_METHOD_HPP_
#define _RULE_FOLDER_METHOD_HPP_

#include <fstream>

#include <boost/config/warning_disable.hpp>
#include "boost/spirit/include/qi.hpp"
#include "boost/spirit/repository/include/qi_confix.hpp"

#include "boost/spirit/include/phoenix_bind.hpp"
#include "boost/spirit/include/phoenix_core.hpp"
#include "boost/spirit/include/phoenix_operator.hpp"
#include "boost/spirit/include/phoenix_bind.hpp"
#include "boost/spirit/include/phoenix.hpp"
#include "boost/spirit/include/phoenix_container.hpp"

#include <string>
#include <stack>
#include <functional>

#include "../Method.h"
#include "../Parts_Method.h"
#include "../AtomParts_Method.h"
#include "../ModelParts_Method.h"
#include "../ReferenceParts_Method.h"
#include "../ConnectionParts_Method.h"
#include "../Size_Method.h"
#include "../Refers_to_Method.h"
#include "../Name_Method.h"
#include "../KindName_Method.h"
#include "../Parent_Method.h"
#include "../ChildFolders_Method.h"
#include "../RoleName_Method.h"
#include "../ConnectedFCOs_Method.h"
#include "../AttachingConnPoints_Method.h"
#include "../AttachingConnections_Method.h"
#include "../IsConnectedTo_Method.h"
#include "../Subtypes_Method.h"
#include "../Instances_Method.h"
#include "../Type_Method.h"
#include "../Basetype_Method.h"
#include "../IsType_Method.h"
#include "../IsInstance_Method.h"
#include "../Folder_Method.h"
#include "../Models_Method.h"
#include "../Atoms_Method.h"
#include "../ReferencedBy_Method.h"
#include "../ConnectionPoints_Method.h"
#include "../ConnectionPoint_Method.h"
#include "../Target_Method.h"
#include "../Owner_Method.h"
#include "../UsedByConnPoints_Method.h"
#include "../IsFCO_Method.h"

#include "quoted_string.hpp"
#include "ident.hpp"

namespace qi = boost::spirit::qi;
namespace ascii = boost::spirit::ascii;

/**
 * @class folder_method
 *
 * Underlying grammer for the ocl expression parser.
 */
template <typename IteratorT>
class folder_method :
  public qi::grammar <IteratorT, Method * (), ascii::space_type>
{
public:
  folder_method (void);

private:
  qi::rule <IteratorT,
            Method * (),
            ascii::space_type> method_;

  qi::rule <IteratorT,
            Models_Method * (),
            ascii::space_type> models_method_;

  qi::rule <IteratorT,
            Atoms_Method * (),
            ascii::space_type> atoms_method_;

  qi::rule <IteratorT,
            ChildFolders_Method * (),
            ascii::space_type> childfolders_method_;

  ident <IteratorT> id_;

  quoted_string <IteratorT> qs_;
};

#endif
