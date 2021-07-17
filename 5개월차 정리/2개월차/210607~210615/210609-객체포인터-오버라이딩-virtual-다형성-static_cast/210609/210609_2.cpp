#include "stdafx.h"

class CObj
{
public:
	void Func() { cout << "CObj Func" << endl; }
};
class CPlayer : public CObj
{
public:
	void Func() { cout << "CPlayer Func" << endl; }
};

void main()
{
	// ##2. 오버라이딩
	// 상속 관계에서 사용하는 문법
	// 부모 클래스가 가진 멤버 함수를 자식 클래스에 그대로 재정의하는 문법
	// -> 반환 타입, 함수 이름, 매개변수 정보를 모두 동일하게 재정의하겠다!
	
	// 모호성을 없애주는 문법
	// 동일한 함수가 2개가 있지만 하나의 함수를 숨긴다.



	//// 객체 포인터 + 오버라이딩
	//// 객체 타입이 CObj* 타입일 경우 CObj의 Func함수가 호출된다.
	//// CPlayer::Func함수가 숨게된다.
	//CObj*	pObj = new CPlayer;
	//pObj->Func();		// CObj Func
	//delete pObj;

	// 객체 타입이 CPlayer* 타입일 경우 CPlayer의 Func함수가 호출된다.
	// CObj::Func함수가 숨게된다.
	CPlayer*	pObj = new CPlayer;
	pObj->Func();		// CPlayer Func
	delete pObj;


}