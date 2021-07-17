#include "stdafx.h"
#include "MainGame.h"



CMainGame::CMainGame()
{
	m_pPlayer = nullptr;
	m_pMonster = nullptr;
}


CMainGame::~CMainGame()
{
	Release();
}

bool CMainGame::Initialize()
{
	Select_Player();

	if (!m_pPlayer)
		return false;

	return true;
}

void CMainGame::Progress()
{
	int		iSelect = 0;

	while (true)
	{
		system("cls");
		m_pPlayer->Render();
		cout << "1.�ʱ� 2.�߱� 3.��� 4.���� 5.����" << endl;
		cout << "=============================================" << endl;
		cout << "�Է�: ";
		cin >> iSelect;

		switch (iSelect)
		{
		case 1:
			m_pMonster = new CMonster("������", 5, 30, 1);
			m_pMonster->Initialize();
			break;
		case 2:
			m_pMonster = new CMonster("�����", 50, 300, 2);
			m_pMonster->Initialize();
			break;
		case 3:
			m_pMonster = new CMonster("��", 500, 3000, 3);
			m_pMonster->Initialize();
			break;
		case 4:
			continue;
		case 5:
			return;
		default:
			continue;
		}

		switch (Combat())
		{
		case COMBAT_WIN:
			m_pPlayer->Combat_Win(m_pMonster->Get_Exp(), m_pMonster->Get_Gold());
			break;
		case COMBAT_LOSE:
			m_pPlayer->Combat_Lose();
			break;
		case COMBAT_RUN:
			m_pPlayer->Combat_Run();
			break;
		}

		SAFE_DELETE(m_pMonster);
	}
}

void CMainGame::Release()
{
	SAFE_DELETE(m_pPlayer);
}

void CMainGame::Select_Player()
{
	int iSelect = 0;

	while (true)
	{
		system("cls");
		cout << "1.���� 2.������ 3.���� 4.�ҷ����� 5.����" << endl;
		cout << "=============================================" << endl;
		cout << "�Է�: ";
		cin >> iSelect;

		switch (iSelect)
		{
		case 1:
			m_pPlayer = new CPlayer("����", 10, 200);
			m_pPlayer->Initialize();
			return;
		case 2:
			m_pPlayer = new CPlayer("������", 100, 2000);
			m_pPlayer->Initialize();
			return;
		case 3:
			m_pPlayer = new CPlayer("����", 1000, 20000);
			m_pPlayer->Initialize();
			return;
		case 4:
			return;
		case 5:
			return;
		default:
			continue;
		}
	}
}

COMBAT CMainGame::Combat()
{
	int		iSelect = 0;

	while (true)
	{
		system("cls");
		m_pPlayer->Render();
		m_pMonster->Render();
		cout << "1.���� 2.����" << endl;
		cout << "=============================================" << endl;
		cout << "�Է�: ";
		cin >> iSelect;

		switch (iSelect)
		{
		case 1:
			m_pPlayer->Set_Hp(-m_pMonster->Get_Att());
			m_pMonster->Set_Hp(-m_pPlayer->Get_Att());
			break;
		case 2:
			return COMBAT_RUN;
		default:
			continue;
		}

		if (0 >= m_pPlayer->Get_Hp())
		{
			cout << "�÷��̾� ���!" << endl;
			system("pause");
			return COMBAT_LOSE;
		}
		if (0 >= m_pMonster->Get_Hp())
		{
			cout << "��� ����!" << endl;
			system("pause");
			return COMBAT_WIN;
		}
	}
}
