 #include "stdafx.h"


void main()
{
   // bitset
   // �ڷ��� 
   // ���� �����͸� �����Ѵ�.
   // ������ ���� �����͸� 2������ ��ȯ�Ͽ� ������ش�.
   // bitset�� ����ϱ� ���ؼ��� #include <bitset> �߰��� �ʿ��ϴ�.
   
   // bitset<�� �ڸ� ��Ʈ> ������
   /*
     bitset<8>  bitA = 10;
	 cout << "bitA:" << bitA << endl;

   */


	// ##1. ��Ʈ ���� �� ������ 
	// ���� ��Ʈ������ �� ������ �����ϴ� ��.
	// & (and), | (or), ^(xor), ~(not)

	// ##1. ��Ʈ ���� �� ������_##1. & (and) (���� ������)
	// �� ��Ʈ��� 1�� ��� 1�� �ȴ�.
	// �ϳ��� 0�� ��� 0�� �ȴ�.

	 //bitset<4>  bitA = 10, bitB = 6, bitC = 0;
	 //cout << "bitA:" << bitA << endl;
	 //cout << "bitB:" << bitB << endl;
	 //cout << "=============================" << endl;
	 //bitC = bitA & bitB;
	 //cout << "bitC:" << bitC << endl;

	// ##1. ��Ʈ ���� �� ������_##2. | (or) (���� ������)
	// �� ��Ʈ �� �ϳ��� 1�̸� 1, �� �� 0�� ��쿡�� 0�� �ȴ�.
	 //bitset<4>  bitA = 10, bitB = 6, bitC = 0;
	 //cout << "bitA: " << bitA << endl;
	 //cout << "bitB: " << bitB << endl;
	 //cout << "================================" << endl;
	 //bitC = bitA | bitB;
	 //cout << "bitC:" << bitC << endl;

    // ##1. ��Ʈ ���� �� ������_##3. ^ (xor) (���� ������)
	// �� ��Ʈ�� ������ 0, �ٸ� ��� 1
	// bitset<4> bitA = 10, bitB = 6, bitC = 0;
	//cout << "bitA:" << bitA << endl;
	//cout << "bitB:" << bitB << endl;
	//cout << "==============================" << endl;
	//bitC = bitA ^ bitB;
	//cout << "bitC:" << bitC << endl;

	// ##1. ��Ʈ ���� �� ������_##4. ~ (not) (���� ������)
	// 1�� 0����, 0�� 1�� �ٲٴ� ������
	// ��Ʈ ����(1�� ����)

	//bitset<4> bitA = 10, bitB = 0;

	//cout << "bitA: " << bitA << endl;
	//cout << "=================================" << endl;
	//bitB = ~bitA;
	//cout << "bitB: " << bitB << endl;


	//int   iA = 55;
	//cout << ((~iA) + 1) << endl; // 1�� ����
	

	

}

