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
	// this ������ 
	// �ڱ� �ڽ��� �ּҸ� �����ϰ� �ִ� ������
	CObj obj;
	
	cout << "&obj:" << &obj << endl;
	obj.Func();
}