
// Git_Test_Project.h : main header file for the PROJECT_NAME application
//

#pragma once

#ifndef __AFXWIN_H__
	#error "include 'stdafx.h' before including this file for PCH"
#endif

#include "resource.h"		// main symbols


// CGit_Test_ProjectApp:
// See Git_Test_Project.cpp for the implementation of this class
//

class CGit_Test_ProjectApp : public CWinApp
{
public:
	CGit_Test_ProjectApp();

// Overrides
public:
	virtual BOOL InitInstance();

// Implementation

	DECLARE_MESSAGE_MAP()
};

extern CGit_Test_ProjectApp theApp;