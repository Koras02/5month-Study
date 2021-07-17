#include <iostream>

using namespace std;

#define TEST 3

#define AABBCC

void main()
{
	//	// 조건부 컴파일
	//	// 조건을 비교하여 컴파일 수행 여부를 결정한다.
	//	// 조건은 컴파일 이전에 주어야 한다!
	//	// -> 전처리 단계에서 조건을 비교하여 컴파일 수행 여부를 결정한다.
	//
	//	// ##1. #if ~ #endif
	//	// if문과 사용 방법이 동일하다!
	//
	//#if TEST > 3
	//	cout << "TEST는 3보다 크다!" << endl;
	//	cout << "TEST는 3보다 크다!" << endl;
	//	cout << "TEST는 3보다 크다!" << endl;
	//	cout << "TEST는 3보다 크다!" << endl;
	//#elif TEST < 3
	//	cout << "TEST는 3보다 작다!" << endl;
	//	cout << "TEST는 3보다 작다!" << endl;
	//	cout << "TEST는 3보다 작다!" << endl;
	//	cout << "TEST는 3보다 작다!" << endl;
	//#else
	//	cout << "TEST는 3과 같다!" << endl;
	//	cout << "TEST는 3과 같다!" << endl;
	//	cout << "TEST는 3과 같다!" << endl;
	//	cout << "TEST는 3과 같다!" << endl;
	//#endif


	////	// ##2. #ifdef
	////	// define으로 정의되어 있다면 컴파일을 수행한다!
	////	// -> 매크로로 설정되어 있다면 컴파일을 하겠다!
	////
	////#ifdef AABB
	////	cout << "AABB는 정의되어 있다!" << endl;
	////	cout << "AABB는 정의되어 있다!" << endl;
	////	cout << "AABB는 정의되어 있다!" << endl;
	////	cout << "AABB는 정의되어 있다!" << endl;
	////#endif
	//
	//	// 자주 사용할 매크로는 _DEBUG 가 있다.
	//
	//#ifdef _DEBUG
	//	cout << "치트 모드!" << endl;
	//#endif


		// ##3. ifndef
		// 매크로로 정의되어 있지 않을 경우 컴파일을 수행한다.
		// -> #ifdef과 반대의 의미로 작동된다.






}