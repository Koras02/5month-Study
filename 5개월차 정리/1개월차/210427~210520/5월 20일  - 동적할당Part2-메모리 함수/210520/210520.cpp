#include <iostream>

using namespace std;

void main()
{
	// C++ ����� ���� �Ҵ�

	// C����� �����Ҵ��� �Լ��� �̿��ߴ�!
	// C++����� �����Ҵ��� �����ڸ� �̿��Ѵ�!

	// new
	// new �ڿ� �����Ҵ��� ũ��, �д� ����(�ڷ���)�� �˷��־�� �Ѵ�!
	/*
	new �ڷ���
	
	Heap ���� ��򰡿� �ڷ����� ũ�⸸ŭ �޸𸮸� �Ҵ��Ѵ�!
	����, �ش� �ڷ����� ������������ �ּҸ� ��ȯ���ش�!
	*/

	//// Heap ���� ��� int�ڷ����� ũ��(4bytes)��ŭ �޸� ������ �Ҵ��Ѵ�.
	//// ����, �Ҵ��� �޸� ������ ���� �ּҸ� int*������ ��ȯ���ش�.
	//new int;

	//// Heap ���� ��� int�ڷ����� ũ��(4bytes)��ŭ �޸� ������ �Ҵ��Ѵ�.
	//// ����, �Ҵ��� �޸� ������ ���� �ּҸ� int*������ ��ȯ���ش�.
	//// ��ȯ�� �ּҸ� ptr ������ �����ϰڴ�!
	//int*	ptr = new int;
	////int*	ptr = (int*)malloc(sizeof(int));


	//int*	ptr = new int;

	//cout << "ptr : " << ptr << endl;
	//cout << "*ptr: " << *ptr << endl;


	//// C++ ����� �����Ҵ� ����
	//// delete
	//// delete ��� �� �ּ� ���� �ٽ� ����ϸ� 00008123�� ��µȴ�.
	//// �� �ּ� ���� Dangling Pointer�̴�!!!!!
	//// ��, C����� Dangling Pointer�� �ٸ��� ����� ��� ������ �߻��Ѵ�.

	//int*	ptr = new int;
	//cout << "ptr : " << ptr << endl;
	//cout << "*ptr: " << *ptr << endl;

	//cout << "----------------------------" << endl;

	//delete ptr;
	//ptr = nullptr;

	//cout << "ptr : " << ptr << endl;



	////// �����Ҵ�� ���ÿ� �ʱ�ȭ
	////// C����� �ʱ�ȭ : =
	////int		iA = 10;

	////// C++����� �ʱ�ȭ : ()
	////int		iB(20);


	//int*	ptr = new int(10);

	//cout << "ptr : " << ptr << endl;
	//cout << "*ptr: " << *ptr << endl;

	//delete ptr;
	//ptr = nullptr;



	//// new�� �̿��� ���� �迭 �����!
	//// ���� �迭 ���� �Ϲ� �迭 ó�� []�� ����Ѵ�!

	//int		iSize = 0;
	//cin >> iSize;

	//int* ptr = new int[iSize];

	//for (int i = 0; i < iSize; ++i)
	//	cout << ptr[i] << endl;


	// ���� �迭 ����

	int* ptr = new int[5];

	// ptr�� Heap ������ ���� �ּҸ� ��������
	// �ϳ��� �Ҵ� ���� ���� �ƴ϶� �迭�� �Ҵ� �޾ұ� ������
	// ���� �� ���� �迭���� �˷��־�� �Ѵ�.
	delete[] ptr;
	ptr = nullptr;

}