#pragma once

#ifndef __MAINGAME_H__
#define __MAINGAME_H__

class CObj;
class CMainGame
{
public:
	CMainGame();
	~CMainGame();

public:
	void Initalize();
	void Update();
	void Render();
	void Release();

private:
	HDC		m_hDC;

	CObj*	m_pPlayer;

	list<CObj*>		m_listBullet;
};


#endif // !__MAINGAME_H__
