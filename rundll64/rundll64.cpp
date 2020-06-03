#include <Windows.h>
#include <stdio.h>

DWORD WINAPI process( LPVOID );

int main()
{
   SECURITY_ATTRIBUTES sa;
   HANDLE hThread = NULL;
   DWORD dwThreadId = 0;
   int i = 0;

   ZeroMemory( &sa, sizeof( sa ) );
   sa.nLength = sizeof( sa );

   while( i++ < 6 )
   {
      hThread = CreateThread( &sa, 0, ( LPTHREAD_START_ROUTINE ) process, 0, 0, &dwThreadId ); 
      // CloseHandle( hThread );
   }

   return 0;
}

DWORD WINAPI process( LPVOID )
{
    HMODULE hDll = LoadLibrary( "libharbour_msvc64_sources.dll" );

    printf( "\nHello from the EXE" );

    FreeLibrary( hDll );

    return 0;
}