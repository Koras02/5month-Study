#include "stdafx.h"

class CObj
{
public:
	CObj() {}
	CObj(int _a, int _b) : m_iA(_a), m_iB(_b) {}
	~CObj() {}

public:
	void Func()
	{
		cout << "m_iA: " << m_iA << endl;
		cout << "m_iB: " << m_iB << endl;
	}

public:
	CObj operator+(CObj& _rObj)
	{
		CObj Temp(m_iA + _rObj.m_iA, m_iB + _rObj.m_iB);

		return Temp;
	}
	CObj operator+(int _n)
	{
		CObj Temp(m_iA + _n, m_iB + _n);

		return Temp;
	}

private:
	int		m_iA;
	int		m_iB;
};

// ��ȯ ��Ģ
// & = ���� 
// �Ϲ� = ������ = �ϳ� ���ؼ� ���� 
// ���� ����!!!
CObj operator+(int _n, CObj& _rObj)
{
	return _rObj + _n;
}

void main()
{
	//CObj	obj1(10, 20);
	//CObj	obj2 = obj1 + 400;
	//CObj	obj3 = obj1.operator+(400);

	//// ������ �����ε��� ������ ���� ���� ��ü�� operator�� ȣ���Ѵ�!!!
	//// ������ ������ ���� ������ �������� ���� ������ �Ұ����ϴ�!
	//CObj	obj1(10, 20);
	//CObj	obj2 = 400 + obj1;		// �Ұ���


	// ��ȯ ��Ģ
	// ������ ������ �����ε��� �����Ѵ�!
	// ��, �Ű� ���� �� �ϳ��� ��ü �Ǵ� ��ü�� ���۷��� Ÿ���� �;� �Ѵ�.

	CObj	obj1(10, 20);
	CObj	obj2 = 400 + obj1;
	operator+(400, obj1);


	 
	 
}