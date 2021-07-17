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
		cout << "1.입력 2.출력 3.검색 4.종료" << endl;
		cout << "===============================================" << endl;
		cout << "입력: ";
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
		cout << "이름: ";
		cin >> _szName[i];

		cout << "국어: ";
		cin >> _iKor[i];

		cout << "영어: ";
		cin >> _iEng[i];

		cout << "수학: ";
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
		cout << "이름: " << _szName[i] << endl;
		cout << "국어: " << _iKor[i] << endl;
		cout << "영어: " << _iEng[i] << endl;
		cout << "수학: " << _iMath[i] << endl;
		cout << "총점: " << _iTotal[i] << endl;
		cout << "평균: " << _fAver[i] << endl;
		cout << "===============================================" << endl;
	}
}

void Show_Search(char(*_szName)[20], int _iKor[], int _iEng[], int _iMath[], int _iTotal[], float _fAver[], int _iSize)
{
	char	szInput[20] = "";
	bool	bCheck = true;

	system("cls");

	cout << "검색: ";
	cin >> szInput;

	for (int i = 0; i < _iSize; ++i)
	{
		if (!strcmp(szInput, _szName[i]))
		{
			cout << "이름: " << _szName[i] << endl;
			cout << "국어: " << _iKor[i] << endl;
			cout << "영어: " << _iEng[i] << endl;
			cout << "수학: " << _iMath[i] << endl;
			cout << "총점: " << _iTotal[i] << endl;
			cout << "평균: " << _fAver[i] << endl;
			cout << "===============================================" << endl;
			bCheck = false;
		}
	}

	if (bCheck)
		cout << "검색된 이름이 없습니다!" << endl;
}