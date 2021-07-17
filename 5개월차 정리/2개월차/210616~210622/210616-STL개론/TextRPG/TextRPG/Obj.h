#pragma once

#ifndef __OBJ_H__
#define __OBJ_H__


class CObj
{
public:
	CObj();
	CObj(INFO& _rInfo);
	virtual ~CObj();

public:
	virtual void Initialize() = 0;
	virtual void Render() = 0;
	virtual void Release() = 0;

public:
	int Get_Att();
	int Get_Hp();
	int Get_Gold() { return m_tInfo.iGold; }

public:
	void Set_Hp(int _iAtt);
	void Set_Gold(int _iGold) { m_tInfo.iGold += _iGold; }

protected:
	INFO	m_tInfo;
};


#endif // !__OBJ_H__
