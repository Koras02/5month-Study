#include "stdafx.h"

void main()
{
	// vector
	// vector를 사용하기 위해서는 #include <vector> 추가가 필요하다!

	// vector 선언
	// 템플릿 기반
	// 템플릿 클래스를 만들면 된다.
	// <> 안에 저장하고 관리할 자료형을 명시한다!!!
	vector<int>		vecInt;
	vector<float>	vecFloat;


	// 원소 삽입
	// push 함수
	// push_back()
	vecInt.push_back(1);
	vecInt.push_back(2);
	vecInt.push_back(3);
	vecInt.push_back(4);
	vecInt.push_back(5);

	//// 원소 출력
	//// 배열 기반이기 때문에 인덱스 접근이 가능하다!
	//// -> 배열을 사용하듯 접근하여 사용할 수 있다!
	//for (int i = 0; i < 5; ++i)
	//	cout << vecInt[i] << endl;


	//// 원소 삭제
	//// pop 함수
	//// pop_back()
	//vecInt.pop_back();
	//vecInt.pop_back();

	//for (int i = 0; i < 3; ++i)
	//	cout << vecInt[i] << endl;


	////// size()
	////// 원소의 개수를 반환하는 함수
	////cout << vecInt.size() << endl;

	//for (size_t i = 0; i < vecInt.size(); ++i)
	//	cout << vecInt[i] << endl;



	//// 모든 원소 삭제

	//// for문의 i는 증가하지만 vecInt.size는 감소한다!
	//// -> 모든 원소를 삭제할 수 없게 된다!!!
	//for (size_t i = 0; i < vecInt.size(); ++i)
	//	vecInt.pop_back();

	//cout << "vecInt.Size: " << vecInt.size() << endl;


	//// clear()
	//// 모든 원소를 삭제하는 함수
	//vecInt.clear();
	//cout << "vecInt.Size: " << vecInt.size() << endl;


	//// capacity()
	//// 메모리의 개수를 반환하는 함수
	//// 배열의 원소는 5개가 삽입되어 있다.
	//// 배열의 메모리 할당 개수는 6개가 할당되어 있다!
	//cout << "vecInt.Size: " << vecInt.size() << endl;
	//cout << "vecInt.capa: " << vecInt.capacity() << endl;


	// vector는 동적할당 기반의 컨테이너이다!
	// 동적 배열로 메모리를 설정하고 원소를 삽입하는 형태를 가진다!!
	// 단, 메모리의 개수를 초과하는 삽입의 시도가 있을 경우 재할당 및 복사가 발생한다.
	// -> 재할당의 개수
	
	// vector는 메모리의 재할당 시 (기존 메모리 개수 / 2)만큼 추가로 재할당이 발생한다.


	//// empty()
	//// vector의 원소가 비어있는지 검사하는 함수
	//// vector한테 비어있는지 물어본다!
	//// -> 비어 있을 경우 : true를 반환
	//// -> 비어있지 않을 경우 : false를 반환

	//vecInt.clear();

	//if (vecInt.empty())
	//	cout << "비어있다!!!!" << endl;
	//else
	//	cout << "비어있지 않다!!!!" << endl;


	//// swap()
	//// swap함수를 호출하는 객체와 매개변수로 전달하는 객체의
	//// 모든 원소와, 메모리 할당 개수를 서로 바꾼다!!

	//vector<int>		vecTemp;

	//cout << "vecInt.Size: " << vecInt.size() << endl;
	//cout << "vecInt.capa: " << vecInt.capacity() << endl;
	//cout << "-------------------------" << endl;
	//cout << "vecTemp.Size: " << vecTemp.size() << endl;
	//cout << "vecTemp.capa: " << vecTemp.capacity() << endl;

	//cout << "=========================" << endl;
	//vecInt.swap(vecTemp);

	//cout << "vecInt.Size: " << vecInt.size() << endl;
	//cout << "vecInt.capa: " << vecInt.capacity() << endl;
	//cout << "-------------------------" << endl;
	//cout << "vecTemp.Size: " << vecTemp.size() << endl;
	//cout << "vecTemp.capa: " << vecTemp.capacity() << endl;


	//// vector의 메모리 소멸
	////vecInt.swap(vector<int>());
	//vector<int>().swap(vecInt);

	//cout << "vecInt.Size: " << vecInt.size() << endl;
	//cout << "vecInt.capa: " << vecInt.capacity() << endl;


	// front(), back()
	// front() 첫 번째 원소에 접근한다.
	// back() 마지막 원소에 접근한다.
	// front함수와 back함수를 통해 원소에 접근하여 읽기/쓰기가 가능하다!!

	cout << vecInt.front() << endl;
	cout << vecInt.back() << endl;



}