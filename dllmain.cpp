// dllmain.cpp : Defines the entry point for the DLL application.
#include <windows.h>
#include <hbapi.h>
#include <hbvm.h>

BOOL APIENTRY DllMain( HMODULE hModule,
                       DWORD  ul_reason_for_call,
                       LPVOID lpReserved
                     )
{
    static HB_BOOL s_fInit = HB_FALSE;

    switch (ul_reason_for_call)
    {
       case DLL_PROCESS_ATTACH:
            s_fInit = ! hb_vmIsActive();
            if( s_fInit )
               hb_vmInit( HB_FALSE );
            break;
  
       case DLL_THREAD_ATTACH:
            break;
 
       case DLL_THREAD_DETACH:
            break;

       case DLL_PROCESS_DETACH:
            if( s_fInit )
            {
               hb_vmQuit();
               s_fInit = HB_FALSE;
            }
            break;
    }
    return TRUE;
}

