#pragma once

#ifndef __MAINGAME_H__
#define __MAINGAME_H__

class CPlayer;
class CField;

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
	void Save_Data();
	void Load_Data();

private:
	CPlayer*	m_pPlayer;
	CField*		m_pField;
};


#endif // !__MAINGAME_H__
