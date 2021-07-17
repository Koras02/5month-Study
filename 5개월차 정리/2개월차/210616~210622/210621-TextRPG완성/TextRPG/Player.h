#pragma once

#ifndef __PLAYER_H__
#define __PLAYER_H__

#include "Obj.h"
class CPlayer : public CObj
{
public:
	CPlayer();
	CPlayer(INFO& _rInfo);
	virtual ~CPlayer();

public:
	virtual void Initialize();
	virtual void Render();
	virtual void Release();

public:
	void Combat_Win(int _iExp, int _iGold);
	void Combat_Lose();
	void Combat_Run();

public:
	void Equip_Item(CObj* _pItem);
	void UnEquip_Item(int _iIdx);
	void Item_Ability(int _iAtt, int _iMaxHp);
	void Item_Info();

public:
	INFO& Save_Data();
	void Load_Data(INFO& _rInfo);
	void Load_Item(CObj* _pItem, TYPE _eType) { m_pItem[_eType] = _pItem; }

private:
	CObj* m_pItem[TYPE_END];
};


#endif // !__PLAYER_H__
