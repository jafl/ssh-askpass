/******************************************************************************
 Dialog.cpp

	Asks for the passphrase and prints it to stdout.

	BASE CLASS = public JXGetStringDialog

	Copyright (C) 2006 by John Lindal.

 *****************************************************************************/

#include "Dialog.h"
#include "App.h"
#include "globals.h"
#include <jx-af/jx/JXWindow.h>
#include <jx-af/jx/JXStaticText.h>
#include <jx-af/jx/JXPasswordInput.h>
#include <jx-af/jx/JXTextButton.h>
#include <jx-af/jcore/jAssert.h>

// string ID's

/******************************************************************************
 Constructor

 *****************************************************************************/

Dialog::Dialog
	(
	JXDirector* supervisor
	)
	:
	JXGetStringDialog(supervisor, JGetString("Title::Dialog"),
					  JGetString("Prompt::Dialog"), JString::empty, true, true)
{
}

/******************************************************************************
 Destructor

 *****************************************************************************/

Dialog::~Dialog()
{
}

/******************************************************************************
 OKToDeactivate (virtual protected)

 ******************************************************************************/

bool
Dialog::OKToDeactivate()
{
	if (JXGetStringDialog::OKToDeactivate())
	{
		std::cout << GetString() << std::endl;
		return true;
	}
	else
	{
		return false;
	}
}
