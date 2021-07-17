#include "stdafx.h"

class CObj
{
public:
	CObj(int _a) : m_iA(_a) {}

public:
	// 반환 값이 const형태로 반환이 된다.
	const int& Get_iA()
	{
		return m_iA;
	}

public:
	// const 멤버 함수
	// const 바로 뒤에는 정의부가 있다!
	// -> 정의부가 상수가 된다!
	// -> 정의부 내부에서는 값 변경을 하지 못한다.
	// 단, 지역 변수는 변경이 가능하다!
	void Const_Func() const
	{
		m_iA = 999;		// 불가능

		int		iA = 10;
		iA = 20;
	}
	// 일반 멤버 함수
	void Normal_Func()
	{
		m_iA = 999;
	}

private:
	int		m_iA;
};

void main()
{
	//// const와 멤버 함수

	//CObj	obj1(10);
	//cout << obj1.Get_iA() << endl;

	//obj1.Get_iA() = 1000;
	//cout << obj1.Get_iA() << endl;


	// const 멤버 함수는 함수명 뒤에 const 키워드가 붙는다.
}