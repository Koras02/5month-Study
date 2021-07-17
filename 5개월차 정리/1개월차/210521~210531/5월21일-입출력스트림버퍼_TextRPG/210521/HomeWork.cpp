#include <iostream>

using namespace std;

typedef struct tagInfo
{
	char	szName[16];
	int		iAtt;
	int		iMaxHp;
	int		iHp;
}INFO;


INFO* Create_Object(char* _pName, int _iAtt, int _iMaxHp);
INFO* Select_Player();
void Render(INFO* _pObj);
int Combat(INFO* _pPlayer, INFO* _pMonster);
void Progress(INFO* _pPlayer);

////////////////////////////////////////////////////////////////////////////
void Create_Object(INFO** _pObj, char* _pName, int _iAtt, int _iMaxHp);
void Select_Player(INFO** _pObj);
////////////////////////////////////////////////////////////////////////////

void main()
{
	//INFO* pPlayer = nullptr;
	//pPlayer = Select_Player();

	//if (!pPlayer)
	//	return;

	//Progress(pPlayer);

	//if (pPlayer)
	//{
	//	delete pPlayer;
	//	pPlayer = nullptr;
	//}

	////////////////////////////////////////////////////////////////////////////

	INFO* pPlayer = nullptr;
	Select_Player(&pPlayer);

	if (!pPlayer)
		return;

	Progress(pPlayer);

	if (pPlayer)
	{
		delete pPlayer;
		pPlayer = nullptr;
	}
	////////////////////////////////////////////////////////////////////////////
}

void Progress(INFO* _pPlayer)
{
	INFO*	pMonster = nullptr;
	int		iSelect = 0;

	while (true)
	{
		system("cls");
		Render(_pPlayer);
		cout << "1.초급 2.중급 3.고급 4.종료" << endl;
		cout << "==============================================" << endl;
		cout << "입력: ";
		cin >> iSelect;

		switch (iSelect)
		{
		case 1:
			pMonster = Create_Object("슬라임", 5, 30);
			break;
		case 2:
			pMonster = Create_Object("오우거", 50, 300);
			break;
		case 3:
			pMonster = Create_Object("골렘", 500, 3000);
			break;
		case 4:
			return;
		default:
			continue;
		}

		int iRes = Combat(_pPlayer, pMonster);

		switch (iRes)
		{
		case 0:		// 승리
			break;
		case 1:		// 패배
			_pPlayer->iHp = _pPlayer->iMaxHp;
			break;
		case 2:		// 도망
			break;
		}

		if (pMonster)
		{
			delete pMonster;
			pMonster = nullptr;
		}
		system("pause");
	}
}

int Combat(INFO* _pPlayer, INFO* _pMonster)
{
	int		iSelect = 0;

	while (true)
	{
		system("cls");
		Render(_pPlayer);
		Render(_pMonster);
		cout << "1.전투 2.도망" << endl;
		cout << "==============================================" << endl;
		cout << "입력: ";
		cin >> iSelect;

		switch (iSelect)
		{
		case 1:
			_pPlayer->iHp -= _pMonster->iAtt;
			_pMonster->iHp -= _pPlayer->iAtt;
			break;
		case 2:
			return 2;
		default:
			break;
		}

		if (0 >= _pPlayer->iHp)
		{
			cout << "플레이어 사망!" << endl;
			return 1;
		}

		if (0 >= _pMonster->iHp)
		{
			cout << "사냥 성공!" << endl;
			return 0;
		}
	}
}

void Render(INFO* _pObj)
{
	cout << "이름: " << _pObj->szName << endl;
	cout << "공격력: " << _pObj->iAtt << endl;
	cout << "체력: " << _pObj->iHp << " / " << _pObj->iMaxHp << endl;
	cout << "==============================================" << endl;
}

INFO* Create_Object(char* _pName, int _iAtt, int _iMaxHp)
{
	INFO* pObj = nullptr;

	pObj = new INFO;
	strcpy_s(pObj->szName, 16, _pName);
	pObj->iAtt = _iAtt;
	pObj->iMaxHp = _iMaxHp;
	pObj->iHp = _iMaxHp;

	return pObj;
}

INFO* Select_Player()
{
	INFO*	pPlayer = nullptr;
	int		iSelect = 0;

	while (true)
	{
		system("cls");

		cout << "1.전사 2.마법사 3.도적 4.종료" << endl;
		cout << "==============================================" << endl;
		cout << "입력: ";
		cin >> iSelect;

		switch (iSelect)
		{
		case 1:
			pPlayer = Create_Object("전사", 10, 200);
			return pPlayer;
			//pPlayer = new INFO;
			//strcpy_s(pPlayer->szName, 16, "전사");
			//pPlayer->iAtt = 10;
			//pPlayer->iMaxHp = 200;
			//pPlayer->iHp = 200;
			break;
		case 2:
			return Create_Object("마법사", 100, 2000);
			break;
		case 3:
			return Create_Object("도적", 1000, 20000);
			break;
		case 4:
			return nullptr;
		default:
			continue;
		}
	}

	return pPlayer;
}


////////////////////////////////////////////////////////////////////////////
void Create_Object(INFO** _pObj, char* _pName, int _iAtt, int _iMaxHp)
{
	(*_pObj) = new INFO;
	strcpy_s((*_pObj)->szName, 16, _pName);
	(*_pObj)->iAtt = _iAtt;
	(*_pObj)->iMaxHp = _iMaxHp;
	(*_pObj)->iHp = _iMaxHp;
}
void Select_Player(INFO** _pObj)
{
	int		iSelect = 0;

	while (true)
	{
		system("cls");

		cout << "1.전사 2.마법사 3.도적 4.종료" << endl;
		cout << "==============================================" << endl;
		cout << "입력: ";
		cin >> iSelect;

		switch (iSelect)
		{
		case 1:
			Create_Object(_pObj, "전사", 10, 200);
			return;
		case 2:
			Create_Object(_pObj, "마법사", 100, 2000);
			return;
		case 3:
			Create_Object(_pObj, "도적", 1000, 20000);
			return;
		case 4:
			return;
		default:
			continue;
		}
	}
}
////////////////////////////////////////////////////////////////////////////