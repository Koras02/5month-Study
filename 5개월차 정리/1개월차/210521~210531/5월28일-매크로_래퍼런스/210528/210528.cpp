#include <iostream>

using namespace std;

// 전처리기 단계서 PI라는 이름을 정의하고 해당 값으로는 3.14f로 설정한다!
#define		PI		3.14f
#define		PI2		3.14f;
#define		PI3

void main()
{
	// 매크로
	// 단순 치환 -> 단순히 바꾼다!

	// ##1. 매크로 상수
	/*
	#define		매크로이름		치환한 값

	전처리기 단계에서 매크로이름을 정의하고 해당 이름은 치환한값으로 설정해놓는다.
	*/


	//// 컴파일러가 해당 코드라인을 번역할 경우  PI가 작성된 코드는 3.14f로 단순 치환시킨다!
	//cout << PI << endl;		// == cout << 3.14f << endl;

	//// 매크로 상수에 세미콜론이 있을 경우 세미콜론까지 치환시킨다.
	//cout << PI2 << endl;		// == cout << 3.14f; << endl;

	// 매크로 이름만 정의해 놓을 경우 치환할 값은 없다!
	cout << PI3 << endl;		// == cout <<  << endl;

	int iA = NULL;
	int iB = 0;
	
}