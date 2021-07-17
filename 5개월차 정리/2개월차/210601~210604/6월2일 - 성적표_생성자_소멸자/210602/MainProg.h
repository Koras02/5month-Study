#pragma once

#ifndef __MAINPROG_H__
#define __MAINPROG_H__

#include "MainGrade.h"

class CMainProg
{
public:
	CMainProg();
	~CMainProg();

public:
	void Initialize();
	void Progress();
	void Release();

private:
	CMainGrade*		m_pGrade;
};

#endif // !__MAINPROG_H__
