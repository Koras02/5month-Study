#include "stdafx.h"


void main()
{
	// 난수 
	// 순서나 규칙이 없는 무작위 수 (random)


	// 난수 추출 
	// rand()

	// 컴퓨터가 난수를 추출하여 돌려주면 iA 에 저장 
	//int    iA = rand();


	//int iA = rand();
	//int iB = rand();
	//int iC = rand();

	//cout << "iA:" << iA << endl;
	//cout << "iB:" << iB << endl;
	//cout << "iC:" << iC << endl;


	// 컴퓨터가 난수를 추출하는 방법
	// 컴퓨터는 난수를 추출할때 Seed 값을 확인한다.
	// 이후, seed 값을 토대로 난수를 순차적 추출해준다.
	// -> 난수 테이블(표)에 있는 값을 순차적으로 추출해준다.

	// Seed값 변경 방법
	// srand( seed값 )

	//srand(10);

	//int iA = rand();
	//int iB = rand();
	//int iC = rand();


	//cout << "iA:" << iA << endl;
	//cout << "iB:" << iB << endl;
	//cout << "iC:" << iC << endl;


	// srand()를 이용해서 seed 값을 변경한다 하여도 처음과 다를 뿐 중복된 값이 추출된다.
	// 실행할 떄마다 값이 바뀌게 만드는 방법은 seed값이 고정되지 않는 수를 찾으면 된다.

	// 고정 되지 않는 수 
	// 시간 
	// 시간은 매 초 흘러간다.

	// 단, 초기화가 될 경우 중복된 값이 나올 수 있다.
	// 그래서 초기화 하지 않고, 계속해서 누적하는 시간이 필요하다.

	// 컴퓨터는 시간값을 초 단위로 누적해왔다.
	// -> 1970년 1월 1일 부터
	// 컴퓨터가 누적한 시간 값을 얻어와서 seed 값을 전달하면 중복되지 않는 값을 확인 할 수 있다.


	// 시간 값을 얻어오는 방법
	// time(0)
	// 단 time() 를 사용하기 위해서는 #include <time.h> 추가가 필요하다

	//cout << "누적된 시간:" << time(0) << endl;

	//srand(time(0));
	//srand(unsigned(time(NULL)));

	//int iA = rand();
	//int iB = rand();
	//int iC = rand();


	//cout << "iA:" << iA << endl;
	//cout << "iB: " << iB << endl;
	//cout << "iC:" << iC << endl;


	// 난수 추출 시 주의 사항 
	// seed 변경을 위한 srand()는 최초 1회만 사용하자!
	// srand()를 사용할 때마다 난수 추출 횟수가 초기화 된다.

	//srand(unsigned(time(NULL)));


	while (true)
	{
	   srand(unsigned(time(NULL)));
		cout << rand() << endl;
	}



}