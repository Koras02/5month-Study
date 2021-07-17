#include <iostream>

using namespace std;

void main()
{
	// 스트림 개방
	// #4 fopen_s(#1, #2, #3)
	// #1 : 스트림을 개방한 후 값을 저장할 포인터 변수의 주소를 전달한다.
	// -> fopen_s 함수 내부에서 주소를 할당 받아오는 것.

	// #2 : 파일의 경로를 전달한다.
	// -> 파일 이름과 확장자까지 전달해야한다.

	// #3 : 읽기모드인지, 쓰기모드인지 / Text모드인지, binary 모드인지 전달한다.

	// #4 : 함수 호출 성공 시 0을 반환, 실패 시 이유에 따른 값을 반환한다.


	
	//FILE*	fp = nullptr;

	////// 절대 경로
	////errno_t err = fopen_s(&fp, "D:/신우재/120/210524/Data/Text.txt", "wt");

	//// 상대 경로
	//errno_t err = fopen_s(&fp, "../Data/Text.txt", "wt");

	//if (0 == err)
	//{
	//	fputs("Hello", fp);

	//	cout << "파일 개방 성공!" << endl;
	//	fclose(fp);
	//}
	//else
	//	cout << "파일 개방 실패!" << endl;


	//char	pBuff[16] = "";

	//FILE*	fp = nullptr;
	//errno_t err = fopen_s(&fp, "../Data/Text.txt", "rt");

	//if (0 == err)
	//{
	//	fgets(pBuff, sizeof(pBuff), fp);

	//	cout << "파일 개방 성공!" << endl;
	//	fclose(fp);
	//}
	//else
	//	cout << "파일 개방 실패!" << endl;
	//

	//cout << "pBuff: " << pBuff << endl;




	// ##1.
	// w : Write의 약자. 쓰기 모드일 때 사용한다.
	// -> 데이터가 있을 경우 지우고 처음부터 데이터를 다시 출력한다.

	// r : Read의 약자. 읽기 모드일 때 사용한다.

	// a : Append의 약자. 이어쓰기 모드일 때 사용한다.
	// -> 데이터가 있을 경우 기존 데이터 뒤에 이어서 출력한다.

	// + : 읽기/쓰기 모두 가능한 모드이다!
	// 읽기에서 쓰기로 또는 쓰기에서 읽기로 작업을 변경할 경우
	// 버펑에 데이터가 남아 있을 경우 비 정상적인 데이터의 입출력이 진행된다.


	// ##2.
	// t : Text 모드일 때 사용한다.
	// -> 사람이 읽고 쓰기 편한 문자를 다룬다.

	// b : Binary모드일 때 사용한다.
	// -> 컴퓨터가 읽고 쓰기 편한 문자를 다룬다.
	// -> 사람이 읽고 쓸수 없는 정보도 입출력이 가능하다.
	// -> 대표적으로 이미지, 영상, 음원 등


}