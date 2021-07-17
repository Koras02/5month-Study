#include "stdafx.h"

using namespace std;

void main()
{
	// 분기문

	// ##1. if문
	/*
	if ( 조건 )
	{  // 여기 부터
	
	  코드 블록

	} // 여기까지 

	*/

	// 조건이 참일 경우 코드 블록을 수행한다.
	// 조건이 거짓일 경우 코드 블록을 수행하지 않는다.


	//int iA = 80, iB = 50;

	//if (iA > iB)
	//{
	//	cout << "iA가 iB보다 크다 !" << endl;

	//}

	
	// else 
	// if 문의 조건이 거짓일 경우 수행하는 코드 블록을 만들 수 있다.
	// if 와 짝을 이루어야 하며 혼자 존재할 수 없다.
	// 흑백논리 == 이거 아니면 저거 로 작동한다.

	//int   iA = 120, iB = 30;
	//if (iA > iB)
	//{
	//	cout << "iA가 iB보다 크다!" << endl;
	//}
	//else
	//{
	//	cout << "iA가 iB보다 작다!" << endl;
	//}

	// else if 
	// if 문으로 여러 조건들을 비교, 검사할 수 있다.
	// if 와 짝을 이루어야하면 혼자 존재할 수 없다.
	// 두 개 이상 조건이 맞을 경우 우선적으로 참이 되는 if 또는 else if 문만 수행한다.

	//int iA = 20, iB = 30;

	//if (iA > iB)
	//{
	//	cout << "iA가 iB보다 크다!" << endl;

	//}

	//else if (iA < iB)
	//{
	//	cout << "iA가 iB보다 작다" << endl;
	//}

	//else
	//{
	//	cout << "iA와 iB가 같다" << endl;
	//}


	// 주의 사항
	// ##1. if와 else if / else 사이에 어떠한 코드라인도 삽입될 수 없다.
	// -> if 문으로 수행해야할 코드 라인이 1줄일 경우 {}는 생략할 수 있다.
	//int   iA = 50, iB = 30;
	//if (iA > iB)
	//{
	//	cout << "iA가 iB보다 크다!" << endl;
	//	cout << "iA가 iB보다 크다!" << endl;
	//}
	//else if (iA < iB)
	//	cout << "iA가 iB보다 작다!" << endl;
	//else
	//	cout << "iA와 iB는 같다!" << endl;


	// ##2. if문 뒤에 세미콜론 
	//int   iA = 30, iB = 30;
	//
	//if (iA > iB);
	//{
	//	cout << "iA가 iB보다 크다!" << endl;
	//}




}