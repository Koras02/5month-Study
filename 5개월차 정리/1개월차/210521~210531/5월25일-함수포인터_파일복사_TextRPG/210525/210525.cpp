#include <iostream>

using namespace std;

void Func()
{
	cout << "Func" << endl;
}

int Add(int _a, int _b)
{
	return _a + _b;
}
int Min(int _a, int _b)
{
	return _a - _b;
}
int Mul(int _a, int _b)
{
	return _a * _b;
}
int Div(int _a, int _b)
{
	return _a / _b;
}

void main()
{
	// �Լ� ������
	// �Լ��� �Ҵ�� �޸��� �ּҸ� �Լ� �����Ͷ� �Ѵ�.

	// �Լ� ȣ��
	// �Լ��̸� + �Լ�ȣ�⿬����
	// == ������ + �Լ�ȣ�⿬����
	
	// �Լ��̸���?
	// �Լ��� ��ϵ� �޸��� ���� �ּҸ� �����ϰ� �ִ� �������̴�!


	//Func();
	//cout << "Func: " << Func << endl;



	//// �Լ� ��������
	///*
	//��ȯŸ��(*������)(�Ű����� ����)
	//
	//�Ű����� ���� : Ÿ�Ը� ����Ѵ�.
	//*/

	//int(*ptr)(int, int) = Add;

	//cout << "Add: " << Add << endl;
	//cout << "ptr: " << ptr << endl;

	//cout << Add(10, 20) << endl;
	//cout << ptr(100, 200) << endl;


	////////////////////////////////////////////////////////////////////
	// �Լ� ������ �迭�� ����� ���
	int		iSelect = 0;
	int		iA = 0, iB = 0;

	int(*ptr[4])(int, int) = { Add, Min, Mul, Div };

	cout << "�� ���� �� �Է�: ";
	cin >> iA >> iB;

	cout << "1.���ϱ� 2.���� 3.���ϱ� 4.������" << endl;
	cout << "�Է�: ";
	cin >> iSelect;

	cout << "���� ���: " << ptr[iSelect - 1](iA, iB) << endl;
	////////////////////////////////////////////////////////////////////
	//// �Լ� �����͸� ����� ���
	//int		iSelect = 0;
	//int		iA = 0, iB = 0, iRes = 0;

	//int(*ptr)(int, int) = nullptr;

	//cout << "�� ���� �� �Է�: ";
	//cin >> iA >> iB;

	//cout << "1.���ϱ� 2.���� 3.���ϱ� 4.������" << endl;
	//cout << "�Է�: ";
	//cin >> iSelect;

	//switch (iSelect)
	//{
	//case 1:
	//	ptr = Add;
	//	break;
	//case 2:
	//	ptr = Min;
	//	break;
	//case 3:
	//	ptr = Mul;
	//	break;
	//case 4:
	//	ptr = Div;
	//	break;
	//}

	//cout << "���� ���: " << ptr(iA, iB) << endl;
	////////////////////////////////////////////////////////////////////
	//// �Լ� �����͸� ������� ���� ���
	//int		iSelect = 0;
	//int		iA = 0, iB = 0, iRes = 0;

	//cout << "�� ���� �� �Է�: ";
	//cin >> iA >> iB;

	//cout << "1.���ϱ� 2.���� 3.���ϱ� 4.������" << endl;
	//cout << "�Է�: ";
	//cin >> iSelect;

	//switch (iSelect)
	//{
	//case 1:
	//	iRes = Add(iA, iB);
	//	break;
	//case 2:
	//	iRes = Min(iA, iB);
	//	break;
	//case 3:
	//	iRes = Mul(iA, iB);
	//	break;
	//case 4:
	//	iRes = Div(iA, iB);
	//	break;
	//}

	//cout << "���� ���: " << iRes << endl;
	////////////////////////////////////////////////////////////////////
}