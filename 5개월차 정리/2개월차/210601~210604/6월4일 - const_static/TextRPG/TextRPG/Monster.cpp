#include "stdafx.h"
#include "Monster.h"


CMonster::CMonster()
{
}


CMonster::CMonster(char* _pName, int _iAtt, int _iMaxHp, int _iLevel)
{
	strcpy_s(m_tInfo.szName, 16, _pName);
	m_tInfo.iAtt = _iAtt;
	m_tInfo.iMaxHp = _iMaxHp;
	m_tInfo.iHp = _iMaxHp;
	m_tInfo.iLevel = _iLevel;
	m_tInfo.iExp = 0;
	m_tInfo.iMaxExp = 0;
	m_tInfo.iGold = 0;
}

CMonster::~CMonster()
{
	Release();
}

void CMonster::Initialize()
{
	m_tInfo.iMaxExp = rand() % 50 + ((m_tInfo.iLevel - 1) * 50);
	m_tInfo.iExp = m_tInfo.iMaxExp;
	m_tInfo.iGold = rand() % 50 + ((m_tInfo.iLevel - 1) * 50);
}

void CMonster::Render()
{
	cout << "이름: " << m_tInfo.szName << endl;
	cout << "공격력: " << m_tInfo.iAtt << endl;
	cout << "체력: " << m_tInfo.iHp << " / " << m_tInfo.iMaxHp << endl;
	cout << "=============================================" << endl;
}

void CMonster::Release()
{
}

int CMonster::Get_Att()
{
	return m_tInfo.iAtt;
}

int CMonster::Get_Hp()
{
	return m_tInfo.iHp;
}

int CMonster::Get_Gold()
{
	return m_tInfo.iGold;
}

int CMonster::Get_Exp()
{
	return m_tInfo.iMaxExp;
}

void CMonster::Set_Hp(int _iAtt)
{
	m_tInfo.iHp += _iAtt;
}
