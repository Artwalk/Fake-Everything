// QSearch.h : PROJECT_NAME Ӧ�ó������ͷ�ļ�
//

#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"		// ������
//#include "Volume.h"

// CQSearchApp:
// �йش����ʵ�֣������ QSearch.cpp
//

class CQSearchApp : public CWinApp
{
public:
	CQSearchApp();

// ��д
	public:
	virtual BOOL InitInstance();

// ʵ��

	DECLARE_MESSAGE_MAP()
};

extern CQSearchApp theApp;