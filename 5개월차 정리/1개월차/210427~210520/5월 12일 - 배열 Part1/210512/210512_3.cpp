#include <iostream>

using namespace std;

void main()
{
	//// 배열의 이름은 해당 배열이 등록된 메모리의 시작 주소를 저장한다!
	//// -> 배열의 이름은 포인터다!
	//int		iArr[5] = { 1, 2, 3, 4, 5 };

	//cout << "iArr: " << iArr << endl;
	//cout << "=====================" << endl;

	//for (int i = 0; i < 5; ++i)
	//	cout << "&iArr[" << i << "]: " << &iArr[i] << endl;


	//// 배열의 이름이 포인터이니 다른 포인터 변수에 저장할 수 있을까?
	//int		iArr[5] = { 1, 2, 3, 4, 5 };
	//int*	ptr = iArr;

	//cout << "ptr: " << ptr << endl;
	//cout << "*ptr: " << *ptr << endl;


	//// 포인터 연산
	//// 포인터를 대상으로 +, - 연산을 수행하는 것.
	//// 1byte만큼 증가하지 않고 자료형의 크기만큼 증가한다.

	//// ##### 포인터 연산은 연속된 메모리를 사용할 경우에만 가능하다 #####

	//int		iArr[5] = { 1, 2, 3, 4, 5 };
	//int*	ptr = iArr;

	//cout << "ptr: " << ptr << endl;
	//cout << "*ptr: " << *ptr << endl;
	//cout << "-------------------------" << endl;
	//cout << "ptr + 1: " << ptr + 1 << endl;
	//cout << "*(ptr + 1): " << *(ptr + 1) << endl;


	// 포인터 연산이 자료형의 크기만큼 증가하는 이유
	// 포인터 연산이 1byte만 증가한다라고 가정할 경우
	// ptr + 1에 역참조 연산자를 사용하면 이상한 값이 나오게 된다.
	// 이상한 값은 사용자가 저장하지 않았고, 사용하지도 않을 값이다.
	// 이 경우 쓸모 없는 연산이 발생하기 때문에 사용할 수 있도록 자료형의 크기만큼 증가하는 것이다.


	//int		iArr[5] = { 1, 2, 3, 4, 5 };
	//int*	ptr = iArr;

	//// 인덱스 접근 연산자는 포인터 연산한 결과에 역참조를 붙인것과 동일하다.
	//cout << "*(ptr + 0): " << *(ptr + 0) << endl;	// iArr[0]
	//cout << "*(ptr + 1): " << *(ptr + 1) << endl;	// iArr[1]
	//cout << "*(ptr + 2): " << *(ptr + 2) << endl;	// iArr[2]
	//cout << "*(ptr + 3): " << *(ptr + 3) << endl;	// iArr[3]
	//cout << "*(ptr + 4): " << *(ptr + 4) << endl;	// iArr[4]



	int		iArr[5] = { 1, 2, 3, 4, 5 };
	int*	ptr = iArr;

	for (int i = 0; i < 5; ++i)
		cout << ptr[i] << endl;

}