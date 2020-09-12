/////////////////////////////////////////////
//                                         //
//    Copyright (C) 2020-2020 Julian Uy    //
//  https://sites.google.com/site/awertyb  //
//                                         //
//   See details of license at "LICENSE"   //
//                                         //
/////////////////////////////////////////////

#include "ncbind/ncbind.hpp"

static tjs_int exit_override(tTJSVariant *result, tjs_int numparams, tTJSVariant **param, iTJSDispatch2 *objthis)
{
	UINT exitcode = 0;
	if (numparams >= 1)
	{
		exitcode = (UINT)param[0]->AsInteger();
	}
	return !!::TerminateProcess(GetCurrentProcess(), (UINT)exitcode);
}

NCB_ATTACH_FUNCTION(exit, System, exit_override);
