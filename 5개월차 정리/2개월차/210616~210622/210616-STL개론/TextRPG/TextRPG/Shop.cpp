#include "stdafx.h"
#include "Shop.h"
#include "Item.h"


CShop::CShop()
	: m_pPlayer(nullptr)
{
	memset(m_pItemArr, 0, sizeof(m_pItemArr));
}


CShop::~CShop()
{
	Release();
}

void CShop::Initialize()
{
	CItem* pItem = new CItem(INFO("�ʱ� ��", 10, 0, 1, 100));
	pItem->Initialize();
	m_pItemArr[LEVEL_1][TYPE_SWORD] = pItem;

	pItem = new CItem(INFO("�ʱ� ��", 0, 50, 1, 100));
	pItem->Initialize();
	m_pItemArr[LEVEL_1][TYPE_ARMOR] = pItem;

	pItem = new CItem(INFO("�߱� ��", 100, 0, 1, 1000));
	pItem->Initialize();
	m_pItemArr[LEVEL_2][TYPE_SWORD] = pItem;

	pItem = new CItem(INFO("�߱� ��", 0, 500, 1, 1000));
	pItem->Initialize();
	m_pItemArr[LEVEL_2][TYPE_ARMOR] = pItem;

	pItem = new CItem(INFO("��� ��", 1000, 0, 1, 10000));
	pItem->Initialize();
	m_pItemArr[LEVEL_3][TYPE_SWORD] = pItem;

	pItem = new CItem(INFO("��� ��", 0, 5000, 1, 10000));
	pItem->Initialize();
	m_pItemArr[LEVEL_3][TYPE_ARMOR] = pItem;
}

void CShop::Progress()
{
	int		iSelect = 0;

	while (true)
	{
		system("cls");
		m_pPlayer->Render();
		cout << "1.�ʱ� 2.�߱� 3.��� 4.�Ǹ� 5.������" << endl;
		cout << "=============================================" << endl;
		cout << "�Է�: ";
		cin >> iSelect;

		switch (iSelect)
		{
		case 1:
			Render(LEVEL_1);
			break;
		case 2:
			Render(LEVEL_2);
			break;
		case 3:
			Render(LEVEL_3);
			break;
		case 4:
			break;
		case 5:
			return;
		default:
			continue;
		}
	}
}

void CShop::Render(LEVEL _eLevel)
{
	int		iSelect = 0;

	while (true)
	{
		system("cls");
		m_pPlayer->Render();
		m_pItemArr[_eLevel][TYPE_SWORD]->Render();
		m_pItemArr[_eLevel][TYPE_ARMOR]->Render();
		cout << "1.���ⱸ�� 2.������ 3.������" << endl;
		cout << "=============================================" << endl;
		cout << "�Է�: ";
		cin >> iSelect;

		switch (iSelect)
		{
		case 1:
			Buy_Item(m_pItemArr[_eLevel][TYPE_SWORD]);
			break;
		case 2:
			Buy_Item(m_pItemArr[_eLevel][TYPE_ARMOR]);
			break;
		case 3:
			return;
		default:
			break;
		}
	}
}

void CShop::Release()
{
	for (int i = 0; i < LEVEL_END; ++i)
	{
		for (int j = 0; j < TYPE_END; ++j)
			SAFE_DELETE(m_pItemArr[i][j]);
	}
}

void CShop::Buy_Item(CObj* _pItem)
{
	if (m_pPlayer->Get_Gold() >= _pItem->Get_Gold())
	{
		m_pPlayer->Set_Gold(-_pItem->Get_Gold());
		cout << "���� ����!" << endl;
	}
	else
		cout << "���� ����!" << endl;

	system("pause");
}
