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

// ��������
class CAscending : public CSortRule
{
public:
	virtual bool operator()(int _a, int _b)
	{
		return _a > _b;
	}
};

// ��������
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
	//// �Լ� ��ü
	//// ��ü�� �Լ�ó�� ����ϴ� ��.
	//// () �Լ� ȣ�� �����ڸ� ������ �����ε��Ͽ� ����Ѵ�.

	//CObj	Functor;

	//cout << Functor(10, 20) << endl;
	//cout << Functor.operator()(10, 20) << endl;



	////////////////////////////////////////////////////////////////////
	CAscending		��������;
	CDescending		��������;

	int		iArr[5] = { 2, 4, 3, 1, 5 };

	//Bubble_Sort(iArr, 5, ��������);
	Bubble_Sort(iArr, 5, ��������);

	//for (int i = 0; i < 5; ++i)
	//	cout << iArr[i] << endl;


	////////////////////////////////////////////////////////////////////


}