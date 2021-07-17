#include "stdafx.h"


int Add(int _a, int _b)
{
	int iRes = 0;
	
	iRes = _a + _b;

	return iRes;
}

void main()
{
	// 함수
	// Input 이 있으면 Output이 있는 것.
	// 수학적인 의미의 함수로는 y = f(x)가 있다.
	// -> x로 값을 넣으면 y로 값을 내보내준다.

	// -> x : Input , y : output
	// -> y : Function(기능)

	// 결국 함수를 구현했다! -> 기능을 구현했다!


	// 함수를 사용하는 이유
	// 재사용성
	// -> 한번 만들어  놓은 함수는 언제, 어디서든 가져다 사용할 수 있다.
	// -> 한번 사용하고 소멸시키지 않는다.
	// -> ex) 라면 공장, 빵 공장 등 


	// 함수를 만들때 주의사항
	// 함수는 사용자가 직접 만드는 것이다.
	// -> 만든 사람이 이름을 지어준다.
	// 단, 이름을 지을 경우 기능에 맞는 이름을 지어주어야 한다.
	// -> 예) 더하기 기능의 함수를 만들어 놓고 '빼기'라고 이름을 지어줄 경우 혼란스러움이 발생한다.


	// 함수의 4가지 유형 
	// ##1. Input이 있고 Output이 있는것
	// -> y = f(x), 빵공장, 라면공장 등 

	// ##2. Input이 있고, Output이 없는 것.
	// -> srand(seed)

	// ##3. Input이 없고, Output이 있는 것.
	// -> int iA = rand();

    // ##4. Input도 없고, Output 도 없는 것.
	// main 함수 

	
	// 함수의 형태
	// 함수는 어떠한 중괄호 내부에도 포함되지 않게 만들어야 한다.

	/*
	   반환 타입 함수이름 (재료(매개변수/인자/파라미터))
	   {

	     기능 구현
	   
	   }
	*/


	// 반환 타입 : 함수를 모두 수행 후 얻어진 결과를 내보낼 떄 사용하는 것.
	// -> int : 정수형 데이터를 내보낸다!
	// -> void : 내보낼 데이터가 없을 경우 사용한다.

	// 함수 이름 : 말 그대로 함수의 이름이다.
	// -> 단, 기능에 맞는 이름을 지어주자!

	// 매개 변수 : 함수를 구동하는데 필요한 재료들을 명시하는 곳 
	// -> int형 2개가 필요하다!  int _a, int _b
	// -> int형 1개, float형 1개   int _a, float _bb


	// 기능 구현 : 함수의 기능이 작성되어 있는 곳.


	// return
	// 함수를 수행 중 return을 만나면 해당 함수를 종료한다.
	// 단, 반환 타입이 void일 경우 return 뒤는 생략이 가능하다.
	// 하지만 반환 타입이 void 가 아닐 경우 return 뒤에 반환할 데이터를 명시한다.

	/*cout << 1 << endl;
	cout << 2 << endl;
	cout << 3 << endl;
	return;
	cout << 4 << endl;
	cout << 5 << endl;

*/

	// 함수 호출 
	// () : 함수 호출 연산자
	// 함수이름 + 함수 호출 연산자 
	// 단, 매개 변수에 정보가 있을 경우 
	// 함수 호출 연산자 내부에 데이터를 명시해야한다.


	// int _a = 10;
	// int _b = 20;
	cout << Add(10, 20) << endl;


	int iA = 10;
	int iB = 20;


	// int _a = iA;
	// int _b = iB;
	cout << Add(iA, iB) << endl;


}

