#pragma once

#ifndef __FIELD_H__
#define __FIELD_H__

class CPlayer;
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
	void Set_Player(CPlayer* _pPlayer);

private:
	COMBAT Combat();

private:
	CPlayer*	m_pPlayer;
	CMonster*	m_pMonster;
};


#endif // !__FIELD_H__
