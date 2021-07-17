// 210615.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//

#include "stdafx.h"

// ##1. 함수 템플릿
// 템플릿을 만든다 라고 알려주기 위해 template으로 시작한다.
// 템플릿에서 사용할 자료형은 기본 자료형이 아닌 새롭게 이름을 지어주기 위해
// <> 안에 typename을 명시하여 사용할 타입을 알려주어야 한다.
template <typename T>
T Add(T _a, T _b)
{
	return _a + _b;
}

// 템플릿의 특수화
template <>
const char* Add(const char* _a, const char* _b)
{
	char*	pBuff = new char[strlen(_a) + strlen(_b) + 1];

	strcpy_s(pBuff, strlen(_a) + strlen(_b) + 1, _a);
	strcat_s(pBuff, strlen(_a) + strlen(_b) + 1, _b);

	return pBuff;
}


template <typename T1, typename T2, typename T3>
T3 Add(T1 _a, T2 _b)
{
	return _a + _b;
}


int main()
{
	// 템플릿
	// 거푸집에 비유할 수 있다.
	// 하나의 틀을 만들어 놓고, 넣어주는 속성에 따라 같은 모양이지만 속성이 다른 원형이 나오게 된다.


	// ##1. 함수 템플릿
	// -> 함수의 틀을 만들겠다!!


	// ##2. 템플릿 함수
	// -> 함수의 원형을 만들겠다!!
	
	//// 함수 템플릿에서 typename T라고 명시한 곳에
	//// <>안에 명시한 자료형이 매칭이 된다!!!
	//// 매칭이 된 후 함수의 원형이 만들어진다.
	//Add<int>

	//// 컴파일러가 해당 코드라인을 번역하면서 함수의 원형이 만들어진다!!
	//cout << Add<int>(10, 20) << endl;
	//cout << Add<float>(3.1f, 3.1f) << endl;
	//cout << Add<int>(100, 200) << endl;
	//cout << Add<double>(100.1, 200.1) << endl;


	//// 사용자가 <>를 사용해서 자료형을 명시하지 않을 경우
	//// 매개 변수 타입에 따라 자동 매칭된다.
	//cout << Add(10, 20) << endl;			// int
	//cout << Add(10.1f, 20.1f) << endl;		// float
	//cout << Add(10.1, 20.1) << endl;		// double



	//// 주소를 전달하는 것.
	//// 주소간의 더하기 연산을 수행하라고 명령하기 때문에 불가능하다!!!
	//Add("Hello", "World");


	//// 템플릿의 특수화
	//// 오버로딩 이라고 생각하면 쉽다!!!!

	//const char* pBuff = Add("Hello", "World");
	//cout << pBuff << endl;
	//delete[] pBuff;



	// typename을 2개 이상 사용하는 방법
	// <> 안의 typename을 명시할 때 , 로 이어서 여러 타입을 명시할 수 있다!
	cout << Add<int, float, double>(10, 3.5f) << endl;


	
    return 0;
}

