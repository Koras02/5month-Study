#include "stdafx.h"


void main()
{
    // 반복문 
	// 반복되는 코드를 효율적으로 해결하는 문법 
	

	// ##1. while
	/*
	 while ( 조건 )
	 { // 여기부터
	  
	   코드 블록

	 } // 여기 까지
	

	while 문의 조건이 참일 경우 코드블록을 수행한다.
	코드 블록을 모두 수행하면 다시 조건을 비교한다.
	조건이 참일 경우 또 다시 코드 블록을 수행한다.
	-> 반복한다.
	*/


	// 단, 반복문의 조건이 계속해서 참일 경우 무한루프에 빠지게 된다.

	/*int iA = 0;

	while (true)
	{
		++iA;
		cout << "iA:" << iA << endl;
	}

	++iA;
	cout << "iA:" << iA << endl;
	++iA;
	cout << "iA:" << iA << endl;*/


	// 무한 루프 탈출 방법
	// #1. 조건식의 조건 
	//int  iA = 0;
	//while (10 > iA)
	//{
	//	++iA;
	//	cout << "iA:" << iA << endl;
	//}


	//// ##2. break;
	//int  iA = 0;

	//while (true)
	//{
	//	if (10 < iA)
	//		break;


	// 10에서 i가 증가해 11
	//	++iA;
	//	cout << "iA:" << iA << endl;
	//}


	// 문제) 구구단 2단 출력 

	int  iGob = 1;

	while (10 > iGob)
	{
		cout << 2 << "*" << iGob << "=" << 2 * iGob << endl;
		++iGob;
	}

	//int		iGob = 1;
	//cout << 2 << " * " << iGob << " = " << 2 * iGob << endl;
	//++iGob;
	//cout << 2 << " * " << iGob << " = " << 2 * iGob << endl;
	//++iGob;
	//cout << 2 << " * " << iGob << " = " << 2 * iGob << endl;
	//++iGob;
	//cout << 2 << " * " << iGob << " = " << 2 * iGob << endl;
	//++iGob;

	//cout << 2 << " * " << 1 << " = " << 2 << endl;
	//cout << 2 << " * " << 2 << " = " << 4 << endl;
	//cout << 2 << " * " << 3 << " = " << 6 << endl;
	//cout << 2 << " * " << 4 << " = " << 8 << endl;
	//cout << 2 << " * " << 5 << " = " << 10 << endl;
	//cout << 2 << " * " << 6 << " = " << 12 << endl;
	//cout << 2 << " * " << 7 << " = " << 14 << endl;
	//cout << 2 << " * " << 8 << " = " << 16 << endl;
	//cout << 2 << " * " << 9 << " = " << 18 << endl;


}

