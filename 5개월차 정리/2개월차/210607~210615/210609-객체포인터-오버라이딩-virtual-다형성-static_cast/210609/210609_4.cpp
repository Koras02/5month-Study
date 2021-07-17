#include "stdafx.h"

class CObj
{
public:
	virtual void Func()
	{
		cout << "CObj Func" << endl;
	}
};
class CPlayer : public CObj
{
public:
	virtual void Func()
	{
		cout << "CPlayer Func" << endl;
	}
};
class CSub : public CPlayer
{
public:
	virtual void Func()
	{
		cout << "CSub Func" << endl;
	}
};
class CMonster : public CObj
{
public:
	virtual void Func()
	{
		cout << "CMonster Func" << endl;
	}
};

void main()
{
	// 객체 포인터 + 오버라이딩 + virtual

	//CObj*	pObj = new CPlayer;
	//CObj*	pObj2 = new CMonster;

	//pObj->Func();
	//pObj2->Func();

	//delete pObj;
	//delete pObj2;


	//CPlayer*	pPlayer = new CSub;
	//pPlayer->Func();
	//delete pPlayer;


	//// 가상 함수가 아닐 경우
	//// 객체 타입 기준으로 함수를 호출한다.
	//CSub		Sub;
	//CObj*		pObj = &Sub;
	//CPlayer*	pPlayer = &Sub;
	//CSub*		pSub = &Sub;

	//pObj->Func();		// CObj Func
	//pPlayer->Func();	// CPlayer Func
	//pSub->Func();		// CSub Func
	//Sub.Func();			// CSub Func


	// 가상함수일 경우
	// 실 객체의 함수가 호출된다.
	CSub		Sub;
	CObj*		pObj = &Sub;
	CPlayer*	pPlayer = &Sub;
	CSub*		pSub = &Sub;

	pObj->Func();		// CSub Func
	pPlayer->Func();	// CSub Func
	pSub->Func();		// CSub Func
	Sub.Func();			// CSub Func


}