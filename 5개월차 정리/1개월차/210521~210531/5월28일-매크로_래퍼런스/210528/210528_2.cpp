#include <iostream>

using namespace std;

int Square(int _n)
{
	return _n * _n;
}

#define SQUARE(n)	n * n
#define SQUARE2(n)	(n) * (n)

#define SQUARE3(n)	\
(n) * (n)


#define SAFE_DELETE(p) if(p) { delete p; p = nullptr; }

void main()
{
	//// ��ũ�� �Լ�
	//// ��ũ�θ� �Լ�ó�� ����ϴ� ��.
	//// -> �Ű������� �ްڴٶ�� �ǹ�
	///*
	//#define		��ũ���̸�(ġȯ��ų��)		��ɱ���
	//*/

	//cout << Square(5) << endl;

	//// �����Ϸ��� �ش� �ڵ������ ������ �� �ټ� ġȯ��Ų��!
	//cout << SQUARE(5) << endl;		// == cout << 5 * 5 << endl;
	//cout << SQUARE(5) << endl;
	//cout << SQUARE(3.5) << endl;

	// ��ũ�� �Լ��� ����
	// ##1. �ӵ��� ������
	// ##2. �Ű������� �����Ӵ�!

	// ��ũ�� �Լ��� ����
	// ##1. ������� �Ұ����ϴ�!
	// ##2. ������ �Լ��� �����ϴµ� ��ٷӴ�.
	// -> ��ũ�δ� ���ٷθ� ��ũ�η� �ν��Ѵ�!!


	//// ��ũ�� �Լ��� ���� ����
	//// �ܼ� ġȯ
	//// -> ������ �켱������ ���� �Ұ�ȣ�� ��������!!!
	//cout << Square(2 + 2) << endl;
	//cout << SQUARE(2 + 2) << endl;		// == cout << 2 + 2 * 2 + 2 << endl;
	//cout << SQUARE2(2 + 2) << endl;		// == cout << (2 + 2) * (2 + 2) << endl;
	

	// ��ũ�� �Լ��� �� �� �̻� ǥ�� ���
	// ##1. ��ũ�� �� �ڿ� ���������� ����Ѵ�.
	// -> \(��������) : ��ũ�ΰ� ���� �ڵ���ο��� �̾�����! ��� �˷��ִ� ����
	// ##2. �������� �ڿ��� ��� ���ڶ� ���ԵǸ� �ȵȴ�!!!!!!!!



	// ��ũ�� �Լ��� ��� ��
	// ª�� ���� ����ϴ� ����� ��ũ���Լ��� ����� ����Ѵ�.

	int*	ptr = new int;

	// #define SAFE_DELETE(p) if(p) { delete p; p = nullptr; }
	SAFE_DELETE(ptr);

	//if (ptr)
	//{
	//	delete ptr;
	//	ptr = nullptr;
	//}

}