#include <iostream>
#include <time.h>

#include "TextRPG.h"
using namespace std;

int Add(int _a, int _b);

void main()
{
	// �����
	// �ڵ��� �帧�� ����ڰ� �� �� �� �� �ν��ϸ鼭 �����ϴ� ��.
	// -> ���� �ذ��� ���� ���


	//// F5 : ����� ����/�����
	//// ����Ʈ + F5 : ����� ����
	//// F9 : �ߴ��� ����/����
	//// ��Ʈ�� + ����Ʈ + F9 : ��� �ߴ��� ����
	//// F10 : ���� �ڵ� �������� �̵�
	//// F11 : ���� ���� �������� �̵�

	//int		iA = 10;
	//int		iB = 20;
	//int		iC = 30;

	//cout << "iA: " << iA << endl;
	//cout << "iB: " << iB << endl;
	//cout << "iC: " << iC << endl;
	//cout << Add(10, 20) << endl;

	////////////////////////////////////////////////////////////////////

	int		iA = 0;

	for (int i = 0; i < 1000; ++i)
		iA += 1;

 

	////////////////////////////////////////////////////////////////////
	//srand(unsigned(time(NULL)));
	//INFO* pPlayer = nullptr;
	//pPlayer = Select_Player();

	//if (!pPlayer)
	//	return;

	//Progress(pPlayer);

	//if (pPlayer)
	//{
	//	delete pPlayer;
	//	pPlayer = nullptr;
	//}



}

int Add(int _a, int _b)
{
	int iRes = 0;

	iRes = _a + _b;

	return iRes;
}