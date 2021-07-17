#include "stdafx.h"
#include "Player.h"


CPlayer::CPlayer()
{
}


CPlayer::CPlayer(char* _pName, int _iAtt, int _iMaxHp)
{
	strcpy_s(m_tInfo.szName, 16, _pName);
	m_tInfo.iAtt = _iAtt;
	m_tInfo.iMaxHp = _iMaxHp;
	m_tInfo.iHp = _iMaxHp;
	m_tInfo.iLevel = 1;
	m_tInfo.iExp = 0;
	m_tInfo.iMaxExp = 100;
	m_tInfo.iGold = 0;
}

CPlayer::~CPlayer()
{
	Release();
}

void CPlayer::Initialize()
{
#ifdef _DEBUG
	m_tInfo.iGold = 10000;
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
}

void CPlayer::Release()
{
}

int CPlayer::Get_Att()
{
	return m_tInfo.iAtt;
}

int CPlayer::Get_Hp()
{
	return m_tInfo.iHp;
}

void CPlayer::Set_Hp(int _iAtt)
{
	m_tInfo.iHp += _iAtt;
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

INFO& CPlayer::Save_Data()
{
	return m_tInfo;
}

void CPlayer::Load_Data(INFO& _rInfo)
{
	memcpy(&m_tInfo, &_rInfo, sizeof(INFO));
}
