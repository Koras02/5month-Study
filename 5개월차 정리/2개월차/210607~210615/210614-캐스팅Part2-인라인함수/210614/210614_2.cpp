#include "stdafx.h"

class CObj
{
public:
	explicit CObj() {}
	virtual ~CObj() {}

public:
	void CObj_Func() {}
};
class CPlayer : public CObj
{
public:
	explicit CPlayer() {}
	virtual ~CPlayer() {}

public:
	void CPlayer_Func() {}
};

class CMonster : public CObj
{
public:
	explicit CMonster() {}
	virtual ~CMonster() {}

public:
	void CMonster_Func() {}
};

void Func(CObj* _pObj)
{
	if (dynamic_cast<CPlayer*>(_pObj))
		dynamic_cast<CPlayer*>(_pObj)->CPlayer_Func();

	if (dynamic_cast<CMonster*>(_pObj))
		dynamic_cast<CMonster*>(_pObj)->CMonster_Func();
}

void main()
{
	// ##2. dynamic_cast
	// 안전한 캐스팅

	//CObj*	pObj = new CPlayer;

	//pObj->CObj_Func();
	//dynamic_cast<CPlayer*>(pObj)->CPlayer_Func();

	//delete pObj;


	//// 안전한 캐스팅인 이유
	//// 캐스팅에 성공하면 주소 값을 반환
	//// 캐스팅에 실패하면 nullptr를 반환
	CObj*	pPlayer = new CPlayer;
	CObj*	pMonster = new CMonster;

	static_cast<CPlayer*>(pPlayer)->CPlayer_Func();
	static_cast<CPlayer*>(pMonster)->CPlayer_Func();		// 위험하다!!


	//// pPlayerTemp는 정상적인 캐스팅으로 주소 값이 반환된다.
	//// pMonsterTEmp는 비 정상적인 캐스팅으로 nullptr가 반환된다.
	//// -> if문으로 한번 확인하고 멤버에 접근하자!!
	CPlayer*	pPlayerTemp = dynamic_cast<CPlayer*>(pPlayer);
	CPlayer*	pMonsterTemp = dynamic_cast<CPlayer*>(pMonster);

	dynamic_cast<CPlayer*>(pPlayer)->CPlayer_Func();
	dynamic_cast<CPlayer*>(pMonster)->CPlayer_Func();

	delete pPlayer;
	delete pMonster;



	// dynamic_cast 사용 시 주의 사항
	// ##1. 객체 포인터간의 형 변환만 사용이 가능하다.
	// ##2. virtual 키워드가 단 하나 이상이라도 있어야 형 변환이 가능하다.
}