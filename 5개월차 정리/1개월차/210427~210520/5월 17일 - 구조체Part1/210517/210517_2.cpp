#include <iostream>

using namespace std;

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
	//// ����ü�� ��������
	//// �Ϲ� �ڷ����� ����ϴ� �Ͱ� �ٸ� ���� ����!

	//GRADE	tGrade = { "AAA", 10, 20, 30 };
	//GRADE*	pGrade = &tGrade;
	//cout << "&tGrade: " << &tGrade << endl;

	//int		iA = 10;
	//int*	ptr = &iA;
	//cout << "&iA: " << &iA << endl;


	//// ����ü �����͸� ���� ��� ����
	//GRADE	tGrade = { "AAA", 10, 20, 30 };
	//GRADE*	pGrade = &tGrade;

	//tGrade.szName;		// ����

	////// .(dot) ������ ���� �������� ����ü�� �;�������
	////// �����Ͱ� �ֱ� ������ ������ �߻��Ѵ�!
	////pGrade.szName;		// �Ұ���

	//// �����Ϳ� ������ �����ڸ� ����ϸ� ���� �����ϰ� �ȴ�!
	//// ����ü �������� ���� ����ü�̴�!
	//(*pGrade).szName;		// ����


	//// ȭ��ǥ ������(��� ���� ������ ������)
	//// ->
	//// ����ü �����Ϳ� ������ �����ڸ� ����� �� .(dot) �����ڸ� ����� ����� �����ϴ�.
	//GRADE	tGrade = { "AAA", 10, 20, 30 };
	//GRADE*	pGrade = &tGrade;


	//tGrade.szName;		// ����
	//(*pGrade).szName;	// ����
	//pGrade->szName;		// ����



	// ����ü ������ ��� �� ���� ����
	GRADE		tGrade = {};

	// pGrade�� �ƹ��� ���� ����Ű�� ���� �ʴ�!
	// �ƹ��� ���� ����Ű�� ���� ���� ��Ȳ�� �����Ͽ� szName�� ã�� �ִ�!!
	GRADE*		pGrade = nullptr;
	pGrade->szName;		// ������ ��Ȳ!

}