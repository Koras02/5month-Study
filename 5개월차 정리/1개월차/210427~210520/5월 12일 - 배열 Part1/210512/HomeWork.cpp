#include <iostream>

using namespace  std;

void Input_Coin(int* _pCoin);
void Show_Menu(int _iCoin, int* _pSelect);
void Vending_Machine();

void main()
{
	Vending_Machine();
}

void Input_Coin(int* _pCoin)
{
	cout << "소지금: ";
	cin >> *_pCoin;
}

void Show_Menu(int _iCoin, int* _pSelect)
{
	system("cls");
	cout << "소지금: " << _iCoin << endl;
	cout << "=======================================================" << endl;
	cout << "1.콜라(100원) 2.사이다(200원) 3.환타(300원) 4. 반환" << endl;
	cout << "=======================================================" << endl;
	cout << "입력: ";
	cin >> *_pSelect;
}

void Vending_Machine()
{
	int		iCoin = 0, iSelect = 0;
	bool	bCheck = true;

	Input_Coin(&iCoin);

	while (bCheck)
	{
		Show_Menu(iCoin, &iSelect);

		switch (iSelect)
		{
		case 1:
			if (100 <= iCoin)
			{
				cout << "콜라 구매!" << endl;
				iCoin -= 100;
			}
			else
				cout << "구매 실패!" << endl;
			break;
		case 2:
			if (200 <= iCoin)
			{
				cout << "사이다 구매!" << endl;
				iCoin -= 200;
			}
			else
				cout << "구매 실패!" << endl;
			break;
		case 3:
			if (300 <= iCoin)
			{
				cout << "환타 구매!" << endl;
				iCoin -= 300;
			}
			else
				cout << "구매 실패!" << endl;
			break;
		case 4:
			bCheck = false;
			continue;
		default:
			continue;
		}
		system("pause");
	}


	system("cls");
	cout << "거스름 돈은 " << iCoin << "원 입니다." << endl;
}