#include "stdafx.h"


using namespace std;


void main()
{
	// 연산자 
	// 연산후 결과를 반환하는 것.
	// 산술 연산자, sizeof 연산자, 대입 연산자, 관계 연산자, 논리 연산자, 비트 단위 연산자
	// 단항 연산자(피 연산자 하나), 이항 연산자(피 연산자 둘), 삼항 연산자(피 연산자 셋)

	// ##1. 산술 연산자 (이항 연산자)
	// + , - , *, /, %

	// ##2. sizeof 연산자 (단항 연산자)
	// 자료형 또는 변수가 할당된 메모리의 크기를 byte단위로 반환하는 연산자 

	// sizeof( 자료형 / 변수명 )

	 char  chTest = 'A';
	 bool   bTest = true;
	 short  nTest = 10;
	 int    iTest = 20;
	 long   lTest = 30;
	 float  fTest = 3.14f;
	 long long llTest = 40;
	 double   dTest = 3.1415;
	 long double ldTest = 3.141592;

	 cout << "char의 크기:" << sizeof(char) << endl;
	 cout << "chTest의 크기:" << sizeof(chTest) << endl;
	 cout << "--------------------------------------------" << endl;
	 cout << "bool의 크기:" << sizeof(bool) << endl;
	 cout << "bTest의 크기:" << sizeof(bTest) << endl;
	 cout << "--------------------------------------------" << endl;
	 cout << "short의 크기:" << sizeof(short) << endl;
	 cout << "nTest의 크기:" << sizeof(nTest) << endl;
	 cout << "--------------------------------------------" << endl;
	 cout << "int의 크기:" << sizeof(int) << endl;
	 cout << "iTest의 크기:" << sizeof(iTest) << endl;
	 cout << "--------------------------------------------" << endl;
	 cout << "long의 크기:" << sizeof(long) << endl;
	 cout << "fTest의 크기:" << sizeof(fTest) << endl;
	 cout << "---------------------------------------------" << endl;
	 cout << "long long의 크기:" << sizeof(long long) << endl;
	 cout << "llTest의 크기:" << sizeof(llTest) << endl;
	 cout << "---------------------------------------------" << endl;
	 cout << "double의 크기:" << sizeof(double) << endl;
	 cout << "dTest의 크기:" << sizeof(dTest) << endl;
	 cout << "---------------------------------------------" << endl;
	 cout << "long double의 크기:" << sizeof(long double) << endl;
	 cout << "ldTest의 크기:" << sizeof(ldTest) << endl;
	 cout << "----------------------------------------------" << endl;


	 // 산술 연산시 크기 확인
	 char  a = 'A';
	 char  b = 'B';

	 // char 자료형은 단일 문자 자료형이지만 저장하는 값은 정수형이다.
	 // a + b는 단순히 정수형의 더하기 연산을 수행하고 결과를 반환한다.
	 // 반환된 결과는 임시 메모리에 등록되는데 정수형이기 때문에 int형으로 간주한다.
	 // 결국 sizeof 연산자는 임시 메모리의 크기를 확인한 것이다.
	 cout << sizeof(a + b) << endl; // 4bytes





}