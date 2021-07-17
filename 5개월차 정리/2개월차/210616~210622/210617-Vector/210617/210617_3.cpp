#include "stdafx.h"

void main()
{
	vector<int>		vecInt;
	vecInt.push_back(1);
	vecInt.push_back(2);
	vecInt.push_back(3);
	vecInt.push_back(4);
	vecInt.push_back(5);

	// 반복자
	// 포인터와 비슷하게 작동한다!
	// 하지만, 포인터가 아니라 객체이다!!!!!!!!
	// 모든 컨테이너가 데이터를 저장하는 방식이 달라 순회 방법이 다르지만
	// 반복자를 이용하게 되면 순회 방법이 획일화 된다!!!

	//// 반복자 선언
	//// 각 컨테이너 내부에 구현되어 있다!
	//vector<int>::iterator			iter;


	//// 반복자의 초기화
	//// 컨테이너 원소 중 어디를 가리킬지 알려주는 방식으로 초기화가 진행된다.
	//// -> 컨테이너 멤버 함수를 통해 초기화를 진행한다!
	//// begin(), end()
	//// begin() : 첫 번째 원소의 위치를 가리키는 반복자를 반환
	//// end() : 마지막 원소 다음 위치를 가리키는 반복자를 반환

	//vector<int>::iterator			iter_begin = vecInt.begin();
	//vector<int>::iterator			iter_end = vecInt.end();

	//for (; iter_begin != iter_end; ++iter_begin)
	//	cout << *iter_begin << endl;



	// 반복자의 종류
	// 임의 접근 반복자, 양 방향 접근 반복자, 순 방향 접근 반복자, 입력 반복자, 출력 반복자


	// ##1. 임의 접근 반복자
	// -> 배열 기반 컨테이너들이 가지는 반복자
	// ++, --, [], +=, -=

	// ##2. 양 방향 접근 반복자
	// -> 노드 기반 컨테이너들이 가지는 반복자
	// ++, --



	//// 중간 삽입
	//// insert(#1, #2)
	//// #1 : 삽입 위치의 반복자
	//// #2 : 데이터

	//vector<int>::iterator			iter_begin = vecInt.begin();
	//vector<int>::iterator			iter_end = vecInt.end();

	//iter_begin += 2;

	//vecInt.insert(iter_begin, 999);
	//iter_begin = vecInt.insert(iter_begin, 9999);

	////for (size_t i = 0; i < vecInt.size(); ++i)
	////	cout << vecInt[i] << endl;

	//// 반복자의 무효화 때문에 오류가 발생한다.
	//// 삽입 전 end의 반복자는 6번째 배열칸을 가리키고 있다!
	//// 원소를 삽입하면 end의 반복자는 7번째 위치를 가리켜야 한다!!!
	//// 삽입 전과 삽입 후의 반복자의 위치가 다르기 때문에 기존에 사용하던 반복자는 무효화가 발생하게 된다.
	//// -> 반복자의 무효화가 발생하고 이 반복자를 사용하게 될 경우 오류가 발생한다.

	////iter_begin = vecInt.begin();
	//iter_end = vecInt.end();
	//for (; iter_begin != iter_end; ++iter_begin)
	//	cout << *iter_begin << endl;



	//// 중간 삭제
	//// erase(#1)
	//// #1 : 삭제할 원소를 가리키는 반복자
	//vector<int>::iterator			iter_begin = vecInt.begin();
	//vector<int>::iterator			iter_end = vecInt.end();

	//iter_begin += 2;

	//iter_begin = vecInt.erase(iter_begin);

	////for (size_t i = 0; i < vecInt.size(); ++i)
	////	cout << vecInt[i] << endl;

	//// end의 무효화가 발생한다!!!!!!!
	//// 단, begin도 무효화가 발생한다!!!
	////iter_begin = vecInt.begin();
	//iter_end = vecInt.end();
	//for (; iter_begin != iter_end; ++iter_begin)
	//	cout << *iter_begin << endl;


	// 중간 삽입 및 삭제 시에는 end가 무조건 무효화가 발생한다.
	// 편리하게 사용하기 위해서는 begin만 선언하자!
	vector<int>::iterator		iter = vecInt.begin();

	for (; iter != vecInt.end(); ++iter)
		cout << *iter << endl;

}