// 210506.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//

#include "stdafx.h"


void main()
{
	// for 문 
	// 반복문 이다 
	// 단, 변수 선언 및 초기화, 조건식, 증감식 을 한 곳에 모아두었다!
	// -> 반복 횟수가 정해져 있을 경우 가독성이 좋아진다!

	/*
	  for ( ① 변수선언 및 초기화 ; ② 조건식 ; ③ 증감식 )
	  {
	    ④ 코드 블록
	  }


	  변수 선언 : for문이 시작되면 제일 먼저 수행되며, 최초 1회만 적용된다.
	  조건식 : 조건의 결과가 참일 경우 반복을 수행하고, 거짓일 경우 for문을 탈출한다.
	  증감식 : 변수의 값을 변경하는 곳이다.
	  코드 블록 : 조건이 참일 경우 수행하는 코드를 작성할 수 있다.


	  ① -> ② -> ④ -> ③ -> ② -> ④ -> ③ -> ② -> ④ -> ③ -> ② -> ④ -> ③ ....
	*/

	//int iA = 0;

	//for (int i = 0; i < 10; ++i)
	//{
	//	iA += 1;
	//	cout << "iA:" << iA << endl;
	//}


	//// N 중 반복문
	//// 반복문 내부에 반복문이 들어 있는 것.

	//for (int i = 0; i < 2; ++i)
	//{
	//	cout << i << endl;
	//	for (int j = 0; j < 3; ++j)
	//	{
	//		cout << 2 << endl;
	//	}

	//	cout << 3 << endl;
	//}


	//// 문제 ) 구구단 2 ~ 9단 전체 출력

	////for (int i = 2; i < 10; ++i)
	////{
	////	for (int j = 1; j < 10; ++j)
	////		cout << i << "*" << j << "=" << i*j << endl;
	////	cout << "============================" << endl;
	////}

	//// 문제) 단과 곱을 입력받아 입력받은 단의 곱까지 출력하기
	//// -> 단 : 5
	//// -> 곱 : 3
	//// -> 2단 전체, 3단 전체, 4단 전체, 5단 3곱까지
	//int		iDan = 0, iGob = 0;
	//cout << "단: ";
	//cin >> iDan;

	//cout << "곱: ";
	//cin >> iGob;
	//cout << "=====================" << endl;

	//for (int i = 2; i <= iDan; ++i)
	//{
	//	if (i == iDan)
	//	{
	//		for (int j = 1; j <= iGob; ++j)
	//			cout << i << " * " << j << " = " << i * j << endl;
	//	}
	//	else
	//		for (int j = 1; j < 10; ++j)
	//			cout << i << " * " << j << " = " << i * j << endl;
	//	cout << "=====================" << endl;
	//}


	// 문제 ) 각 단의 시작은 가로 출력, 곱은 세로 

	for (int i = 1; i < 10; ++i)
	{
		for (int j = 2; j < 10; ++j)
			cout << j << "*" << i << "=" << i * j << '\t';
		cout << endl;
	}



}