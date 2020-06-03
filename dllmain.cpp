// dllmain.cpp : Defines the entry point for the DLL application.
#include <windows.h>
#include <hbapi.h>
#include <hbvm.h>

BOOL APIENTRY DllMain( HMODULE hModule, DWORD ul_reason_for_call, LPVOID lpReserved )
{
    static HB_BOOL s_bInit = HB_FALSE;

    switch( ul_reason_for_call )
    {
       case DLL_PROCESS_ATTACH:
            if( ! hb_vmIsActive() )
            {  
               hb_vmInit( HB_FALSE );
               s_bInit = HB_TRUE;
            } 
            do {
               PHB_DYNS pDynSym = hb_dynsymFind( "MAIN" );

               if( pDynSym && hb_dynsymIsFunction( pDynSym ) &&
                   hb_vmRequestReenter() )
               {
                  hb_vmPushDynSym( pDynSym );
                  hb_vmPushNil();
                  hb_vmProc( 0 );
                  hb_vmRequestRestore();
               }
            } while( 0 );
            break;
  
       case DLL_THREAD_ATTACH:
            do {
               PHB_DYNS pDynSym = hb_dynsymFind( "THREADATTACH" );

               if( pDynSym && hb_dynsymIsFunction( pDynSym ) &&
                   hb_vmRequestReenter() )
               {
                  hb_vmPushDynSym( pDynSym );
                  hb_vmPushNil();
                  hb_vmProc( 0 );
                  hb_vmRequestRestore();
               }
            } while( 0 );
            break;
 
       case DLL_THREAD_DETACH:
            do {
               PHB_DYNS pDynSym = hb_dynsymFind( "THREADDETACH" );

               if( pDynSym && hb_dynsymIsFunction( pDynSym ) &&
                   hb_vmRequestReenter() )
               {
                  hb_vmPushDynSym( pDynSym );
                  hb_vmPushNil();
                  hb_vmProc( 0 );
                  hb_vmRequestRestore();
               }
            } while( 0 );
            break;

       case DLL_PROCESS_DETACH:
            if( s_bInit )
            {
               hb_vmQuit();
               s_bInit = HB_FALSE;
            }
            break;
    }
    return TRUE;
}