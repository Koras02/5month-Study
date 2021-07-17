#include "stdafx.h"


using namespace std;

void main()
{
	// switch 문 
	// 상수 조건 분기문 
	/*
	  switch ( 정수(변수/상수) )
	  {
	   case 정수(상수):
	     break;
	   case 정수(상수):
		 break;
	   case 정수(상수):
	     break;
	  }
	*/


	// iSelect로 2를 입력할 경우 사이다와 환타가 동시에 출력된다.
	// 이 문제는 switch문의 범위로 발생하는 문제이다
	// { 여기 부터 } 여기까지 switch 문의 범위이기 떄문에 발생

	//int iSelect = 0;
	//cin >> iSelect;

	//switch (iSelect)
	//{
	//case 1:
	//	cout << "콜라" << endl;
	//case 2:
	//	cout << "사이다" << endl;
	//case 3:
	//	cout << "환타" << endl;
	//}

	
	
	// break
	// switch문 또는 반복문 내부에서만 사용이 가능한 명령어.
	// switch문 또는 반복문의 코드 블록을 수행 중 break를 만나게 되면
	// 해당 switch문 또는 반복문을 탈출하는 용도로 사용한다.
	//int  iSelect = 0;
	//cin >> iSelect;


	//switch (iSelect)
	//{
	//case 1:
	//	cout << "콜라" << endl;
	//	break;
	//case 2:
	//	cout << "사이다" << endl;
	//	break;
	//case 3:
	//	cout << "환타" << endl;
	//	break;


	//}

	// default 
	// if 문의 else 같은 존재
	// case로 분기할 상수 값이 없을 경우 default를 수행한다.

	int  iSelect = 0;
	cin >> iSelect;

	switch (iSelect)
	{
	case 1:
		cout << "콜라" << endl;
		break;
	case 2:
		cout << "사이다" << endl;
		break;
	case 3:
		cout << "환타" << endl;
		break;
	default:
		cout << "준비된 상품이 없습니다!" << endl;
		break;
	}




}