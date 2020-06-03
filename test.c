/*
 * Harbour 3.2.0dev (r2004201301)
 * Microsoft Visual C 19.21.27702 (64-bit)
 * Generated C source from "test.prg"
 */

#include "hbvmpub.h"
#include "hbinit.h"


HB_FUNC( MAIN );
HB_FUNC_EXTERN( QOUT );
HB_FUNC_EXTERN( HB_MTVM );


HB_INIT_SYMBOLS_BEGIN( hb_vm_SymbolInit_TEST )
{ "MAIN", {HB_FS_PUBLIC | HB_FS_FIRST | HB_FS_LOCAL}, {HB_FUNCNAME( MAIN )}, NULL },
{ "QOUT", {HB_FS_PUBLIC}, {HB_FUNCNAME( QOUT )}, NULL },
{ "HB_MTVM", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_MTVM )}, NULL }
HB_INIT_SYMBOLS_EX_END( hb_vm_SymbolInit_TEST, "test.prg", 0x0, 0x0003 )

#if defined( HB_PRAGMA_STARTUP )
   #pragma startup hb_vm_SymbolInit_TEST
#elif defined( HB_DATASEG_STARTUP )
   #define HB_DATASEG_BODY    HB_DATASEG_FUNC( hb_vm_SymbolInit_TEST )
   #include "hbiniseg.h"
#endif

HB_FUNC( MAIN )
{
	static const HB_BYTE pcode[] =
	{
		36,3,0,176,1,0,176,2,0,12,0,20,1,36,
		7,0,100,110,7
	};

	hb_vmExecute( pcode, symbols );
}

#line 10 "test.prg"

#include <windows.h>
#include <hbapi.h>

HB_FUNC( MSGINFO )
{
   MessageBox( 0, L"ok", L"Information", MB_ICONINFORMATION );
}

