#include "stdafx.h"

 
class CObj
{
public:
	void Func()
	{
		cout << "this:" << this << endl;
	}
};

void main()
{
	// this 포인터 
	// 자기 자신의 주소를 저장하고 있는 포인터
	CObj obj;
	
	cout << "&obj:" << &obj << endl;
	obj.Func();
}