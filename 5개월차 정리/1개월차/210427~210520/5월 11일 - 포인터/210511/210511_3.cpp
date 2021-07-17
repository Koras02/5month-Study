#include <iostream>

using namespace std;

void main()
{
	// const와 포인터
	// 포인터도 자료형이므로 const를 이용한 상수화가 가능하다.
	// 단, const의 위치에 따라 상수화가 되는 부분이 다르다!
	// -> const는 바로 뒤에 있는 것을 상수화 시킨다!

	//// ##1. const가 에스크리터 앞에 붙는 경우
	//// const 뒤에 int가 있다!
	//// -> 역참조를 통한 원본 데이터 변경이 불가능하다!
	//int		iA = 10, iB = 20;
	//const int*	ptr = &iA;

	//*ptr = 999;		// 불가능
	//ptr = &iB;		// 가능


	//// ##2. const가 에스크리터 뒤에 붙는 경우
	//// const 뒤에 변수가 있다!
	//// -> 변수가 상수가 된다! -> 주소가 상수가 된다!
	//// -> 다른 주소를 참조할 수 있도록 변경이 불가능하다!
	//int		iA = 10, iB = 20;
	//int* const	ptr = &iA;

	//*ptr = 999;		// 가능
	//ptr = &iB;		// 불가능



	int		iA = 1;

	int*	ptr1 = &iA;
	int*	ptr2 = ptr1;

	++(*ptr1);
	++(*ptr2);

	cout << "iA: " << iA << endl;








}