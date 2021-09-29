/******************************************************************************
 globals.cpp

	Access to global objects and factories.

	Copyright (C) 2006 by John Lindal.

 ******************************************************************************/

#include "globals.h"
#include "App.h"
#include <jx-af/jcore/jAssert.h>

static App*	theApplication  = nullptr;		// owns itself

/******************************************************************************
 CreateGlobals

	Returns true if this is the first time the program is run.

 ******************************************************************************/

void
CreateGlobals
	(
	App* app
	)
{
	theApplication = app;
}

/******************************************************************************
 DeleteGlobals

 ******************************************************************************/

void
DeleteGlobals()
{
	theApplication = nullptr;
}

/******************************************************************************
 GetApplication

 ******************************************************************************/

App*
GetApplication()
{
	assert( theApplication != nullptr );
	return theApplication;
}

/******************************************************************************
 GetVersionNumberStr

 ******************************************************************************/

const JString&
GetVersionNumberStr()
{
	return JGetString("VERSION");
}

/******************************************************************************
 GetVersionStr

 ******************************************************************************/

JString
GetVersionStr()
{
	const JUtf8Byte* map[] =
	{
		"version",   JGetString("VERSION").GetBytes(),
		"copyright", JGetString("COPYRIGHT").GetBytes()
	};
	return JGetString("Description::globals", map, sizeof(map));
}
