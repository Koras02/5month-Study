#include "stdafx.h"
#include "MainGame.h"
#include "Player.h"


CMainGame::CMainGame()
	: m_pPlayer(nullptr)
{
}


CMainGame::~CMainGame()
{
	Release();
}

void CMainGame::Initalize()
{
	m_hDC = GetDC(g_hWnd);

	if (!m_pPlayer)
	{
		m_pPlayer = new CPlayer;
		m_pPlayer->Initalize();
	}

	static_cast<CPlayer*>(m_pPlayer)->Set_Bullet(&m_listBullet);
}

void CMainGame::Update()
{
	m_pPlayer->Update();

	for (auto& pBullet : m_listBullet)
		pBullet->Update();
}

void CMainGame::Render()
{
	//Ellipse(m_hDC, 0, 0, WINCX, WINCY);
	Rectangle(m_hDC, 0, 0, WINCX, WINCY);

	m_pPlayer->Render(m_hDC);

	for (auto& pBullet : m_listBullet)
		pBullet->Render(m_hDC);
}

void CMainGame::Release()
{
	for_each(m_listBullet.begin(), m_listBullet.end(), Safe_Delete<CObj*>);
	m_listBullet.clear();

	SAFE_DELETE(m_pPlayer);

	ReleaseDC(g_hWnd, m_hDC);
}
