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

// static 멤버 변수의 초기화
template <typename T>
T CObj<T>::m_A = 0;


void main()
{
	// 템플릿과 static 멤버 변수

	CObj<int>		objInt;
	objInt.Func();
	objInt.Func();
	objInt.Func();


	CObj<int>		objInt2;
	objInt2.Func();
	objInt2.Func();
	objInt2.Func();
	
	// CObj의 int형과 CObj의 float형은 서로 다른 클래스이다!!!
	// -> 해당 코드 라인을 번역할 때 원형을 만든다!!
	CObj<float>		objFloat;
	objFloat.Func();
	objFloat.Func();
	objFloat.Func();
}