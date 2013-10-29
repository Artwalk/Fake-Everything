#pragma once
#include "afxwin.h"


// CIgnoreDlg �Ի���

class CIgnoreDlg : public CDialog
{
	DECLARE_DYNAMIC(CIgnoreDlg)

public:
	CIgnoreDlg(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~CIgnoreDlg();

// �Ի�������
	enum { IDD = IDD_IGNORE };

protected:
	virtual BOOL OnInitDialog();

	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedAdd();

public:
	CListBox m_IgnoreList;
public:
	afx_msg void OnBnClickedDel();
public:
	afx_msg void OnBnClickedButton2();
public:
	bool WriteConfig(void);
public:
	afx_msg void OnBnClickedOk();
public:
	bool ReadConfig(void);
};
