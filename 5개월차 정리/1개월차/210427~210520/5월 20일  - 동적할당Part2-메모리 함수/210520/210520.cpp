#include <iostream>

using namespace std;

void main()
{
	// C++ 기반의 동적 할당

	// C기반의 동적할당은 함수를 이용했다!
	// C++기반의 동적할당은 연산자를 이용한다!

	// new
	// new 뒤에 동적할당할 크기, 읽는 형태(자료형)를 알려주어야 한다!
	/*
	new 자료형
	
	Heap 영역 어딘가에 자료형의 크기만큼 메모리를 할당한다!
	이후, 해당 자료형의 포인터형으로 주소를 반환해준다!
	*/

	//// Heap 영역 어딘가 int자료형의 크기(4bytes)만큼 메모리 공간을 할당한다.
	//// 이후, 할당한 메모리 공간의 시작 주소를 int*형으로 반환해준다.
	//new int;

	//// Heap 영역 어딘가 int자료형의 크기(4bytes)만큼 메모리 공간을 할당한다.
	//// 이후, 할당한 메모리 공간의 시작 주소를 int*형으로 반환해준다.
	//// 반환한 주소를 ptr 변수에 저장하겠다!
	//int*	ptr = new int;
	////int*	ptr = (int*)malloc(sizeof(int));


	//int*	ptr = new int;

	//cout << "ptr : " << ptr << endl;
	//cout << "*ptr: " << *ptr << endl;


	//// C++ 기반의 동적할당 해제
	//// delete
	//// delete 사용 후 주소 값을 다시 출력하면 00008123이 출력된다.
	//// 이 주소 또한 Dangling Pointer이다!!!!!
	//// 단, C기반의 Dangling Pointer는 다르게 사용할 경우 오류가 발생한다.

	//int*	ptr = new int;
	//cout << "ptr : " << ptr << endl;
	//cout << "*ptr: " << *ptr << endl;

	//cout << "----------------------------" << endl;

	//delete ptr;
	//ptr = nullptr;

	//cout << "ptr : " << ptr << endl;



	////// 동적할당과 동시에 초기화
	////// C기반의 초기화 : =
	////int		iA = 10;

	////// C++기반의 초기화 : ()
	////int		iB(20);


	//int*	ptr = new int(10);

	//cout << "ptr : " << ptr << endl;
	//cout << "*ptr: " << *ptr << endl;

	//delete ptr;
	//ptr = nullptr;



	//// new를 이용한 동적 배열 만들기!
	//// 동적 배열 또한 일반 배열 처럼 []를 사용한다!

	//int		iSize = 0;
	//cin >> iSize;

	//int* ptr = new int[iSize];

	//for (int i = 0; i < iSize; ++i)
	//	cout << ptr[i] << endl;


	// 동적 배열 해제

	int* ptr = new int[5];

	// ptr은 Heap 영역의 시작 주소를 가지지만
	// 하나만 할당 받은 것이 아니라 배열로 할당 받았기 때문에
	// 지울 때 또한 배열임을 알려주어야 한다.
	delete[] ptr;
	ptr = nullptr;

}