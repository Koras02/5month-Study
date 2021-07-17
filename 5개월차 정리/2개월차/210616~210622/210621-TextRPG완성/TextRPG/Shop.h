#pragma once

#ifndef __SHOP_H__
#define __SHOP_H__

class CObj;
class CInven;
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
	void Sell_Item();

public:
	void Set_Player(CObj* _pPlayer) { m_pPlayer = _pPlayer; }
	void Set_Inven(CInven* _pInven) { m_pInven = _pInven; }

private:
	CObj*	m_pPlayer;
	CObj*	m_pItemArr[LEVEL_END][TYPE_END];
	CInven*	m_pInven;
};


#endif // !__SHOP_H__
