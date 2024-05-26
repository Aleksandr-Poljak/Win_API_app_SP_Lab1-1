#include <Windows.h>


int APIENTRY WinMain(HINSTANCE hInstance, HINSTANCE hPreevInstance,
	LPSTR lpszCmdLine, int nCMDShow) 
{
	int iRetVal1, iRetVal2;
	
	LPCTSTR lpszMBTitle = TEXT("Изучение параметров MessageBox");
	LPCTSTR lpszResponce;

	do {
		iRetVal1 = MessageBox(NULL,
			TEXT("Окно сообщения содержит три кнопки:\n«Прервать», «Повтор» и «Пропустить».\nНажмите одну из кнопок.."),
			lpszMBTitle,
			MB_ABORTRETRYIGNORE | MB_ICONSTOP | MB_DEFBUTTON3);			

		switch (iRetVal1) 
		{
		case IDRETRY:
			lpszResponce = TEXT("Нажата кнопка 'Повтор'\nПродолжить?");
			break;
		case IDIGNORE:
			lpszResponce = TEXT("Нажата кнопка 'Пропустить'\nПродолжить?");
			break;
		case IDABORT:
			lpszResponce = TEXT("Нажата кнопка 'Прервать'\nПродолжить?");
			break;
		default: lpszResponce = TEXT("Ответ мне не понятен.");
		}
		TCHAR buffer[100] = TEXT("");
		lstrcat(buffer, lpszResponce);
		iRetVal2 = MessageBox(NULL, buffer, lpszMBTitle, MB_YESNO | MB_ICONQUESTION );


	} while (iRetVal2 != IDNO);
	
	return 0;
}