/******************************************************************************
 globals.h

   Copyright (C) 2006 by John Lindal.

 *****************************************************************************/

#ifndef _H_askGlobals
#define _H_askGlobals

#include <jx-af/jx/jXGlobals.h>

// we include these for convenience

#include "App.h"

class MDIServer;

App*			GetApplication();

const JString&	GetVersionNumberStr();
JString			GetVersionStr();

	// called by App

void	CreateGlobals(App* app);
void	DeleteGlobals();

#endif
