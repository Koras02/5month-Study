#include "stdafx.h"

void main()
{
	// map�����̳��� ����
	// �⺻ ���� ������ �������� �����̴�.
	// ���� ������ �����ϰ� ���� ��쿡�� �����̳� ����� ���ÿ� ������ ����ؾ� �Ѵ�.

	map<int, int, greater<int>>		Mymap;

	Mymap.insert(pair<int, int>(1, 100));
	Mymap.insert(make_pair(2, 200));
	Mymap.insert(map<int, int>::value_type(3, 300));
	Mymap.emplace(4, 400);
	Mymap.insert({ 5, 500 });

	for (auto& pair : Mymap)
		cout << pair.first << ", " << pair.second << endl;


}