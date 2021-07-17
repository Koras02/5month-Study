#include "stdafx.h"

void main()
{
	list<int>		listInt;
	listInt.push_back(3);
	listInt.push_back(4);
	listInt.push_back(5);
	listInt.push_front(2);
	listInt.push_front(1);

	//// list의 반복자
	//list<int>::iterator		iter_begin = listInt.begin();
	//list<int>::iterator		iter_end = listInt.end();

	////// list는 양 방향 접근 반복자를 사용한다!
	////iter_begin += 3;	// 불가능
	////iter_begin[3];		// 불가능

	////++iter_begin;
	////++iter_begin;

	////cout << *iter_begin << endl;


	//// list의 중간 삽입
	//list<int>::iterator		iter_begin = listInt.begin();
	//list<int>::iterator		iter_end = listInt.end();

	//++iter_begin;
	//++iter_begin;

	//listInt.insert(iter_begin, 999);

	////for (auto& i : listInt)
	////	cout << i << endl;

	//// 메모리를 밀고 당기는 vector와는 달리
	//// 원소 삽입 시 메모리를 밀고 당길 필요가 없어서 반복자의 무효화가 발생하지 않는다.
	//for (; iter_begin != iter_end; ++iter_begin)
	//	cout << *iter_begin << endl;



	// 중간 삭제
	list<int>::iterator		iter_begin = listInt.begin();
	list<int>::iterator		iter_end = listInt.end();

	++iter_begin;
	++iter_begin;

	iter_begin = listInt.erase(iter_begin);

	//for (auto& i : listInt)
	//	cout << i << endl;

	// vector와는 달리 begin의 반복자 무효화가 발생한다!!!!!!
	//iter_begin = listInt.begin();
	for (; iter_begin != iter_end; ++iter_begin)
		cout << *iter_begin << endl;


}