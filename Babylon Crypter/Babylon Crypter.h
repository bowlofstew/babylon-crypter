
// Babylon Crypter.h�: fichier d'en-t�te principal pour l'application PROJECT_NAME
//

#pragma once

#ifndef __AFXWIN_H__
	#error "incluez 'stdafx.h' avant d'inclure ce fichier pour PCH"
#endif

#include "resource.h"		// symboles principaux


// CBabylonCrypterClass�:
// Consultez Babylon Crypter.cpp pour l'impl�mentation de cette classe
//

class CBabylonCrypterClass : public CWinApp
{
public:
	CBabylonCrypterClass();

// Substitutions
public:
	virtual BOOL InitInstance();

// Impl�mentation

	DECLARE_MESSAGE_MAP()
};

extern CBabylonCrypterClass theApp;