#pragma once

#ifndef __PLAYER_H__
#define __PLAYER_H__


class CPlayer
{
public:
	CPlayer();
	CPlayer(char* _pName, int _iAtt, int _iMaxHp);
	~CPlayer();

public:
	void Initialize();
	void Render();
	void Release();

public:
	int Get_Att();
	int Get_Hp();

public:
	void Set_Hp(int _iAtt);

public:
	void Combat_Win(int _iExp, int _iGold);
	void Combat_Lose();
	void Combat_Run();

public:
	INFO& Save_Data();
	void Load_Data(INFO& _rInfo);

private:
	INFO	m_tInfo;
};


#endif // !__PLAYER_H__
