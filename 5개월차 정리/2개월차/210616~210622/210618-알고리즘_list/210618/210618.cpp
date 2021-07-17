// 210618.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//

#include "stdafx.h"

// 오름차순
template <typename T>
bool Less(T _Dst, T _Src)
{
	return _Dst < _Src;
}

// 내림차순
template <typename T>
bool Greater(T _Dst, T _Src)
{
	return _Dst > _Src;
}


template <typename T>
bool OddNum(T& _Dst)
{
	if (0 != (_Dst % 2))
		return true;
	return false;
}


template <typename T>
void Safe_Delete(T& _Dst)
{
	if (_Dst)
	{
		delete _Dst;
		_Dst = nullptr;
	}
}

int main()
{
	// 조건자
	// 알고리즘의 인자로 적용된다!
	// -> 예를 들어 정렬을 수행하기 위한 알고리즘을 사용하는데
	// -> 어떤 기준으로 정렬을 수행할지 알 수 없다!
	// -> 이 때 조건자를 통해 정렬 기준을 설정할 수 있다!!!
	// bool 값을 반환하는 함수 포인터, 함수 객체로 만들면 된다!!!!!!!!!

	vector<int>		vecInt;
	vecInt.reserve(5);

	vecInt.push_back(5);
	vecInt.push_back(1);
	vecInt.push_back(3);
	vecInt.push_back(4);
	vecInt.push_back(2);


	// 알고리즘 함수!
	// 알고리즘 함수를 사용하기 위해서는 #include <algorithm> 추가가 필요하다!!

	//// ##1. 정렬_sort
	//// 배열 기반 컨테이너에서 작동한다
	////sort(vecInt.begin(), vecInt.end(), Less<int>);
	//sort(vecInt.begin(), vecInt.end(), Greater<int>);

	//for (size_t i = 0; i < vecInt.size(); ++i)
	//	cout << vecInt[i] << endl;



	//const int	iCount = 5;
	//int	iArr[iCount] = { 5, 2, 4, 3, 1 };

	////sort(iArr, iArr + iCount, Less<int>);
	//sort(iArr, iArr + iCount, Greater<int>);

	//for (int i = 0; i < iCount; ++i)
	//	cout << iArr[i] << endl;


	//// <Functional>
	//// 오름차순 및 내림차순의 기본 조건자가 정의되어 있다!
	//// 단, 조건자가 함수 객체로 정의되어 있다!
	//
	////sort(vecInt.begin(), vecInt.end(), less<int>());
	//sort(vecInt.begin(), vecInt.end(), greater<int>());

	//for (size_t i = 0; i < vecInt.size(); ++i)
	//	cout << vecInt[i] << endl;



	//// ##2. count_if
	//// 컨테이너를 순회하면서 조건자의 반환 결과가 true일 때의 개수를 반환해주는 알고리즘 함수

	//int iCnt = count_if(vecInt.begin(), vecInt.end(), OddNum<int>);

	//cout << "홀수의 개수: " << iCnt << endl;



	// ##3. for_each()
	// 컨테이너를 순회하면서 조건자를 단순 실행한다!
	// -> for_each의 조건자는 반환 타입이 bool이 아니어도 상관 없다
	// 컨테이너에서 저장하는 데이터가 동적할당된 주소일 경우 유용하게 사용한다.
	vector<int*>	vecPtr;
	vecPtr.reserve(5);

	vecPtr.push_back(new int);
	vecPtr.push_back(new int);
	vecPtr.push_back(new int);
	vecPtr.push_back(new int);
	vecPtr.push_back(new int);

	//for (size_t i = 0; i < vecPtr.size(); ++i)
	//{
	//	delete vecPtr[i];
	//	vecPtr[i] = nullptr;
	//}

	for_each(vecPtr.begin(), vecPtr.end(), Safe_Delete<int*>);

	vecPtr.clear();



    return 0;
}

