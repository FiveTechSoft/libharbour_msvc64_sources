/*
 * Harbour 3.2.0dev (r2004201301)
 * Microsoft Visual C 19.21.27702 (64-bit)
 * Generated C source from "harbour\sources\vm\harbinit.prg"
 */

#include "hbvmpub.h"
#include "hbpcode.h"
#include "hbinit.h"
#include "hbxvm.h"


HB_FUNC( CLIPPER520 );
HB_FUNC( CLIPPER530 );
HB_FUNC( __HBVMINIT );
HB_FUNC_EXTERN( __MVPRIVATE );
HB_FUNC_EXTERN( ERRORSYS );
HB_FUNC( __SETHELPK );
HB_FUNC_EXTERN( SETKEY );
HB_FUNC_EXTERN( __XHELP );
HB_FUNC_INITSTATICS();
HB_FUNC( SYSINIT );


HB_INIT_SYMBOLS_BEGIN( hb_vm_SymbolInit_HARBINIT )
{ "CLIPPER520", {HB_FS_PUBLIC | HB_FS_FIRST | HB_FS_LOCAL}, {HB_FUNCNAME( CLIPPER520 )}, NULL },
{ "CLIPPER530", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( CLIPPER530 )}, NULL },
{ "__HBVMINIT", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( __HBVMINIT )}, NULL },
{ "GETLIST", {HB_FS_PUBLIC | HB_FS_MEMVAR}, {NULL}, NULL },
{ "__MVPRIVATE", {HB_FS_PUBLIC}, {HB_FUNCNAME( __MVPRIVATE )}, NULL },
{ "ERRORSYS", {HB_FS_PUBLIC}, {HB_FUNCNAME( ERRORSYS )}, NULL },
{ "__SETHELPK", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( __SETHELPK )}, NULL },
{ "SETKEY", {HB_FS_PUBLIC}, {HB_FUNCNAME( SETKEY )}, NULL },
{ "__XHELP", {HB_FS_PUBLIC}, {HB_FUNCNAME( __XHELP )}, NULL },
{ "(_INITSTATICS00001)", {HB_FS_INITEXIT | HB_FS_LOCAL}, {hb_INITSTATICS}, NULL },
{ "SYSINIT", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( SYSINIT )}, NULL }
HB_INIT_SYMBOLS_EX_END( hb_vm_SymbolInit_HARBINIT, "harbour\\sources\\vm\\harbinit.prg", 0x0, 0x0003 )

#if defined( HB_PRAGMA_STARTUP )
   #pragma startup hb_vm_SymbolInit_HARBINIT
#elif defined( HB_DATASEG_STARTUP )
   #define HB_DATASEG_BODY    HB_DATASEG_FUNC( hb_vm_SymbolInit_HARBINIT )
   #include "hbiniseg.h"
#endif

HB_FUNC( CLIPPER520 )
{
   do {
	hb_xvmSetLine( 53 );
	/* *** END PROC *** */
   } while( 0 );
}

HB_FUNC( CLIPPER530 )
{
   do {
	hb_xvmSetLine( 59 );
	/* *** END PROC *** */
   } while( 0 );
}

HB_FUNC( __HBVMINIT )
{
   HB_BOOL fValue;
   do {
	hb_xvmSFrame( symbols + 9 );
	hb_xvmSetLine( 73 );
	hb_xvmArrayGen( 0 );
	hb_xvmPushFuncSymbol( symbols + 4 );
	hb_xvmPushSymbol( symbols + 3 );
	if( hb_xvmDo( 1 ) ) break;
	if( hb_xvmPopMemvar( symbols + 3 ) ) break;
	hb_xvmSetLine( 75 );
	hb_xvmPushStatic( 1 );
	if( hb_xvmPopLogical( &fValue ) ) break;
	if( fValue )
		goto lab00001;
	hb_xvmSetLine( 76 );
	hb_xvmPushFuncSymbol( symbols + 5 );
	if( hb_xvmDo( 0 ) ) break;
	hb_xvmSetLine( 77 );
	hb_xvmPushLogical( HB_TRUE );
	hb_xvmPopStatic( 1 );
lab00001: ;
	hb_xvmSetLine( 80 );
	/* *** END PROC *** */
   } while( 0 );
}

HB_FUNC( __SETHELPK )
{
   do {
	hb_xvmSetLine( 85 );
	hb_xvmPushFuncSymbol( symbols + 7 );
	hb_xvmPushInteger( 28 );
	{
		static const HB_BYTE codeblock[ 16 ] = {
			3, 0, 0, 0, 176, 8, 0, 95, 1, 95, 2, 95, 3, 12, 3, 6 };
		hb_xvmPushBlock( codeblock, symbols );
	}
	if( hb_xvmDo( 2 ) ) break;
	hb_xvmSetLine( 87 );
	/* *** END PROC *** */
   } while( 0 );
}

HB_FUNC_INITSTATICS()
{
   do {
	hb_xvmStatics( symbols + 9, 1 );
	hb_xvmSFrame( symbols + 9 );
	hb_xvmPushLogical( HB_FALSE );
	hb_xvmPopStatic( 1 );
	/* *** END PROC *** */
   } while( 0 );
}

HB_FUNC( SYSINIT )
{
   do {
	/* *** END PROC *** */
   } while( 0 );
}

