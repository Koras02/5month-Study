#pragma once

#ifndef __FIELD_H__
#define __FIELD_H__

class CObj;
class CMonster;

class CField
{
public:
	CField();
	~CField();

public:
	void Initialize();
	void Progress();
	void Release();

public:
	void Set_Player(CObj* _pPlayer);

private:
	COMBAT Combat();

private:
	CObj*	m_pPlayer;
	CObj*	m_pMonster;
};


#endif // !__FIELD_H__
