// -*- C++ -*-

//=============================================================================
/**
 * @file          OCL_Parser.h
 *
 * $Id: OCL_Parser.h 2839 2012-02-11 18:59:36Z hillj $
 *
 * @author        Tanumoy Pati
 */
//=============================================================================

#ifndef _GAME_OCL_PARSER_H_
#define _GAME_OCL_PARSER_H_

#include "Boolean_Expr.h"

/**
 * @class OCL_Parser
 *
 * Class used for parsing OCL expressions.
 */
class OCL_Parser
{
public:
  /// Default Constructor
  OCL_Parser (void);

  /// Destructor
  ~OCL_Parser (void);

  /**
   * parse_string method for parsing cardinality expression
   *
   * @param[in]     str       The string to be parsed
   * @param[out]    ocl       Vector for holding the sub-expressions to be evaluated
   * @return        bool      true/false
   */
  bool parse (std::string str, std::vector <Boolean_Expr *> &ocl);
};

#endif
