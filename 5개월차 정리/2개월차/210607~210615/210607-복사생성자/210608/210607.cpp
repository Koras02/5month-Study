#include "stdafx.h"

class CObj
{
public:
	CObj() {}
	CObj(int _a, int _b) : m_iA(_a), m_iB(_b) {}
	~CObj() {}

	// 복사 생성자
	// 복사 생성자에 인자로 레퍼런스 형이 오는 이유
	// 복사 생성자의 인자가 래퍼런스 가 아닌 경우
	// 매개 변수를 stack 영역에 할당한후 생성자로 받은 객체 값을 복사 받는다!
	// -> 복사 받는다 ! == 복사 생성자를 호출한다!!

public:
	CObj(CObj& _rObj)
		//: m_iA(_rObj.m_iA), m_iB(_rObj.m_iB)
	{
		// this 가 숨어 있다.
		this->m_iA = _rObj.m_iA; // 나한테 있는  받아온 m_iA 로 누구 에게 받아온 m_iA지 알려줌
		(*this).m_iB = _rObj.m_iB; 
	}

public:
	void Func()
	{
		cout << "m_iA:" << m_iA << endl;
		cout << "m_iB:" << m_iB << endl;
	}

private: 
	int m_iA;
	int m_iB;
};


int main()
{
	// 복사 생성자
	// 생성자의 객체를 넣어준것..
	// 생성자의 인자로 객체를 전달 받는다.
	// 전달 받은 객체의 맴버 값들이 생성하는 객체에 맴버한테 복사가 발생한다!!

	// 사용자가 복사생성자를 정의하지 않을 경우 
	// 컴파일러가 복사 생성자를 생성하여 호출한다.
	//-> 디폴트 복사 생성자
	
	CObj obj1(10, 20);
	obj1.Func(); // 10 20

	// CObj _rObj = Obj1;  Obj1을 복사
	// 객체가 복사가 발생 !! == 복사 생성자
	CObj obj2(obj1);
	obj2.Func(); // 10 20

	// 복사 생성자 호출 시점 3가지
	// ##1. 먼저 생성한 객체를 나중에 생성하는 객체에 생성자로 전달하는 경우 
	// ##2. 함수의 인자로 객체가 전달되는 경우 == 함수에 인자로 전달
	// ##3. 함수의 반환 타입으로 객체가 반환되는 경우  == return으로 객체를 반환 = stack영역을 넘어다닌다.
	
	// ##2.과 ##3 의 경우 stack 영역을 넘나들고 있다.
	// stack 영역을 넘어갈 떄는 복사가 발생한다.
	// 복사 대상이 객체이기 때문에 복사 생성자가 호출 되었다!!


	// int _a = 10;
	// int _b = 20;

	//Add(10, 20);

	// cout << 30 << endl;
	// 단순히 30이 위치에 복사된다.
    //cout << Add(10, 20) << endl;


	//// 복사
	//// int _a = iA;
	//// int _b = iB;
	//Add(iA, iB);
    

	// int _a = 10;
	//Add(10, 20);
	//return 0;

}

/*int Add(int _a, int _b)
{
	return _a + _b;
}*/

int Add(int _a, int _b)
{
	return 0;
}