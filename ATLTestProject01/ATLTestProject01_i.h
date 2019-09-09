

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 7.00.0555 */
/* at Mon Sep 09 13:22:36 2019
 */
/* Compiler settings for ATLTestProject01.idl:
    Oicf, W1, Zp8, env=Win32 (32b run), target_arch=X86 7.00.0555 
    protocol : dce , ms_ext, c_ext, robust
    error checks: allocation ref bounds_check enum stub_data 
    VC __declspec() decoration level: 
         __declspec(uuid()), __declspec(selectany), __declspec(novtable)
         DECLSPEC_UUID(), MIDL_INTERFACE()
*/
/* @@MIDL_FILE_HEADING(  ) */

#pragma warning( disable: 4049 )  /* more than 64k source lines */


/* verify that the <rpcndr.h> version is high enough to compile this file*/
#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 475
#endif

#include "rpc.h"
#include "rpcndr.h"

#ifndef __RPCNDR_H_VERSION__
#error this stub requires an updated version of <rpcndr.h>
#endif // __RPCNDR_H_VERSION__

#ifndef COM_NO_WINDOWS_H
#include "windows.h"
#include "ole2.h"
#endif /*COM_NO_WINDOWS_H*/

#ifndef __ATLTestProject01_i_h__
#define __ATLTestProject01_i_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef __IATLTest_FWD_DEFINED__
#define __IATLTest_FWD_DEFINED__
typedef interface IATLTest IATLTest;
#endif 	/* __IATLTest_FWD_DEFINED__ */


#ifndef __CATLTest_FWD_DEFINED__
#define __CATLTest_FWD_DEFINED__

#ifdef __cplusplus
typedef class CATLTest CATLTest;
#else
typedef struct CATLTest CATLTest;
#endif /* __cplusplus */

#endif 	/* __CATLTest_FWD_DEFINED__ */


/* header files for imported files */
#include "oaidl.h"
#include "ocidl.h"
#include "shobjidl.h"

#ifdef __cplusplus
extern "C"{
#endif 


#ifndef __IATLTest_INTERFACE_DEFINED__
#define __IATLTest_INTERFACE_DEFINED__

/* interface IATLTest */
/* [unique][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_IATLTest;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("7E184EA2-0B28-473E-AFC4-D7230A2F69F4")
    IATLTest : public IDispatch
    {
    public:
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE ATLTestFunc0( 
            /* [in] */ SHORT num1,
            /* [in] */ SHORT num2,
            /* [retval][out] */ SCODE *pRetNum) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IATLTestVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IATLTest * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IATLTest * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IATLTest * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IATLTest * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IATLTest * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IATLTest * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IATLTest * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *ATLTestFunc0 )( 
            IATLTest * This,
            /* [in] */ SHORT num1,
            /* [in] */ SHORT num2,
            /* [retval][out] */ SCODE *pRetNum);
        
        END_INTERFACE
    } IATLTestVtbl;

    interface IATLTest
    {
        CONST_VTBL struct IATLTestVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IATLTest_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IATLTest_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IATLTest_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IATLTest_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IATLTest_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IATLTest_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IATLTest_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IATLTest_ATLTestFunc0(This,num1,num2,pRetNum)	\
    ( (This)->lpVtbl -> ATLTestFunc0(This,num1,num2,pRetNum) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IATLTest_INTERFACE_DEFINED__ */



#ifndef __ATLTestProject01Lib_LIBRARY_DEFINED__
#define __ATLTestProject01Lib_LIBRARY_DEFINED__

/* library ATLTestProject01Lib */
/* [version][uuid] */ 


EXTERN_C const IID LIBID_ATLTestProject01Lib;

EXTERN_C const CLSID CLSID_CATLTest;

#ifdef __cplusplus

class DECLSPEC_UUID("F825085F-F245-4185-B9C2-9D7305D98527")
CATLTest;
#endif
#endif /* __ATLTestProject01Lib_LIBRARY_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


