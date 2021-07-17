#include "stdafx.h"
#include "MainGame.h"
#include "Player.h"
#include "Field.h"
#include "Shop.h"
#include "Inven.h"
#include "Item.h"


CMainGame::CMainGame()
	: m_pShop(nullptr), m_pInven(nullptr)
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

	if (!m_pInven)
	{
		m_pInven = new CInven;
		m_pInven->Initialize();
	}

	m_pField->Set_Player(m_pPlayer);
	m_pShop->Set_Player(m_pPlayer);
	m_pInven->Set_Player(m_pPlayer);

	m_pShop->Set_Inven(m_pInven);

	return true;
}

void CMainGame::Progress()
{
	int		iSelect = 0;

	while (true)
	{
		system("cls");
		m_pPlayer->Render();
		cout << "1.던전 2.인벤 3.상점 4.저장 5.종료" << endl;
		cout << "=============================================" << endl;
		cout << "입력: ";
		cin >> iSelect;

		switch (iSelect)
		{
		case 1:
			m_pField->Progress();
			break;
		case 2:
			m_pInven->Prgoress();
			break;
		case 3:
			m_pShop->Progress();
			break;
		case 4:
			Save_Data();
			break;
		case 5:
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
	SAFE_DELETE(m_pInven);

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
		// 반환타입에 레퍼런스 붙냐 안붙냐 차이
		//static_cast<CPlayer*> (m_pPlayer)->Save_Data();
		fwrite(&static_cast<CPlayer*>(m_pPlayer)->Save_Data(), sizeof(INFO), 1, fp);


		for (size_t i = 0; i < m_pInven->Get_InvenSize(); ++i)
		{
			fwrite(&m_pInven->Get_ItemInfo(i), sizeof(INFO), 1, fp);
			fwrite(&m_pInven->Get_ItemType(i), sizeof(TYPE), 1, fp);
			fwrite(&m_pInven->Get_ItemState(i), sizeof(STATE), 1, fp);
		}

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
		m_pPlayer->Initialize();

		m_pInven = new CInven;
		m_pInven->Initialize();

		INFO	tTemp = {};
		TYPE	eType = TYPE_END;
		STATE	eState = STATE_END;

		fread(&tTemp, sizeof(INFO), 1, fp);
		static_cast<CPlayer*>(m_pPlayer)->Load_Data(tTemp);

		while (true)
		{
			fread(&tTemp, sizeof(INFO), 1, fp);
			fread(&eType, sizeof(TYPE), 1, fp);
			int iCnt = fread(&eState, sizeof(STATE), 1, fp);

			if (1 > iCnt)
				break;

			CItem* pItem = new CItem(tTemp);
			pItem->Initialize();

			pItem->Set_Type(eType);
			pItem->Set_State(eState);

			m_pInven->Load_Item(pItem);

			if (STATE_EQUIP == eState)
				static_cast<CPlayer*>(m_pPlayer)->Load_Item(pItem, eType);
		}

		cout << "불러오기 성공!" << endl;
		fclose(fp);
	}
	else
		cout << "불러오기 실패!" << endl;

	system("pause");
}
