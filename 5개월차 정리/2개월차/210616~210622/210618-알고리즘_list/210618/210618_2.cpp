#include "stdafx.h"

void main()
{
	// list
	// list�� ����ϱ� ���ؼ��� #include <list>�� �߰��� �ʿ��ϴ�!


	// list ����
	list<int>		listInt;

	// ���� ����
	// push
	// list�� ��, �� ���� ����/������ �����ϱ� ������
	// front�Լ��� �����Ѵ�!!!
	listInt.push_back(3);
	listInt.push_back(4);
	listInt.push_back(5);

	listInt.push_front(2);
	listInt.push_front(1);

	////// list�� ����� �����̳��̱� ������ []������ �Ұ����ϴ�!!!
	////for (size_t i = 0; i < 5; ++i)
	////	cout << listInt[i] << endl;		// �Ұ���

	//list<int>::iterator		iter = listInt.begin();
	//for (; iter != listInt.end(); ++iter)
	//	cout << *iter << endl;


	//// ##1. auto �ڷ���
	//// �ʱ�ȭ�� �����͸� ���� �ڷ����� �ڵ� ��Ī�����ش�.
	//// ��, ���� ���� �� auto�� ������� �ʴ´�.
	//auto	a = 10;
	//auto	b = 3.14;
	//auto	c = 3.14f;
	//auto	d = listInt.begin();		// == list<int>::iterator


	//// ���� ��� for��
	//// for���� �����ϰ� �۵��Ѵ�!
	//// ��, ������ �ִ� �������� ����� �����ϴ�.
	//// -> �迭, �����̳� ��
	//// ��!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
	//// ������� for���� ���� �� ������ ������ ���ϸ� �ȵȴ�!!!!!!!!!!1
	///*
	//for ( ���� ���� : ��ȸ�� �迭/�����̳� )
	//{
	//}
	//�迭 �Ǵ� �����̳��� '����'�� ���� ���� �������ش�.
	//-> ù ��° ���Һ��� ������ ���ұ��� �ϳ��ϳ� �����Ͽ� �����ϴ� ���� ������� for��
	//*/
	//int		iArr[5] = { 1, 2, 3, 4, 5 };

	////for (int i = 0; i < 5; ++i)
	////	cout << iArr[i] << endl;

	////// int i = iArr[0];
	////// int i = iArr[1];
	////// ...
	////for (int i : iArr)
	////	cout << i << endl;

	//for (int& i : iArr)
	//	i += 10;

	//for (int& i : iArr)
	//	cout << i << endl;


	//// auto�� ������� for���� �������� ���� ���ϰ� ����� �� �ִ�!
	//for (auto i : listInt)
	//	cout << i << endl;


	//listInt.pop_back();
	//listInt.pop_front();

	//for (auto i : listInt)
	//	cout << i << endl;


	// size(), clear(), empty(), swap(), front(), back(), begin(), end(), insert(), erase()
	// capacity(), reserve()	����!




}