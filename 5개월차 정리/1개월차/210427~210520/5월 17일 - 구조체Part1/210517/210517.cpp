#include <iostream>

using namespace std;

// struct : 컴파일러에게 구조체를 정의한다라고 알려준다.
// tagGrade : 사용자가 정의한 구조체의 이름이다!
// 멤버 변수 : 구조체는 이러한 멤버 변수들을 모두 포함한다!
// -> 멤버 변수들을 하나로 묶는 새로운 자료형을 만든 것이다!
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
	// 구조체
	// 사용자 정의 자료형이다!
	// -> 사용자가 자료형을 만들어서 사용한다!

	// 사용자 정의 자료형이라고 해서 크기와 읽는 형태를 사용자가 직접 설정할 수 없다!
	// 구조체는 단순히 다른 자료형들을 모으고 모아서 하나의 큰 자료형으로 만들겠다! 라는 의미
	// -> 데이터 덩어리, 데이터 집합


	// 구조체 정의
	// 컴파일러에게 이러한 자료형을 사용자가 만들었다 라고 알려주는 것
	// -> 메모리에 등록 시키는 것이 아니다!
	/*
	struct		자료형이름
	{

		멤버 변수;
		멤버 변수;
		멤버 변수;

	}
	*/


	//// 구조체 선언
	//// 사용자가 정의한 구조체를 메모리에 등록 시키는 것.

	//// struct tagGrade : 자료형
	//// tGrade : 변수명
	//struct tagGrade		tGrade;


	//// 구조체의 초기화
	//// 구조체의 초기화는 배열의 초기화와 동일하다!

	//// 구조체의 모든 멤버 변수들이 0으로 초기화가 진행된다.
	//struct tagGrade		tGrade = {};

	//// 중괄호 안에 명시한 데이터가 구조체 정의 시 명시한 순서대로 
	//// 순차적 초기화가 진행된다.
	//// 명시하지 않은 멤버 변수들은 0으로 초기화가 진행된다.
	//struct tagGrade tGrade = { "AAA", 10, 20, 30 };


	//// 멤버 접근
	//// .(dot) 연산자
	//// dot 연산자 기준 좌측에는 구조체를 명시한다!
	//// dot 연산자 기준 우측에는 멤버를 명시한다!
	//struct tagGrade tGrade = { "AAA", 10, 20, 30 };

	//tGrade.iTotal = tGrade.iKor + tGrade.iEng + tGrade.iMath;
	//tGrade.fAver = tGrade.iTotal / 3.f;

	//cout << "이름: " << tGrade.szName << endl;
	//cout << "국어: " << tGrade.iKor << endl;
	//cout << "영어: " << tGrade.iEng << endl;
	//cout << "수학: " << tGrade.iMath << endl;
	//cout << "총점: " << tGrade.iTotal << endl;
	//cout << "평균: " << tGrade.fAver << endl;


	// typedef
	// type : 타입
	// define : 정의하다
	// -> 자료형에 별명을 부여한다!
	// 자료형의 이름이 길 경우 짧은 별명을 부여해서 사용하면 편리하게 사용할 수 있다!

	/*
	typedef		자료형		별명
	*/

	//typedef		short		_int;

	//short		iA = 10;
	//short		iA = 10;
	//short		iA = 10;
	//_int	iB = 20;
	//_int	iB = 20;
	//_int	iB = 20;


	//struct tagGrade		tGrade1 = { "AAA", 10, 20, 30 };
	//GRADE				tGrade2 = { "AAA", 10, 20, 30 };

	// C와 C++ 구조체의 차이점
	// struct 키워드 내부에 typedef이 정의되어 있다!

	// C 구조체
	struct tagGrade		tGrade1 = { "AAA", 10, 20, 30 };

	// C++ 구조체
	tagGrade		tGrade2 = { "AAA", 10, 20, 30 };
}