#include "stdafx.h"

class CObj
{
public:
	CObj() {}
	CObj(int _a) : m_iA(_a) {}
	~CObj() {}

public:
	void Func()
	{
		cout << "m_iA: " << m_iA << endl;
	}

public:
	CObj& operator++()
	{
		m_iA += 1;

		return *this;
	}

	// 매개 변수를 받겠다는 의미가 아니다!
	// 단순히 전위와 후위를 구분하는 용도로 사용한다.
	CObj operator++(int)
	{
		CObj Temp(*this);

		m_iA += 1;

		return Temp;
	}

private:
	int		m_iA;
};

void main()
{
	// 단항 연산자 오버로딩
	// ++, --

	CObj	obj1(5);

	//(++obj1).Func();
	//obj1.Func();
	
	(obj1++).Func();
	obj1.Func();

}