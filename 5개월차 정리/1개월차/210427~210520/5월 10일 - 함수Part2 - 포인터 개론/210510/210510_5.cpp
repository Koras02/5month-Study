#include <iostream>

using namespace std;

//void Func()
//{
//	cout << "��� ȣ��!" << endl;
//
//	Func();
//}

void Func(int _n)
{
	if (1 > _n)
		return;

	cout << "��� ȣ��!" << endl;

	Func(--_n);
}

void main()
{
	// ��� �Լ�
	// �ڱ� �ڽ��� �ٽ� ȣ���ϴ� �Լ�
	// ��� �Լ��� Ż�� ������ �ʼ��̴�!

	//Func();

	Func(3);
}