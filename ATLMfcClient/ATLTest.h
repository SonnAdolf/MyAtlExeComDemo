// 从类型库向导中用“添加类”创建的计算机生成的 IDispatch 包装类

#import "D:\\Workspace\\ATLTestProject01\\x64\\Release\\ATLTestProject01.exe" no_namespace
// CATLTest 包装类

class CATLTest : public COleDispatchDriver
{
public:
	CATLTest(){} // 调用 COleDispatchDriver 默认构造函数
	CATLTest(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	CATLTest(const CATLTest& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

	// 特性
public:

	// 操作
public:


	// IATLTest 方法
public:
	SCODE ATLTestFunc0(short num1, short num2)
	{
		SCODE result;
		static BYTE parms[] = VTS_I2 VTS_I2 ;
		InvokeHelper(0x1, DISPATCH_METHOD, VT_ERROR, (void*)&result, parms, num1, num2);
		return result;
	}

	// IATLTest 属性
public:

};
