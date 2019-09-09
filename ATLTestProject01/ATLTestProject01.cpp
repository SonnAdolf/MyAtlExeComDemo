// ATLTestProject01.cpp : WinMain µÄÊµÏÖ


#include "stdafx.h"
#include "resource.h"
#include "ATLTestProject01_i.h"



class CATLTestProject01Module : public ATL::CAtlExeModuleT< CATLTestProject01Module >
	{
public :
	DECLARE_LIBID(LIBID_ATLTestProject01Lib)
	DECLARE_REGISTRY_APPID_RESOURCEID(IDR_ATLTESTPROJECT01, "{89A25AA1-4220-4B7E-99CB-069F259FAA69}")
	};

CATLTestProject01Module _AtlModule;



//
extern "C" int WINAPI _tWinMain(HINSTANCE /*hInstance*/, HINSTANCE /*hPrevInstance*/, 
								LPTSTR /*lpCmdLine*/, int nShowCmd)
{
	return _AtlModule.WinMain(nShowCmd);
}

