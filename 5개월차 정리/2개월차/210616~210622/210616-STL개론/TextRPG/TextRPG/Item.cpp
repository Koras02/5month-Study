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
	cout << "�̸�: " << m_tInfo.szName << endl;
	cout << "���ݷ�: +" << m_tInfo.iAtt << endl;
	cout << "ü��: +" << m_tInfo.iMaxHp << endl;
	cout << "���: " << m_tInfo.iGold << endl;
	cout << "=============================================" << endl;
}

void CItem::Release()
{
}
