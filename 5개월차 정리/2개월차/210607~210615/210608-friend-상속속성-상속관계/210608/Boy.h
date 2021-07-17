#pragma once

class CGirl;

#include "Girl.h"

class CBoy
{
public:
	CBoy();
	~CBoy();

public:
	void Girl_Info(CGirl* _pGirl);

private:
	int	m_iBoyA;

	//friend class CGirl;

	friend void CGirl::Boy_Info2(CBoy* _pBoy);
};

