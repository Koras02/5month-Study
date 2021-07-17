#pragma once

#ifndef __PLAYER_H__
#define __PLAYER_H__

#include "Obj.h"
class CPlayer : public CObj
{
public:
	CPlayer();
	virtual ~CPlayer();

public:
	virtual void Initalize() override;
	virtual void Update() override;
	virtual void Render(HDC _DC) override;
	virtual void Release() override;

public:
	void Set_Bullet(list<CObj*>* _pBullet) { m_pBullet = _pBullet; }

private:
	CObj* Create_Bullet();

private:
	list<CObj*>*	m_pBullet;
};


#endif // !__PLAYER_H__

