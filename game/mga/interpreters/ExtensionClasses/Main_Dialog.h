// -*- C++ -*-

//=============================================================================
/**
 * @file      Main_Dialog.h
 *
 * $Id$
 *
 * @author    James H. Hill
 */
//=============================================================================

#ifndef _EXTENSION_CLASSES_MAIN_DIALOG_H_
#define _EXTENSION_CLASSES_MAIN_DIALOG_H_

#include <string>
#include <vector>

/**
 * @class Main_Dialog
 *
 */
class Main_Dialog : public CDialog
{
public:
  /**
   * @struct Options
   *
   * Configuration options for the dialog.
   */
  struct Options
  {
    /// Output directory for the code generation.
    CString output_dir_;

    /// Exclude MWC generation
    int exclude_mwc_;
  };

  /**
   * Main constructor.
   *
   * @param[in]     options       The backend options.
   * @param[in]     parent        Parent of the dialog.
   */
  Main_Dialog (CWnd * parent = 0);

  /// Destructor.
  virtual ~Main_Dialog (void);

  /// Configuration options for the dialog.
  Options opts_;

protected:
  /// Handle the data exchange message.
  void DoDataExchange (CDataExchange * pDX);

  /// Handle the user clicking the browse button.
  afx_msg void on_browse_clicked (void);

private:
  /// Declaration of the message map.
  DECLARE_MESSAGE_MAP ();

};

#endif  // !defined _EXTENSION_CLASSES_MAIN_DIALOG_H_
