//#include <iostream>
#include "stdafx.h"

using namespace std;


void main()
{
	// 자료형 
	// 기본 자료형
	// -> 프로그래밍에서 기본적으로 제공하는 타입들을 뜻한다.


	// ##1. 정수 자료형
	// 숫자를 저장하는데 소수점 자리가 없는 숫자를 저장할 자료형
    // 정수 자료형 = short, int, long, long long 

	// short   a = 10;
	// int     b = 20;
	// long    c = 30;
	// long long d = 40;


	// ##2. 실수 자료형
	// 소수점 자리까지 저장할 수 있는 자료형 
	// 실수 자료형 = float, double, long double 

	// float a = 3.14f;
	// double b = 3.1415;
	// long double c = 3.141592;


	// ##3. 단일 문자 자료형
	// char 

	// char a = 'A';
	// char b = 'B';


	// ##4. 논리 자료형
	// C++ 부터 등장한 자료형 
	// 참 또는 거짓을 표현하기 위한 자료형
	// bool

	// bool  a = true;
	// bool  b = false;


	// 논리 자료형은 저장하는 값이 0이 아니면 모두 참을 의미한다.
	// 참 : 1
	// 거짓 : 0
	cout << true << endl; // 1
	cout << false << endl; // 0

	// 속성에 대한 키값을 설정하는 법
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
	// c = 1을 넘어가니 true , d = 0.0001로 0보다 크므로 true
	cout << "c:" << c << endl;
	cout << "d:" << d << endl;
	// e = 0이니까 false , f = 단일 문자이가 맞아서 1 , g = 1이니까 true
	cout << "e:" << e << endl;
	cout << "f:" << f << endl;
	cout << "g:" << g << endl;

	// 결과는 1011011이 출력된다.

	

	// 자료형의 크기 
	// 컴퓨터의 크기의 초소단위는 bit 라고 표현한다.
	// 1bit로 0 또는 1을 저장할 수 있다.
	// bit가 모이고 모여 8개가 모일 경우 8bits가 된다.
	// 이때 8bits를 1byte라고 표현한다.
	// 여기서 나온 byte가 크기의 기본 단위이다.
	// 자료형의 크기는 2의 n승으로 증가한다.

	// 1bytes(8bits)의 크기를 가지는 자료형 : char, bool
	// 2bytes(16bits)의 크기를 가지는 자료형 : short
	// 4bytes(32bits)의 크기를 가지는 자료형 : int , long ,float
	// 8bytes(64bits)의 크기를 가지는 자료형 : long long , double, long double


	// int 와 long은 4bytes의 크기를 가지고, 둘다 정수 자료형이다!
	// -> 각 자료형의 크기는 운영체제 환경에 따라서 달라질 수 있다.
	// -> 16bits 환경에서 int는 2bytes의 크기를 가진다.
	// 결국, 운영체제 환경에 따라 자료형의 크기가 변할 수 있기 때문에 
	// 특정 운영체제에서 중복된 크기의 자료형이 생길 수 있다.


}