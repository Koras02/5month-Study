#include <iostream>

using namespace std;

void Func()
{
	cout << "Func" << endl;
}

int Add(int _a, int _b)
{
	return _a + _b;
}
int Min(int _a, int _b)
{
	return _a - _b;
}
int Mul(int _a, int _b)
{
	return _a * _b;
}
int Div(int _a, int _b)
{
	return _a / _b;
}

void main()
{
	// 함수 포인터
	// 함수가 할당된 메모리의 주소를 함수 포인터라 한다.

	// 함수 호출
	// 함수이름 + 함수호출연산자
	// == 포인터 + 함수호출연산자
	
	// 함수이름은?
	// 함수가 등록된 메모리의 시작 주소를 저장하고 있는 포인터이다!


	//Func();
	//cout << "Func: " << Func << endl;



	//// 함수 포인터형
	///*
	//반환타입(*변수명)(매개변수 정보)
	//
	//매개변수 정보 : 타입만 명시한다.
	//*/

	//int(*ptr)(int, int) = Add;

	//cout << "Add: " << Add << endl;
	//cout << "ptr: " << ptr << endl;

	//cout << Add(10, 20) << endl;
	//cout << ptr(100, 200) << endl;


	////////////////////////////////////////////////////////////////////
	// 함수 포인터 배열을 사용할 경우
	int		iSelect = 0;
	int		iA = 0, iB = 0;

	int(*ptr[4])(int, int) = { Add, Min, Mul, Div };

	cout << "두 정수 값 입력: ";
	cin >> iA >> iB;

	cout << "1.더하기 2.빼기 3.곱하기 4.나누기" << endl;
	cout << "입력: ";
	cin >> iSelect;

	cout << "연산 결과: " << ptr[iSelect - 1](iA, iB) << endl;
	////////////////////////////////////////////////////////////////////
	//// 함수 포인터를 사용할 경우
	//int		iSelect = 0;
	//int		iA = 0, iB = 0, iRes = 0;

	//int(*ptr)(int, int) = nullptr;

	//cout << "두 정수 값 입력: ";
	//cin >> iA >> iB;

	//cout << "1.더하기 2.빼기 3.곱하기 4.나누기" << endl;
	//cout << "입력: ";
	//cin >> iSelect;

	//switch (iSelect)
	//{
	//case 1:
	//	ptr = Add;
	//	break;
	//case 2:
	//	ptr = Min;
	//	break;
	//case 3:
	//	ptr = Mul;
	//	break;
	//case 4:
	//	ptr = Div;
	//	break;
	//}

	//cout << "연산 결과: " << ptr(iA, iB) << endl;
	////////////////////////////////////////////////////////////////////
	//// 함수 포인터를 사용하지 않을 경우
	//int		iSelect = 0;
	//int		iA = 0, iB = 0, iRes = 0;

	//cout << "두 정수 값 입력: ";
	//cin >> iA >> iB;

	//cout << "1.더하기 2.빼기 3.곱하기 4.나누기" << endl;
	//cout << "입력: ";
	//cin >> iSelect;

	//switch (iSelect)
	//{
	//case 1:
	//	iRes = Add(iA, iB);
	//	break;
	//case 2:
	//	iRes = Min(iA, iB);
	//	break;
	//case 3:
	//	iRes = Mul(iA, iB);
	//	break;
	//case 4:
	//	iRes = Div(iA, iB);
	//	break;
	//}

	//cout << "연산 결과: " << iRes << endl;
	////////////////////////////////////////////////////////////////////
}