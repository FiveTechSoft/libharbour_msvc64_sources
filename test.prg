static cResult := ""

function Main()

   cResult += "Process Attach" + hb_OsNewLine()

return nil 

function ThreadAttach()

   cResult += "New thread" + hb_OsNewLine()

return nil

function ThreadDetach()

   cResult += "thread detach" + hb_OsNewLine()

return nil

function ProcessDetach()

   cResult += "Process detach" + hb_OsNewLine()

   ? cResult 

return nil