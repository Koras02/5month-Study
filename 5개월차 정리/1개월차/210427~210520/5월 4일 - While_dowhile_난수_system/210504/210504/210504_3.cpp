#include "stdafx.h"


void main()
{
	// do while문

	/*
	 do 
	 {
	   코드블록

	  } while( 조건 )

	  // 코드블록을 최초 1회 수행 후 조건을 비교하여 추가 수행 여부를 결정한다!
	
	*/

	/*int iA = 10;

	while (false)
		cout << "iA:" << iA << endl;


	do
	{
		cout << "iA:" << iA << endl;

	} while (false);*/


	// 사용자가 값을 입력하고 -1 을 입력하면 지금까지 값들의 총 합을 구하는 프로그램
	//int    iInput = 0, iSum = 0;

	//do
	//{
	//	iSum += iInput;
	//	cin >> iInput;
	//
	//} while (-1 != iInput);


	//cout << "누적된 값:" << iSum << endl;


	// continue 
	// 반복문 내부에서만 사용이 가능한 명령어
	// 반복문 수행 중 continue를 만나게 되면 코드의 흐름을 반복문 맨 끝으로 보낸다.

	// -> continue를 만났다!!! 하면 } 여기 까지로 코드를 보낸다.

	// 짝수만 누적하는 프로그램

	int  iInput = 0, iSum = 0;

	do
	{
		cin >> iInput;

		if ((iInput % 2) != 0)
			continue;


		iSum += iInput;


	} while (-1 != iInput);

	cout << "누적된 값:" << iSum << endl;

}