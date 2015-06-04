#ifndef _MODEL_INTELLIGENCE_OR_EXPR_FAILURE_H_
#define _MODEL_INTELLIGENCE_OR_EXPR_FAILURE_H_

#include "Conjunction_Expr_Failure.h"
#include "Boolean_Expr.h"
#include "Or_Expr.h"

/**
 * @class Or_Expr_Failure
 *
 * Class derived from Conjunction_Expr_Failure. This class deals with
 * the failure of oring operation.
 */
class Or_Expr_Failure : public Conjunction_Expr_Failure
{
public:
  /// Default Constructor.
  Or_Expr_Failure (void);

  /**
   * Initializing constructor.
   *
   * @param[in]     expr     The failed Or Expression.
   */
  Or_Expr_Failure (Or_Expr * expr);

  /// Destructor.
  virtual ~Or_Expr_Failure (void);

  /**
   * accept method for visiting the Or Expression failures.
   *
   * @param[in]     v        Reference of the Expr_Failure_Visitor.
   */
  virtual void accept (Expr_Failure_Visitor & v);

  /**
   * get_origin method for retrieving the failed Or Expression.
   *
   * @return        The failed Or Expression.
   */
  virtual Or_Expr * get_origin (void) const;
};

#endif // !_MODEL_INTELLIGENCE_OR_EXPR_FAILURE_H_