#include "stdafx.h"
#include "Monster.h"


CMonster::CMonster()
{
}

CMonster::CMonster(INFO& _rInfo)
	: CObj(_rInfo)
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
	cout << "�̸�: " << m_tInfo.szName << endl;
	cout << "���ݷ�: " << m_tInfo.iAtt << endl;
	cout << "ü��: " << m_tInfo.iHp << " / " << m_tInfo.iMaxHp << endl;
	cout << "=============================================" << endl;
}

void CMonster::Release()
{
}

int CMonster::Get_Exp()
{
	return m_tInfo.iMaxExp;
}