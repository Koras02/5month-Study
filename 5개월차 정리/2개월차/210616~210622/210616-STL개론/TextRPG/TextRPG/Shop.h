#pragma once

#ifndef __SHOP_H__
#define __SHOP_H__

class CObj;
class CShop
{
public:
	CShop();
	~CShop();

public:
	void Initialize();
	void Progress();
	void Render(LEVEL _eLevel);
	void Release();

public:
	void Buy_Item(CObj* _pItem);

public:
	void Set_Player(CObj* _pPlayer) { m_pPlayer = _pPlayer; }

private:
	CObj*	m_pPlayer;
	CObj*	m_pItemArr[LEVEL_END][TYPE_END];
};


#endif // !__SHOP_H__
