
// ATLMfcClientDlg.h : ͷ�ļ�
//

#pragma once
#include "afxwin.h"


// CATLMfcClientDlg �Ի���
class CATLMfcClientDlg : public CDialogEx
{
// ����
public:
	CATLMfcClientDlg(CWnd* pParent = NULL);	// ��׼���캯��

// �Ի�������
	enum { IDD = IDD_ATLMFCCLIENT_DIALOG };

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV ֧��


// ʵ��
protected:
	HICON m_hIcon;

	// ���ɵ���Ϣӳ�亯��
	virtual BOOL OnInitDialog();
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedGetRetButton();
	CEdit numInput1;
	CEdit numInput2;
	CEdit numRet;
};
