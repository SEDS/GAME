#ifndef _MODEL_INTELLIGENCE_GREATER_EQUAL_EXPR_FAILURE_H_
#define _MODEL_INTELLIGENCE_GREATER_EQUAL_EXPR_FAILURE_H_

#include "Comparison_Expr_Failure.h"
#include "Boolean_Expr.h"
#include "Greater_Equal_Expr.h"

/**
 * @class Greater_Equal_Expr_Failure
 *
 * Class derived from Comparison_Expr_Failure. This class deals with the
 * failure of the greater than equal to relation between two variables.
 */
class Greater_Equal_Expr_Failure : public Comparison_Expr_Failure
{
public:
  /// Default constructor.
  Greater_Equal_Expr_Failure (void);

  /**
   * Initializing constructor.
   *
   * @param[in]     expr     The failed Greater Equal Expression.
   */
  Greater_Equal_Expr_Failure (Greater_Equal_Expr * expr);

  /// Destructor.
  virtual ~Greater_Equal_Expr_Failure (void);

  /**
   * accept method for visiting the Greater Equal Expression failures.
   *
   * @param[in]     v        Reference of the Expr_Failure_Visitor.
   */
  virtual void accept (Expr_Failure_Visitor & v);

  /**
   * get_origin method for retrieving the failed Greater Equal Expression.
   *
   * @return        The failed Greater Equal Expression.
   */
  virtual Greater_Equal_Expr * get_origin (void) const;
};

#endif // !_MODEL_INTELLIGENCE_GREATER_EQUAL_EXPR_FAILURE_H_