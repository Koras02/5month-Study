#include <iostream>

using namespace std;

// struct : �����Ϸ����� ����ü�� �����Ѵٶ�� �˷��ش�.
// tagGrade : ����ڰ� ������ ����ü�� �̸��̴�!
// ��� ���� : ����ü�� �̷��� ��� �������� ��� �����Ѵ�!
// -> ��� �������� �ϳ��� ���� ���ο� �ڷ����� ���� ���̴�!
typedef struct	tagGrade
{
	char	szName[20];
	int		iKor;
	int		iEng;
	int		iMath;
	int		iTotal;
	float	fAver;
}GRADE;

void main()
{
	// ����ü
	// ����� ���� �ڷ����̴�!
	// -> ����ڰ� �ڷ����� ���� ����Ѵ�!

	// ����� ���� �ڷ����̶�� �ؼ� ũ��� �д� ���¸� ����ڰ� ���� ������ �� ����!
	// ����ü�� �ܼ��� �ٸ� �ڷ������� ������ ��Ƽ� �ϳ��� ū �ڷ������� ����ڴ�! ��� �ǹ�
	// -> ������ ���, ������ ����


	// ����ü ����
	// �����Ϸ����� �̷��� �ڷ����� ����ڰ� ������� ��� �˷��ִ� ��
	// -> �޸𸮿� ��� ��Ű�� ���� �ƴϴ�!
	/*
	struct		�ڷ����̸�
	{

		��� ����;
		��� ����;
		��� ����;

	}
	*/


	//// ����ü ����
	//// ����ڰ� ������ ����ü�� �޸𸮿� ��� ��Ű�� ��.

	//// struct tagGrade : �ڷ���
	//// tGrade : ������
	//struct tagGrade		tGrade;


	//// ����ü�� �ʱ�ȭ
	//// ����ü�� �ʱ�ȭ�� �迭�� �ʱ�ȭ�� �����ϴ�!

	//// ����ü�� ��� ��� �������� 0���� �ʱ�ȭ�� ����ȴ�.
	//struct tagGrade		tGrade = {};

	//// �߰�ȣ �ȿ� ����� �����Ͱ� ����ü ���� �� ����� ������� 
	//// ������ �ʱ�ȭ�� ����ȴ�.
	//// ������� ���� ��� �������� 0���� �ʱ�ȭ�� ����ȴ�.
	//struct tagGrade tGrade = { "AAA", 10, 20, 30 };


	//// ��� ����
	//// .(dot) ������
	//// dot ������ ���� �������� ����ü�� ����Ѵ�!
	//// dot ������ ���� �������� ����� ����Ѵ�!
	//struct tagGrade tGrade = { "AAA", 10, 20, 30 };

	//tGrade.iTotal = tGrade.iKor + tGrade.iEng + tGrade.iMath;
	//tGrade.fAver = tGrade.iTotal / 3.f;

	//cout << "�̸�: " << tGrade.szName << endl;
	//cout << "����: " << tGrade.iKor << endl;
	//cout << "����: " << tGrade.iEng << endl;
	//cout << "����: " << tGrade.iMath << endl;
	//cout << "����: " << tGrade.iTotal << endl;
	//cout << "���: " << tGrade.fAver << endl;


	// typedef
	// type : Ÿ��
	// define : �����ϴ�
	// -> �ڷ����� ������ �ο��Ѵ�!
	// �ڷ����� �̸��� �� ��� ª�� ������ �ο��ؼ� ����ϸ� ���ϰ� ����� �� �ִ�!

	/*
	typedef		�ڷ���		����
	*/

	//typedef		short		_int;

	//short		iA = 10;
	//short		iA = 10;
	//short		iA = 10;
	//_int	iB = 20;
	//_int	iB = 20;
	//_int	iB = 20;


	//struct tagGrade		tGrade1 = { "AAA", 10, 20, 30 };
	//GRADE				tGrade2 = { "AAA", 10, 20, 30 };

	// C�� C++ ����ü�� ������
	// struct Ű���� ���ο� typedef�� ���ǵǾ� �ִ�!

	// C ����ü
	struct tagGrade		tGrade1 = { "AAA", 10, 20, 30 };

	// C++ ����ü
	tagGrade		tGrade2 = { "AAA", 10, 20, 30 };
}