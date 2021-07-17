#include "stdafx.h"

void main()
{
	//// ##3. const_cast
	//// const 성향을 제거하는 캐스팅
	//// 원본 const는 제거가 불가능하다.
	//// 참조하는 변수의 const 성향을 제거할 수 있다.

	//int		iA = 10;

	////iA = 999;

	//int*	ptr = &iA;
	//*ptr = 999;

	//const int*	ptr2 = &iA;
	//*ptr2 = 999;			// 불가능

	//*const_cast<int*>(ptr2) = 999;		// 가능




	// ##4. reinterpret_cast
	// 모든 포인터간의 형 변환이 가능하다!!!!

	int		iA = 65;
	cout << reinterpret_cast<char*>(&iA) << endl;

}