#include <iostream>

using namespace std;

//// ##### 포인터 연산은 연속된 메모리를 사용할 경우에만 가능하다 #####

// int* _ptr은 주소를 받아오겠다라는 의미이다.
// -> 배열의 주소를 받아오겠다라고 확신할 수 없다.
//void Func(int*	_ptr, int _iSize)


// int _ptr[] 는 배열의 시작 주소를 받아오겠다라는 의미이다.
// -> int* _ptr과 전혀 다를 것이 없지만 배열을 받겠다고 명시하는 방법
void Func(int _ptr[], int _iSize)
{
	for (int i = 0; i < _iSize; ++i)
		cout << _ptr[i] << endl;
}

void main()
{
	// 함수의 인자로 배열을 전달하는 방법
	int		iArr[5] = { 1, 2, 3, 4, 5 };
	int		iArr2[7] = { 1, 2, 3, 4, 5, 6, 7 };

	//int*	_ptr = iArr;
	Func(iArr, sizeof(iArr) / sizeof(int));
	Func(iArr2, sizeof(iArr2) / sizeof(int));



	// bubble Sort
}