#include <iostream>

using namespace std;

void main()
{
	// 이중 포인터
	// 포인터도 자료형이다!
	// 포인터 자료형에 변수명을 부여하면 메모리에 할당이 된다.
	// 이 때 포인터가 할당된 메모리의 주소를 저장할 수 있는 것이 이중 포인터이다.

	// 이중 포인터는 에스크리터 2개를 사용하여 선언할 수 있다.

	int			iA = 10;
	int*		ptr = &iA;

	cout << "iA: " << iA << endl;
	cout << "&iA: " << &iA << endl;
	cout << "---------------------" << endl;
	cout << "ptr: " << ptr << endl;
	cout << "*ptr: " << *ptr << endl;		// 10
	cout << "&ptr: " << &ptr << endl;

	// 일반 포인터 변수에는 다른 포인터변수의 주소 값을 저장할 수 없다!
	// 에스크리터 역참조 연산자는 1:1의 비율로 작동한다.
	// 역참조 연산자를 하나만 사용할 경우 에스크리터를 하나만 지운 결과가 나와야 한다.

	//// ptr2에 역참조 연산자를 사용하면 int형의 데이터가 나와야 하지만
	//// ptr이 가지고 있는 값인 int*가 나오게 되어 1:1의 비율이 성립하지 않는다!
	//int*	ptr2 = &ptr;		// 불가능
	//*ptr2;		// int


	int**		ptr2 = &ptr;
	//*ptr2;		// int*
	//**ptr2;		// int

	cout << "---------------------" << endl;
	cout << "ptr2: " << ptr2 << endl;
	cout << "*ptr2: " << *ptr2 << endl;
	cout << "**ptr2: " << **ptr2 << endl;

}