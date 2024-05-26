#include <Windows.h>
#include "Sp_Pr1.h"
#include <ctime>

int APIENTRY WinMain(HINSTANCE hInstance, HINSTANCE hPreevInstance,
	LPSTR lpszCmdLine, int nCMDShow) 
{
	TCHAR message[300] = TEXT("Привет из Win32 приложения с графическим интерфейсом\nАвтор: Поляк А. (гр.30331)\n");

	// Время проектирования, задаем вручную
	tm tm = {};
	tm.tm_mday = 26;
	tm.tm_mon = 5;
	tm.tm_year = 2024;
	tm.tm_hour = 17;
	tm.tm_min = 0;
	tm.tm_sec = 0;

	TCHAR DesingTimeStr[100];
	wsprintf(DesingTimeStr, TEXT("Design time: %02d.%02d.%04d %02d:%02d:%02d\n"), 
		tm.tm_mday, tm.tm_mon, tm.tm_year, tm.tm_hour, tm.tm_min, tm.tm_sec);
	lstrcat(message, DesingTimeStr);

	// Время запуска.
	SYSTEMTIME RunTime ;
	GetLocalTime(&RunTime);
	TCHAR RunTimeStr[100];
	wsprintf(RunTimeStr, TEXT("Design time: %02d.%02d.%04d %02d:%02d:%02d\n"),
		RunTime.wDay, RunTime.wMonth, RunTime.wYear, RunTime.wHour, RunTime.wMinute, RunTime.wSecond);
	lstrcat(message, RunTimeStr);

	MessageBox(NULL, message, MESSAGE_TITLE, MB_OK);
	return 0;
}