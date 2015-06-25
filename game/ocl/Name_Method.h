// -*- C++ -*-

//=============================================================================
/**
 * @file          Name_Method.h
 *
 * $Id$
 *
 * @author        Tanumoy Pati
 */
//=============================================================================

#ifndef _GAME_MODEL_INTELLIGENCE_NAME_METHOD_H_
#define _GAME_MODEL_INTELLIGENCE_NAME_METHOD_H_

#include "Method.h"

namespace GAME
{
namespace Ocl
{

/**
 * @class Name_Method
 *
 * Class derived from Method. This class deals
 * with finding the name of the object
 */
class Name_Method : public Method
{
public:
  /// Default constructor.
  Name_Method (void);

	/// Destructor.
	virtual ~Name_Method (void);

  /**
   * evaluate method for evaluating the name method
   *
   * @param[in]     res           Object of model intelligence context
   * @param[in]     caller        The object the method works with
   * @return        Object        Value object
   */
  virtual Value * evaluate (Ocl_Context & res, GAME::Mga::Object caller);

  /**
   * evaluate method for evaluating the name method
   *
   * @param[in]     res           Object of model intelligence context
   * @param[in]     caller        Value from previous method
   * @return        Object        Value object
   */
	virtual Value * evaluate (Ocl_Context & res, Value * caller);

  /**
   * Determines if the object is for filtration or not.
   *
   * @return        bool          true if the object is for filtration
   *                              false if the object is not for filtration
   */
  virtual bool is_filter (void);

  /**
   * is_association method for determining if this method
   * can be used for association constraints
   *
   * @return       bool       True/False
   */
  virtual bool is_association (void);

  /**
   * is_containment method for determining if this method
   * can be used for containment constraints
   *
   * @return       bool       True/False
   */
  virtual bool is_containment (void);

  /**
   * is_reference method for determining if this method
   * can be used for reference constraints
   *
   * @return       bool       True/False
   */
  virtual bool is_reference (void);
};

}
}

#endif //_GAME_MODEL_INTELLIGENCE_NAME_METHOD_CALL_H_