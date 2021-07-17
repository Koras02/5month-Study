#include <iostream>

using namespace std;

void main()
{
	// 레퍼런스
	// 자료형이다!
	// 포인터와 비슷하게 원본을 참조할 수 있는 자료형

	// 포인터
	// 간접 참조
	// -> 주소 값을 토대로 원본에 찾아가기 때문에

	//// 레퍼런스
	//// 직접 참조
	//// -> 변수에 별명을 부여해서 사용한다.

	///*
	//자료형	&	변수명
	//*/

	//int		iA = 10;

	//// ptr변수는 iA의 주소값을 가진다!
	//int*	ptr = &iA;

	//// r은 iA가 할당된 공간에 새로운 별명을 부여한다!
	//int&	r = iA;


	//cout << "iA: " << iA << endl;
	//cout << "ptr: " << ptr << endl;
	//cout << "r: " << r << endl;
	//cout << "-----------------------" << endl;

	////iA = 999;
	//r = 900;

	//cout << "iA: " << iA << endl;
	//cout << "ptr: " << ptr << endl;
	//cout << "r: " << r << endl;


	// 레퍼런스 사용 시 주의 사항
	// 한번 참조한 메모리는 변경이 불가능하다!!!
	// -> 선언과 동시에 초기화를 진행해야만 한다!
	int		iA = 10;
	int		iB = 20;

	int&	r = iA;

	r = 100;

	// 참조 메모리 변경이 아니다!!!
	// 단순히 iA = iB와 같은 의미이다!!
	r = iB;		
	r = 200;

	cout << "iA: " << iA << endl;
	cout << "iB: " << iB << endl;

}