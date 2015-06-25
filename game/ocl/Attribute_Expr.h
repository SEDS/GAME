// -*- C++ -*-

//=============================================================================
/**
 * @file          Attribute_Expr.h
 *
 * $Id:  $
 *
 * @author        Tanumoy Pati
 */
//=============================================================================

#ifndef _GAME_MODEL_INTELLIGENCE_ATTRIBUTE_EXPR_H_
#define _GAME_MODEL_INTELLIGENCE_ATTRIBUTE_EXPR_H_

#include "Value_SubExpr.h"

namespace GAME
{
namespace Ocl
{

/**
 * @class  Attribute_Expr
 *
 * Class derived from Value_SubExpr. This class deals
 * with finding the values of the attributes of FCO
 */
class  Attribute_Expr : public Value_SubExpr
{
public:
  /// Default constructor.
  Attribute_Expr (std::string & var, 
    std::string & attr);

	/// Destructor.
	virtual ~Attribute_Expr (void);

  /**
   * evaluate method for evaluating the respective expression
   *
   * @param[in]     res           Object of model intelligence context
   * @return        Object        Value object of the local variable
   */
  virtual Value * evaluate (Ocl_Context & res);

  /**
   * filter_evaluate method for evaluating the respective expression
   *
   * @param[in]     res        Object of model intelligence context.
   * @return        Object     Value object of the local variable
   */
  virtual Value * filter_evaluate (Ocl_Context & res);

  /**
   * Determines if the object is mutable or not.
   *
   * @return        bool          true if the object is mutable
   *                              false if the object is non-mutable
   */
  virtual bool is_mutable (void);

  /**
   * Determines if the object is for filtration or not.
   *
   * @return        bool          true if the object is for filtration
   *                              false if the object is not for filtration
   */
  virtual bool is_filter (void);

  /**
   * Returns the name of the attribute.
   *
   * @return        string         Name of the attribute
   */
  virtual std::string attribute_name (void);

  /**
   * Returns the name of the caller.
   *
   * @return        string         Name of the caller
   */
  virtual std::string caller (void);

  /**
   * is_association method for determining if this expression
   * can be used for association constraints
   *
   * @return       bool       True/False
   */
  virtual bool is_association (void);

  /**
   * is_containment method for determining if this expression
   * can be used for containment constraints
   *
   * @return       bool       True/False
   */
  virtual bool is_containment (void);

  /**
   * is_reference method for determining if this expression
   * can be used for reference constraints
   *
   * @return       bool       True/False
   */
  virtual bool is_reference (void);

private:
  // The invoking object
  std::string var_;

  // The name of the attribute
  std::string attribute_;

};

}
}

#endif //_GAME_MODEL_INTELLIGENCE_ATTRIBUTE_EXPR_H_