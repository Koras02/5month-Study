#include "stdafx.h"
#include "Item.h"


CItem::CItem()
{
}


CItem::CItem(INFO& _rInfo)
	: CObj(_rInfo)
{

}

CItem::~CItem()
{
	Release();
}

void CItem::Initialize()
{
	m_eState = STATE_UNEQUIP;
}

void CItem::Render()
{
	if (STATE_EQUIP == m_eState)
		cout << "<< 착용중 >>" << endl;
	cout << "이름: " << m_tInfo.szName << endl;
	cout << "공격력: +" << m_tInfo.iAtt << endl;
	cout << "체력: +" << m_tInfo.iMaxHp << endl;
	cout << "골드: " << m_tInfo.iGold << endl;
	cout << "=============================================" << endl;
}

void CItem::Release()
{
}
