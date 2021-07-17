#include <iostream>

using namespace std;

void main()
{
	// binary 모드 입출력 함수

	// ##1. 출력 함수
	// #5 fwrite(#1, #2, #3, #4)
	// #1 : 출력할 데이터의 시작 주소를 전달
	// #2 : 시작 주소부터 얼마만큼 크기로 출력할지 byte 단위로 전달
	// #3 : 그걸 몇 개 출력할지 개수를 전달
	// #4 : 개방한 스트림
	// #5 : 함수 호출 성공 시 #3 값을 반환, 실패 시 #3 보다 작은 값을 반환


	//int		iArr[5] = { 1, 2, 3, 4, 5 };

	//FILE*	fp = nullptr;

	//errno_t err = fopen_s(&fp, "../Data/Binary.txt", "wb");

	//if (0 == err)
	//{
	//	//fwrite(iArr, sizeof(iArr), 1, fp);
	//	fwrite(iArr, sizeof(int), 5, fp);

	//	cout << "파일 개방 성공!" << endl;
	//	fclose(fp);
	//}
	//else
	//	cout << "파일 개방 실패!" << endl;



	// #5 fread(#1, #2, #3, #4)
	// #1 : 입력할 데이터의 시작 주소를 전달
	// #2 : 시작 주소부터 얼마만큼 크기로 입력할지 byte 단위로 전달
	// #3 : 그걸 몇 개 입력할지 개수를 전달
	// #4 : 개방한 스트림
	// #5 : 함수 호출 성공 시 #3 값을 반환, 실패 시 #3 보다 작은 값을 반환


	int		iArr[5] = {};

	FILE*	fp = nullptr;

	errno_t err = fopen_s(&fp, "../Data/Binary.txt", "rb");

	if (0 == err)
	{
		//fread(iArr, sizeof(iArr), 1, fp);
		fread(iArr, sizeof(int), 5, fp);

		cout << "파일 개방 성공!" << endl;
		fclose(fp);
	}
	else
		cout << "파일 개방 실패!" << endl;

	for (int i = 0; i < 5; ++i)
		cout << iArr[i] << endl;

}