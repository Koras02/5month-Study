#include <iostream>

using namespace std;
// ����ü ����
struct tagBox
{
	int		a;
	float	b;
};

// ����ü ����
union uniBox
{
	int		a;
	float	b;
};

void main()
{
	// ����ü
	// ����� ���� �ڷ����̴�!
	// ����ü�� ������ ���¸� ������.


	//// ����ü ����
	//tagBox		tBox;
	//uniBox		uBox;


	//// ����ü �ʱ�ȭ
	//tagBox		tBox = {};
	//uniBox		uBox = {};


	//// ����ü ������ �ʱ�ȭ
	//tagBox		tBox = { 10, 3.14f };
	//uniBox		uBox = { 10, 3.14f };		// �Ұ���. ���� �߻�


	//// ����ü�� ��� �������� �ϳ��� �޸𸮸� �����ؼ� ����Ѵ�.
	//tagBox		tBox = {};
	//uniBox		uBox = {};

	//cout << "&tBox.a: " << &tBox.a << endl;
	//cout << "&tBox.b: " << &tBox.b << endl;
	//cout << "---------------------------------" << endl;
	//cout << "&uBox.a: " << &uBox.a << endl;
	//cout << "&uBox.b: " << &uBox.b << endl;


	//uniBox		uBox = {};
	//uBox.a = 10;
	//cout << "uBox.a: " << uBox.a << endl;
	//cout << "--------------------------------" << endl;
	//
	//// uBox.b�� ���� �����Ͽ����� uBox.a�� ���� ������ �ȴ�!
	//// -> �ϳ��� �޸𸮸� �����ؼ� ����ϱ� ������!!!
	//uBox.b = 3.14f;
	//cout << "uBox.a: " << uBox.a << endl;
	//cout << "uBox.b: " << uBox.b << endl;


	// ����ü�� ũ��
	// ��� ���� �� ���� ũ�Ⱑ ū �ڷ����� ���� �����ȴ�.

}