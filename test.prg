function Main()

   ? hb_mtvm()

return nil 

function ThreadAttach()

   static nThread := 1

   ? "New Thread: ", nThread++

return nil

function ThreadDetach()

   ? "Thread detach"

return nil

function ProcessDetach()

   ? "ProcessDetach"

return nil