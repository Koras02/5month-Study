#pragma once

class CBoy;
class CGirl
{
public:
	CGirl();
	~CGirl();

public:
	void Boy_Info(CBoy* _pBoy);
	void Boy_Info2(CBoy* _pBoy);

private:
	int m_iGirlA;
};

