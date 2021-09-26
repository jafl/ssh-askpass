/******************************************************************************
 ASKDialog.cpp

	Asks for the passphrase and prints it to stdout.

	BASE CLASS = public JXGetStringDialog

	Copyright (C) 2006 by John Lindal.

 *****************************************************************************/

#include "ASKDialog.h"
#include "ASKApp.h"
#include "askGlobals.h"
#include <jx-af/jx/JXWindow.h>
#include <jx-af/jx/JXStaticText.h>
#include <jx-af/jx/JXPasswordInput.h>
#include <jx-af/jx/JXTextButton.h>
#include <jx-af/jcore/jAssert.h>

// string ID's

/******************************************************************************
 Constructor

 *****************************************************************************/

ASKDialog::ASKDialog
	(
	JXDirector* supervisor
	)
	:
	JXGetStringDialog(supervisor, JGetString("Title::ASKDialog"),
					  JGetString("Prompt::ASKDialog"), JString::empty, true, true)
{
}

/******************************************************************************
 Destructor

 *****************************************************************************/

ASKDialog::~ASKDialog()
{
}

/******************************************************************************
 OKToDeactivate (virtual protected)

 ******************************************************************************/

bool
ASKDialog::OKToDeactivate()
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
