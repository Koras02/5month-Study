#include "stdafx.h"

void main()
{
	// map컨테이너의 정렬
	// 기본 정렬 기준은 오름차순 정렬이다.
	// 정렬 순서를 변경하고 싶을 경우에는 컨테이너 선언과 동시에 기준을 명시해야 한다.

	map<int, int, greater<int>>		Mymap;

	Mymap.insert(pair<int, int>(1, 100));
	Mymap.insert(make_pair(2, 200));
	Mymap.insert(map<int, int>::value_type(3, 300));
	Mymap.emplace(4, 400);
	Mymap.insert({ 5, 500 });

	for (auto& pair : Mymap)
		cout << pair.first << ", " << pair.second << endl;


}