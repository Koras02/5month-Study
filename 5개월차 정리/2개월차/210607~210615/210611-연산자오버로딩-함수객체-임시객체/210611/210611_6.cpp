#include "stdafx.h"

class CObj
{
public:
	int operator()(int _a, int _b)
	{
		return _a + _b;
	}
};

////////////////////////////////////////////////////////////////////
class CSortRule
{
public:
	virtual bool operator()(int _a, int _b) = 0;
};

// 오름차순
class CAscending : public CSortRule
{
public:
	virtual bool operator()(int _a, int _b)
	{
		return _a > _b;
	}
};

// 내림차순
class CDescending : public CSortRule
{
public:
	virtual bool operator()(int _a, int _b)
	{
		return _a < _b;
	}
};

void Bubble_Sort(int _iArr[], int _iSize, CSortRule& _functor)
{
	for (int i = 0; i < _iSize; ++i)
	{
		for (int j = 0; j < _iSize - 1; ++j)
		{
			if (_functor(_iArr[j], _iArr[j + 1]))
			{
				int iTemp = _iArr[j];
				_iArr[j] = _iArr[j + 1];
				_iArr[j + 1] = iTemp;
			}
		}
	}
}
////////////////////////////////////////////////////////////////////

void main()
{
	//// 함수 객체
	//// 객체를 함수처럼 사용하는 것.
	//// () 함수 호출 연산자를 연산자 오버로딩하여 사용한다.

	//CObj	Functor;

	//cout << Functor(10, 20) << endl;
	//cout << Functor.operator()(10, 20) << endl;



	////////////////////////////////////////////////////////////////////
	CAscending		오름차순;
	CDescending		내림차순;

	int		iArr[5] = { 2, 4, 3, 1, 5 };

	//Bubble_Sort(iArr, 5, 오름차순);
	Bubble_Sort(iArr, 5, 내림차순);

	//for (int i = 0; i < 5; ++i)
	//	cout << iArr[i] << endl;


	////////////////////////////////////////////////////////////////////


}