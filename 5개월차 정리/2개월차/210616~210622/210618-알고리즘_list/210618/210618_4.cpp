#include "stdafx.h"

// ��������
template <typename T>
bool Less(T _Dst, T _Src)
{
	return _Dst < _Src;
}

// ��������
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


	
	// list�� ����
	// �˰��� �Լ��� sort�� �迭 ��� �����̳ʿ��� �۵��Ѵ�!
	// list�� ����� �����̳��̹Ƿ� ����� �Ұ����ϴ�!
	// list�� ������ ��� �Լ��� ����Ѵ�!!!


	//listInt.sort(Less<int>);
	//for (auto i : listInt)
	//	cout << i << endl;


	//// ##1. �������� ����
	listInt.sort(Less<int>);
	listInt.sort(less<int>());
	//listInt.sort();

	// ##2. �������� ����
	/*listInt.sort(Greater<int>);
	listInt.sort(greater<int>());*/

	listInt.sort();
	listInt.reverse();
	
	for (auto i : listInt)
		cout << i << endl;

}