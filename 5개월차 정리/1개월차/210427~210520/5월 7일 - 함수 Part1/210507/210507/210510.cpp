#include <iostream>

using namespace std;

int		iA = 10;
int		iB = 20;
int		iRes = 0;

void Add()
{
	iRes = iA + iB;
}

void Func()
{
	cout << "Func: " << iRes << endl;
}

void main()
{
	// ���� ������ ���� ������ �̸��� ���� ���

	// �켱 �ش� stack�� ���� ������ �ִ��� Ȯ���Ѵ�.
	// ##. ���� ���
	// -> �ش� stack�� ���� ������ �����Ѵ�.

	// ##. ���� ���
	// -> Data ������ ������ �ִ��� Ȯ�� �� �����Ѵ�.

	cout << "main: " << iRes << endl;
	Func();

	cout << "======================" << endl;

	Add();
	cout << "main: " << iRes << endl;
	Func();

	cout << "======================" << endl;

	int		iRes = 0;

	iRes = 999;

	cout << "main: " << iRes << endl;
	Func();

}