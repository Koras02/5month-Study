#include <iostream>
#include <string>

using namespace std;

void main()
{
	//// string �ڷ���
	//// 2������ �������� ������� �ڷ���
	//// ���ڸ� ���� ���� �ٷ� �� �ֵ��� ��� ��ɵ��� �����Ǿ� �ִ�.


	//// string ����
	//// string�� ����ϱ� ���ؼ��� #include <string> �߰��� �ʿ��ϴ�.
	//string		str1 = "Hello";
	//string		str2("World");
	//string		str3;

	////// ##4. ����
	////cout << str1.length() << endl;

	////// ##3. ��
	////cout << (str1 == str2) << endl;		// 0
	////cout << (str1 != str2) << endl;		// 1

	////// ##2. ����
	////str3 = str1 + str2;
	////str1 += str2;

	////// ##1. ����
	////str1 = str2;

	//cout << "str1: " << str1 << endl;
	//cout << "str2: " << str2 << endl;
	//cout << "str3: " << str3 << endl;




	//string	str = "Hello";

	//// ���� ������ ���� ������ �ڷ����� �ٸ���!
	//// ���� : �⺻ �ڷ���
	//// ���� : ����� ���� �ڷ���
	//char*	pBuff = str;

	// c_str()
	string	str = "Hello";
	const char* pBuff = str.c_str();

	cout << "pBuff: " << pBuff << endl;

}