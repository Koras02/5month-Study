// 210616.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//

#include "stdafx.h"


int main()
{
	// STL
	// Standard Template Library
	// 표준에 등록된 템플릿들의 집합
	// C++에서 제공하는 라이브러리의 일종으로 프로그래밍에 필요한
	// 자료구조 및 알고리즘을 클래스 템플릿화 하여 제공
	// 템플릿을 기반으로하기 때문에 모든 자료형을 호환한다.

	// STL을 사용하는 이유
	// 데이터를 저장하기 위한 방법으로는 여러가지가 있다.
	// 데이터 저장 방식이 다를 경우 다음 데이터를 찾아가는 방법이 다르게 작동한다.
	// 하지만, STL을 이러한 방법을 획일화 시켜서 하나의 기능만 배우면
	// 다른 STL 또한 쉽게 사용할 수 있다.

	// STL의 구성 요소
	// ##1. 컨테이너
	// ##2. 알고리즘
	// ##3. 함수 객체
	// ##4. 반복자


	// ##1. 컨테이너
	// 데이터를 저장하는 객체.
	// -> 자료 구조를 구현한 객체를 의미한다.

	// 컨테이너의 종류
	// 동적 배열을 기반으로하는 vector
	// 노드를 기반으로하는 list
	// 트리를 기반으로하는 map

	// 컨테이너 구분 기준_##1. 원소 배치
	// ##1. 표준 시퀀스 컨테이너
	// 선형적인 구조 (일렬로 줄 지을 수 있는 구조 / 앞, 뒤 구분이 가능하다) 
	// list, vector

	// ##2. 표준 연관 컨테이너
	// 비 선형적인 구조 (일렬로 줄 지을 수 없는 구조 / 앞, 뒤 구분이 불가능하다)
	// map


	// 컨테이너 구분 기준_##2. 메모리 저장 방식
	// ##1. 배열 기반
	// 연속된 메모리를 사용한다.
	// vector

	// ##2. 노드 기반
	// 비 연속된 메모리에 저장하지만 포인터로 연결해놓은 구조.
	// list, map



	// ##2. 알고리즘
	// 컨테이너 내에서 정렬, 삭제, 탐색 등을 해결하기 위한 기능
	// 함수 템플릿으로 구현되어 있다!
	// 대부분의 알고리즘 함수들은 특정 컨테이너의 멤버가 아닌 전역으로 작성되어 있다!!!!!
	// 자주 사용하는 알고리즘 함수들은 대부분 #include <algorithm> 파일에 존재한다.


	// ##3. 함수 객체
	// 객체를 함수처럼 사용하는 것
	// 연산자 오버로딩 + 함수호출 연산자를 사용해서

	
	// ##4. 반복자
	// STL의 핵심
	// 모든 컨테이너의 원소 순회 방법이 다르다!
	// 컨테이너 마다 반복자 객체를 템플릿화하여 만들어 놓았다!
	// -> 모든 컨테이너가 반복자의 사용 방법이 동일하다!!

	// 포인터와 비슷하게 작동한다.
	// 반복자는 포인터가 아니라 객체이다!!!!





    return 0;
}

