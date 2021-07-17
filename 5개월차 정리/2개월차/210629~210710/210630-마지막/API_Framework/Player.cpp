#include "stdafx.h"
#include "Player.h"
#include "Bullet.h"


CPlayer::CPlayer()
	: m_pBullet(nullptr)
{
}


CPlayer::~CPlayer()
{
	Release();
}

void CPlayer::Initalize()
{
	m_tInfo.fX = 400.f;
	m_tInfo.fY = 300.f;
	m_tInfo.iCX = 100;
	m_tInfo.iCY = 100;

	m_fSpeed = 5.f;
}

void CPlayer::Update()
{
	if (GetAsyncKeyState(VK_LEFT) & 0x8000)
		m_tInfo.fX -= m_fSpeed;
	if (GetAsyncKeyState(VK_RIGHT) & 0x8000)
		m_tInfo.fX += m_fSpeed;
	if (GetAsyncKeyState(VK_UP) & 0x8000)
		m_tInfo.fY -= m_fSpeed;
	if (GetAsyncKeyState(VK_DOWN) & 0x8000)
		m_tInfo.fY += m_fSpeed;

	if (GetAsyncKeyState(VK_SPACE) & 0x8000)
		m_pBullet->emplace_back(Create_Bullet());

	Update_Rect();
}

void CPlayer::Render(HDC _DC)
{
	Rectangle(_DC, m_tRect.left, m_tRect.top, m_tRect.right, m_tRect.bottom);
}

void CPlayer::Release()
{
}

CObj* CPlayer::Create_Bullet()
{
	CObj* pObj = new CBullet;
	pObj->Initalize();
	pObj->Set_Pos(m_tInfo.fX, m_tInfo.fY);

	return pObj;
}
