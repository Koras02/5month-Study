#include <iostream>

using namespace std;

void main()
{
	// 2차원 배열
	// 1차원 배열은 원소로 자료형 타입의 데이터를 가졌다!
	// 2차원 배열은 원소로 1차원 배열을 가진다!
	/*
	자료형	변수명[ 행(세로) ][ 열(가로) ]
	*/

	//// 2차원 배열 이후 뒤에서부터 읽으면 쉽게 파악할 수 있다!
	//// int형의 원소가 3개 있다!
	//// 그리고 그게 총 2개 있다!
	/*
	O O O
	O O O
	*/
	//int		iArr[2][3];
	//cout << "sizeof(iArr): " << sizeof(iArr) << endl;		// 24


	//// 2차원 배열의 초기화
	//// 1차원 배열의 초기화와 다를 것이 없다.
	//int		iArr[2][3] = 
	//{
	//	{ 1, 2, 3 },
	//	{ 4, 5, 6 }
	//};


	//// 2차원 배열의 모든 원소 출력
	//// 2차원 배열의 인덱스 접근은 앞에서부터 읽으면 편하게 읽을 수 있다.
	//// -> [a][b] : a 번째 배열에 있는 b 번째 원소에 접근해라!
	//int		iArr[2][3] = { 1, 2, 3, 4, 5, 6 };

	//for (int i = 0; i < 2; ++i)
	//{
	//	for (int j = 0; j < 3; ++j)
	//		cout << iArr[i][j] << endl;
	//}

	//for (int i = 0; i < 3; ++i)
	//	cout << iArr[0][i] << endl;

	//for (int i = 0; i < 3; ++i)
	//	cout << iArr[1][i] << endl;

	//cout << iArr[0][0] << endl;
	//cout << iArr[0][1] << endl;
	//cout << iArr[0][2] << endl;
	//cout << iArr[1][0] << endl;
	//cout << iArr[1][1] << endl;
	//cout << iArr[1][2] << endl;
	
}