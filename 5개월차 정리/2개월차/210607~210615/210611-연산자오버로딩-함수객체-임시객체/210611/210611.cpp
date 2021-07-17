// 210611.cpp : �ܼ� ���� ���α׷��� ���� �������� �����մϴ�.
//

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

	// ������ �����ε� ����
	// operator: ������ �����ε��� ����ϰڴ�! ��� �ǹ�
public:
	CObj operator+(CObj& _rObj)
	{
		return CObj(m_iA + _rObj.m_iA, m_iB + _rObj.m_iB);


		CObj Temp(m_iA + _rObj.m_iA, m_iB + _rObj.m_iB);

		return Temp;
	}

private:
	int		m_iA;
	int		m_iB;
};

int main()
{
	// ������ �����ε�
	// �Լ� �����ε��� ��Ģ�� �����ڿ� �����ϴ� ����
	// �������� �̸��� �����ϰ� ��������� �Ű����� ������ �ٸ����Ͽ�
	// ���� �������� ���������� �ʰ� ���ο� ����� �����ϰڴ�.

	// ������ �����ε��� ������ ���� ���� ��ü�� �����ε��� �����Ѵ�.


	CObj	obj1(10, 20);
	CObj	obj2(100, 200);

	//// ����� ���� �ڷ����̴�!
	//// �����Ϸ��� � ���� ������ �� �� ���� ��Ȳ�̴�.
	//CObj	obj3 = obj1 + obj2;

	// ������ �����ε��� ������ ���
	// ������ ���� ����(obj1)�� operator+�� ȣ���Ѵ�.
	// operator+�� �Ű� �����δ� obj2�� ���� �ȴ�.
	CObj	obj3 = obj1 + obj2;
	CObj	obj4 = obj1.operator+(obj2);

	//obj1.Func();
	//obj2.Func();
	obj3.Func();





    return 0;
}

