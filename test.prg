function Main()

   ? "Hola mundo!"
   // MsgInfo()

return nil 

#pragma BEGINDUMP

#include <windows.h>
#include <hbapi.h>

HB_FUNC( MSGINFO )
{
   MessageBox( 0, L"ok", L"Information", MB_ICONINFORMATION );
}

#pragma ENDDUMP