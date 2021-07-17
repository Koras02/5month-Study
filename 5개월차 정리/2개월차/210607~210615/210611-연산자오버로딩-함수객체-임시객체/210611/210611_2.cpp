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

	// 대입 연산자 정의
public:
	CObj& operator=(CObj& _rObj)
	{
		// void 아닌이유
		// iA = 200; 
		// iB = 200;
		// iC = 200;
		// 연속대입 위해
		// & 붙는이유 == 내가 바뀌니까
		// 지우면 복사의 연산수행 이 발생함
	
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
	// 디폴트 대입 연산자

	// 객체 생성 시 대입 연산자를 사용할 경우에는 복사 생성자의 호출!
	// 객체 생성 후 대입 연산자를 사용할 경우에는 대입 연산자의 호출!

	CObj	obj1(10, 100);		// 인자 있는 생성자 호출

	CObj	obj2 = obj1;		// 디폴트 복사 생성자 호출

	CObj	obj3;				// 인자 없는 생성자 호출
	obj3 = obj1;				// 디폴트 대입 연산자 호출

 

	// 디폴트 대입 연산자의 문제점
	// 얕은 복사 방식
	// -> 단순 대입

	// 포인터 멤버가 있을 경우 깊은 복사 방식으로 구현하자!
}