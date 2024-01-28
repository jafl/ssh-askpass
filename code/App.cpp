/******************************************************************************
 App.cpp

	BASE CLASS = public JXApplication

	Copyright (C) 2006 by John Lindal.

 *****************************************************************************/

#include "App.h"
#include "stringData.h"
#include "globals.h"
#include <jx-af/jcore/jAssert.h>

static const JUtf8Byte* kAppSignature = "nps-ssh-askpass";

/******************************************************************************
 Constructor

 *****************************************************************************/

App::App
	(
	int*	argc,
	char*	argv[]
	)
	:
	JXApplication(argc, argv, kAppSignature, kAppSignature, kDefaultStringData)
{
	CreateGlobals(this);
}

/******************************************************************************
 Destructor

 *****************************************************************************/

App::~App()
{
	DeleteGlobals();
}

/******************************************************************************
 InitStrings (static)

	If we are going to print something to the command line and then quit,
	we haven't initialized JX, but we still need the string data.

 ******************************************************************************/

void
App::InitStrings()
{
	JGetStringManager()->Register(kAppSignature, kDefaultStringData);
}
