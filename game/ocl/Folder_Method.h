// -*- C++ -*-

//=============================================================================
/**
 * @file          Folder_Method.h
 *
 * $Id$
 *
 * @author        Tanumoy Pati
 */
//=============================================================================

#ifndef _GAME_MODEL_INTELLIGENCE_FOLDER_METHOD_H_
#define _GAME_MODEL_INTELLIGENCE_FOLDER_METHOD_H_

#include "Method.h"

namespace GAME
{
namespace Ocl
{

/**
 * @class Folder_Method
 *
 * Class derived from Method. This class returns the parent folder
 */
class Folder_Method : public Method
{
public:
  /// Default constructor.
  Folder_Method (void);

	/// Destructor.
	virtual ~Folder_Method (void);

  /**
   * evaluate method for evaluating the Folder method
   *
   * @param[in]     res           Object of model intelligence context
   * @param[in]     caller        The object the method works with
   * @return        Object        Value object
   */
  virtual Value * evaluate (Ocl_Context & res, GAME::Mga::Object caller);

  /**
   * evaluate method for evaluating the Folder method
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
};

}
}

#endif //_GAME_MODEL_INTELLIGENCE_FOLDER_METHOD_CALL_H_