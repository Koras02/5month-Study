#include <iostream>

using namespace std;

typedef struct tagGrade
{
	char	szName[20];
	int		iKor;
	int		iEng;
	int		iMath;
	int		iTotal;
	float	fAver;
}GRADE;

void Input_Grade(GRADE _pGrade[], int _iSize);
void Show_All(GRADE _pGrade[], int _iSize);
void Show_Search(GRADE _pGrade[], int _iSize);

void main()
{
	GRADE	tGrade[3] = {};

	int		iSelect = 0;


	while (true)
	{
		system("cls");
		cout << "1.�Է� 2.��� 3.�˻� 4.����" << endl;
		cout << "===============================================" << endl;
		cout << "�Է�: ";
		cin >> iSelect;

		switch (iSelect)
		{
		case 1:
			Input_Grade(tGrade, 3);
			break;
		case 2:
			Show_All(tGrade, 3);
			break;
		case 3:
			Show_Search(tGrade, 3);
			break;
		case 4:
			return;
		default:
			continue;
		}
		system("pause");
	}

}

void Show_Search(GRADE _pGrade[], int _iSize)
{
	char	szInput[20] = "";
	bool	bCheck = true;

	system("cls");

	cout << "�˻�: ";
	cin >> szInput;

	for (int i = 0; i < _iSize; ++i)
	{
		if (!strcmp(szInput, _pGrade[i].szName))
		{
			cout << "�̸�: " << _pGrade[i].szName << endl;
			cout << "����: " << _pGrade[i].iKor << endl;
			cout << "����: " << _pGrade[i].iEng << endl;
			cout << "����: " << _pGrade[i].iMath << endl;
			cout << "����: " << _pGrade[i].iTotal << endl;
			cout << "���: " << _pGrade[i].fAver << endl;
			cout << "===============================================" << endl;
			bCheck = false;
		}
	}

	if (bCheck)
		cout << "�˻��� �̸��� �����ϴ�!" << endl;
}

void Show_All(GRADE _pGrade[], int _iSize)
{
	system("cls");

	for (int i = 0; i < _iSize; ++i)
	{
		cout << "�̸�: " << _pGrade[i].szName << endl;
		cout << "����: " << _pGrade[i].iKor << endl;
		cout << "����: " << _pGrade[i].iEng << endl;
		cout << "����: " << _pGrade[i].iMath << endl;
		cout << "����: " << _pGrade[i].iTotal << endl;
		cout << "���: " << _pGrade[i].fAver << endl;
		cout << "===============================================" << endl;
	}
}

void Input_Grade(GRADE _pGrade[], int _iSize)
{
	for (int i = 0; i < _iSize; ++i)
	{
		system("cls");
		cout << "�̸�: ";
		cin >> _pGrade[i].szName;

		cout << "����: ";
		cin >> _pGrade[i].iKor;

		cout << "����: ";
		cin >> _pGrade[i].iEng;

		cout << "����: ";
		cin >> _pGrade[i].iMath;

		_pGrade[i].iTotal = _pGrade[i].iKor + _pGrade[i].iEng + _pGrade[i].iMath;
		_pGrade[i].fAver = _pGrade[i].iTotal / 3.f;
	}
}

