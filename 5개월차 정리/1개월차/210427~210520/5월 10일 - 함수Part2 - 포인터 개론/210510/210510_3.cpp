#include <iostream>

using namespace std;

//// �Լ� �����ε��� ���� ���
//// �Ű� ������ ������ �ٸ� ��� �Լ��� �ٽ� ������������ �̸��� �Ź� �ٸ��� ������Ѵ�.
//// ȣ���� �� ���� �̸��� �����ؼ� ��Լ��� ȣ������ �������־�� �Ѵ�.
//int Add(int _a, int _b)
//{
//	return _a + _b;
//}
//
//double Add_double(double _a, double _b)
//{
//	return _a + _b;
//}


// �Լ� �����ε��� ����� ���
int Add(int _a, int _b)
{
	return _a + _b;
}

//// �Ұ���
//float Add(int _a, int _b)
//{
//	return _a + _b;
//}

double Add(double _a, double _b)
{
	return _a + _b;
}

void main()
{
	// �Լ� �����ε�
	// ������ �̸��� �Լ��� �� �����ϴ� ����.
	// -> �Լ��� �̸��� �����ϰ� ����� ���
	// ��, �Ű� ������ ������ �ٸ��� ������ �Ѵ�!
	
	// ���ǻ���
	// ��ȯŸ�� ������ ���� �����ε��� �������� �ʴ´�.



	//// �Լ� �����ε��� ���� ���
	//cout << Add(10, 20) << endl;
	//cout << Add(100, 200) << endl;
	//cout << Add_double(3.5, 3.5) << endl;

	// �Լ� �����ε��� ����� ���
	cout << Add(10, 20) << endl;		// int Add
	cout << Add(100, 200) << endl;		// int Add
	cout << Add(3.5, 3.5) << endl;		// double Add
}