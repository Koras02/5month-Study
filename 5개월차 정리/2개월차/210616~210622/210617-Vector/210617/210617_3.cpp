#include "stdafx.h"

void main()
{
	vector<int>		vecInt;
	vecInt.push_back(1);
	vecInt.push_back(2);
	vecInt.push_back(3);
	vecInt.push_back(4);
	vecInt.push_back(5);

	// �ݺ���
	// �����Ϳ� ����ϰ� �۵��Ѵ�!
	// ������, �����Ͱ� �ƴ϶� ��ü�̴�!!!!!!!!
	// ��� �����̳ʰ� �����͸� �����ϴ� ����� �޶� ��ȸ ����� �ٸ�����
	// �ݺ��ڸ� �̿��ϰ� �Ǹ� ��ȸ ����� ȹ��ȭ �ȴ�!!!

	//// �ݺ��� ����
	//// �� �����̳� ���ο� �����Ǿ� �ִ�!
	//vector<int>::iterator			iter;


	//// �ݺ����� �ʱ�ȭ
	//// �����̳� ���� �� ��� ����ų�� �˷��ִ� ������� �ʱ�ȭ�� ����ȴ�.
	//// -> �����̳� ��� �Լ��� ���� �ʱ�ȭ�� �����Ѵ�!
	//// begin(), end()
	//// begin() : ù ��° ������ ��ġ�� ����Ű�� �ݺ��ڸ� ��ȯ
	//// end() : ������ ���� ���� ��ġ�� ����Ű�� �ݺ��ڸ� ��ȯ

	//vector<int>::iterator			iter_begin = vecInt.begin();
	//vector<int>::iterator			iter_end = vecInt.end();

	//for (; iter_begin != iter_end; ++iter_begin)
	//	cout << *iter_begin << endl;



	// �ݺ����� ����
	// ���� ���� �ݺ���, �� ���� ���� �ݺ���, �� ���� ���� �ݺ���, �Է� �ݺ���, ��� �ݺ���


	// ##1. ���� ���� �ݺ���
	// -> �迭 ��� �����̳ʵ��� ������ �ݺ���
	// ++, --, [], +=, -=

	// ##2. �� ���� ���� �ݺ���
	// -> ��� ��� �����̳ʵ��� ������ �ݺ���
	// ++, --



	//// �߰� ����
	//// insert(#1, #2)
	//// #1 : ���� ��ġ�� �ݺ���
	//// #2 : ������

	//vector<int>::iterator			iter_begin = vecInt.begin();
	//vector<int>::iterator			iter_end = vecInt.end();

	//iter_begin += 2;

	//vecInt.insert(iter_begin, 999);
	//iter_begin = vecInt.insert(iter_begin, 9999);

	////for (size_t i = 0; i < vecInt.size(); ++i)
	////	cout << vecInt[i] << endl;

	//// �ݺ����� ��ȿȭ ������ ������ �߻��Ѵ�.
	//// ���� �� end�� �ݺ��ڴ� 6��° �迭ĭ�� ����Ű�� �ִ�!
	//// ���Ҹ� �����ϸ� end�� �ݺ��ڴ� 7��° ��ġ�� �����Ѿ� �Ѵ�!!!
	//// ���� ���� ���� ���� �ݺ����� ��ġ�� �ٸ��� ������ ������ ����ϴ� �ݺ��ڴ� ��ȿȭ�� �߻��ϰ� �ȴ�.
	//// -> �ݺ����� ��ȿȭ�� �߻��ϰ� �� �ݺ��ڸ� ����ϰ� �� ��� ������ �߻��Ѵ�.

	////iter_begin = vecInt.begin();
	//iter_end = vecInt.end();
	//for (; iter_begin != iter_end; ++iter_begin)
	//	cout << *iter_begin << endl;



	//// �߰� ����
	//// erase(#1)
	//// #1 : ������ ���Ҹ� ����Ű�� �ݺ���
	//vector<int>::iterator			iter_begin = vecInt.begin();
	//vector<int>::iterator			iter_end = vecInt.end();

	//iter_begin += 2;

	//iter_begin = vecInt.erase(iter_begin);

	////for (size_t i = 0; i < vecInt.size(); ++i)
	////	cout << vecInt[i] << endl;

	//// end�� ��ȿȭ�� �߻��Ѵ�!!!!!!!
	//// ��, begin�� ��ȿȭ�� �߻��Ѵ�!!!
	////iter_begin = vecInt.begin();
	//iter_end = vecInt.end();
	//for (; iter_begin != iter_end; ++iter_begin)
	//	cout << *iter_begin << endl;


	// �߰� ���� �� ���� �ÿ��� end�� ������ ��ȿȭ�� �߻��Ѵ�.
	// ���ϰ� ����ϱ� ���ؼ��� begin�� ��������!
	vector<int>::iterator		iter = vecInt.begin();

	for (; iter != vecInt.end(); ++iter)
		cout << *iter << endl;

}