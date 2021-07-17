#include <iostream>

using namespace std;

void main()
{
	// 배열의 크기
	// 함수를 실행하면 stack 영역이 할당된다.
	// 이 때, stack의 크기는 컴파일러가 미리 계산해둔 만큼만 할당한다.
	// 하지만, 배열의 크기가 일반 변수일 경우 컴파일러가 stack의 크기를 계산할 수 없게 된다.
	// -> 배열이 크기는 상수로만 설정이 가능하다!

	//int		iSize = 0;
	//cin >> iSize;

	//int		iArr[iSize] = {};	// 불가능

	// 정적 배열
	// 컴파일 시점에 배열의 크기를 계산해야하는 것.
	const int iSize = 5;
	int		iArr[iSize] = {};
}