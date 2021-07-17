#include <iostream>

using namespace std;

void main()
{
	//// 3차원 배열
	//int		iArr[2][3][4] = 
	//{
	//	{
	//		{ 11, 12, 13, 14 },
	//		{ 15, 16, 17, 18 },
	//		{ 19, 20, 21, 22 }
	//	},
	//	{
	//		{ 23, 24, 25, 26 },
	//		{ 27, 28, 29, 30 },
	//		{ 31, 32, 33, 34 }
	//	}
	//};



	//int		iArr[2][3] = { 1, 2, 3, 4, 5, 6 };


	////////////////////////////////////////////////////////////////////
	int		iArr[25] = {};

	for (int i = 0; i < ? ; ++i)
	{
		for (int j = 0; j < ? ; ++j)
			cout << iArr[? ] << '\t';
		cout << endl;
	}


}

//void Func(int(*_ptr)[3], int _iSize)
void Func(int _ptr[][3], int _iSize)
{
	for (int i = 0; i < _iSize; ++i)
	{
		for (int j = 0; j < 3; ++j)
			cout << _ptr[i][j] << endl;
	}
}