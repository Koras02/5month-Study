#include "stdafx.h"
#include "MainGrade.h"

CMainGrade::CMainGrade()
{
	m_pGrade = nullptr;
	m_iSize = 0;
}

CMainGrade::~CMainGrade()
{
	Release();
}

void CMainGrade::Initialize()
{
	m_pGrade = nullptr;
	m_iSize = 0;
}

void CMainGrade::Release()
{
	SAFE_DELETE_ARR(m_pGrade);
}

void CMainGrade::Input_Grade()
{
	system("cls");

	int		iInput = 0;

	cout << "�л� ��: ";
	cin >> iInput;

	if(!m_pGrade)
		m_pGrade = new GRADE[iInput];
	else
	{
		GRADE* pTemp = new GRADE[iInput + m_iSize];
		memcpy(pTemp, m_pGrade, sizeof(GRADE) * m_iSize);
		Release();
		m_pGrade = pTemp;
	}

	for (int i = m_iSize; i < m_iSize + iInput; ++i)
	{
		system("cls");

		cout << "�̸�: ";
		cin >> m_pGrade[i].szName;

		cout << "����: ";
		cin >> m_pGrade[i].iKor;

		cout << "����: ";
		cin >> m_pGrade[i].iEng;

		cout << "����: ";
		cin >> m_pGrade[i].iMath;

		m_pGrade[i].iTotal = m_pGrade[i].iKor + m_pGrade[i].iEng + m_pGrade[i].iMath;
		m_pGrade[i].fAver = m_pGrade[i].iTotal / 3.f;
	}

	m_iSize += iInput;
}

void CMainGrade::Show_All()
{
	system("cls");

	for (int i = 0; i < m_iSize; ++i)
	{
		cout << "�̸�: " << m_pGrade[i].szName << endl;
		cout << "����: " << m_pGrade[i].iKor << endl;
		cout << "����: " << m_pGrade[i].iEng << endl;
		cout << "����: " << m_pGrade[i].iMath << endl;
		cout << "����: " << m_pGrade[i].iTotal << endl;
		cout << "���: " << m_pGrade[i].fAver << endl;
		cout << "===========================================" << endl;
	}
}

void CMainGrade::Show_Search()
{
	cout << "CMainGrade �˻�!" << endl;
}
