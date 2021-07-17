#include <iostream>

using namespace std;

typedef struct	tagGrade
{
	char	szName[20];
	int		iKor;
	int		iEng;
	int		iMath;
	int		iTotal;
	float	fAver;
}GRADE;

void main()
{
	//// 구조체의 포인터형
	//// 일반 자료형을 사용하는 것과 다를 것이 없다!

	//GRADE	tGrade = { "AAA", 10, 20, 30 };
	//GRADE*	pGrade = &tGrade;
	//cout << "&tGrade: " << &tGrade << endl;

	//int		iA = 10;
	//int*	ptr = &iA;
	//cout << "&iA: " << &iA << endl;


	//// 구조체 포인터를 통한 멤버 접근
	//GRADE	tGrade = { "AAA", 10, 20, 30 };
	//GRADE*	pGrade = &tGrade;

	//tGrade.szName;		// 가능

	////// .(dot) 연산자 기준 좌측에는 구조체과 와야하지만
	////// 포인터가 있기 때문에 오류가 발생한다!
	////pGrade.szName;		// 불가능

	//// 포인터에 역참조 연산자를 사용하면 값에 접근하게 된다!
	//// 구조체 포인터의 값은 구조체이다!
	//(*pGrade).szName;		// 가능


	//// 화살표 연산자(멤버 접근 포인터 연산자)
	//// ->
	//// 구조체 포인터에 역참조 연산자를 사용한 후 .(dot) 연산자를 사용한 결과와 동일하다.
	//GRADE	tGrade = { "AAA", 10, 20, 30 };
	//GRADE*	pGrade = &tGrade;


	//tGrade.szName;		// 가능
	//(*pGrade).szName;	// 가능
	//pGrade->szName;		// 가능



	// 구조체 포인터 사용 시 주의 사항
	GRADE		tGrade = {};

	// pGrade는 아무런 곳도 가리키고 있지 않다!
	// 아무런 곳도 가리키고 있지 않은 상황에 접근하여 szName을 찾고 있다!!
	GRADE*		pGrade = nullptr;
	pGrade->szName;		// 위험한 상황!

}