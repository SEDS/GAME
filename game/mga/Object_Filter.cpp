// $Id$

#include "stdafx.h"
#include "Mga.h"
#include "Object_Filter.h"
#include "Folder.h"
#include "Model.h"
#include "FCO.h"
#include "Collection_T.h"

#include "MetaFCO.h"

#include <sstream>
#include <algorithm>

namespace GAME
{
namespace Mga
{

//
// Filter
//
Filter::Filter (Project project)
: project_ (project)
{
  this->project_.impl ()->CreateFilter (&this->filter_);
}

//
// ~Filter
//
Filter::~Filter (void)
{

}

//
// kind
//
void Filter::kind (const std::string & value)
{
  CComBSTR bstr (value.length (), value.c_str ());
  VERIFY_HRESULT (this->filter_->put_Kind (bstr));
}

//
// kind
//
void Filter::kind (std::vector <std::string> & value)
{
  std::ostringstream ostr;
  std::for_each (value.begin (), value.end (), [&] (const std::string & val) { ostr << val << " "; });

  this->kind (ostr.str ());
}

//
// kind
//
void Filter::kind (std::vector <Meta::FCO> & fcos)
{
  std::ostringstream ostr;
  std::for_each (fcos.begin (), fcos.end (), [&] (const Meta::FCO & fco) { ostr << fco->name () << " "; });

  this->kind (ostr.str ());
}

//
// name
//
void Filter::name (const std::string & value)
{
  CComBSTR bstr (value.length (), value.c_str ());
  VERIFY_HRESULT (this->filter_->put_Name (bstr));
}

//
// name
//
void Filter::name (std::vector <std::string> & value)
{
  std::ostringstream ostr;
  std::for_each (value.begin (), value.end (), [&] (const std::string & str) { ostr << str << " "; });

  this->name (ostr.str ());
}

}
}
