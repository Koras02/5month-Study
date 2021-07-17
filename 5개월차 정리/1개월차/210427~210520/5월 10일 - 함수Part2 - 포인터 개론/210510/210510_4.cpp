#include <iostream>

using namespace std;

//// 디폴트 매개 변수를 사용하지 않을 경우
//// 함수 오버로딩을 사용하면 가능하다!
//int Add(int _a, int _b)
//{
//	return _a + _b;
//}
//int Add(int _a, int _b, int _c)
//{
//	return _a + _b + _c;
//}
//int Add(int _a, int _b, int _c, int _d)
//{
//	return _a + _b + _c + _d;
//}


// cout << Add(10, 20) << endl;
// -> _a에는 10이라는 값이, _b에는 20이라는 값이 매칭된다.
// -> _c와 _d에는 매칭될 값이 없으니 디폴트로 설정해놓은 0이라는 값이 매칭된다.

// cout << Add(10, 20, 30, 40) << endl;
// -> _a에는 10이라는 값이, _b에는 20이라는 값이 매칭된다.
// -> _c에는 매개 변수의 정보가 있으니 넘겨주는 30으로 매칭된다.
// -> _d 또한 매개 변수의 정보가 있으니 넘겨주는 40으로 매칭된다.
int Add(int _a, int _b, int _c = 0, int _d = 0);


void main()
{
	// 디폴트 매개변수
	// 매개 변수의 값을 기본적으로 설정해 놓는 것.

	cout << Add(10, 20) << endl;
	cout << Add(10, 20, 30) << endl;
	cout << Add(10, 20, 30, 40) << endl;


	// 디폴트 매개 변수 사용 시 주의사항
	// ##1. 오른쪽 끝에서부터 순차적으로 명시해야한다.
	// ##2. 선언부에서만 명시하고, 정의부에서는 명시하면 안된다.
}

int Add(int _a, int _b, int _c, int _d)
{
	return _a + _b + _c + _d;
}