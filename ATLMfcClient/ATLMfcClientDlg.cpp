#include "stdafx.h"
#include "ATLMfcClient.h"
#include "ATLMfcClientDlg.h"
#include "afxdialogex.h"
#include "ATLTest.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


CATLMfcClientDlg::CATLMfcClientDlg(CWnd* pParent /*=NULL*/)
	: CDialogEx(CATLMfcClientDlg::IDD, pParent)
{
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
}

void CATLMfcClientDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Control(pDX, IDC_EDIT1, numInput1);
	DDX_Control(pDX, IDC_EDIT2, numInput2);
	DDX_Control(pDX, IDC_EDIT3, numRet);
}

BEGIN_MESSAGE_MAP(CATLMfcClientDlg, CDialogEx)
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()
	ON_BN_CLICKED(IDC_BUTTON1, &CATLMfcClientDlg::OnBnClickedGetRetButton)
END_MESSAGE_MAP()


BOOL CATLMfcClientDlg::OnInitDialog()
{
	CDialogEx::OnInitDialog();
	SetIcon(m_hIcon, TRUE);			// 设置大图标
	SetIcon(m_hIcon, FALSE);		// 设置小图标

	return TRUE;  // 除非将焦点设置到控件，否则返回 TRUE
}


void CATLMfcClientDlg::OnPaint()
{
	if (IsIconic())
	{
		CPaintDC dc(this); // 用于绘制的设备上下文

		SendMessage(WM_ICONERASEBKGND, reinterpret_cast<WPARAM>(dc.GetSafeHdc()), 0);

		// 使图标在工作区矩形中居中
		int cxIcon = GetSystemMetrics(SM_CXICON);
		int cyIcon = GetSystemMetrics(SM_CYICON);
		CRect rect;
		GetClientRect(&rect);
		int x = (rect.Width() - cxIcon + 1) / 2;
		int y = (rect.Height() - cyIcon + 1) / 2;

		// 绘制图标
		dc.DrawIcon(x, y, m_hIcon);
	}
	else
	{
		CDialogEx::OnPaint();
	}
}


HCURSOR CATLMfcClientDlg::OnQueryDragIcon()
{
	return static_cast<HCURSOR>(m_hIcon);
}


void CATLMfcClientDlg::OnBnClickedGetRetButton()
{
	CoInitialize(NULL);
	CATLTest myCom;
	if (!myCom.CreateDispatch(_T("ATLTest.math.1")))
	{
		MessageBox(L"组件注册失败");
		return;
	}
	CString strNum1,strNum2;
	this->numInput1.GetWindowTextW(strNum1);
	this->numInput2.GetWindowTextW(strNum2);
	short ret = myCom.ATLTestFunc0(_wtoi(strNum1),_wtoi(strNum2));
	WCHAR buf[50];
	_itow(ret,buf,10);
	this->numRet.SetWindowTextW(buf);
	CoUninitialize();
	return;
}
