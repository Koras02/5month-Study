#include "stdafx.h"
#include "Monster.h"


CMonster::CMonster()
{
}

// INFO m_tInfo(_pName, _iAtt, _iMaxHp, _iLevel)
CMonster::CMonster(char* _pName, int _iAtt, int _iMaxHp, int _iLevel)
	//: m_tInfo(_pName, _iAtt, _iMaxHp, _iLevel)
	: CObj(_pName, _iAtt, _iMaxHp, _iLevel)
{
	
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

int CMonster::Get_Gold()
{
	return m_tInfo.iGold;
}

int CMonster::Get_Exp()
{
	return m_tInfo.iMaxExp;
}