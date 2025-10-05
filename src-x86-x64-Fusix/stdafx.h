// stdafx.h: Included file dl € standard system included files
// or included files dl € of a particular project, which are often used with €, but
// not often change €
//

#pragma once

#include "targetver.h"

#define WIN32_LEAN_AND_MEAN             Remove rarely used components from Windows headers
#define _CRT_SECURE_NO_WARNINGS


// 'Windows header isles:
#include <windows.h>
#include <TlHelp32.h>


// TODO: ”link here to additional headings requiring € dl € of the program

typedef VOID	(WINAPI* SERVICEMAIN)(DWORD, LPTSTR*);
typedef VOID	(WINAPI* SVCHOSTPUSHSERVICEGLOBALS)(VOID*);
typedef HRESULT (WINAPI* SLGETWINDOWSINFORMATIONDWORD)(PCWSTR, DWORD*);