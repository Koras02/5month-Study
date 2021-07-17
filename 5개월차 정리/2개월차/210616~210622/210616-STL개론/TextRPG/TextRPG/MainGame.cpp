#include "stdafx.h"
#include "MainGame.h"
#include "Player.h"
#include "Field.h"
#include "Shop.h"


CMainGame::CMainGame()
	: m_pShop(nullptr)
{
	m_pPlayer = nullptr;
	m_pField = nullptr;
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

	if (!m_pField)
	{
		m_pField = new CField;
		m_pField->Initialize();
	}

	if (!m_pShop)
	{
		m_pShop = new CShop;
		m_pShop->Initialize();
	}

	m_pField->Set_Player(m_pPlayer);
	m_pShop->Set_Player(m_pPlayer);

	return true;
}

void CMainGame::Progress()
{
	int		iSelect = 0;

	while (true)
	{
		system("cls");
		m_pPlayer->Render();
		cout << "1.던전 2.상점 3.저장 4.종료" << endl;
		cout << "=============================================" << endl;
		cout << "입력: ";
		cin >> iSelect;

		switch (iSelect)
		{
		case 1:
			m_pField->Progress();
			break;
		case 2:
			m_pShop->Progress();
			break;
		case 3:
			Save_Data();
			break;
		case 4:
			return;
		default:
			continue;
		}
	}
}

void CMainGame::Release()
{
	SAFE_DELETE(m_pField);
	SAFE_DELETE(m_pShop);

	SAFE_DELETE(m_pPlayer);
}

void CMainGame::Select_Player()
{
	int iSelect = 0;

	while (true)
	{
		system("cls");
		cout << "1.전사 2.마법사 3.도적 4.불러오기 5.종료" << endl;
		cout << "=============================================" << endl;
		cout << "입력: ";
		cin >> iSelect;

		switch (iSelect)
		{
		case 1:
			m_pPlayer = new CPlayer(INFO("전사", 10, 200));
			m_pPlayer->Initialize();
			return;
		case 2:
			m_pPlayer = new CPlayer(INFO("마법사", 100, 2000));
			m_pPlayer->Initialize();
			return;
		case 3:
			m_pPlayer = new CPlayer(INFO("도적", 1000, 20000));
			m_pPlayer->Initialize();
			return;
		case 4:
			Load_Data();
			return;
		case 5:
			return;
		default:
			continue;
		}
	}
}

void CMainGame::Save_Data()
{
	FILE*	fp = nullptr;

	errno_t err = fopen_s(&fp, "../Data/Save.dat", "wb");

	if (0 == err)
	{
		fwrite(&static_cast<CPlayer*>(m_pPlayer)->Save_Data(), sizeof(INFO), 1, fp);

		cout << "저장 성공!" << endl;
		fclose(fp);
	}
	else
		cout << "저장 실패!" << endl;

	system("pause");
}

void CMainGame::Load_Data()
{
	FILE*	fp = nullptr;

	errno_t err = fopen_s(&fp, "../Data/Save.dat", "rb");

	if (0 == err)
	{
		m_pPlayer = new CPlayer;
		INFO	tTemp = {};

		fread(&tTemp, sizeof(INFO), 1, fp);

		static_cast<CPlayer*>(m_pPlayer)->Load_Data(tTemp);

		cout << "불러오기 성공!" << endl;
		fclose(fp);
	}
	else
		cout << "불러오기 실패!" << endl;

	system("pause");
}
