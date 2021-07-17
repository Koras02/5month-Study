// 210609.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//

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

int main()
{
	// ##1. 객체 포인터
	// 객체의 주소를 저장할 수 있는 포인터
	// 자기 자신의 주소 또는 자기 자신을 상속받는 객체의 주소를 저장할 수 있는 포인터


	//// 자기 자신의 주소
	//CObj*	pObj = new CObj;
	//delete pObj;


	//// 자기 자신을 상속받는 객체의 주소
	//CObj*	pPlayer = new CPlayer;
	//delete pObj;


	//// 객체 포인터의 멤버 접근
	//// 멤버에 접근을 시도할 경우 실 객체 기준으로 판단하지 않고,
	//// 객체 타입 기준으로 접근을 판단한다.

	//// 실 객체 : CObj
	//// 객체 타입 : CObj*
	//CObj*	pObj = new CObj;
	//pObj->CObj_Func();
	//delete pObj;

	//// 실 객체 : CPlayer
	//// 객체 타입: CObj*
	//CObj*	pPlayer = new CPlayer;
	//pPlayer->CObj_Func();
	//pPlayer->CPlayer_Func();		// 불가능
	//delete pPlayer;




	CPlayer*	pObj = new CObj;


    return 0;
}

