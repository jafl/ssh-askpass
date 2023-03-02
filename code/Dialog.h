/******************************************************************************
 Dialog.h

	Copyright (C) 2006 by John Lindal.

 *****************************************************************************/

#ifndef _H_ASKDialog
#define _H_ASKDialog

#include <jx-af/jx/JXGetStringDialog.h>

class JXPasswordInput;

class Dialog : public JXGetStringDialog
{
public:

	Dialog();

	~Dialog() override;

protected:

	bool	OKToDeactivate() override;
};

#endif
