#include <iostream>
#include <string>

using namespace std;

void mian()
{
	// string 자료형
	// 2개월차 문법으로 만들어진 자료형 
	// 문자를 더욱 쉽게 다룰 수 있도록 모든 기능들이 구현되어 있다.

	// string 선언
	// string을 사용하기 위해서는 #include <string> 추가가 필요하다.
	// C++ 도 가능
	/*string  str1 = "Hello";
	string  str2("world");
	string  str3;*/

	//// ##2. 결합
	//str3 = str1 + str2;
	//str1 += str2;


	//// ##3.비교
	//cout << (str1 == str2) << endl;  // 0 
	//cout << (str1 != str2) << endl; // 1

	//// ##4. 길이
	//cout << str1.length() << endl;  // 5

	 //// 복사
	 //str1 = str2;


	//cout << "str1:" << str1 << endl;
	//cout << "str2:" << str2 << endl;
	//cout << "str3:" << str3 << endl;


	//// 대입 연산자 기준 양항의 자료형이 다르다!
	//// 좌측: 기본 자료형
	//// 우측 = 사용자 정의 자료형
	//char* pBuff = str;

	string str = "Hello";
	// c_str()
	const char* pBuff = str.c_str();

	cout << "pBuff:" << pBuff << endl;
}