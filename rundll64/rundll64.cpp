#include <Windows.h>
#include <stdio.h>

#define MAX_THREADS 4

DWORD WINAPI process( LPVOID );

int main()
{
   HANDLE hThread[ MAX_THREADS ];
   DWORD dwThreadId[ MAX_THREADS ];
   int i = 0;
   HMODULE hDll = LoadLibrary( "libharbour_msvc64_sources.dll" );

   while( i < MAX_THREADS )
   {
      hThread[ i ] = CreateThread( NULL, 0, ( LPTHREAD_START_ROUTINE ) process, 0, 0, &dwThreadId[ i ] );
      i++; 
   }

    WaitForMultipleObjects( MAX_THREADS, hThread, TRUE, INFINITE );

    for( int i = 0; i < MAX_THREADS; i++ )
    {
        CloseHandle( hThread[ i ] );
    } 

    FreeLibrary( hDll );

   return 0;
}

DWORD WINAPI process( LPVOID )
{
    HMODULE hDll = LoadLibrary( "libharbour_msvc64_sources.dll" );

    // printf( "\nHello from the EXE\n" );

    FreeLibrary( hDll );

    return 0;
}