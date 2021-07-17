#pragma once

#ifndef __OBJ_H__
#define __OBJ_H__


class CObj
{
public:
	CObj();
	CObj(char* _pName, int _iAtt, int _iMaxHp);
	CObj(char* _pName, int _iAtt, int _iMaxHp, int _iLevel);
	~CObj();

public:
	virtual void Initialize();
	virtual void Render();
	virtual void Release();

public:
	int Get_Att();
	int Get_Hp();

public:
	void Set_Hp(int _iAtt);

protected:
	INFO	m_tInfo;
};


#endif // !__OBJ_H__
