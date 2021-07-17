#include <iostream>

using namespace std;

int Square(int _n)
{
	return _n * _n;
}

#define SQUARE(n)	n * n
#define SQUARE2(n)	(n) * (n)

#define SQUARE3(n)	\
(n) * (n)


#define SAFE_DELETE(p) if(p) { delete p; p = nullptr; }

void main()
{
	//// 매크로 함수
	//// 매크로를 함수처럼 사용하는 것.
	//// -> 매개변수를 받겠다라는 의미
	///*
	//#define		매크로이름(치환시킬것)		기능구현
	//*/

	//cout << Square(5) << endl;

	//// 컴파일러가 해당 코드라인을 번역할 때 다순 치환시킨다!
	//cout << SQUARE(5) << endl;		// == cout << 5 * 5 << endl;
	//cout << SQUARE(5) << endl;
	//cout << SQUARE(3.5) << endl;

	// 매크로 함수의 장점
	// ##1. 속도가 빠르다
	// ##2. 매개변수가 자유롭다!

	// 매크로 함수의 단점
	// ##1. 디버깅이 불가능하다!
	// ##2. 복잡한 함수를 구성하는데 까다롭다.
	// -> 매크로는 한줄로만 매크로로 인식한다!!


	//// 매크로 함수의 주의 사항
	//// 단순 치환
	//// -> 연산자 우선순위를 위해 소괄호로 묶어주자!!!
	//cout << Square(2 + 2) << endl;
	//cout << SQUARE(2 + 2) << endl;		// == cout << 2 + 2 * 2 + 2 << endl;
	//cout << SQUARE2(2 + 2) << endl;		// == cout << (2 + 2) * (2 + 2) << endl;
	

	// 매크로 함수의 두 줄 이상 표현 방법
	// ##1. 매크로 맨 뒤에 역슬러쉬를 사용한다.
	// -> \(역슬러쉬) : 매크로가 다음 코드라인에도 이어진다! 라고 알려주는 역할
	// ##2. 역슬러쉬 뒤에는 어떠한 문자라도 삽입되면 안된다!!!!!!!!



	// 매크로 함수의 사용 빈도
	// 짧고 자주 사용하는 기능을 매크로함수로 만들어 사용한다.

	int*	ptr = new int;

	// #define SAFE_DELETE(p) if(p) { delete p; p = nullptr; }
	SAFE_DELETE(ptr);

	//if (ptr)
	//{
	//	delete ptr;
	//	ptr = nullptr;
	//}

}