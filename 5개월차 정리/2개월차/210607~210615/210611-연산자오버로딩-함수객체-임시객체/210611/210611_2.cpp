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

	// ���� ������ ����
public:
	CObj& operator=(CObj& _rObj)
	{
		// void �ƴ�����
		// iA = 200; 
		// iB = 200;
		// iC = 200;
		// ���Ӵ��� ����
		// & �ٴ����� == ���� �ٲ�ϱ�
		// ����� ������ ������� �� �߻���
	
		m_iA = _rObj.m_iA;
		m_iB = _rObj.m_iB;

		return *this;
	}
	CObj operator+(CObj& _rObj)
	{
		CObj Temp(m_iA + _rObj.m_iA, m_iB + _rObj.m_iB);

		return Temp;
	}

private:
	int		m_iA;
	int		m_iB;

	char* m_iA;
	char* m_iB;
};

void main()
{
	// ����Ʈ ���� ������

	// ��ü ���� �� ���� �����ڸ� ����� ��쿡�� ���� �������� ȣ��!
	// ��ü ���� �� ���� �����ڸ� ����� ��쿡�� ���� �������� ȣ��!

	CObj	obj1(10, 100);		// ���� �ִ� ������ ȣ��

	CObj	obj2 = obj1;		// ����Ʈ ���� ������ ȣ��

	CObj	obj3;				// ���� ���� ������ ȣ��
	obj3 = obj1;				// ����Ʈ ���� ������ ȣ��

 

	// ����Ʈ ���� �������� ������
	// ���� ���� ���
	// -> �ܼ� ����

	// ������ ����� ���� ��� ���� ���� ������� ��������!
}