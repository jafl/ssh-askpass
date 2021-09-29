/******************************************************************************
 App.h

	Copyright (C) 2006 by John Lindal.

 *****************************************************************************/

#ifndef _H_ASKApp
#define _H_ASKApp

#include <jx-af/jx/JXApplication.h>

class App : public JXApplication
{
public:

	App(int* argc, char* argv[]);

	virtual	~App();

	static void	InitStrings();
};

#endif
