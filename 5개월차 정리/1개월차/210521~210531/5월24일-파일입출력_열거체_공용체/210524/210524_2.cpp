#include <iostream>

using namespace std;

void main()
{
	// binary ��� ����� �Լ�

	// ##1. ��� �Լ�
	// #5 fwrite(#1, #2, #3, #4)
	// #1 : ����� �������� ���� �ּҸ� ����
	// #2 : ���� �ּҺ��� �󸶸�ŭ ũ��� ������� byte ������ ����
	// #3 : �װ� �� �� ������� ������ ����
	// #4 : ������ ��Ʈ��
	// #5 : �Լ� ȣ�� ���� �� #3 ���� ��ȯ, ���� �� #3 ���� ���� ���� ��ȯ


	//int		iArr[5] = { 1, 2, 3, 4, 5 };

	//FILE*	fp = nullptr;

	//errno_t err = fopen_s(&fp, "../Data/Binary.txt", "wb");

	//if (0 == err)
	//{
	//	//fwrite(iArr, sizeof(iArr), 1, fp);
	//	fwrite(iArr, sizeof(int), 5, fp);

	//	cout << "���� ���� ����!" << endl;
	//	fclose(fp);
	//}
	//else
	//	cout << "���� ���� ����!" << endl;



	// #5 fread(#1, #2, #3, #4)
	// #1 : �Է��� �������� ���� �ּҸ� ����
	// #2 : ���� �ּҺ��� �󸶸�ŭ ũ��� �Է����� byte ������ ����
	// #3 : �װ� �� �� �Է����� ������ ����
	// #4 : ������ ��Ʈ��
	// #5 : �Լ� ȣ�� ���� �� #3 ���� ��ȯ, ���� �� #3 ���� ���� ���� ��ȯ


	int		iArr[5] = {};

	FILE*	fp = nullptr;

	errno_t err = fopen_s(&fp, "../Data/Binary.txt", "rb");

	if (0 == err)
	{
		//fread(iArr, sizeof(iArr), 1, fp);
		fread(iArr, sizeof(int), 5, fp);

		cout << "���� ���� ����!" << endl;
		fclose(fp);
	}
	else
		cout << "���� ���� ����!" << endl;

	for (int i = 0; i < 5; ++i)
		cout << iArr[i] << endl;

}