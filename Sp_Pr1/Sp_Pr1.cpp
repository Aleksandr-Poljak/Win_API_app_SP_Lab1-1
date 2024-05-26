#include <Windows.h>
#include "Sp_Pr1.h"

int APIENTRY WinMain(HINSTANCE hInstance, HINSTANCE hPreevInstance,
	LPSTR lpszCmdLine, int nCMDShow) 
{
	LPCTSTR lpszHelloText = MESSAGE_TEXT;
	LPCTSTR lpszHelloWorldTitle = MESSAGE_TITLE;
	MessageBox(NULL, lpszHelloText, lpszHelloWorldTitle, MB_OK);
	return 0;
}