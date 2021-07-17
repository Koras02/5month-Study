#include <iostream>
#include <time.h>

#include "TextRPG.h"
using namespace std;

int Add(int _a, int _b);

void main()
{
	// 디버깅
	// 코드의 흐름을 사용자가 한 줄 한 줄 인식하면서 진행하는 것.
	// -> 오류 해결을 위한 방법


	//// F5 : 디버깅 시작/재시작
	//// 쉬프트 + F5 : 디버깅 종료
	//// F9 : 중단점 설정/해제
	//// 컨트롤 + 쉬프트 + F9 : 모든 중단점 해제
	//// F10 : 다음 코드 라인으로 이동
	//// F11 : 다음 수행 라인으로 이동

	//int		iA = 10;
	//int		iB = 20;
	//int		iC = 30;

	//cout << "iA: " << iA << endl;
	//cout << "iB: " << iB << endl;
	//cout << "iC: " << iC << endl;
	//cout << Add(10, 20) << endl;

	////////////////////////////////////////////////////////////////////

	int		iA = 0;

	for (int i = 0; i < 1000; ++i)
		iA += 1;

 

	////////////////////////////////////////////////////////////////////
	//srand(unsigned(time(NULL)));
	//INFO* pPlayer = nullptr;
	//pPlayer = Select_Player();

	//if (!pPlayer)
	//	return;

	//Progress(pPlayer);

	//if (pPlayer)
	//{
	//	delete pPlayer;
	//	pPlayer = nullptr;
	//}



}

int Add(int _a, int _b)
{
	int iRes = 0;

	iRes = _a + _b;

	return iRes;
}