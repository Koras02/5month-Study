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
}

void CItem::Initialize()
{
}

void CItem::Render()
{
	cout << "이름: " << m_tInfo.szName << endl;
	cout << "공격력: +" << m_tInfo.iAtt << endl;
	cout << "체력: +" << m_tInfo.iMaxHp << endl;
	cout << "골드: " << m_tInfo.iGold << endl;
	cout << "=============================================" << endl;
}

void CItem::Release()
{
}
