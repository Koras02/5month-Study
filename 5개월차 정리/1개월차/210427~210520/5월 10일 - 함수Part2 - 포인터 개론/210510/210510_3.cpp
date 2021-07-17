#include <iostream>

using namespace std;

//// 함수 오버로딩이 없을 경우
//// 매개 변수의 정보가 다를 경우 함수를 다시 만들어야하지만 이름을 매번 다르게 지어야한다.
//// 호출할 때 또한 이름을 생각해서 어떤함수를 호출할지 결정해주어야 한다.
//int Add(int _a, int _b)
//{
//	return _a + _b;
//}
//
//double Add_double(double _a, double _b)
//{
//	return _a + _b;
//}


// 함수 오버로딩을 사용할 경우
int Add(int _a, int _b)
{
	return _a + _b;
}

//// 불가능
//float Add(int _a, int _b)
//{
//	return _a + _b;
//}

double Add(double _a, double _b)
{
	return _a + _b;
}

void main()
{
	// 함수 오버로딩
	// 동일한 이름의 함수를 재 정의하는 문법.
	// -> 함수의 이름을 동일하게 만드는 방법
	// 단, 매개 변수의 정보를 다르게 만들어야 한다!
	
	// 주의사항
	// 반환타입 정보에 따른 오버로딩은 존재하지 않는다.



	//// 함수 오버로딩이 없을 경우
	//cout << Add(10, 20) << endl;
	//cout << Add(100, 200) << endl;
	//cout << Add_double(3.5, 3.5) << endl;

	// 함수 오버로딩을 사용할 경우
	cout << Add(10, 20) << endl;		// int Add
	cout << Add(100, 200) << endl;		// int Add
	cout << Add(3.5, 3.5) << endl;		// double Add
}