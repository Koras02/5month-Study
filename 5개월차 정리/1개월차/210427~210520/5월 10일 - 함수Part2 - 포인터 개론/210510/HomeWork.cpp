#include <iostream>

using namespace  std;

int Input_Coin();
int Show_Menu(int _iCoin);
void Vending_Machine();

void main()
{
	Vending_Machine();
}

int Input_Coin()
{
	int		iCoin = 0;

	cout << "������: ";
	cin >> iCoin;

	return iCoin;
}

int Show_Menu(int _iCoin)
{
	int		iSelect = 0;

	system("cls");
	cout << "������: " << _iCoin << endl;
	cout << "=======================================================" << endl;
	cout << "1.�ݶ�(100��) 2.���̴�(200��) 3.ȯŸ(300��) 4. ��ȯ" << endl;
	cout << "=======================================================" << endl;
	cout << "�Է�: ";
	cin >> iSelect;

	return iSelect;
}

void Vending_Machine()
{
	int		iCoin = 0, iSelect = 0;
	bool	bCheck = true;

	iCoin = Input_Coin();

	while (bCheck)
	{
		iSelect = Show_Menu(iCoin);

		switch (iSelect)
		{
		case 1:
			if (100 <= iCoin)
			{
				cout << "�ݶ� ����!" << endl;
				iCoin -= 100;
			}
			else
				cout << "���� ����!" << endl;
			break;
		case 2:
			if (200 <= iCoin)
			{
				cout << "���̴� ����!" << endl;
				iCoin -= 200;
			}
			else
				cout << "���� ����!" << endl;
			break;
		case 3:
			if (300 <= iCoin)
			{
				cout << "ȯŸ ����!" << endl;
				iCoin -= 300;
			}
			else
				cout << "���� ����!" << endl;
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
	cout << "�Ž��� ���� " << iCoin << "�� �Դϴ�." << endl;
}