#include <iostream>

using namespace std;

//void Func()
//{
//	cout << "재귀 호출!" << endl;
//
//	Func();
//}

void Func(int _n)
{
	if (1 > _n)
		return;

	cout << "재귀 호출!" << endl;

	Func(--_n);
}

void main()
{
	// 재귀 함수
	// 자기 자신을 다시 호출하는 함수
	// 재귀 함수는 탈출 조건이 필수이다!

	//Func();

	Func(3);
}