// 210618.cpp : �ܼ� ���� ���α׷��� ���� �������� �����մϴ�.
//

#include "stdafx.h"

// ��������
template <typename T>
bool Less(T _Dst, T _Src)
{
	return _Dst < _Src;
}

// ��������
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
	// ������
	// �˰����� ���ڷ� ����ȴ�!
	// -> ���� ��� ������ �����ϱ� ���� �˰����� ����ϴµ�
	// -> � �������� ������ �������� �� �� ����!
	// -> �� �� �����ڸ� ���� ���� ������ ������ �� �ִ�!!!
	// bool ���� ��ȯ�ϴ� �Լ� ������, �Լ� ��ü�� ����� �ȴ�!!!!!!!!!

	vector<int>		vecInt;
	vecInt.reserve(5);

	vecInt.push_back(5);
	vecInt.push_back(1);
	vecInt.push_back(3);
	vecInt.push_back(4);
	vecInt.push_back(2);


	// �˰��� �Լ�!
	// �˰��� �Լ��� ����ϱ� ���ؼ��� #include <algorithm> �߰��� �ʿ��ϴ�!!

	//// ##1. ����_sort
	//// �迭 ��� �����̳ʿ��� �۵��Ѵ�
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
	//// �������� �� ���������� �⺻ �����ڰ� ���ǵǾ� �ִ�!
	//// ��, �����ڰ� �Լ� ��ü�� ���ǵǾ� �ִ�!
	//
	////sort(vecInt.begin(), vecInt.end(), less<int>());
	//sort(vecInt.begin(), vecInt.end(), greater<int>());

	//for (size_t i = 0; i < vecInt.size(); ++i)
	//	cout << vecInt[i] << endl;



	//// ##2. count_if
	//// �����̳ʸ� ��ȸ�ϸ鼭 �������� ��ȯ ����� true�� ���� ������ ��ȯ���ִ� �˰��� �Լ�

	//int iCnt = count_if(vecInt.begin(), vecInt.end(), OddNum<int>);

	//cout << "Ȧ���� ����: " << iCnt << endl;



	// ##3. for_each()
	// �����̳ʸ� ��ȸ�ϸ鼭 �����ڸ� �ܼ� �����Ѵ�!
	// -> for_each�� �����ڴ� ��ȯ Ÿ���� bool�� �ƴϾ ��� ����
	// �����̳ʿ��� �����ϴ� �����Ͱ� �����Ҵ�� �ּ��� ��� �����ϰ� ����Ѵ�.
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

