#include "stdafx.h"

void main()
{
	list<int>		listInt;
	listInt.push_back(3);
	listInt.push_back(4);
	listInt.push_back(5);
	listInt.push_front(2);
	listInt.push_front(1);

	//// list�� �ݺ���
	//list<int>::iterator		iter_begin = listInt.begin();
	//list<int>::iterator		iter_end = listInt.end();

	////// list�� �� ���� ���� �ݺ��ڸ� ����Ѵ�!
	////iter_begin += 3;	// �Ұ���
	////iter_begin[3];		// �Ұ���

	////++iter_begin;
	////++iter_begin;

	////cout << *iter_begin << endl;


	//// list�� �߰� ����
	//list<int>::iterator		iter_begin = listInt.begin();
	//list<int>::iterator		iter_end = listInt.end();

	//++iter_begin;
	//++iter_begin;

	//listInt.insert(iter_begin, 999);

	////for (auto& i : listInt)
	////	cout << i << endl;

	//// �޸𸮸� �а� ���� vector�ʹ� �޸�
	//// ���� ���� �� �޸𸮸� �а� ��� �ʿ䰡 ��� �ݺ����� ��ȿȭ�� �߻����� �ʴ´�.
	//for (; iter_begin != iter_end; ++iter_begin)
	//	cout << *iter_begin << endl;



	// �߰� ����
	list<int>::iterator		iter_begin = listInt.begin();
	list<int>::iterator		iter_end = listInt.end();

	++iter_begin;
	++iter_begin;

	iter_begin = listInt.erase(iter_begin);

	//for (auto& i : listInt)
	//	cout << i << endl;

	// vector�ʹ� �޸� begin�� �ݺ��� ��ȿȭ�� �߻��Ѵ�!!!!!!
	//iter_begin = listInt.begin();
	for (; iter_begin != iter_end; ++iter_begin)
		cout << *iter_begin << endl;


}