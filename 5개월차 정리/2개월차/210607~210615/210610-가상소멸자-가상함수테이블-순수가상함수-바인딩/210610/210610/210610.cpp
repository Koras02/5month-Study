// 210610.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//

#include "stdafx.h"

class CObj
{
public:
	explicit CObj() { cout << "CObj 생성자" << endl; }
	virtual ~CObj() { cout << "CObj 소멸자" << endl; }
};
class CPlayer : public CObj
{
public:
	explicit CPlayer() { cout << "CPlayer 생성자" << endl; }
	virtual ~CPlayer() { cout << "CPlayer 소멸자" << endl; }
};

int main()
{
	////// 상속 관계에서 생성자와 소멸자 호출 순서

	//// 생성자 호출 순서
	//// 객체 생성 -> 메모리 할당 -> 부모 생성자 호출 -> 자식 생성자 호출

	//// 소멸자 호출 순서
	//// 자식 소멸자 호출 -> 부모 소멸자 호출 -> 메모리 반환 -> 객체 소멸

	//CPlayer		player;
	//cout << "==================" << endl;



	//// 객체 포인터를 사용할 경우
	//// 부모 생성자 - 자식 생성자 호출은 정상이다.
	//// 하지만, 소멸자 호출 순서가 이상해진다.
	//// -> 자식 소멸자가 호출되지 않는다!!!!!

	//CObj*	pObj = new CPlayer;
	//cout << "======================" << endl;

	//// delete 대상은 pObj이다.
	//// pObj의 타입은? CObj 타입이다.
	//// delete 대상이 CObj타입이니 CObj의 소멸 과정을 거쳐라!! 라고 말하는 것.
	//// -> 자식 소멸자는 호출되지 않는다.
	//delete pObj;


	// 소멸자에 virtual 키워드를 사용한다.
	// delete 대상 CObj의 소멸자를 없는 것 처럼 하면
	// 어딘가에 있을 소멸자를 찾아서 호출한다.
	// -> 어딘가에 있을 소멸자는 자식 소멸자이다.
	// 자식 소멸자를 찾아서 호출하려고 하면 CPlayer의 소멸자 호출 과정을 거치게 된다.


	CObj*	pObj = new CPlayer;
	cout << "======================" << endl;

	delete pObj;


    return 0;
}

