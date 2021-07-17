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

// 교환 법칙
// & = 참조 
// 일반 = 값복사 = 하나 더해서 대입 
// 차이 없다!!!
CObj operator+(int _n, CObj& _rObj)
{
	return _rObj + _n;
}

void main()
{
	//CObj	obj1(10, 20);
	//CObj	obj2 = obj1 + 400;
	//CObj	obj3 = obj1.operator+(400);

	//// 연산자 오버로딩은 연산자 기준 좌측 객체의 operator를 호출한다!!!
	//// 하지만 연산자 기준 좌측에 정수형이 오기 때문에 불가능하다!
	//CObj	obj1(10, 20);
	//CObj	obj2 = 400 + obj1;		// 불가능


	// 교환 법칙
	// 전역에 연산자 오버로딩을 구현한다!
	// 단, 매개 변수 중 하나는 객체 또는 객체의 레퍼런스 타입이 와야 한다.

	CObj	obj1(10, 20);
	CObj	obj2 = 400 + obj1;
	operator+(400, obj1);


	 
	 
}