#include <iostream>
#include "TextRPG.h"

using namespace std;


INFO* Load_Data()
{
	INFO* pPlayer = nullptr;

	FILE* fp = nullptr;
	errno_t err = fopen_s(&fp, "../Data/Save.jpg", "rb");

	if (0 == err)
	{
		pPlayer = new INFO;
		fread(pPlayer, sizeof(INFO), 1, fp);

		cout << "불러오기 성공!" << endl;
		fclose(fp);
	}
	else
		cout << "불러오기 실패!" << endl;

	system("pause");

	return pPlayer;
}

void Save_Data(INFO* _pPlayer)
{
	FILE* fp = nullptr;
	errno_t err = fopen_s(&fp, "../Data/Save.jpg", "wb");

	if (0 == err)
	{
		fwrite(_pPlayer, sizeof(INFO), 1, fp);

		cout << "저장 성공!" << endl;
		fclose(fp);
	}
	else
		cout << "저장 실패!" << endl;

	system("pause");
}

void Combat_Win(INFO* _pPlayer, int _iExp, int _iGold)
{
	_pPlayer->iExp += _iExp;
	_pPlayer->iGold += _iGold;

	if (_pPlayer->iExp >= _pPlayer->iMaxExp)
	{
		++_pPlayer->iLevel;
		_pPlayer->iExp -= _pPlayer->iMaxExp;
		_pPlayer->iAtt += 10;
		_pPlayer->iMaxHp += 100;
		_pPlayer->iHp = _pPlayer->iMaxHp;
		_pPlayer->iMaxExp += 100;
	}
}

void Combat_Lose(INFO* _pPlayer)
{
	_pPlayer->iHp = _pPlayer->iMaxHp;
	_pPlayer->iExp >>= 1;
	_pPlayer->iGold >>= 1;
}

void Combat_Run(INFO* _pPlayer)
{
	_pPlayer->iExp = 0;
	_pPlayer->iGold = 0;
}

void Progress(INFO* _pPlayer)
{
	INFO* pMonster = nullptr;
	int		iSelect = 0;

	while (true)
	{
		system("cls");
		Render(_pPlayer);
		cout << "1.초급 2.중급 3.고급 4.저장 5.종료" << endl;
		cout << "==============================================" << endl;
		cout << "입력: ";
		cin >> iSelect;

		switch (iSelect)
		{
		case 1:
			pMonster = Create_Object("슬라임", 5, 30, 1, false);
			break;
		case 2:
			pMonster = Create_Object("오우거", 50, 300, 2, false);
			break;
		case 3:
			pMonster = Create_Object("골렘", 500, 3000, 3, false);
			break;
		case 4:
			Save_Data(_pPlayer);
			break;
		case 5:
			return;
		default:
			continue;
		}

		int iRes = Combat(_pPlayer, pMonster);

		switch (iRes)
		{
		case 0:		// 승리
			Combat_Win(_pPlayer, pMonster->iExp, pMonster->iGold);
			break;
		case 1:		// 패배
			Combat_Lose(_pPlayer);
			break;
		case 2:		// 도망
			Combat_Run(_pPlayer);
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
	if (_pObj->bCheck)
	{
		cout << "레벨: " << _pObj->iLevel << "  ( " << _pObj->iExp << " / " << _pObj->iMaxExp << " )" << endl;
		cout << "골드: " << _pObj->iGold << endl;
	}
	cout << "==============================================" << endl;
}

INFO* Create_Object(char* _pName, int _iAtt, int _iMaxHp, int _iLevel, bool _bCheck)
{
	INFO* pObj = nullptr;

	pObj = new INFO;
	strcpy_s(pObj->szName, 16, _pName);
	pObj->iAtt = _iAtt;
	pObj->iMaxHp = _iMaxHp;
	pObj->iHp = _iMaxHp;
	pObj->bCheck = _bCheck;

	if (_bCheck)
	{
		// 플레이어
		pObj->iLevel = _iLevel;
		pObj->iMaxExp = 100;
		pObj->iExp = 0;
		pObj->iGold = 0;
	}
	else
	{
		// 몬스터
		pObj->iLevel = _iLevel;
		pObj->iMaxExp = rand() % 50 + ((_iLevel - 1) * 50);
		pObj->iExp = pObj->iMaxExp;
		pObj->iGold = rand() % 50 + ((_iLevel - 1) * 50);
	}
	return pObj;
}

INFO* Select_Player()
{
	INFO* pPlayer = nullptr;
	int		iSelect = 0;

	while (true)
	{
		system("cls");

		cout << "1.전사 2.마법사 3.도적 4.불러오기 5.종료" << endl;
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
			return Load_Data();
			break;
		case 5:
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