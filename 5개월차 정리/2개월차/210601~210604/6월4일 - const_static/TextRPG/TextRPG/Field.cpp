#include "stdafx.h"
#include "Field.h"
#include "Player.h"
#include "Monster.h"


CField::CField()
{
	m_pPlayer = nullptr;
	m_pMonster = nullptr;
}


CField::~CField()
{
	Release();
}

void CField::Initialize()
{
}

void CField::Progress()
{
	int		iSelect = 0;

	while (true)
	{
		system("cls");
		m_pPlayer->Render();
		cout << "1.초급 2.중급 3.고급 4.종료" << endl;
		cout << "=============================================" << endl;
		cout << "입력: ";
		cin >> iSelect;

		switch (iSelect)
		{
		case 1:
			m_pMonster = new CMonster("슬라임", 5, 30, 1);
			m_pMonster->Initialize();
			break;
		case 2:
			m_pMonster = new CMonster("오우거", 50, 300, 2);
			m_pMonster->Initialize();
			break;
		case 3:
			m_pMonster = new CMonster("골렘", 500, 3000, 3);
			m_pMonster->Initialize();
			break;
		case 4:
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

void CField::Release()
{
	SAFE_DELETE(m_pMonster);
}

void CField::Set_Player(CPlayer * _pPlayer)
{
	m_pPlayer = _pPlayer;
}

COMBAT CField::Combat()
{
	int		iSelect = 0;

	while (true)
	{
		system("cls");
		m_pPlayer->Render();
		m_pMonster->Render();
		cout << "1.전투 2.도망" << endl;
		cout << "=============================================" << endl;
		cout << "입력: ";
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
			cout << "플레이어 사망!" << endl;
			system("pause");
			return COMBAT_LOSE;
		}
		if (0 >= m_pMonster->Get_Hp())
		{
			cout << "사냥 성공!" << endl;
			system("pause");
			return COMBAT_WIN;
		}
	}
}
