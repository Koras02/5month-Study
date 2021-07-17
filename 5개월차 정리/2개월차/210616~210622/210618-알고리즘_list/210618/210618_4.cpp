#include "stdafx.h"

// 오름차순
template <typename T>
bool Less(T _Dst, T _Src)
{
	return _Dst < _Src;
}

// 내림차순
template <typename T>
bool Greater(T _Dst, T _Src)
{
	return _Dst > _Src;
}


void main()
{
	list<int>		listInt;

	listInt.push_back(5);
	listInt.push_back(1);
	listInt.push_back(2);
	listInt.push_back(4);
	listInt.push_back(3);


	
	// list의 정렬
	// 알고리즘 함수의 sort는 배열 기반 컨테이너에서 작동한다!
	// list는 노드기반 컨테이너이므로 사용이 불가능하다!
	// list의 정렬은 멤버 함수를 사용한다!!!


	//listInt.sort(Less<int>);
	//for (auto i : listInt)
	//	cout << i << endl;


	//// ##1. 오름차순 정렬
	listInt.sort(Less<int>);
	listInt.sort(less<int>());
	//listInt.sort();

	// ##2. 내림차순 정렬
	/*listInt.sort(Greater<int>);
	listInt.sort(greater<int>());*/

	listInt.sort();
	listInt.reverse();
	
	for (auto i : listInt)
		cout << i << endl;

}