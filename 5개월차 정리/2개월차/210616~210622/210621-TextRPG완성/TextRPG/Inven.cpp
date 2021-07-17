#include "stdafx.h"
#include "Inven.h"
#include "Player.h"
#include "Item.h"


CInven::CInven()
	: m_iSize(5)
{
}


CInven::~CInven()
{
	Release();
}

void CInven::Initialize()
{
	m_vecInven.reserve(m_iSize);
}

void CInven::Prgoress()
{
	int		iSelect = 0;

	while (true)
	{
		system("cls");
		m_pPlayer->Render();
		cout << "1.장착 2.해제 3.나가기" << endl;
		cout << "=============================================" << endl;
		cout << "입력: ";
		cin >> iSelect;

		switch (iSelect)
		{
		case 1:
			Equip_Item();
			break;
		case 2:
			UnEquip_Item();
			break;
		case 3:
			return;
		default:
			continue;
		}
	}
}

void CInven::Render()
{
	int iCnt = 1;
	for (auto pItem : m_vecInven)
	{
		cout << iCnt++ << ") " << endl;
		pItem->Render();
	}
}

void CInven::Release()
{
	for_each(m_vecInven.begin(), m_vecInven.end(), Safe_Delete<CObj*>);
	m_vecInven.clear();
}

bool CInven::Buy_Item(CObj* _pItem)
{
	if (m_vecInven.size() >= m_iSize)
		return false;

	CItem*	pItem = static_cast<CItem*>(_pItem);
	CObj* pTemp = new CItem(*pItem);
	m_vecInven.push_back(pTemp);

	return true;
}

bool CInven::Sell_Item(int _iIdx, int* _pGold)
{
	if (m_vecInven.size() <= (size_t)_iIdx)
		return false;

	if (static_cast<CItem*>(m_vecInven[_iIdx])->Get_State() == STATE_EQUIP)
		return false;

	auto iter = m_vecInven.begin();
	iter += _iIdx;

	*_pGold = (*iter)->Get_Gold() >> 1;

	SAFE_DELETE(*iter);
	m_vecInven.erase(iter);

	return true;
}

void CInven::Equip_Item()
{
	int		iSelect = 0;

	while (true)
	{
		system("cls");
		m_pPlayer->Render();
		Render();
		cout << "0) 나가기" << endl;
		cout << "=============================================" << endl;
		cout << "입력: ";
		cin >> iSelect;
		--iSelect;

		if (0 > iSelect)
			return;

		if (m_vecInven.size() <= (size_t)iSelect)
			continue;

		static_cast<CPlayer*>(m_pPlayer)->Equip_Item(m_vecInven[iSelect]);
	}
}

void CInven::UnEquip_Item()
{
	int		iSelect = 0;

	while (true)
	{
		system("cls");
		m_pPlayer->Render();
		cout << "0) 나가기" << endl;
		cout << "=============================================" << endl;
		cout << "입력: ";
		cin >> iSelect;
		--iSelect;

		if (0 > iSelect)
			return;

		if (TYPE_END <= iSelect)
			continue;

		static_cast<CPlayer*>(m_pPlayer)->UnEquip_Item(iSelect);
	}
}

const INFO& CInven::Get_ItemInfo(size_t _iIdx)
{
	return static_cast<CItem*>(m_vecInven[_iIdx])->Get_Info();
}

const TYPE& CInven::Get_ItemType(size_t _iIdx)
{
	return static_cast<CItem*>(m_vecInven[_iIdx])->Get_Type();
}

const STATE& CInven::Get_ItemState(size_t _iIdx)
{
	return static_cast<CItem*>(m_vecInven[_iIdx])->Get_State();
}
