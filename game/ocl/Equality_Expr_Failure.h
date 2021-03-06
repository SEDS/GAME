#ifndef _MODEL_INTELLIGENCE_EQUALITY_EXPR_FAILURE_H_
#define _MODEL_INTELLIGENCE_EQUALITY_EXPR_FAILURE_H_

#include "Expr_Failure.h"
#include "Boolean_Expr.h"
#include "Equality_Expr.h"

namespace GAME
{
namespace Ocl
{

/**
 * @class Equality_Expr_Failure
 *
 * Class derived from Expr_Failure. This class deals with the
 * equality expression failures like conjunction and comparison 
 * type of expression failures.
 */
class Equality_Expr_Failure : public Expr_Failure
{
public:
  /// Default Constructor.
  Equality_Expr_Failure (void);

  /**
   * Initializing constructor.
   *
   * @param[in]     expr     The failed Equality Expression.
   */
  Equality_Expr_Failure (Equality_Expr * expr);

  /// Destructor.
  virtual ~Equality_Expr_Failure (void);
};

}
}

#endif // !_MODEL_INTELLIGENCE_EQUALITY_EXPR_FAILURE_H_