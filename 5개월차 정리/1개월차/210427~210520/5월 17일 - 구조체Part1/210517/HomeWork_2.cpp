#include <iostream>

using namespace std;

//void Input_Grade(char _szName[][20], int _iKor[], int _iEng[], int _iMath[], int _iTotal[], float _fAver[])
void Input_Grade(char(*_szName)[20], int _iKor[], int _iEng[], int _iMath[], int _iTotal[], float _fAver[], int _iSize);
void Show_All(char(*_szName)[20], int _iKor[], int _iEng[], int _iMath[], int _iTotal[], float _fAver[], int _iSize);
void Show_Search(char(*_szName)[20], int _iKor[], int _iEng[], int _iMath[], int _iTotal[], float _fAver[], int _iSize);


void main()
{
	char	szName[3][20] = {};
	int		iKor[3] = {};
	int		iEng[3] = {};
	int		iMath[3] = {};
	int		iTotal[3] = {};
	float	fAver[3] = {};

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
			Input_Grade(szName, iKor, iEng, iMath, iTotal, fAver, 3);
			break;
		case 2:
			Show_All(szName, iKor, iEng, iMath, iTotal, fAver, 3);
			break;
		case 3:
			Show_Search(szName, iKor, iEng, iMath, iTotal, fAver, 3);
			break;
		case 4:
			return;
		default:
			continue;
		}
		system("pause");
	}

}

void Input_Grade(char(*_szName)[20], int _iKor[], int _iEng[], int _iMath[], int _iTotal[], float _fAver[], int _iSize)
{
	for (int i = 0; i < _iSize; ++i)
	{
		system("cls");
		cout << "�̸�: ";
		cin >> _szName[i];

		cout << "����: ";
		cin >> _iKor[i];

		cout << "����: ";
		cin >> _iEng[i];

		cout << "����: ";
		cin >> _iMath[i];

		_iTotal[i] = _iKor[i] + _iEng[i] + _iMath[i];
		_fAver[i] = _iTotal[i] / 3.f;
	}
}

void Show_All(char(*_szName)[20], int _iKor[], int _iEng[], int _iMath[], int _iTotal[], float _fAver[], int _iSize)
{
	system("cls");

	for (int i = 0; i < _iSize; ++i)
	{
		cout << "�̸�: " << _szName[i] << endl;
		cout << "����: " << _iKor[i] << endl;
		cout << "����: " << _iEng[i] << endl;
		cout << "����: " << _iMath[i] << endl;
		cout << "����: " << _iTotal[i] << endl;
		cout << "���: " << _fAver[i] << endl;
		cout << "===============================================" << endl;
	}
}

void Show_Search(char(*_szName)[20], int _iKor[], int _iEng[], int _iMath[], int _iTotal[], float _fAver[], int _iSize)
{
	char	szInput[20] = "";
	bool	bCheck = true;

	system("cls");

	cout << "�˻�: ";
	cin >> szInput;

	for (int i = 0; i < _iSize; ++i)
	{
		if (!strcmp(szInput, _szName[i]))
		{
			cout << "�̸�: " << _szName[i] << endl;
			cout << "����: " << _iKor[i] << endl;
			cout << "����: " << _iEng[i] << endl;
			cout << "����: " << _iMath[i] << endl;
			cout << "����: " << _iTotal[i] << endl;
			cout << "���: " << _fAver[i] << endl;
			cout << "===============================================" << endl;
			bCheck = false;
		}
	}

	if (bCheck)
		cout << "�˻��� �̸��� �����ϴ�!" << endl;
}