
// cvHw2Dlg.h : header file
//

#pragma once


// CcvHw2Dlg dialog
class CcvHw2Dlg : public CDialogEx
{
// Construction
public:
	CcvHw2Dlg(CWnd* pParent = NULL);	// standard constructor

// Dialog Data
	enum { IDD = IDD_CVHW2_DIALOG };

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV support


// Implementation
protected:
	HICON m_hIcon;

	// Generated message map functions
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedBtnBgsub();
	afx_msg void OnBnClickedBtnPreproc();
	afx_msg void OnBnClickedBtnTracking();
	afx_msg void OnBnClickedBtnEigs();
	afx_msg void OnBnClickedBtnFr();
	afx_msg void OnBnClickedBtnFd();
	afx_msg void OnBnClickedBtnDr();
};
