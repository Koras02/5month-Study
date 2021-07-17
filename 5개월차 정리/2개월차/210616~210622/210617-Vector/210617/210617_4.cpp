#include "stdafx.h"

void main()
{
	// 메모리 예약
	// 메모리를 초과하는 삽입의 시도가 있을 경우 재할당 및 복사가 발생한다.
	// 연산을 줄이기 위해 사용할 만큼만 메모리를 예약해서 사용하자!!!


	//// ##1. 생성자
	//// 메모리 개수 뿐만 아니라 원소도 채워 넣는다.
	//// 생성자를 통해 메모리를 예약할 경우 바로 push_back 함수를 사용해서는 안된다!!!
	//// -> 메모리를 초과하는 삽입이 된다!!!

	//// ##1. clear()
	//// ##2. [] 후 = 을 사용하는 방법

	//vector<int>		vecInt(10);

	////cout << "vecInt.Size: " << vecInt.size() << endl;
	////cout << "vecInt.capa: " << vecInt.capacity() << endl;

	//for (size_t i = 0; i < vecInt.size(); ++i)
	//	cout << vecInt[i] << endl;


	//// ##2. reserve()
	//vector<int>		vecInt;
	//vecInt.reserve(10);

	//cout << "vecInt.Size: " << vecInt.size() << endl;
	//cout << "vecInt.capa: " << vecInt.capacity() << endl;



}