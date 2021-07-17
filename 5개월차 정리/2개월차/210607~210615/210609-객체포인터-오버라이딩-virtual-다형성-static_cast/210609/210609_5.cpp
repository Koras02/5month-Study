#include "stdafx.h"

class CObj
{
public:
	void CObj_Func() {}
};
class CPlayer : public CObj
{
public:
	void CPlayer_Func() {}
};

class CTest
{
public:
	void CTest_Func() {}
};

void main()
{
	//// 캐스팅
	//// 형 변환

	//// C 스타일 캐스팅
	//int		iA = (int)3.14f;


	// ##1. static_cast
	// ##2. dynamic_cast
	// ##3. const_cast
	// ##4. reinterpret_cast
	/*
	캐스팅<변환할 타입>(데이터)
	*/


	//// ##1. static_cast
	//// 정적 캐스팅
	//// -> 컴파일 시점에 캐스팅이 진행된다.
	//// -> 번역할 때 형 변환이 진행 된다.
	//// 논리적인 캐스팅이라고 부른다.
	//// -> 상속 유무를 따진다.

	//int		iA = static_cast<int>(3.14f);		// int		iA = 3;


	//// 객체 포인터를 사용할 경우 자식 객체의 고유 함수는 호출할 수 없다.
	//// 이 경우, 캐스팅(형 변환)을 이용하면 자식 객체의 고유 함수를 호출할 수 있다!
	//CObj*	pObj = new CPlayer;

	//pObj->CObj_Func();			// 가능
	//pObj->CPlayer_Func();		// 불가능

	//static_cast<CPlayer*>(pObj)->CPlayer_Func();		// 가능

	//delete pObj;



	//CObj*	pObj = new CPlayer;

	//// C스타일 캐스팅은 강제 형 변환이다!
	//// -> 아무런 연관 없는 형 변환도 허용한다!!!!
	//// 위험하다!
	//((CTest*)pObj)->CTest_Func();

	//// static_cast는 논리적으로 말이 되는지 안되는지 판단한다.
	//// CTest와 CObj/CPlayer는 서로 연관이 없는 클래스이다.
	//// 연관 없는 형 변환을 수행하기 때문에 오류가 발생한다.
	//static_cast<CTest*>(pObj)->CTest_Func();

	//delete pObj;



	// 논리적으로 상속 관계인지 판단하지만 부모와 자식 관계는 파악하지 않는다.
	CObj*	pObj = new CObj;
	static_cast<CPlayer*>(pObj)->CPlayer_Func();		// 컴파일은 가능하지만 위험한 상황이다.
	delete pObj;
	

}