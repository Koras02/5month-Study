#include <iostream>

using namespace std;

void main()
{
	// 메모리 함수
	// 메모리 단위로 작업을 수행하는 함수

	// ##1. memset()
	// 초기화 함수
	// -> 메모리에 직접 접근하여 초기화를 수행한다.
	//// memset(#1, #2, #3)
	//// #1 : 초기화할 메모리의 시작 주소를 전달
	//// #2 : 초기화할 값을 전달
	//// #3 : 시작 주소부터 몇 byte 작업할 것인지 크기를 전달

	//int		iA = 0;
	//int		iB;
	//memset(&iB, 0, sizeof(iB));
	//cout << "iB: " << iB << endl;


	//// memset의 활용
	//int*	ptr = new int[10];

	//memset(ptr, 0, sizeof(int) * 10);
	////for (int i = 0; i < 10; ++i)
	////	ptr[i] = 0;

	//for (int i = 0; i < 10; ++i)
	//	cout << ptr[i] << endl;


	//// memset의 주의 사항
	//// 1byte 단위로 초기활르 수행한다!!!!
	//// -> 0 초기화 외에는 엉뚱한 값이 나올 수 있다!!!
	//int		iA = 1;
	//cout << "iA: " << iA << endl;

 


	////// ##2. memcpy()
	////// 메모리 대 메모리 단위로 복사를 수행하는 함수
	////// memcpy(#1, #2, #3)
	////// #1 : 복사 받을 메모리의 시작 주소를 전달
	////// #2 : 복사 할 메모리의 시작 주소를 전달
	////// #3 : 최대 몇 byte 작업할 것인지 크기를 전달
	////// -> #2에 있는 데이터를 #1에 복사한다.

	////int		iDst = 0, iSrc = 10;

	////iDst = iSrc;
	////memcpy(&iDst, &iSrc, sizeof(int));


	//int		iDst[5] = {};
	//int		iSrc[5] = { 1, 2, 3, 4, 5 };

	//memcpy(iDst, iSrc, sizeof(iDst));

	//for (int i = 0; i < 5; ++i)
	//	iDst[i] = iSrc[i];



	// ##3. memmove
	// memcpy와 다를 것이 없는 메모리 복사 함수

	int		iArr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 0 };

	// 개선 전 : 1, 1, 1, 1, 1, 1, 1, 1, 1, 1
	// 개선 후 : 1, 1, 2, 3, 4, 5, 6, 7, 8, 9
	memcpy(iArr + 1, iArr, sizeof(iArr) - sizeof(int));

	// 1, 1, 2, 3, 4, 5, 6, 7, 8, 9
	(iArr + 1, iArr, sizeof(iArr) - sizeof(int));


	// memcpy와 memmove의 차이점

	// memcpy
	// -> 버퍼를 사용하지 않는다.
	// -> 표준이 아니다!


	// memmove
	// -> 버퍼를 사용하여 복사한다.
	// -> 표준이다!




}