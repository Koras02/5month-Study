#include "stdafx.h"

void main()
{
	// list
	// list를 사용하기 위해서는 #include <list>의 추가가 필요하다!


	// list 선언
	list<int>		listInt;

	// 원소 삽입
	// push
	// list는 앞, 뒤 원소 삽입/삭제가 가능하기 때문에
	// front함수를 지원한다!!!
	listInt.push_back(3);
	listInt.push_back(4);
	listInt.push_back(5);

	listInt.push_front(2);
	listInt.push_front(1);

	////// list는 노드기반 컨테이너이기 때문에 []접근이 불가능하다!!!
	////for (size_t i = 0; i < 5; ++i)
	////	cout << listInt[i] << endl;		// 불가능

	//list<int>::iterator		iter = listInt.begin();
	//for (; iter != listInt.end(); ++iter)
	//	cout << *iter << endl;


	//// ##1. auto 자료형
	//// 초기화한 데이터를 토대로 자료형을 자동 매칭시켜준다.
	//// 단, 변수 선언 시 auto는 사용하지 않는다.
	//auto	a = 10;
	//auto	b = 3.14;
	//auto	c = 3.14f;
	//auto	d = listInt.begin();		// == list<int>::iterator


	//// 범위 기반 for문
	//// for문과 동일하게 작동한다!
	//// 단, 범위가 있는 곳에서만 사용이 가능하다.
	//// -> 배열, 컨테이너 등
	//// 단!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
	//// 범위기반 for문을 수행 중 원소의 개수가 변하면 안된다!!!!!!!!!!1
	///*
	//for ( 변수 선언 : 순회할 배열/컨테이너 )
	//{
	//}
	//배열 또는 컨테이너의 '원소'를 변수 선언에 대입해준다.
	//-> 첫 번째 원소부터 마지막 원소까지 하나하나 대입하여 수행하는 것이 범위기반 for문
	//*/
	//int		iArr[5] = { 1, 2, 3, 4, 5 };

	////for (int i = 0; i < 5; ++i)
	////	cout << iArr[i] << endl;

	////// int i = iArr[0];
	////// int i = iArr[1];
	////// ...
	////for (int i : iArr)
	////	cout << i << endl;

	//for (int& i : iArr)
	//	i += 10;

	//for (int& i : iArr)
	//	cout << i << endl;


	//// auto와 범위기반 for문이 합쳐지면 더욱 편리하게 사용할 수 있다!
	//for (auto i : listInt)
	//	cout << i << endl;


	//listInt.pop_back();
	//listInt.pop_front();

	//for (auto i : listInt)
	//	cout << i << endl;


	// size(), clear(), empty(), swap(), front(), back(), begin(), end(), insert(), erase()
	// capacity(), reserve()	없다!




}