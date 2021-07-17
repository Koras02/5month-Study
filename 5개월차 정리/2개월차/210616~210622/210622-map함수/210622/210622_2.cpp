#include "stdafx.h"

void main()
{
	// map 원소 삽입 정리
	map<int, int>		Mymap;
	
	Mymap[0] = 0;
	Mymap.insert(pair<int, int>(1, 100));
	Mymap.insert(make_pair(2, 200));
	Mymap.insert(map<int, int>::value_type(3, 300));
	Mymap.emplace(4, 400);
	Mymap.insert({ 5, 500 });

}