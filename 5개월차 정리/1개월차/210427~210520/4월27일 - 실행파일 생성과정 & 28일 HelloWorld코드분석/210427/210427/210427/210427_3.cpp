//#include <iostream>
#include "stdafx.h"

using namespace std;


void main()
{
	// �ڷ��� 
	// �⺻ �ڷ���
	// -> ���α׷��ֿ��� �⺻������ �����ϴ� Ÿ�Ե��� ���Ѵ�.


	// ##1. ���� �ڷ���
	// ���ڸ� �����ϴµ� �Ҽ��� �ڸ��� ���� ���ڸ� ������ �ڷ���
    // ���� �ڷ��� = short, int, long, long long 

	// short   a = 10;
	// int     b = 20;
	// long    c = 30;
	// long long d = 40;


	// ##2. �Ǽ� �ڷ���
	// �Ҽ��� �ڸ����� ������ �� �ִ� �ڷ��� 
	// �Ǽ� �ڷ��� = float, double, long double 

	// float a = 3.14f;
	// double b = 3.1415;
	// long double c = 3.141592;


	// ##3. ���� ���� �ڷ���
	// char 

	// char a = 'A';
	// char b = 'B';


	// ##4. �� �ڷ���
	// C++ ���� ������ �ڷ��� 
	// �� �Ǵ� ������ ǥ���ϱ� ���� �ڷ���
	// bool

	// bool  a = true;
	// bool  b = false;


	// �� �ڷ����� �����ϴ� ���� 0�� �ƴϸ� ��� ���� �ǹ��Ѵ�.
	// �� : 1
	// ���� : 0
	cout << true << endl; // 1
	cout << false << endl; // 0

	// �Ӽ��� ���� Ű���� �����ϴ� ��
	bool a = true;
	bool b = false;
	bool c = 999;
	bool d = 0.001;
	bool e = 0;
	bool f = 'E';
	bool g = 1;


	
	 // a = true = 1, b = false = 0
	cout << "a:" << a << endl;
	cout << "b:" << b << endl;
	// c = 1�� �Ѿ�� true , d = 0.0001�� 0���� ũ�Ƿ� true
	cout << "c:" << c << endl;
	cout << "d:" << d << endl;
	// e = 0�̴ϱ� false , f = ���� �����̰� �¾Ƽ� 1 , g = 1�̴ϱ� true
	cout << "e:" << e << endl;
	cout << "f:" << f << endl;
	cout << "g:" << g << endl;

	// ����� 1011011�� ��µȴ�.

	

	// �ڷ����� ũ�� 
	// ��ǻ���� ũ���� �ʼҴ����� bit ��� ǥ���Ѵ�.
	// 1bit�� 0 �Ǵ� 1�� ������ �� �ִ�.
	// bit�� ���̰� �� 8���� ���� ��� 8bits�� �ȴ�.
	// �̶� 8bits�� 1byte��� ǥ���Ѵ�.
	// ���⼭ ���� byte�� ũ���� �⺻ �����̴�.
	// �ڷ����� ũ��� 2�� n������ �����Ѵ�.

	// 1bytes(8bits)�� ũ�⸦ ������ �ڷ��� : char, bool
	// 2bytes(16bits)�� ũ�⸦ ������ �ڷ��� : short
	// 4bytes(32bits)�� ũ�⸦ ������ �ڷ��� : int , long ,float
	// 8bytes(64bits)�� ũ�⸦ ������ �ڷ��� : long long , double, long double


	// int �� long�� 4bytes�� ũ�⸦ ������, �Ѵ� ���� �ڷ����̴�!
	// -> �� �ڷ����� ũ��� �ü�� ȯ�濡 ���� �޶��� �� �ִ�.
	// -> 16bits ȯ�濡�� int�� 2bytes�� ũ�⸦ ������.
	// �ᱹ, �ü�� ȯ�濡 ���� �ڷ����� ũ�Ⱑ ���� �� �ֱ� ������ 
	// Ư�� �ü������ �ߺ��� ũ���� �ڷ����� ���� �� �ִ�.


}