#include "stdafx.h"
#include "Player.h"
#include "Item.h"


CPlayer::CPlayer()
{
}

CPlayer::CPlayer(INFO& _rInfo)
	: CObj(_rInfo)
{

}

CPlayer::~CPlayer()
{
	Release();
}

void CPlayer::Initialize()
{
	memset(m_pItem, 0, sizeof(m_pItem));

#ifdef _DEBUG
	
	m_tInfo.iGold = 1000000;

#endif // _DEBUG
}

void CPlayer::Render()
{
	cout << "이름: " << m_tInfo.szName << endl;
	cout << "공격력: " << m_tInfo.iAtt << endl;
	cout << "체력: " << m_tInfo.iHp << " / " << m_tInfo.iMaxHp << endl;
	cout << "레벨: " << m_tInfo.iLevel << "  ( " << m_tInfo.iExp << " / " << m_tInfo.iMaxExp << " )" << endl;
	cout << "골드: " << m_tInfo.iGold << endl;
	cout << "=============================================" << endl;
	Item_Info();
}

void CPlayer::Release()
{
}

void CPlayer::Combat_Win(int _iExp, int _iGold)
{
	m_tInfo.iExp += _iExp;
	m_tInfo.iGold += _iGold;

	if (m_tInfo.iExp >= m_tInfo.iMaxExp)
	{
		++m_tInfo.iLevel;
		m_tInfo.iExp -= m_tInfo.iMaxExp;
		m_tInfo.iMaxExp += 50;
		m_tInfo.iAtt += 10;
		m_tInfo.iMaxHp += 50;
		m_tInfo.iHp = m_tInfo.iMaxHp;
	}
}

void CPlayer::Combat_Lose()
{
	m_tInfo.iHp = m_tInfo.iMaxHp;

	m_tInfo.iGold >>= 1;
	m_tInfo.iExp >>= 1;
}

void CPlayer::Combat_Run()
{
	m_tInfo.iGold = 0;
	m_tInfo.iExp = 0;
}

void CPlayer::Equip_Item(CObj* _pItem)
{
	TYPE	eType = static_cast<CItem*>(_pItem)->Get_Type();

	if (m_pItem[eType])
	{
		Item_Ability(-m_pItem[eType]->Get_Att(), -m_pItem[eType]->Get_Hp());
		static_cast<CItem*>(m_pItem[eType])->Set_State(STATE_UNEQUIP);
		m_pItem[eType] = nullptr;
	}

	Item_Ability(_pItem->Get_Att(), _pItem->Get_Hp());
	static_cast<CItem*>(_pItem)->Set_State(STATE_EQUIP);
	m_pItem[eType] = _pItem;
}

void CPlayer::UnEquip_Item(int _iIdx)
{
	if (m_pItem[_iIdx])
	{
		Item_Ability(-m_pItem[_iIdx]->Get_Att(), -m_pItem[_iIdx]->Get_Hp());
		static_cast<CItem*>(m_pItem[_iIdx])->Set_State(STATE_UNEQUIP);
		m_pItem[_iIdx] = nullptr;
	}
}

void CPlayer::Item_Ability(int _iAtt, int _iMaxHp)
{
	m_tInfo.iAtt += _iAtt;
	m_tInfo.iMaxHp += _iMaxHp;
}

void CPlayer::Item_Info()
{
	for (int i = 0; i < TYPE_END; ++i)
	{
		if (m_pItem[i])
		{
			cout << i + 1 << ") " << m_pItem[i]->Get_Name() << endl;
			cout << "=============================================" << endl;
		}
	}
}

INFO& CPlayer::Save_Data()
{
	return m_tInfo;
}

void CPlayer::Load_Data(INFO& _rInfo)
{
	memcpy(&m_tInfo, &_rInfo, sizeof(INFO));
}
