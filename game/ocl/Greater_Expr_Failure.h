#ifndef _MODEL_INTELLIGENCE_Greater_Expr_Failure_H_
#define _MODEL_INTELLIGENCE_Greater_Expr_Failure_H_

#include "Comparison_Expr_Failure.h"
#include "Boolean_Expr.h"
#include "Greater_Expr.h"

namespace GAME
{
namespace Ocl
{

/**
 * @class Greater_Expr
 *
 * Class derived from Comparison_Expr_Failure. This class deals with the
 * failure of greater than relation between two variables.
*/
class Greater_Expr_Failure : public Comparison_Expr_Failure
{
public:
  /// Default constructor.
  Greater_Expr_Failure (void);

  /**
   * Initializing constructor.
   *
   * @param[in]     expr     The failed Greater Expression.
   */
  Greater_Expr_Failure (Greater_Expr * expr);

  /// Destructor.
  virtual ~Greater_Expr_Failure (void);

  /**
   * accept method for visiting the Greater Expression failures.
   *
   * @param[in]     v        Reference of the Expr_Failure_Visitor.
   */
  virtual void accept (Expr_Failure_Visitor & v);

  /**
   * get_origin method for retrieving the failed Greater Expression.
   *
   * @return        The failed Greater Expression.
   */
  virtual Greater_Expr * get_origin (void) const;
};

}
}

#endif // !_MODEL_INTELLIGENCE_Greater_Expr_Failure_H_