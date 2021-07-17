#include <iostream>

using namespace std;

void main()
{
	//// ##1. 단일 문자 출력 함수
	//// 단일 문자인 대문자 A를 프로그램 연결된 모니터의 스트림을 이용해서 출력해주세요!
	//fputc(65, stdout);
	//fputc('A', stdout);


	//// ##2. 단일 문자 입력 함수
	//// fgetc는 버퍼에 데이터가 없을 경우 입력을 받고, 
	//// 버퍼에 데이터가 있을 경우 단순히 읽어온다.
	//// abc를 모두 출력하기 위해서는 3번만 반복한다고 끝이 아니다!
	//// 엔터도 사용자가 키보드로 입력한 것이다.
	//char ch = fgetc(stdin);
	//fputc(ch, stdout);

	//ch = fgetc(stdin);
	//fputc(ch, stdout);

	//ch = fgetc(stdin);
	//fputc(ch, stdout);

	//ch = fgetc(stdin);
	//fputc(ch, stdout);


	//// 문자열 출력 함수
	//fputs("Hello", stdout);

	//// 문자열 입력 함수
	//char	szBuff[5] = "";
	//fgets(szBuff, 5, stdin);
	//fputs(szBuff, stdout);



	// 단일 문자 입출력 시 성공
	// 반환 값은 단일 문자의 값을 반환

	// 단일 문자 입출력 시 실패
	// 반환 값은 EOF를 반환

	
	// EOF란?
	// End Of File의 약자.
	// 파일의 끝을 표현하기 위해 정의해 놓은 상수. ( -1 )


	// 단일 문자 입출력 시 char를 사용하지 않고 int를 사용하는 이유
	// char 자료형의 특징 때문이다!
	// char 자료형은 시스템 환경에 따라 unsigned로 표현될 수 있다.
	// -> 음수를 표현할 수 없다!
	// -> EOF를 표현할 수 없다!
	// 하지만 int 자료형은 어떠한 환경이든 signed를 유지한다.

}