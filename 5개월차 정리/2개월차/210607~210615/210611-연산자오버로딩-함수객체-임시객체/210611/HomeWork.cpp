
#include "stdafx.h"
#include <string>
//#include "MyString.h"

// ##1. ��� ������ char*���� ���� ��.
// -> �迭�� �̸� ũ�� ������ ���� �ʿ��� ��ŭ�� ����� �������!

//ostream& operator<<(ostream& _out, CMyString& _string)
//{
//}

int main()
{
	CMyString str1("Hello");
	CMyString str2 = "World";
	CMyString str3;
	CMyString str4;
	CMyString str5;

	cout << str1 << endl;
	cout << str2 << endl;
	cout << str3 << endl;
	cout << str4 << endl;
	cout << "==================================================" << endl;

	str3 = str1 + str2;
	str4 = str1 + "World";
	str5 = "AAA" + str1;

	cout << str1 << endl;
	cout << str2 << endl;
	cout << str3 << endl;
	cout << str4 << endl;
	cout << str5 << endl;
	cout << "==================================================" << endl;

	str1 += str2;
	str2 += "World";

	cout << str1 << endl;
	cout << str2 << endl;
	cout << str3 << endl;
	cout << str4 << endl;
	cout << "==================================================" << endl;

	str3 = str1;
	str4 = "World";

	cout << str1 << endl;
	cout << str2 << endl;
	cout << str3 << endl;
	cout << str4 << endl;
	cout << "==================================================" << endl;

	cout << (str1 == str2) << endl;
	cout << ("AAA" == str1) << endl;


	return 0;
}

