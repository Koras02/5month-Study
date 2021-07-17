#include "stdafx.h"
#include "Obj.h"


CObj::CObj()
{
}

CObj::CObj(INFO& _rInfo)
	: m_tInfo(_rInfo)
{

}

CObj::~CObj()
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
