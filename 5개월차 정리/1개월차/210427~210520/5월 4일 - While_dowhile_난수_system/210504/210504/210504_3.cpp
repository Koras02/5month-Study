#include "stdafx.h"


void main()
{
	// do while��

	/*
	 do 
	 {
	   �ڵ���

	  } while( ���� )

	  // �ڵ����� ���� 1ȸ ���� �� ������ ���Ͽ� �߰� ���� ���θ� �����Ѵ�!
	
	*/

	/*int iA = 10;

	while (false)
		cout << "iA:" << iA << endl;


	do
	{
		cout << "iA:" << iA << endl;

	} while (false);*/


	// ����ڰ� ���� �Է��ϰ� -1 �� �Է��ϸ� ���ݱ��� ������ �� ���� ���ϴ� ���α׷�
	//int    iInput = 0, iSum = 0;

	//do
	//{
	//	iSum += iInput;
	//	cin >> iInput;
	//
	//} while (-1 != iInput);


	//cout << "������ ��:" << iSum << endl;


	// continue 
	// �ݺ��� ���ο����� ����� ������ ��ɾ�
	// �ݺ��� ���� �� continue�� ������ �Ǹ� �ڵ��� �帧�� �ݺ��� �� ������ ������.

	// -> continue�� ������!!! �ϸ� } ���� ������ �ڵ带 ������.

	// ¦���� �����ϴ� ���α׷�

	int  iInput = 0, iSum = 0;

	do
	{
		cin >> iInput;

		if ((iInput % 2) != 0)
			continue;


		iSum += iInput;


	} while (-1 != iInput);

	cout << "������ ��:" << iSum << endl;

}