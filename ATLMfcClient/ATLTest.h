// �����Ϳ������á�����ࡱ�����ļ�������ɵ� IDispatch ��װ��

#import "D:\\Workspace\\ATLTestProject01\\x64\\Release\\ATLTestProject01.exe" no_namespace
// CATLTest ��װ��

class CATLTest : public COleDispatchDriver
{
public:
	CATLTest(){} // ���� COleDispatchDriver Ĭ�Ϲ��캯��
	CATLTest(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	CATLTest(const CATLTest& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

	// ����
public:

	// ����
public:


	// IATLTest ����
public:
	SCODE ATLTestFunc0(short num1, short num2)
	{
		SCODE result;
		static BYTE parms[] = VTS_I2 VTS_I2 ;
		InvokeHelper(0x1, DISPATCH_METHOD, VT_ERROR, (void*)&result, parms, num1, num2);
		return result;
	}

	// IATLTest ����
public:

};
