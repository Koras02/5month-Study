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
	// 지역 변수와 전역 변수의 이름이 같을 경우

	// 우선 해당 stack에 지역 변수가 있는지 확인한다.
	// ##. 있을 경우
	// -> 해당 stack의 지역 변수에 접근한다.

	// ##. 없을 경우
	// -> Data 영역에 변수가 있는지 확인 후 접근한다.

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