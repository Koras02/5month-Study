// 210615.cpp : �ܼ� ���� ���α׷��� ���� �������� �����մϴ�.
//

#include "stdafx.h"

// ##1. �Լ� ���ø�
// ���ø��� ����� ��� �˷��ֱ� ���� template���� �����Ѵ�.
// ���ø����� ����� �ڷ����� �⺻ �ڷ����� �ƴ� ���Ӱ� �̸��� �����ֱ� ����
// <> �ȿ� typename�� ����Ͽ� ����� Ÿ���� �˷��־�� �Ѵ�.
template <typename T>
T Add(T _a, T _b)
{
	return _a + _b;
}

// ���ø��� Ư��ȭ
template <>
const char* Add(const char* _a, const char* _b)
{
	char*	pBuff = new char[strlen(_a) + strlen(_b) + 1];

	strcpy_s(pBuff, strlen(_a) + strlen(_b) + 1, _a);
	strcat_s(pBuff, strlen(_a) + strlen(_b) + 1, _b);

	return pBuff;
}


template <typename T1, typename T2, typename T3>
T3 Add(T1 _a, T2 _b)
{
	return _a + _b;
}


int main()
{
	// ���ø�
	// ��Ǫ���� ������ �� �ִ�.
	// �ϳ��� Ʋ�� ����� ����, �־��ִ� �Ӽ��� ���� ���� ��������� �Ӽ��� �ٸ� ������ ������ �ȴ�.


	// ##1. �Լ� ���ø�
	// -> �Լ��� Ʋ�� ����ڴ�!!


	// ##2. ���ø� �Լ�
	// -> �Լ��� ������ ����ڴ�!!
	
	//// �Լ� ���ø����� typename T��� ����� ����
	//// <>�ȿ� ����� �ڷ����� ��Ī�� �ȴ�!!!
	//// ��Ī�� �� �� �Լ��� ������ ���������.
	//Add<int>

	//// �����Ϸ��� �ش� �ڵ������ �����ϸ鼭 �Լ��� ������ ���������!!
	//cout << Add<int>(10, 20) << endl;
	//cout << Add<float>(3.1f, 3.1f) << endl;
	//cout << Add<int>(100, 200) << endl;
	//cout << Add<double>(100.1, 200.1) << endl;


	//// ����ڰ� <>�� ����ؼ� �ڷ����� ������� ���� ���
	//// �Ű� ���� Ÿ�Կ� ���� �ڵ� ��Ī�ȴ�.
	//cout << Add(10, 20) << endl;			// int
	//cout << Add(10.1f, 20.1f) << endl;		// float
	//cout << Add(10.1, 20.1) << endl;		// double



	//// �ּҸ� �����ϴ� ��.
	//// �ּҰ��� ���ϱ� ������ �����϶�� ����ϱ� ������ �Ұ����ϴ�!!!
	//Add("Hello", "World");


	//// ���ø��� Ư��ȭ
	//// �����ε� �̶�� �����ϸ� ����!!!!

	//const char* pBuff = Add("Hello", "World");
	//cout << pBuff << endl;
	//delete[] pBuff;



	// typename�� 2�� �̻� ����ϴ� ���
	// <> ���� typename�� ����� �� , �� �̾ ���� Ÿ���� ����� �� �ִ�!
	cout << Add<int, float, double>(10, 3.5f) << endl;


	
    return 0;
}

