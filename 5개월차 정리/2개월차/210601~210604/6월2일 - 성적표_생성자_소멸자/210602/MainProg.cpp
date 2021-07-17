#include "stdafx.h"
#include "MainProg.h"

CMainProg::CMainProg()
{
}

CMainProg::~CMainProg()
{
	Release();
}

void CMainProg::Initialize()
{
	m_pGrade = new CMainGrade;
	m_pGrade->Initialize();
}

void CMainProg::Progress()
{
	int		iSelect = 0;

	while (true)
	{
		system("cls");
		cout << "1.�Է� 2.��� 3.�˻� 4.����" << endl;
		cout << "===========================================" << endl;
		cout << "�Է�: ";
		cin >> iSelect;

		switch (iSelect)
		{
		case 1:
			m_pGrade->Input_Grade();
			break;
		case 2:
			m_pGrade->Show_All();
			break;
		case 3:
			m_pGrade->Show_Search();
			break;
		case 4:
			return;
		default:
			continue;
		}
		system("pause");
	}
}

void CMainProg::Release()
{
	SAFE_DELETE(m_pGrade);
}
