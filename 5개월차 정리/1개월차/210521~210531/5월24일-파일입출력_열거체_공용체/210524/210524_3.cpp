#include <iostream>

using namespace std;

void main()
{
	// ���� ����� �� ���� ����
	// ##1. ������ ������ �������� �ʴ´�.
	
	// ##2. fwrite/fread ��� ��
	// -> ���� ������
	// -> ���� �����ڴ� �ش� ���Ͽ��� ��� �۾����� ����Ű�� �ִ� ��.
	// -> ���� �����ڴ� ��Ʈ���� ���� ������ �ش� ��ġ�� �����Ѵ�.

	int		iArr[5] = { 1, 2, 3, 4, 5 };

	FILE*	fp = nullptr;

	errno_t err = fopen_s(&fp, "../Data/Binary.txt", "wb");

	if (0 == err)
	{
		fwrite(iArr, sizeof(iArr), 1, fp);
		fwrite(iArr, sizeof(int), 5, fp);

		cout << "���� ���� ����!" << endl;
		fclose(fp);
	}
	else
		cout << "���� ���� ����!" << endl;


	// binary ����� ����
	// ##1. �̹���, ����, ���� �� ���ϵ��� ����� �� �� �ִ�.
	// ##2. �������� �޸𸮸� ����� ��� �����͸� ��°�� ������� �� �ִ�!
	// -> ����ü, �迭 ��
}