#include <iostream>

using namespace std;

void main()
{
	// �޸� �Լ�
	// �޸� ������ �۾��� �����ϴ� �Լ�

	// ##1. memset()
	// �ʱ�ȭ �Լ�
	// -> �޸𸮿� ���� �����Ͽ� �ʱ�ȭ�� �����Ѵ�.
	//// memset(#1, #2, #3)
	//// #1 : �ʱ�ȭ�� �޸��� ���� �ּҸ� ����
	//// #2 : �ʱ�ȭ�� ���� ����
	//// #3 : ���� �ּҺ��� �� byte �۾��� ������ ũ�⸦ ����

	//int		iA = 0;
	//int		iB;
	//memset(&iB, 0, sizeof(iB));
	//cout << "iB: " << iB << endl;


	//// memset�� Ȱ��
	//int*	ptr = new int[10];

	//memset(ptr, 0, sizeof(int) * 10);
	////for (int i = 0; i < 10; ++i)
	////	ptr[i] = 0;

	//for (int i = 0; i < 10; ++i)
	//	cout << ptr[i] << endl;


	//// memset�� ���� ����
	//// 1byte ������ �ʱ�Ȱ�� �����Ѵ�!!!!
	//// -> 0 �ʱ�ȭ �ܿ��� ������ ���� ���� �� �ִ�!!!
	//int		iA = 1;
	//cout << "iA: " << iA << endl;

 


	////// ##2. memcpy()
	////// �޸� �� �޸� ������ ���縦 �����ϴ� �Լ�
	////// memcpy(#1, #2, #3)
	////// #1 : ���� ���� �޸��� ���� �ּҸ� ����
	////// #2 : ���� �� �޸��� ���� �ּҸ� ����
	////// #3 : �ִ� �� byte �۾��� ������ ũ�⸦ ����
	////// -> #2�� �ִ� �����͸� #1�� �����Ѵ�.

	////int		iDst = 0, iSrc = 10;

	////iDst = iSrc;
	////memcpy(&iDst, &iSrc, sizeof(int));


	//int		iDst[5] = {};
	//int		iSrc[5] = { 1, 2, 3, 4, 5 };

	//memcpy(iDst, iSrc, sizeof(iDst));

	//for (int i = 0; i < 5; ++i)
	//	iDst[i] = iSrc[i];



	// ##3. memmove
	// memcpy�� �ٸ� ���� ���� �޸� ���� �Լ�

	int		iArr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 0 };

	// ���� �� : 1, 1, 1, 1, 1, 1, 1, 1, 1, 1
	// ���� �� : 1, 1, 2, 3, 4, 5, 6, 7, 8, 9
	memcpy(iArr + 1, iArr, sizeof(iArr) - sizeof(int));

	// 1, 1, 2, 3, 4, 5, 6, 7, 8, 9
	(iArr + 1, iArr, sizeof(iArr) - sizeof(int));


	// memcpy�� memmove�� ������

	// memcpy
	// -> ���۸� ������� �ʴ´�.
	// -> ǥ���� �ƴϴ�!


	// memmove
	// -> ���۸� ����Ͽ� �����Ѵ�.
	// -> ǥ���̴�!




}