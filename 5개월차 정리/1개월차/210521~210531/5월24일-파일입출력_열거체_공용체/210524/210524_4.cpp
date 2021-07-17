#include <iostream>

using namespace std;

// 열거체 정의
// 컴파일러에게 이러한 자료형을 내가 만들었다! 라고 알려주는 용도
enum STATE { IDLE, WALK, RUN, JUMP, ATTACK, END };

void main()
{
	// 열거체
	// 구조체와 같은 사용자 정의 자료형이다.
	// 데이터 덩어리 형태로 사용하지 않는다.
	// 단순히 상태 값 지정 시 주로 사용한다.
	/*
	enum	자료형이름
	{
		열거자,
		열거자,
		열거자
	}
	*/



	//// 열거체 선언
	//STATE		eState;


	//// 열거체 초기화
	//// 열거체의 초기화는 열거자를 사용해야한다!
	//STATE		eState = 0;			// 불가능
	//STATE		eState = IDLE;		// 가능


	// 열거자란?
	// 상수의 성질을 가진다.
	// 사용자가 열거자의 상수 값을 변경할 수 있다!
	// 열거자의 상수 값을 변경하지 않으면 기본 0부터 시작하며, 1씩 증가한 값을 가진다.


	//// 열거체의 활용
	//// 열거체는 switch문과 궁합이 아주 좋다!!!!

	//STATE	eState = ATTACK;

	//switch (eState)
	//{
	//case IDLE:
	//	cout << "대기 상태" << endl;
	//	break;
	//case WALK:
	//	cout << "걷기 상태" << endl;
	//	break;
	//case RUN:
	//	cout << "달리기 상태" << endl;
	//	break;
	//case JUMP:
	//	cout << "점프 상태" << endl;
	//	break;
	//case ATTACK:
	//	cout << "공격 상태" << endl;
	//	break;
	//}


	// 열거체의 크기
	// 열거체로 저장하는 데이터는 정수형이다!
	// -> 4bytes 공간만 있어도 정수 값을 저장할 수 있다!

	cout << sizeof(STATE) << endl;		// 4




}