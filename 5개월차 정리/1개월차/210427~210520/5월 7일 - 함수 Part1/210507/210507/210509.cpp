#include <iostream>

using namespace std;

int		iA = 10;
int		iB = 20;
int		iRes = 0;

void Add()
{
	iRes = iA + iB;
}

void main()
{
	// ���� ����
	// ��� �߰�ȣ ���ο��� ���Ե��� �ʴ� ����
	// ���α׷� ���� �� �޸𸮿� ��ϵǰ�, ���α׷��� ����� ��� �޸𸮿��� �Ҹ��Ѵ�.
	// ����, ��𼭵� ������ �� �ִ�.

	// ���� ������ ����ϱ� ���ϳ� �޸��� ���鿡���� ���ո��ϴ�.

	Add();
	cout << iRes << endl;
}

