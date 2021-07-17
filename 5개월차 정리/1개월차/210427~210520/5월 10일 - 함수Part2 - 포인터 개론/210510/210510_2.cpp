#include <iostream>

using namespace std;

// 선언부
// main함수한테 이런 종류의 함수가 있다고 알려주는 곳.

// -> main함수한테 Add라는 이름의 함수가 존재한다고 알려준다.
// -> Add함수는 int형을 2개 받으며, int형을 반환한다.
int Add(int _a, int _b);

void main()
{
	cout << Add(10, 20) << endl;

	// 선언부와 정의부

	// 선언부란?
	// 나 있어요~
	// 함수의 반환 타입, 함수이름, 매개변수 정보만 알려주는 곳.
	// -> 선언부 밑에서 함수를 사용할 경우 함수는 어떤 정보가 필요한지, 
	// -> 어떤 것을 반환하는지 파악만 시킬 수 있다.

	// 정의부란?
	// 함수의 몸체가 있는 곳.(함수의 반환타입, 함수이름, 매개변수 정보, 코드 블록)
	// 정의부가 있어야만 실제 함수를 사용할 수 있다.
}


// 정의부
// 정의부에 함수 몸체(코드 블록)이 있어야만 실제 함수를 사용할 수 있다.
int Add(int _a, int _b)
{
	return _a + _b;
}