#include <iostream>

using namespace std;

void main()
{
	//char	a = 'H', b = 'e', c = 'l', d = 'o';
	//cout << a << b << c << c << d << endl;

	//// 문자 배열
	//// -> 배열이다! 단, 자료형이 char를 사용한다.
	//char	szBuff[20];

	//// 문자 배열의 초기화
	//// 문자배열의 초기화는 ""를 사용한다.
	//// 문자 배열의 초기화는 선언과 동시에 초기화를 진행해야만한다!!!!!!!!!!!!!!!
	//char	szBuff[20] = "Hello";

	//// 큰 따옴표 안에 있는 문자가 배열 한칸에 하나씩 삽입이 이루어진다.
	//// 마지막 문자가 삽입된 다음 공간에는 자동으로 NULL문자를 삽입한다.
	//// NULL 문자가 삽입되는 이유는 컴퓨터에게 '여기까지만 읽어라!' 라고 명령하기 위함이다.
	//// 결국 Hello라는 5글자를 저장하기 위해서는 최소 6개의 메모리 공간이 필요하다!
	//// -> [0] = H
	//// -> [1] = e
	//// -> [2] = l
	//// -> [3] = l
	//// -> [4] = o
	//// -> [5] = \0 (NULL문자)


	//// cout을 이용해서 배열의 이름을 출력하면 주소 값이 나오게 된다.
	//// 하지만 문자 배열은 주소가 아닌 문자열이 나온다!
	//// -> cout으로 출력하는 데이터가 char* 형일 경우 주소가 아닌
	//// -> 해당 주소에 있는 문자를 출력하게 도와준다.
	//char	szBuff[20] = "Hello";
	//cout << szBuff << endl;
	////cout << szBuff;


	//// 원소 접근
	//// 문자 배열 또한 배열이다!
	//// -> 인덱스 접근을 통해 원소의 값을 읽거나 쓸 수 있다!
	//char	szBuff[20] = "Hello";
	////szBuff[2] = 'L';
	////cout << szBuff << endl;

	//cout << szBuff[2] << endl;



	////// NULL 문자의 중요성
	////// NULL 문자를 삽입할 공간이 없어서 초기화가 불가능하다!
	////char	szBuff[5] = "Hello";

	//// NULL 문자가 삽입된 공간에 'A' 값을 변경할 경우
	//// 배열이 할당된 메모리부터 문자를 읽어나가는데 
	//// 어딘가에 있을 NULL 문자를 만날 때까지 읽어나간다.
	//char	szBuff[6] = "Hello";
	//szBuff[5] = 'A';
	//cout << szBuff << endl;



	char	szBuff[20] = "Hello";
	cout << szBuff << endl;
	
	szBuff = "World";
	cout << szBuff << endl;


}