 #include "stdafx.h"


void main()
{
   // bitset
   // 자료형 
   // 정수 데이터를 저장한다.
   // 저장한 정수 데이터를 2진수로 변환하여 출력해준다.
   // bitset을 사용하기 위해서는 #include <bitset> 추가가 필요하다.
   
   // bitset<몇 자리 비트> 변수명
   /*
     bitset<8>  bitA = 10;
	 cout << "bitA:" << bitA << endl;

   */


	// ##1. 비트 단위 논리 연산자 
	// 같은 비트열끼리 논리 연산을 수행하는 것.
	// & (and), | (or), ^(xor), ~(not)

	// ##1. 비트 단위 논리 연산자_##1. & (and) (이항 연산자)
	// 두 비트모두 1일 경우 1이 된다.
	// 하나라도 0일 경우 0이 된다.

	 //bitset<4>  bitA = 10, bitB = 6, bitC = 0;
	 //cout << "bitA:" << bitA << endl;
	 //cout << "bitB:" << bitB << endl;
	 //cout << "=============================" << endl;
	 //bitC = bitA & bitB;
	 //cout << "bitC:" << bitC << endl;

	// ##1. 비트 단위 논리 연산자_##2. | (or) (이항 연산자)
	// 두 비트 중 하나라도 1이면 1, 둘 다 0일 경우에만 0이 된다.
	 //bitset<4>  bitA = 10, bitB = 6, bitC = 0;
	 //cout << "bitA: " << bitA << endl;
	 //cout << "bitB: " << bitB << endl;
	 //cout << "================================" << endl;
	 //bitC = bitA | bitB;
	 //cout << "bitC:" << bitC << endl;

    // ##1. 비트 단위 논리 연산자_##3. ^ (xor) (이항 연산자)
	// 두 비트가 같으면 0, 다를 경우 1
	// bitset<4> bitA = 10, bitB = 6, bitC = 0;
	//cout << "bitA:" << bitA << endl;
	//cout << "bitB:" << bitB << endl;
	//cout << "==============================" << endl;
	//bitC = bitA ^ bitB;
	//cout << "bitC:" << bitC << endl;

	// ##1. 비트 단위 논리 연산자_##4. ~ (not) (단항 연산자)
	// 1은 0으로, 0은 1로 바꾸는 연산자
	// 비트 반전(1의 보수)

	//bitset<4> bitA = 10, bitB = 0;

	//cout << "bitA: " << bitA << endl;
	//cout << "=================================" << endl;
	//bitB = ~bitA;
	//cout << "bitB: " << bitB << endl;


	//int   iA = 55;
	//cout << ((~iA) + 1) << endl; // 1의 보수
	

	

}

