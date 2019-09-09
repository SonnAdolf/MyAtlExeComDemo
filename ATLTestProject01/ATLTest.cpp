// ATLTest.cpp : CCATLTest µÄÊµÏÖ

#include "stdafx.h"
#include "ATLTest.h"


// CCATLTest



STDMETHODIMP CCATLTest::ATLTestFunc0(SHORT num1, SHORT num2, SCODE* pRetNum)
{
	*pRetNum = num1 + num2;
	return S_OK;
}
