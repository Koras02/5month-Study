// 210611.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
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

	// 연산자 오버로딩 구현
	// operator: 연산자 오버로딩을 사용하겠다! 라는 의미
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
	// 연산자 오버로딩
	// 함수 오버로딩의 규칙을 연산자에 적용하는 문법
	// 연산자의 이름을 동일하게 사용하지만 매개변수 정보를 다르게하여
	// 기존 연산자의 수행을하지 않고 새로운 기능을 수행하겠다.

	// 연산자 오버로딩은 연산자 기준 좌측 객체의 오버로딩을 수행한다.


	CObj	obj1(10, 20);
	CObj	obj2(100, 200);

	//// 사용자 정의 자료형이다!
	//// 컴파일러는 어떤 값을 더할지 알 수 없는 상황이다.
	//CObj	obj3 = obj1 + obj2;

	// 연산자 오버로딩을 구현한 경우
	// 연산자 기준 좌측(obj1)의 operator+를 호출한다.
	// operator+의 매개 변수로는 obj2가 전달 된다.
	CObj	obj3 = obj1 + obj2;
	CObj	obj4 = obj1.operator+(obj2);

	//obj1.Func();
	//obj2.Func();
	obj3.Func();





    return 0;
}

