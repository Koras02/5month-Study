// 210430.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//

#include "stdafx.h"

using namespace std;


void main()
{
    // N진수
	// 숫자를 표현하는 방법

	// ##1. 10진수
	// 0 ~ 9까지 총 10개의 숫자를 사용한다.
	// 우리가 보통 사용하는 숫자 개념이다.


	// ##2. 2진수
	// 0과 1 총 2개의 숫자로 구성된다.
	// 컴퓨터가 2진수로 구성되어 있다.

	
	// ##3. 8진수
	// 0 ~ 7까지 총 8개의 숫자를 사용한다.
	// 정수 앞에 0을 붙여서 8진수라고 명시한다.
	// 각 자리당 000 ~ 111로 표현할 수 있다.

	
	// ##4. 16진수
	// 0 ~ 15까지 총 16개의 숫자를 사용한다.
	// 정수 앞에 0x를 붙여서 16진수라고 명시한다.
	// 10 이상부터는 알파벳을 사용한다.
	// 각 자리당 0000 ~ 1111로 표현할 수 있다.


	// 문제 ) 10진수 8부터 20까지를 2진수(8bits)와 16진수로 표현하기

	/*
	  8   0000 1000   0x8
	  9   0000 1001   0x9
	  10  0000 1010   0xA
	  11  0000 1011   0xB
	  12  0000 1100   0xC
	  13  0000 1101   0xD
	  14  0000 1110   0xE
	  15  0000 1111   0xF
	  16  0001 0000   0x10
	  17  0001 0001   0x11
	  18  0001 0010   0x12
	  19  0001 0011   0x13
	  20  0001 0100   0x14


	// 문제 ) 10진수 5부터 18까지를 8진수로 표현해보기

	/*
	5  05 
	6  06 
	7  07
	8  010
    9  011
	10 012
	11 013
	12 014
	13 015
	14 016
	15 017
	16 020
	17 021
	18 022
	*/


	// 문제 ) 각 2진수들은 10진수로 얼마인가

	/*
	  0000 0001  1
	  0000 0010  2
	  0000 0100  4
	  0000 1000  8
	  0001 0000  16
	  0010 0000  32 
	  0100 0000  64
	  1000 0000  128
	*/

	// 문제 ) 다음 signed의 4bits는 10진수로 얼마인가?
	// 1001   -7   -> 0110 -> 0111 -> 7
	// 1010   -6   -> 0101 -> 0110 -> 6
}

