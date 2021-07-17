#include <iostream>

using namespace std;
// 구조체 정의
struct tagBox
{
	int		a;
	float	b;
};

// 공용체 정의
union uniBox
{
	int		a;
	float	b;
};

void main()
{
	// 공용체
	// 사용자 정의 자료형이다!
	// 구조체와 동일한 형태를 가진다.


	//// 공용체 선언
	//tagBox		tBox;
	//uniBox		uBox;


	//// 공용체 초기화
	//tagBox		tBox = {};
	//uniBox		uBox = {};


	//// 공용체 데이터 초기화
	//tagBox		tBox = { 10, 3.14f };
	//uniBox		uBox = { 10, 3.14f };		// 불가능. 오류 발생


	//// 공용체는 멤버 변수들이 하나의 메모리를 공유해서 사용한다.
	//tagBox		tBox = {};
	//uniBox		uBox = {};

	//cout << "&tBox.a: " << &tBox.a << endl;
	//cout << "&tBox.b: " << &tBox.b << endl;
	//cout << "---------------------------------" << endl;
	//cout << "&uBox.a: " << &uBox.a << endl;
	//cout << "&uBox.b: " << &uBox.b << endl;


	//uniBox		uBox = {};
	//uBox.a = 10;
	//cout << "uBox.a: " << uBox.a << endl;
	//cout << "--------------------------------" << endl;
	//
	//// uBox.b의 값을 변경하였더니 uBox.a의 값도 변경이 된다!
	//// -> 하나의 메모리를 공유해서 사용하기 때문에!!!
	//uBox.b = 3.14f;
	//cout << "uBox.a: " << uBox.a << endl;
	//cout << "uBox.b: " << uBox.b << endl;


	// 공용체의 크기
	// 멤버 변수 중 가장 크기가 큰 자료형을 토대로 설정된다.

}