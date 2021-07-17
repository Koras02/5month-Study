#include "stdafx.h"

using namespace std;

void main()
{
	// ##3.대입 연산자 (이항 연산자)
	// 할당 연산자 라고도 부른다.
	// = 
	// 대입 연산자 기준 우측의 데이터를 좌측에 복사 한다.
	// 단, 대입 연산자 기준 양 항은 같은 타입의 자료형이어야 한다.

	//int iA = 10, iB = 20, iC = 30;

	//iA = iB;
	//iB = iC;

	//// 연산후 결과를 반환하니 연속 대입 가능해진다.
	//iA = iB = iC = 200;


	// ##4. 관계 연산자 (이항 연산자)
	// 대소 관계를 비교하는 연산자.
	// 비교하여 참(1)과 거짓(0)을 반환한다.
	// <, > , <=, >= , == , !=

	// 단, 연산자 우선순위를 생각해서 소괄호로 묶어주는 습관을 들이자!

	 //int iA = 10, iB = 20;

	 //cout << (iA < iB) << endl; // 1
	 //cout << (iA > iB) << endl;  // 0
	 //cout << (iA <= iB) << endl; // 1 
	 //cout << (iA >= iB) << endl;  // 0 
	 //cout << (iA == iB) << endl;  // 0 
	 //cout << (iA != iB) << endl;  // 1


	 // ##5 .논리 연산자
	 // 피 연산자로 조건을 취한다.
	 // 두 조건이 모두 참이거나, 하나라도 참일 경우 등을 판별할 때 사용한다.
	 // && (and), || (or), !(not)

	 // ##5.논리 연산자_##1. && (and) (이항 연산자)
	 // 두 조건이 모두 참이어야 참(1)이 된다.
	 // 둘 중 하나라도 거짓이 올 경우 거짓(0)이 된다.

	 //cout << (true && true) << endl;
	 //cout << (true && false) << endl;
	 //cout << (false && true) << endl;
	 //cout << (false && false) << endl;


	 //int iA = 10, iB = 20;


	 //cout << (true && true) << endl; // 하나라도 참인 경우 2020 이 나온다.
	 //cout << (true && false) << endl;
	 //cout << (false && true) << endl;

	 //cout << (false && (iA = iB)) << endl; // false
	 //cout << iA << "," << iB << endl;

	 // 단 시작 부터 거짓이 올경우 다음 연산은 수행하지 않는다.
	 //int  iA = 10, iB = 20;

	 //cout << (true && (iA = iB)) << endl; // 1
	 //cout << iA << "," << iB << endl; // 20,20

 
	//int iA = 10, iB = 20;
	//cout << (false && (iA = iB)) << endl; // 0
	//cout << iA << "," << iB << endl;  // 10,20


	// ##5.논리 연산자_##2. || (or) (이항 연산자)
	// 둘 중 하나라도 참이면 참.
	// 둘 다 거짓일 때만 거짓이 된다.

	//cout << (true || true) << endl;  // 1
	//cout << (true || false) << endl; // 1
	//cout << (false || true) << endl; // 1
	//cout << (false || false) << endl; // 0

	// 단, 시작부터 참이 올 경우 다음 연산은 수행하지 않는다.

	//int iA = 10, iB = 20;
	//cout << (true || (iA = iB)) << endl; // 1
	//cout << iA << "," << iB << endl;  // 10,20


	//int  iA = 10, iB = 20;
	//cout << (false || (iA = iB)) << endl;  // 1
	//cout << iA << "," << iB << endl; // 20,20

	// ##5.논리 연산자_##3. ! (not) (단항 연산자)
	// 논리 부정.
	// 참은 거짓으로, 거짓은 참으로 바꾸는 것.
	cout << true << endl; // 1
	cout << false << endl; // 0
	cout << "------------------------------------" << endl;
	cout << !true << endl; // 0
	cout << !false << endl; // 1



} 