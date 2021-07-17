#include "stdafx.h"

class CObj
{
public:
	CObj() {}
	CObj(int _a) : m_iA(_a) {}
	~CObj() {}

public:
	void Func()
	{
		cout << "m_iA: " << m_iA << endl;
	}

public:
	CObj& operator++()
	{
		m_iA += 1;

		return *this;
	}

	// �Ű� ������ �ްڴٴ� �ǹ̰� �ƴϴ�!
	// �ܼ��� ������ ������ �����ϴ� �뵵�� ����Ѵ�.
	CObj operator++(int)
	{
		CObj Temp(*this);

		m_iA += 1;

		return Temp;
	}

private:
	int		m_iA;
};

void main()
{
	// ���� ������ �����ε�
	// ++, --

	CObj	obj1(5);

	//(++obj1).Func();
	//obj1.Func();
	
	(obj1++).Func();
	obj1.Func();

}