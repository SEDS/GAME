// $Id: OCL_Parser.cpp 2908 2012-06-10 18:21:53Z tpati $

#include "stdafx.h"
#include "OCL_Parser.h"
#include "rules/grammar.hpp"

OCL_Parser::OCL_Parser(void)
{
}

OCL_Parser::~OCL_Parser(void)
{
}

bool OCL_Parser::parse (std::string str, std::vector <Boolean_Expr*> &ocl)
{
  namespace spirit = boost::spirit;

  std::string::const_iterator begin_iter = str.begin();
  std::string::const_iterator end_iter = str.end();

  OCL_Parser_Grammar <std::string::const_iterator> g;

  bool retval = qi::phrase_parse (begin_iter,
                                  end_iter,
                                  g,
                                  ascii::space,
                                  ocl);
  return retval;
}

