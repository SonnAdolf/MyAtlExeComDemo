// ATLTest.h : CCATLTest ������

#pragma once
#include "resource.h"       // ������



#include "ATLTestProject01_i.h"



#if defined(_WIN32_WCE) && !defined(_CE_DCOM) && !defined(_CE_ALLOW_SINGLE_THREADED_OBJECTS_IN_MTA)
#error "Windows CE ƽ̨(�粻�ṩ��ȫ DCOM ֧�ֵ� Windows Mobile ƽ̨)���޷���ȷ֧�ֵ��߳� COM ���󡣶��� _CE_ALLOW_SINGLE_THREADED_OBJECTS_IN_MTA ��ǿ�� ATL ֧�ִ������߳� COM ����ʵ�ֲ�����ʹ���䵥�߳� COM ����ʵ�֡�rgs �ļ��е��߳�ģ���ѱ�����Ϊ��Free����ԭ���Ǹ�ģ���Ƿ� DCOM Windows CE ƽ̨֧�ֵ�Ψһ�߳�ģ�͡�"
#endif

using namespace ATL;


// CCATLTest

class ATL_NO_VTABLE CCATLTest :
	public CComObjectRootEx<CComSingleThreadModel>,
	public CComCoClass<CCATLTest, &CLSID_CATLTest>,
	public IDispatchImpl<IATLTest, &IID_IATLTest, &LIBID_ATLTestProject01Lib, /*wMajor =*/ 1, /*wMinor =*/ 0>
{
public:
	CCATLTest()
	{
	}

DECLARE_REGISTRY_RESOURCEID(IDR_CATLTEST)


BEGIN_COM_MAP(CCATLTest)
	COM_INTERFACE_ENTRY(IATLTest)
	COM_INTERFACE_ENTRY(IDispatch)
END_COM_MAP()



	DECLARE_PROTECT_FINAL_CONSTRUCT()

	HRESULT FinalConstruct()
	{
		return S_OK;
	}

	void FinalRelease()
	{
	}

public:



	STDMETHOD(ATLTestFunc0)(SHORT num1, SHORT num2, SCODE* pRetNum);
};

OBJECT_ENTRY_AUTO(__uuidof(CATLTest), CCATLTest)
