#pragma once

#ifndef __PLAYER_H__
#define __PLAYER_H__

#include "Obj.h"
class CPlayer : public CObj
{
public:
	CPlayer();
	CPlayer(char* _pName, int _iAtt, int _iMaxHp);
	~CPlayer();

public:
	virtual void Initialize();
	virtual void Render();
	virtual void Release();

public:
	void Combat_Win(int _iExp, int _iGold);
	void Combat_Lose();
	void Combat_Run();

public:
	INFO& Save_Data();
	void Load_Data(INFO& _rInfo);
};


#endif // !__PLAYER_H__
