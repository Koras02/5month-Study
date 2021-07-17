#pragma once

#ifndef __OBJ_H__
#define __OBJ_H__


class CObj
{
public:
	CObj();
	virtual ~CObj();

public:
	virtual void Initalize() = 0;
	virtual void Update() = 0;
	virtual void Render(HDC _DC) = 0;
	virtual void Release() = 0;

public:
	void Set_Pos(float _x, float _y) { m_tInfo.fX = _x; m_tInfo.fY = _y; }

protected:
	void Update_Rect();

protected:
	INFO	m_tInfo;
	RECT	m_tRect;

	float	m_fSpeed;
};


#endif // !__OBJ_H__
