#include "stdafx.h"

class C콧물약
{
public:
	void Take()
	{
		cout << "콧물이 멈춥니다!" << endl;
	}
};

class C재채기약
{
public:
	void Take()
	{
		cout << "재채기가 멎습니다!" << endl;
	}
};

class C코뚫약
{
public:
	void Take()
	{
		cout << "코가 뻥 뚫립니다!" << endl;
	}
};

class C감기약
{
public:
	void Take()
	{
		콧물약.Take();
		재채기약.Take();
		코뚫약.Take();
	}

private:
	C콧물약		콧물약;
	C재채기약		재채기약;
	C코뚫약		코뚫약;
};

void main()
{
	// ##2. 캡슐화
	// 데이터와 데이터를 다루는 기능을 하나로 묶어 놓은 것.
	// 내부 구성보다는 기능작동이 중요하다!!!!!

	//// 만약, 약의 복용 순서가 있고 순서대로 먹지 않을 경우 문제가 발생한다면?
	//// 사용자는 약의 복용 순서를 암기해야하는 불편함이 있다!
	//// 이러한 불편함은 캡슐화를 통해 해결할 수 있다.

	//C콧물약		콧물약;
	//C재채기약		재채기약;
	//C코뚫약		코뚫약;

	//재채기약.Take();
	//코뚫약.Take();
	//콧물약.Take();


	C감기약		감기약;
	감기약.Take();


}