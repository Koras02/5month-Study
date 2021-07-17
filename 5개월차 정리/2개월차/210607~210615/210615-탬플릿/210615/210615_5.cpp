#include "stdafx.h"

template <typename T>
class CObj
{
public:
	CObj() {}
	~CObj() {}

public:
	void Func()
	{
		m_A += 1;
		cout << "m_A: " << m_A << endl;
	}

private:
	static T	m_A;
};

// static ��� ������ �ʱ�ȭ
template <typename T>
T CObj<T>::m_A = 0;


void main()
{
	// ���ø��� static ��� ����

	CObj<int>		objInt;
	objInt.Func();
	objInt.Func();
	objInt.Func();


	CObj<int>		objInt2;
	objInt2.Func();
	objInt2.Func();
	objInt2.Func();
	
	// CObj�� int���� CObj�� float���� ���� �ٸ� Ŭ�����̴�!!!
	// -> �ش� �ڵ� ������ ������ �� ������ �����!!
	CObj<float>		objFloat;
	objFloat.Func();
	objFloat.Func();
	objFloat.Func();
}