// -*- C++ -*-

//=============================================================================
/**
 * @file          ReferenceParts_Method.h
 *
 * $Id:  $
 *
 * @author        Tanumoy Pati
 */
//=============================================================================

#ifndef _GAME_MODEL_INTELLIGENCE_REFERENCEPARTS_METHOD_H_
#define _GAME_MODEL_INTELLIGENCE_REFERENCEPARTS_METHOD_H_

#include "Method.h"

namespace GAME
{
namespace Ocl
{

/**
 * @class ReferenceParts_Method
 *
 * Class derived from Method. This class deals
 * with all the Reference parts that a particular metarole/metatype
 * has i.e. with the Reference present in the model
 */
class ReferenceParts_Method : public Method
{
public:
  /// Default constructor.
  ReferenceParts_Method (std::string &role);

	/// Destructor.
	virtual ~ReferenceParts_Method (void);

  /**
   * evaluate method for evaluating the parts method
   *
   * @param[in]     res           Object of model intelligence context
   * @param[in]     caller        The object the method works with
   * @return        Object        Collection Value object
   */
  virtual Value * evaluate (Ocl_Context &res, GAME::Mga::Object caller);

  /**
   * evaluate method for evaluating the parts method
   *
   * @param[in]     res           Object of model intelligence context
   * @param[in]     caller        Value from previous method
   * @return        Object        Collection Value object
   */
	virtual Value * evaluate (Ocl_Context &res, Value *caller);

  /**
   * Determines if the object is for filtration or not.
   *
   * @return        bool          true if the object is for filtration
   *                              false if the object is not for filtration
   */
  virtual bool is_filter (void);

  virtual bool is_association (void);

  virtual bool is_containment (void);

  virtual bool is_reference (void);

private:
  std::string role_;
};

}
}

#endif //_GAME_MODEL_INTELLIGENCE_REFERENCEPARTS_METHOD_CALL_H_