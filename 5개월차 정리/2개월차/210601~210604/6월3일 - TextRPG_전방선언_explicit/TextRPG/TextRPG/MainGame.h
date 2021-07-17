#pragma once

#ifndef __MAINGAME_H__
#define __MAINGAME_H__

#include "Player.h"
#include "Monster.h"

class CMainGame
{
public:
	CMainGame();
	~CMainGame();

public:
	bool Initialize();
	void Progress();
	void Release();

private:
	void Select_Player();
	COMBAT Combat();

private:
	CPlayer*	m_pPlayer;
	CMonster*	m_pMonster;
};


#endif // !__MAINGAME_H__
