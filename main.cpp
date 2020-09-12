/////////////////////////////////////////////
//                                         //
//    Copyright (C) 2020-2020 Julian Uy    //
//  https://sites.google.com/site/awertyb  //
//                                         //
//   See details of license at "LICENSE"   //
//                                         //
/////////////////////////////////////////////

#include "ncbind/ncbind.hpp"

static tjs_int exit_override(tjs_int exitcode)
{
	return !!::TerminateProcess(GetCurrentProcess(), (UINT)exitcode);
}

NCB_ATTACH_FUNCTION(exit, System, exit_override);
