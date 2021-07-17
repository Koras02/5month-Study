#pragma once

#ifndef __MONSTER_H__
#define __MONSTER_H__


class CMonster
{
public:
	CMonster();
	CMonster(char* _pName, int _iAtt, int _iMaxHp, int _iLevel);
	~CMonster();

public:
	void Initialize();
	void Render();
	void Release();

public:
	int Get_Att();
	int Get_Hp();
	int Get_Gold();
	int Get_Exp();

public:
	void Set_Hp(int _iAtt);

private:
	INFO	m_tInfo;
};


#endif // !__MONSTER_H__
