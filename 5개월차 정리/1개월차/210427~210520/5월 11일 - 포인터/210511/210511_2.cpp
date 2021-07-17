#include <iostream>

using namespace std;

void main()
{
	//// 포인터의 크기
	//// 포인터 자료형은 4bytes 고정된 크기를 가진다.

	//// 32bits 시스템 환경에서 가용할 수 있는 메모리의 크기는 4기가이다.
	//// 주소는 1byte당 하나의 주소가 할당되니 4기가를 바이트 단위로 변환하게 된다면
	//// 약 42억 9천만개의 공간이 나오게 된다.
	//// 각 공간에 1번지부터 2번지, 3번지 ... 주소를 부여하면 마지막 공간은 약 42억 9천만 번지가 된다.
	//// 주소가 모두 부여되었으니 변수에 저장을 해보자!
	//// 10번지는 1byte 공간만 있어도 저장이 가능하다.
	//// 하지만 300번지 주소는 1byte에 저장할 수 없다.
	//// 300번지를 저장하기 위해서는 최소 2bytes가 필요하다.
	//// 또 다시 70000번지 주소를 저장하기 위해서는 2bytes로는 공간이 부족하다.
	//// 이러한 계산 방식대로 마지막 주소인 약42억 9천만번지를 저장하기 위해서는
	//// 최소 4bytes의 공간이 필요하다!
	//cout << sizeof(char*) << endl;
	//cout << sizeof(bool*) << endl;
	//cout << sizeof(short*) << endl;
	//cout << sizeof(int*) << endl;
	//cout << sizeof(long*) << endl;
	//cout << sizeof(float*) << endl;
	//cout << sizeof(long long*) << endl;
	//cout << sizeof(double*) << endl;
	//cout << sizeof(long double*) << endl;


	//// int*
	//// float*
	//// 둘 모두 4bytes의 메모리를 할당하며 저장하는 값은 주소 값이다.
	//// -> int*에 float*를 대입할 수 있을까?

	//// 다른 타입의 포인터 변수끼리 주소값 대입이 불가능하다!
	//// 역참조 연산자의 읽는 방식 때문에 발생하는 문제이다.
	//int		iA = 10;
	//int*	ptr1 = &iA;
	//float*	ptr2 = ptr1;		// 불가능

	//// ptr1이 가지고 있는 주소로 찾아가 
	//// ptr1의 타입(int)의 크기 4bytes만큼의 공간을 정수형으로 확인해라!
	//*ptr1;

	//// ptr2가 가지고 있는 주소로 찾아가
	//// ptr2의 타입(float)의 크기 4bytes만큼의 공간을 실수형으로 확인해라!
	//*ptr2; 



	// int*
	// long*
	// 둘 모두 4bytes의 크기를 가지며 정수형으로 읽는 자료형이다!
	// 이 경우 대입이 가능할까?

	// 자료형의 크기는 운영체제 환경에 따라 변할 수 있다!
	// 지금 당장은 동일한 크기를 가진다하여도 운영체제가 바뀔 경우 위험성이 존재한다.
	int		iA = 10;
	int*	ptr1 = &iA;
	long*	ptr2 = ptr1;		// 불가능


}