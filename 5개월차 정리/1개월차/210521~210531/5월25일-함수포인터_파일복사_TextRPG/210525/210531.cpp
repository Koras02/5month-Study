#include <iostream>
#include <string>

using namespace std;

void mian()
{
	// string �ڷ���
	// 2������ �������� ������� �ڷ��� 
	// ���ڸ� ���� ���� �ٷ� �� �ֵ��� ��� ��ɵ��� �����Ǿ� �ִ�.

	// string ����
	// string�� ����ϱ� ���ؼ��� #include <string> �߰��� �ʿ��ϴ�.
	// C++ �� ����
	/*string  str1 = "Hello";
	string  str2("world");
	string  str3;*/

	//// ##2. ����
	//str3 = str1 + str2;
	//str1 += str2;


	//// ##3.��
	//cout << (str1 == str2) << endl;  // 0 
	//cout << (str1 != str2) << endl; // 1

	//// ##4. ����
	//cout << str1.length() << endl;  // 5

	 //// ����
	 //str1 = str2;


	//cout << "str1:" << str1 << endl;
	//cout << "str2:" << str2 << endl;
	//cout << "str3:" << str3 << endl;


	//// ���� ������ ���� ������ �ڷ����� �ٸ���!
	//// ����: �⺻ �ڷ���
	//// ���� = ����� ���� �ڷ���
	//char* pBuff = str;

	string str = "Hello";
	// c_str()
	const char* pBuff = str.c_str();

	cout << "pBuff:" << pBuff << endl;
}