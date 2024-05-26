#include <Windows.h>


int APIENTRY WinMain(HINSTANCE hInstance, HINSTANCE hPreevInstance,
	LPSTR lpszCmdLine, int nCMDShow) 
{
	int iRetVal1, iRetVal2;
	
	LPCTSTR lpszMBTitle = TEXT("�������� ���������� MessageBox");
	LPCTSTR lpszResponce;

	do {
		iRetVal1 = MessageBox(NULL,
			TEXT("���� ��������� �������� ��� ������:\n����������, ������� � ������������.\n������� ���� �� ������.."),
			lpszMBTitle,
			MB_ABORTRETRYIGNORE | MB_ICONSTOP | MB_DEFBUTTON3);			

		switch (iRetVal1) 
		{
		case IDRETRY:
			lpszResponce = TEXT("������ ������ '������'\n����������?");
			break;
		case IDIGNORE:
			lpszResponce = TEXT("������ ������ '����������'\n����������?");
			break;
		case IDABORT:
			lpszResponce = TEXT("������ ������ '��������'\n����������?");
			break;
		default: lpszResponce = TEXT("����� ��� �� �������.");
		}
		TCHAR buffer[100] = TEXT("");
		lstrcat(buffer, lpszResponce);
		iRetVal2 = MessageBox(NULL, buffer, lpszMBTitle, MB_YESNO | MB_ICONQUESTION );


	} while (iRetVal2 != IDNO);
	
	return 0;
}