#include "stdafx.h"

class CObj
{
public:
	CObj(int _a) : m_iA(_a) {}

public:
	void Const_Func() const
	{
	}
	void Normal_Func()
	{
		m_iA = 1000;
	}

private:
	int		m_iA;
};

void main()
{
	// const ��ü
	// ��ü ���� �� const�� �ο��ϴ� ��.
	// const ��ü�� ��� ��� �������� ����� ������ ������ �ȴ�.
	// ��, �̴ϼȶ������� �̿��� �ʱ�ȭ�� �����ϴ�.

	CObj		obj1(10);
	const CObj	obj2(20);	// const ��ü


	obj1.Const_Func();
	obj1.Normal_Func();

	// const ��ü�� ��� �������� ����� ������ ������!
	// -> ��� ������ ���� ������ �� ����!!!
	// ������, �Ϲ� ��� �Լ��� ������� �� ������ �� �� �ִ�!

	// const ��ü�� const ��� �Լ��� ȣ���� �����ϴ�!!!
	obj2.Const_Func();
	obj2.Normal_Func();		// �Ұ���

}