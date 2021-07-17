#include <iostream>

using namespace std;

//void Swap(int& _a, int& _b);
int Add(const int& _a, const int& _b);

void main()
{
	//// const와 레퍼런스
	//const int		iA = 10;

	//// r은 const가 아니기 때문에 r을 통한 값 변경이 가능해야한다!
	//// 하지만 참조하고 있는 iA는 const로 값 변경이 불가능한 메모리이다!!
	//
	//// 값 변경이 불가능한 메모리를 레퍼런스를 통해 값 변경이 가능해지게 만드는 것이다!
	//// -> 말이 되지 않는다!!!!!!
	//int&			r = iA;		// 불가능

	//iA = 100;
	//r = 200;

	//// 함수의 매개변수나 반환타입으로 레퍼런스형이 있을 경우
	//// 원본을 안전하게 보호하기 위해 const형태를 사용한다.
	//int			iA = 10;
	//const int&	r = iA;

	//iA = 100;
	//r = 200;




	//int		iA = 10;
	//int		iB = 20;

	//// int& _a = iA;
	//// int& _b = iB;
	//cout << Add(iA, iB) << endl;

	//// int& _a = 100;
	//// int& _b = 200;
	//cout << Add(100, 200) << endl;

	//// 100은 리터럴 상수로서 임시 메모리 영역에 등록이 된다.
	//// 임시 메모리 영역은 코드라인을 벗어나는 즉시 소멸하는 공간이다.
	//// 소멸할 공간을 참조해도 사용할 수 없다!!!
	//int&	r = 100;		// 불가능



	// 동일한 코드지만 매개변수인 레퍼런스변수에 const를 부여하면 잘 작동한다.
	int		iA = 10;
	int		iB = 20;

	//const int& _a = iA;
	//const int& _b = iB;
	cout << Add(iA, iB) << endl;

	//const int& _a = 100;
	//const int& _b = 200;
	//cout << Add(100, 200) << endl;


	//// 문법의 이론상 성립하지 않는다!
	//// 하지만, 성립할 수 있도록 임시 변수를 만들어준다.
	//// 임시 변수란? 이름 없이 메모리에 등록된 변수를 뜻한다.
	//const int&	r = 100;



	//// 레퍼런스 자료형의 크기
	//// 없다!
	//
	//// 일반 변수는 선언할 때마다 메모리를 사용한다.
	//// 레퍼런스는 선언해도 메모리를 추가로 할당하지 않는다.

	//int		iA = 10;
	//int		iB = 20;
	//int		iC = 30;
	//int&	r1 = iA;
	//int&	r2 = iB;
	//int&	r3 = iC;




	//int		iA = 10, iB = 20;

	//// 함수호출
	//// int& _a = iA;
	//// int& _b = iB;
	//Swap(iA, iB);

	//cout << iA << ", " << iB << endl;		// 20, 10
}

//void Swap(int& _a, int& _b)
//{
//	int iTemp = _a;
//	_a = _b;
//	_b = iTemp;
//}
//



int Add(const int& _a, const int& _b)
{
	return _a + _b;
}

//int Add(int _a, int _b)
//{
//	return _a + _b;
//}