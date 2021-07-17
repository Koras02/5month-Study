#include "stdafx.h"
#include "Test.h"

//// 어떤 자료형을 사용하는 CTest의 생성자인지 파악할 수 없다!!!
//CTest::CTest()
//{
//
//}


//// CTest는 템플릿에서 명시한 T의 자료형을 사용한다!!
//// 단, 해당 코드만 확인할 경우 T가 무엇인지 모르는 상황이다!
//CTest<T>::CTest()
//{
//
//}


template <typename T>
CTest<T>::CTest()
{

}


template <typename T>
CTest<T>::~CTest()
{

}

template <typename T>
void CTest<T>::Func()
{

}

template <typename T>
void CTest<T>::Render()
{

}