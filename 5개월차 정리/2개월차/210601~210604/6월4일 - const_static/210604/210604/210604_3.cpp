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
	// const 객체
	// 객체 선언 시 const를 부여하는 것.
	// const 객체의 모든 멤버 변수들은 상수의 성질을 가지게 된다.
	// 단, 이니셜라이저를 이용한 초기화는 가능하다.

	CObj		obj1(10);
	const CObj	obj2(20);	// const 객체


	obj1.Const_Func();
	obj1.Normal_Func();

	// const 객체는 멤버 변수들이 상수의 성질을 가진다!
	// -> 멤버 변수의 값을 변경할 수 없다!!!
	// 하지만, 일반 멤버 함수는 멤버들의 값 변경을 할 수 있다!

	// const 객체는 const 멤버 함수만 호출이 가능하다!!!
	obj2.Const_Func();
	obj2.Normal_Func();		// 불가능

}