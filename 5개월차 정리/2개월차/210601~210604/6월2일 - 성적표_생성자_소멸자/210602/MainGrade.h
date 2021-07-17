#pragma once

#ifndef __MAINGRADE_H__
#define __MAINGRADE_H__

class CMainGrade
{
public:
	CMainGrade();
	~CMainGrade();

public:
	void Initialize();
	void Release();

public:
	void Input_Grade();
	void Show_All();
	void Show_Search();

private:
	GRADE*		m_pGrade;
	int			m_iSize;
};

#endif // !__MAINGRADE_H__
