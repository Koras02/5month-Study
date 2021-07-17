#include <iostream>

using namespace std;

class CObj
{
public:
	// 가상 함수
	virtual void Func()
	{
		cout << "CObj Func" << endl;
	}

public:
	void CObj_Func()
	{

	}
};

void main()
{
	// ##3. virtual
	// 가상

	// 실 세계에서 가상이란?
	// 존재하지 않는 것을 존재하는 것처럼 느끼게 하는 것.

	// 프로그래밍에서 가상이란?
	// 존재하는 것을 존재하지 않는 것처럼 하여라!


	CObj*	pObj = new CObj;

	pObj->Func();

	pObj->CObj_Func();

	delete pObj;

}