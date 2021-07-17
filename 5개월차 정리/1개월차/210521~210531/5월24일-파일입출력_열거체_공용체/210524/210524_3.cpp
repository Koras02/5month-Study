#include <iostream>

using namespace std;

void main()
{
	// 파일 입출력 시 주의 사항
	// ##1. 포인터 변수는 저장하지 않는다.
	
	// ##2. fwrite/fread 사용 시
	// -> 파일 지시자
	// -> 파일 지시자는 해당 파일에서 어디를 작업할지 가리키고 있는 것.
	// -> 파일 지시자는 스트림을 닫을 때까지 해당 위치를 유지한다.

	int		iArr[5] = { 1, 2, 3, 4, 5 };

	FILE*	fp = nullptr;

	errno_t err = fopen_s(&fp, "../Data/Binary.txt", "wb");

	if (0 == err)
	{
		fwrite(iArr, sizeof(iArr), 1, fp);
		fwrite(iArr, sizeof(int), 5, fp);

		cout << "파일 개방 성공!" << endl;
		fclose(fp);
	}
	else
		cout << "파일 개방 실패!" << endl;


	// binary 모드의 장점
	// ##1. 이미지, 영상, 음원 등 파일들을 입출력 할 수 있다.
	// ##2. 연속적인 메모리를 사용할 경우 데이터를 통째로 입출력할 수 있다!
	// -> 구조체, 배열 등
}