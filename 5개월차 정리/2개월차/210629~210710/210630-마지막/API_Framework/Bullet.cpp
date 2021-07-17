#include "stdafx.h"
#include "Bullet.h"


CBullet::CBullet()
{
}


CBullet::~CBullet()
{
	Release();
}

void CBullet::Initalize()
{
	m_tInfo.iCX = 30;
	m_tInfo.iCY = 30;

	m_fSpeed = 10.f;
}

void CBullet::Update()
{
	m_tInfo.fY -= m_fSpeed;

	Update_Rect();
}

void CBullet::Render(HDC _DC)
{
	Ellipse(_DC, m_tRect.left, m_tRect.top, m_tRect.right, m_tRect.bottom);
}

void CBullet::Release()
{
}
