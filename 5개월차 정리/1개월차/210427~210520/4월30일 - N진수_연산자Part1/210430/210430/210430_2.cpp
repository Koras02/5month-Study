#include "stdafx.h"


using namespace std;


void main()
{
	// ������ 
	// ������ ����� ��ȯ�ϴ� ��.
	// ��� ������, sizeof ������, ���� ������, ���� ������, �� ������, ��Ʈ ���� ������
	// ���� ������(�� ������ �ϳ�), ���� ������(�� ������ ��), ���� ������(�� ������ ��)

	// ##1. ��� ������ (���� ������)
	// + , - , *, /, %

	// ##2. sizeof ������ (���� ������)
	// �ڷ��� �Ǵ� ������ �Ҵ�� �޸��� ũ�⸦ byte������ ��ȯ�ϴ� ������ 

	// sizeof( �ڷ��� / ������ )

	 char  chTest = 'A';
	 bool   bTest = true;
	 short  nTest = 10;
	 int    iTest = 20;
	 long   lTest = 30;
	 float  fTest = 3.14f;
	 long long llTest = 40;
	 double   dTest = 3.1415;
	 long double ldTest = 3.141592;

	 cout << "char�� ũ��:" << sizeof(char) << endl;
	 cout << "chTest�� ũ��:" << sizeof(chTest) << endl;
	 cout << "--------------------------------------------" << endl;
	 cout << "bool�� ũ��:" << sizeof(bool) << endl;
	 cout << "bTest�� ũ��:" << sizeof(bTest) << endl;
	 cout << "--------------------------------------------" << endl;
	 cout << "short�� ũ��:" << sizeof(short) << endl;
	 cout << "nTest�� ũ��:" << sizeof(nTest) << endl;
	 cout << "--------------------------------------------" << endl;
	 cout << "int�� ũ��:" << sizeof(int) << endl;
	 cout << "iTest�� ũ��:" << sizeof(iTest) << endl;
	 cout << "--------------------------------------------" << endl;
	 cout << "long�� ũ��:" << sizeof(long) << endl;
	 cout << "fTest�� ũ��:" << sizeof(fTest) << endl;
	 cout << "---------------------------------------------" << endl;
	 cout << "long long�� ũ��:" << sizeof(long long) << endl;
	 cout << "llTest�� ũ��:" << sizeof(llTest) << endl;
	 cout << "---------------------------------------------" << endl;
	 cout << "double�� ũ��:" << sizeof(double) << endl;
	 cout << "dTest�� ũ��:" << sizeof(dTest) << endl;
	 cout << "---------------------------------------------" << endl;
	 cout << "long double�� ũ��:" << sizeof(long double) << endl;
	 cout << "ldTest�� ũ��:" << sizeof(ldTest) << endl;
	 cout << "----------------------------------------------" << endl;


	 // ��� ����� ũ�� Ȯ��
	 char  a = 'A';
	 char  b = 'B';

	 // char �ڷ����� ���� ���� �ڷ��������� �����ϴ� ���� �������̴�.
	 // a + b�� �ܼ��� �������� ���ϱ� ������ �����ϰ� ����� ��ȯ�Ѵ�.
	 // ��ȯ�� ����� �ӽ� �޸𸮿� ��ϵǴµ� �������̱� ������ int������ �����Ѵ�.
	 // �ᱹ sizeof �����ڴ� �ӽ� �޸��� ũ�⸦ Ȯ���� ���̴�.
	 cout << sizeof(a + b) << endl; // 4bytes





}