#include "stdafx.h"
#include "Obj.h"


CObj::CObj()
{
}

CObj::CObj(char * _pName, int _iAtt, int _iMaxHp)
	: m_tInfo(_pName, _iAtt, _iMaxHp)
{
}

CObj::CObj(char * _pName, int _iAtt, int _iMaxHp, int _iLevel)
	: m_tInfo(_pName, _iAtt, _iMaxHp, _iLevel)
{
}


CObj::~CObj()
{
	Release();
}

void CObj::Initialize()
{
}

void CObj::Render()
{
}

void CObj::Release()
{
}

int CObj::Get_Att()
{
	return m_tInfo.iAtt;
}

int CObj::Get_Hp()
{
	return m_tInfo.iHp;
}

void CObj::Set_Hp(int _iAtt)
{
	m_tInfo.iHp += _iAtt;
}
