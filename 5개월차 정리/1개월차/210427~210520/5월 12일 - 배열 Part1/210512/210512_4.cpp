#include <iostream>

using namespace std;

//// ##### ������ ������ ���ӵ� �޸𸮸� ����� ��쿡�� �����ϴ� #####

// int* _ptr�� �ּҸ� �޾ƿ��ڴٶ�� �ǹ��̴�.
// -> �迭�� �ּҸ� �޾ƿ��ڴٶ�� Ȯ���� �� ����.
//void Func(int*	_ptr, int _iSize)


// int _ptr[] �� �迭�� ���� �ּҸ� �޾ƿ��ڴٶ�� �ǹ��̴�.
// -> int* _ptr�� ���� �ٸ� ���� ������ �迭�� �ްڴٰ� ����ϴ� ���
void Func(int _ptr[], int _iSize)
{
	for (int i = 0; i < _iSize; ++i)
		cout << _ptr[i] << endl;
}

void main()
{
	// �Լ��� ���ڷ� �迭�� �����ϴ� ���
	int		iArr[5] = { 1, 2, 3, 4, 5 };
	int		iArr2[7] = { 1, 2, 3, 4, 5, 6, 7 };

	//int*	_ptr = iArr;
	Func(iArr, sizeof(iArr) / sizeof(int));
	Func(iArr2, sizeof(iArr2) / sizeof(int));



	// bubble Sort
}