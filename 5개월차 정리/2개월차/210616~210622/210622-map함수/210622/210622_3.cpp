#include "stdafx.h"

void main()
{
	map<int, int>		Mymap;

	Mymap.insert(pair<int, int>(1, 100));
	Mymap.insert(make_pair(2, 200));
	Mymap.insert(map<int, int>::value_type(3, 300));
	Mymap.emplace(4, 400);
	Mymap.insert({ 5, 500 });



	//// map의 반복자
	//map<int, int>::iterator		iter_begin = Mymap.begin();
	//map<int, int>::iterator		iter_end = Mymap.end();

	////// 양 방향 접근 반복자
	////iter_begin += 3;		// 불가능
	////iter_begin[3];			// 불가능

	//++iter_begin;
	//++iter_begin;

	////cout << iter_begin->first << ", " << iter_begin->second << endl;


	//// 중간 삽입
	//map<int, int>::iterator		iter_begin = Mymap.begin();
	//map<int, int>::iterator		iter_end = Mymap.end();

	//++iter_begin;
	//++iter_begin;

	//// map은 원소 삽입 시 key값에 따라 자동 정렬이 발생한다!!!
	//// -> 중간 삽입의 의미가 하나도 없다!!!!!!!!!!!!
	//Mymap.insert(iter_begin, { 9, 900 });

	//for (auto& pair : Mymap)
	//	cout << pair.first << ", " << pair.second << endl;


	// 중간 삭제
	map<int, int>::iterator		iter_begin = Mymap.begin();
	map<int, int>::iterator		iter_end = Mymap.end();

	++iter_begin;
	++iter_begin;

	iter_begin = Mymap.erase(iter_begin);

	//for (auto& pair : Mymap)
	//	cout << pair.first << ", " << pair.second << endl;

	// begin 반복자의 무효화가 발생한다!
	// -> 노드 기반 컨테이너이기 때문에!!!!
	for(; iter_begin != iter_end; ++iter_begin)
		cout << iter_begin->first << ", " << iter_begin->second << endl;

}