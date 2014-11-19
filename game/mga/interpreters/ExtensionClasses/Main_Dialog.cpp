// $Id$

#include "StdAfx.h"
#include "Resource.h"
#include "Main_Dialog.h"

#include "boost/bind.hpp"
#include "game/mga/Utils.h"

#include <algorithm>

BEGIN_MESSAGE_MAP (Main_Dialog, CDialog)
  ON_BN_CLICKED (IDC_BROWSE, on_browse_clicked)
END_MESSAGE_MAP ()

//
// Main_Dialog
//
Main_Dialog::Main_Dialog (CWnd * parent)
: CDialog (IDD_MAINDIALOG, parent)
{

}

//
// ~Main_Dialog
//
Main_Dialog::~Main_Dialog (void)
{

}

//
// DoDataExchange
//
void Main_Dialog::DoDataExchange (CDataExchange * pDX)
{
  // Let the base class handle its business first.
  CDialog::DoDataExchange (pDX);

  // Exchange the text for the output directory.
  DDX_Text (pDX, IDC_OUTPUTDIR, this->opts_.output_dir_);

  if (pDX->m_bSaveAndValidate)
  {
    // We need to validate the output directory. The output directory
    // is invalid if it is empty. Eventually, we want to make sure
    // the output directory exists.
    this->opts_.output_dir_.Trim ();

    if (this->opts_.output_dir_.GetLength () == 0)
    {
      ::AfxMessageBox ("Output directory is empty", MB_ICONEXCLAMATION);

      // Set the focus of the control and change to fail state.
      this->GetDlgItem (IDC_OUTPUTDIR)->SetFocus ();
      pDX->Fail ();
    }
  }

  // Get the remaining control values.
  DDX_Check (pDX, IDC_EXCLUDE_MWC, this->opts_.exclude_mwc_);
}

//
// on_browse_clicked
//
void Main_Dialog::on_browse_clicked (void)
{
  CString outdir;
  std::string path;

  // Get the current output directory.
  this->GetDlgItemText (IDC_OUTPUTDIR, outdir);

  // Let the user select the new output path and store it back
  // into this dialog if the user clicks <OK>.
  if (GAME::Utils::get_path ("Select the output directory:", path, outdir.GetBuffer ()))
    this->SetDlgItemText (IDC_OUTPUTDIR, path.c_str ());
}
