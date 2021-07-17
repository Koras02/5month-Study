#include "stdafx.h"

class CObj
{
public:
	explicit CObj() {}
	virtual ~CObj() {}

public:
	virtual void Func() {}
	virtual void Render() {}
};

class CPlayer : public CObj
{
public:
	explicit CPlayer() {}
	virtual ~CPlayer() {}

public:
	virtual void Func() {}
	virtual void Render() {}
};

void main()
{
	// 가상 함수 작동 원리
	
	// 가상 함수 테이블
	// 배열이다. 함수의 주소를 저장하고 있는 포인터 배열

	// virtual 키워드가 단 하나라도 있는 클래스를 컴파일러가 번역할 때
	// 가상 함수 테이블을 만든다.
	// 이후, 가상 함수 테이블에는 가상 함수들의 주소를 저장한다.


	// 가상 함수 포인터
	// 포인터 변수

	// virtual 키워드가 단 하나라도 있는 클래스를 컴파일러가 번역할 때
	// 가상 함수 포인터를 멤버로 추가 시킨다.
	// 가상 함수 포인터는 가상 함수 테이블의 주소를 참조하고 있다!


	// 가상 함수의 작동 원리
	// 객체 포인터에서 가상 함수를 호출할 경우
	// 객체 타입 기준으로 판단하지 않고
	// 가상 함수 포인터가 참조하고 있는 가상 함수 테이블의 함수를 호출하게 된다.



	// 가상 함수 포인터의 존재

	//// 멤버가 없다해도 중복된 주소를 방지하기 위해 최소 1byte의 크기를 가진다.
	//cout << sizeof(CPlayer) << endl;		// 1byte

	//// virtual 키워드가 있기 때문에 가상 함수 포인터가 추가되었다!!!
	//cout << sizeof(CPlayer) << endl;		// 4bytes


	CObj*	pObj = new CObj;
	CObj*	pPlayer = new CPlayer;

	int		iA = 0;

	delete pObj;
	delete pPlayer;



}