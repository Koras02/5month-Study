#pragma once

#ifndef __MONSTER_H__
#define __MONSTER_H__

#include "Obj.h"
class CMonster : public CObj
{
public:
	CMonster();
	CMonster(INFO& _rInfo);
	virtual ~CMonster();

public:
	virtual void Initialize();
	virtual void Render();
	virtual void Release();

public:
	int Get_Exp();
};


#endif // !__MONSTER_H__
