/*
 * Harbour 3.2.0dev (r2004201301)
 * Microsoft Visual C 19.21.27702 (64-bit)
 * Generated C source from "test.prg"
 */

#include "hbvmpub.h"
#include "hbinit.h"


HB_FUNC( MAIN );
HB_FUNC_EXTERN( HB_OSNEWLINE );
HB_FUNC( THREADATTACH );
HB_FUNC( THREADDETACH );
HB_FUNC( PROCESSDETACH );
HB_FUNC_EXTERN( QOUT );
HB_FUNC_INITSTATICS();


HB_INIT_SYMBOLS_BEGIN( hb_vm_SymbolInit_TEST )
{ "MAIN", {HB_FS_PUBLIC | HB_FS_FIRST | HB_FS_LOCAL}, {HB_FUNCNAME( MAIN )}, NULL },
{ "HB_OSNEWLINE", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_OSNEWLINE )}, NULL },
{ "THREADATTACH", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( THREADATTACH )}, NULL },
{ "THREADDETACH", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( THREADDETACH )}, NULL },
{ "PROCESSDETACH", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( PROCESSDETACH )}, NULL },
{ "QOUT", {HB_FS_PUBLIC}, {HB_FUNCNAME( QOUT )}, NULL },
{ "(_INITSTATICS00001)", {HB_FS_INITEXIT | HB_FS_LOCAL}, {hb_INITSTATICS}, NULL }
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
		116,6,0,36,5,0,104,1,0,106,15,80,114,111,
		99,101,115,115,32,65,116,116,97,99,104,0,176,1,
		0,12,0,72,135,36,7,0,100,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC( THREADATTACH )
{
	static const HB_BYTE pcode[] =
	{
		116,6,0,36,11,0,104,1,0,106,11,78,101,119,
		32,116,104,114,101,97,100,0,176,1,0,12,0,72,
		135,36,13,0,100,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC( THREADDETACH )
{
	static const HB_BYTE pcode[] =
	{
		116,6,0,36,17,0,104,1,0,106,14,116,104,114,
		101,97,100,32,100,101,116,97,99,104,0,176,1,0,
		12,0,72,135,36,19,0,100,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC( PROCESSDETACH )
{
	static const HB_BYTE pcode[] =
	{
		116,6,0,36,23,0,104,1,0,106,15,80,114,111,
		99,101,115,115,32,100,101,116,97,99,104,0,176,1,
		0,12,0,72,135,36,25,0,176,5,0,103,1,0,
		20,1,36,27,0,100,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_INITSTATICS()
{
	static const HB_BYTE pcode[] =
	{
		117,6,0,1,0,116,6,0,106,1,0,82,1,0,
		7
	};

	hb_vmExecute( pcode, symbols );
}

