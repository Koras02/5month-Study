#include "stdafx.h"

class CObj
{
public:
	CObj(int _a) : m_iA(_a) {}

public:
	// ��ȯ ���� const���·� ��ȯ�� �ȴ�.
	const int& Get_iA()
	{
		return m_iA;
	}

public:
	// const ��� �Լ�
	// const �ٷ� �ڿ��� ���Ǻΰ� �ִ�!
	// -> ���Ǻΰ� ����� �ȴ�!
	// -> ���Ǻ� ���ο����� �� ������ ���� ���Ѵ�.
	// ��, ���� ������ ������ �����ϴ�!
	void Const_Func() const
	{
		m_iA = 999;		// �Ұ���

		int		iA = 10;
		iA = 20;
	}
	// �Ϲ� ��� �Լ�
	void Normal_Func()
	{
		m_iA = 999;
	}

private:
	int		m_iA;
};

void main()
{
	//// const�� ��� �Լ�

	//CObj	obj1(10);
	//cout << obj1.Get_iA() << endl;

	//obj1.Get_iA() = 1000;
	//cout << obj1.Get_iA() << endl;


	// const ��� �Լ��� �Լ��� �ڿ� const Ű���尡 �ٴ´�.
}