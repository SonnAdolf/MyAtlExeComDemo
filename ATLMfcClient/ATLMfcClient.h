
// ATLMfcClient.h : PROJECT_NAME Ӧ�ó������ͷ�ļ�
//

#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"		// ������


// CATLMfcClientApp:
// �йش����ʵ�֣������ ATLMfcClient.cpp
//

class CATLMfcClientApp : public CWinApp
{
public:
	CATLMfcClientApp();

// ��д
public:
	virtual BOOL InitInstance();

// ʵ��

	DECLARE_MESSAGE_MAP()
};

extern CATLMfcClientApp theApp;