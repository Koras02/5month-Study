#pragma once

#ifndef __ITEM_H__
#define __ITEM_H__


#include "Obj.h"
class CItem : public CObj
{
public:
	CItem();
	CItem(INFO& _rInfo);
	virtual ~CItem();

public:
	virtual void Initialize() override;
	virtual void Render() override;
	virtual void Release() override;

public:
	void Set_Type(TYPE _eType) { m_eType = _eType; }
	void Set_State(STATE _eState) { m_eState = _eState; }

public:
	const INFO& Get_Info() const { return m_tInfo; }
	const TYPE& Get_Type() const { return m_eType; }
	const STATE& Get_State() const { return m_eState; }

private:
	TYPE	m_eType;
	STATE	m_eState;
};


#endif // !__ITEM_H__
