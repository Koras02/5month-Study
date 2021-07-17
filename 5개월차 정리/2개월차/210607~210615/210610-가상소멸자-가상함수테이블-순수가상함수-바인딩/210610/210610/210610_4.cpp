#include "stdafx.h"

void main()
{
	//// 바인딩
	//// 프로그램 구성 요소의 성격을 결정하는 것.

	//// ##1. 정적 바인딩
	//// 컴파일 시점에 프로그램 구성 요소의 성격이 결정된다.
	//// 외길! 출발지에서 목적지까지 길이 하나이다!
	//
	//// 컴파일 시점에 배열의 크기가 결정되어야 한다!!
	//int		iArr[5];	// 정적 배열


	//// ##2. 동적 바인딩
	//// 런타임 시점에 프로그램 구성 요소의 성격이 결정된다.
	//// 컴파일 시점에 바인딩을 보류, 런타임 시점에 결정
	//// 갈림길! 갈림길에서 지도를 보고 어디로갈지 결정한다!
	//
	//// 컴파일 시점에 배열의 크기를 보류했다가 런타임 시점에 결정한다!
	//int		iSize = 0;
	//cin >> iSize;
	//int*	ptr = new int[iSize];	// 동적 배열


	// 가상 함수가 아닐 경우의 바인딩
	// 정적 바인딩
	// -> 객체 타입 기준으로 함수를 호출한다.

	// 가상 함수일 경우 바인딩
	// 동적 바인딩
	// -> 객체 타입 기준이 아닌 가상 함수 포인터가 참조하는 테이블을 확인해야 한다!


}