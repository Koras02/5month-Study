#include "stdafx.h"

void main()
{
	map<int, int>		Mymap;

	Mymap.insert(pair<int, int>(1, 100));
	Mymap.insert(make_pair(2, 200));
	Mymap.insert(map<int, int>::value_type(3, 300));
	Mymap.emplace(4, 400);
	Mymap.insert({ 5, 500 });



	//// map�� �ݺ���
	//map<int, int>::iterator		iter_begin = Mymap.begin();
	//map<int, int>::iterator		iter_end = Mymap.end();

	////// �� ���� ���� �ݺ���
	////iter_begin += 3;		// �Ұ���
	////iter_begin[3];			// �Ұ���

	//++iter_begin;
	//++iter_begin;

	////cout << iter_begin->first << ", " << iter_begin->second << endl;


	//// �߰� ����
	//map<int, int>::iterator		iter_begin = Mymap.begin();
	//map<int, int>::iterator		iter_end = Mymap.end();

	//++iter_begin;
	//++iter_begin;

	//// map�� ���� ���� �� key���� ���� �ڵ� ������ �߻��Ѵ�!!!
	//// -> �߰� ������ �ǹ̰� �ϳ��� ����!!!!!!!!!!!!
	//Mymap.insert(iter_begin, { 9, 900 });

	//for (auto& pair : Mymap)
	//	cout << pair.first << ", " << pair.second << endl;


	// �߰� ����
	map<int, int>::iterator		iter_begin = Mymap.begin();
	map<int, int>::iterator		iter_end = Mymap.end();

	++iter_begin;
	++iter_begin;

	iter_begin = Mymap.erase(iter_begin);

	//for (auto& pair : Mymap)
	//	cout << pair.first << ", " << pair.second << endl;

	// begin �ݺ����� ��ȿȭ�� �߻��Ѵ�!
	// -> ��� ��� �����̳��̱� ������!!!!
	for(; iter_begin != iter_end; ++iter_begin)
		cout << iter_begin->first << ", " << iter_begin->second << endl;

}