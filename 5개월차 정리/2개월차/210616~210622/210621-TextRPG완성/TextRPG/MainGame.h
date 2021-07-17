#pragma once

#ifndef __MAINGAME_H__
#define __MAINGAME_H__

class CObj;
class CField;
class CShop;
class CInven;
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
	CObj*		m_pPlayer;
	CField*		m_pField;
	CShop*		m_pShop;
	CInven*		m_pInven;
};


#endif // !__MAINGAME_H__
