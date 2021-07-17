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
};


#endif // !__ITEM_H__
