#ifndef _MODEL_INTELLIGENCE_NOT_EQUAL_EXPR_FAILURE_H_
#define _MODEL_INTELLIGENCE_NOT_EQUAL_EXPR_FAILURE_H_

#include "Comparison_Expr_Failure.h"
#include "Boolean_Expr.h"
#include "Not_Equal_Expr.h"

namespace GAME
{
namespace Ocl
{

/**
 * @class Not_Equal_Expr_Failure
 *
 * Class derived from Comparison_Expr_Failure. This class deals with the
 * failure of the equality between two variables.
 */
class Not_Equal_Expr_Failure : public Comparison_Expr_Failure
{
public:
  /// Default Constructor.
  Not_Equal_Expr_Failure (void);

  /**
   * Initializing constructor.
   *
   * @param[in]     expr     The failed Not Equal Expression.
   */
  Not_Equal_Expr_Failure (Not_Equal_Expr * expr);

  /// Destructor.
  virtual ~Not_Equal_Expr_Failure (void);

  /**
   * accept method for visiting the Not Equal Expression failures.
   *
   * @param[in]     v        Reference of the Expr_Failure_Visitor.
   */
  virtual void accept (Expr_Failure_Visitor & v);

  /**
   * get_origin method for retrieving the failed Not Equal Expression.
   *
   * @return        The failed Not Equal Expression.
   */
  virtual Not_Equal_Expr * get_origin() const;
};

}
}

#endif // !_MODEL_INTELLIGENCE_NOT_EQUAL_EXPR_FAILURE_H_