#include <iostream>

using namespace std;

int		iA = 10;
int		iB = 20;
int		iRes = 0;

void Add()
{
	iRes = iA + iB;
}

void main()
{
	// 전역 변수
	// 어떠한 중괄호 내부에도 포함되지 않는 변수
	// 프로그램 실행 시 메모리에 등록되고, 프로그램이 종료될 경우 메모리에서 소멸한다.
	// 또한, 어디서든 접근할 수 있다.

	// 전역 변수가 사용하기 편리하나 메모리적 측면에서는 불합리하다.

	Add();
	cout << iRes << endl;
}

