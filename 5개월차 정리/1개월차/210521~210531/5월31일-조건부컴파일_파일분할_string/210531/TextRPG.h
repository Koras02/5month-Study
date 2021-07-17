#pragma once

#ifndef __TEXTRPG_H__
#define __TEXTRPG_H__


typedef struct tagInfo
{
	char	szName[16];
	int		iAtt;
	int		iMaxHp;
	int		iHp;
	int		iLevel;
	int		iExp;
	int		iMaxExp;
	int		iGold;
	bool	bCheck;
}INFO;


INFO* Create_Object(char* _pName, int _iAtt, int _iMaxHp, int _iLevel = 1, bool _bCheck = true);
INFO* Select_Player();
void Render(INFO* _pObj);
int Combat(INFO* _pPlayer, INFO* _pMonster);
void Progress(INFO* _pPlayer);
void Combat_Win(INFO* _pPlayer, int _iExp, int _iGold);
void Combat_Lose(INFO* _pPlayer);
void Combat_Run(INFO* _pPlayer);
void Save_Data(INFO* _pPlayer);
INFO* Load_Data();

////////////////////////////////////////////////////////////////////////////
void Create_Object(INFO** _pObj, char* _pName, int _iAtt, int _iMaxHp);
void Select_Player(INFO** _pObj);
////////////////////////////////////////////////////////////////////////////


#endif // !__TEXTRPG_H__
