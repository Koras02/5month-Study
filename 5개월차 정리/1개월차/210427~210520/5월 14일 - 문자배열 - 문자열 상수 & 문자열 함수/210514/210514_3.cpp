 #include <iostream>

using namespace std;

void main()
{
	//char	szBuff[20] = "Hello";
	//cout << "szBuff: " << szBuff << endl;

	////szBuff = "World";		// 불가능
	//szBuff[0] = 'W';
	//szBuff[1] = 'o';
	//szBuff[2] = 'r';
	//szBuff[3] = 'l';
	//szBuff[4] = 'd';
	//cout << "szBuff: " << szBuff << endl;


	//// 문자 배열의 데이터 관리
	//// ##1. 복사
	//// strcpy_s(#1, #2, #3)
	//// #1 : 복사 받을 메모리의 시작 주소를 전달(배열의 이름)
	//// #2 : 최대 얼마만큼 크기로 작업할 것인지 전달
	//// #3 : 복사 할 메모리의 시작 주소를 전달(배열의 이름, 문자열 상수)

	////char	szBuff[20] = "Hello";
	////cout << "szBuff: " << szBuff << endl;
	////strcpy_s(szBuff, 20, "World");
	////cout << "szBuff: " << szBuff << endl;

	//char	szDst[20] = "Hello";
	//char	szSrc[20] = "World";

	//strcpy_s(szDst, 20, szSrc);


	//// ##2. 결합
	//// 문자열 뒤에 다른 문자열을 이어서 붙인다!
	//// strcat_s(#1, #2, #3)
	//// #1 : 결합 받을 메모리의 시작 주소를 전달(문자 배열)
	//// #2 : 결합 할 메모리의 최대 크기를 전달
	//// #3 : 결합 할 메모리의 시작 주소를 전달(문자 배열, 문자열 상수)

	//char	szDst[20] = "Hello";
	//char	szSrc[20] = "World";

	//strcat_s(szDst, sizeof(szDst), szSrc);

	//cout << "szDst: " << szDst << endl;



	//// ##3. 길이
	//// 문자열의 길이를 반환해주는 함수
	//// 단, NULL 문자를 제외한 순수 문자열의 길이를 반환한다.
	//// strlen()
	//
	//char	szBuff[20] = "Hello";

	//cout << "sizeof: " << sizeof(szBuff) << endl;		// 20
	//cout << "strlen: " << strlen(szBuff) << endl;		// 5



	//// ##4. 비교
	//// 두 문자열이 같은지 비교해주는 함수
	//// 단, 두 문자열이 같으면 0, 두 문자열이 다르면 0이 아닌 값
	//// strcmp()

	//char szDst[20] = "Hello";
	//char szSrc[20] = "HEllo";

	//if(!strcmp(szDst, szSrc))
	//	cout << "두 문자열이 같다!" << endl;
	//else
	//	cout << "두 문자열이 다르다!" << endl;





	// 문자열 입력
	// 문자열의 입력은 문자 배열을 사용한다!!
	// 단, 문자 배열의 크기는 NULL 문자를 고려해서 설정해야한다!!!

	char	szBuff[5] = "";

	cout << "문자열은 최대 4개만 입력하시오!!!" << endl;
	cin >> szBuff;

	cout << "szBuff: " << szBuff << endl;



}