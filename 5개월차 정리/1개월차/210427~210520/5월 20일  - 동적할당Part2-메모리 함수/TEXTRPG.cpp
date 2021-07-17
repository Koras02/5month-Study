#include <iostream>

using namespace std;



typedef struct PLAYERINFO
{
	int iPlayer_Job;
	int iPlayer_Hp;
	int iPlayer_Attack;
}PLAYER;

typedef struct MONSTERINFO
{
	int iMonster_Type;
	int iMonster_Hp;
	int iMonster_Attack;
}MONSTER;





void TEXTRPG();
void Game(PLAYER* A);
void Dungeon(PLAYER* A, MONSTER* B);

void main(){
	TEXTRPG();//30 100   20 150
}
//슬라임 5 30  오우거 15 60  골렘 30 90


void Game(PLAYER* A)
{
	int i_Select = 0;
	MONSTER* B = new MONSTER;
	while (1) {
		system("cls");
		if(A->iPlayer_Job==1)
			cout << "직업: 전사" << endl;
		else if (A->iPlayer_Job == 2)
			cout << "직업: 마법사" << endl;
		else if (A->iPlayer_Job == 3)
			cout << "직업: 도적" << endl;
		cout << "공격력: " << A->iPlayer_Attack << endl;
		cout << "체력: " << A->iPlayer_Hp << endl;
		cout << "============================================================" << endl;
		cout << "1.초급던전 2.중급던전 3.고급던전 4.나가기" << endl;
		cin >> i_Select;
		switch (i_Select)
		{
		case 1:
			B->iMonster_Type = 1;
			B->iMonster_Hp = 30;
			B->iMonster_Attack = 5;
			Dungeon(A, B);
			break;
		case 2:
			B->iMonster_Type = 2;
			B->iMonster_Hp = 60;
			B->iMonster_Attack = 15;
			Dungeon(A, B);
			break;
		case 3:
			B->iMonster_Type = 3;
			B->iMonster_Hp = 90;
			B->iMonster_Attack = 30;
			Dungeon(A, B);
			break;
		case 4:
			delete A;
			delete B;
			return;
		}
	}
}

void Dungeon(PLAYER* A, MONSTER* B)
{
	int i_Select = 0;
	while (1)
	{
		system("cls");
		if (A->iPlayer_Job == 1)
			cout << "직업: 전사" << endl;
		else if (A->iPlayer_Job == 2)
			cout << "직업: 마법사" << endl;
		else if (A->iPlayer_Job == 3)
			cout << "직업: 도적" << endl;
		cout << "공격력: " << A->iPlayer_Attack << endl;
		cout << "체력: " << A->iPlayer_Hp << endl;
		cout << "============================================================" << endl;
		if (B->iMonster_Type == 1)
			cout << "직업: 슬라임" << endl;
		else if (B->iMonster_Type == 2)
			cout << "직업: 오우거" << endl;
		else if (B->iMonster_Type == 3)
			cout << "직업: 골렘" << endl;
		cout << "공격력: " << B->iMonster_Attack << endl;
		cout << "체력: " << B->iMonster_Hp << endl;
		cout << "============================================================" << endl;
		cout << "1. 공격 2. 도망" << endl;
		cin >> i_Select;
		if (i_Select == 1)
		{
			A->iPlayer_Hp -= B->iMonster_Attack;
			B->iMonster_Hp -= A->iPlayer_Attack;
		}
		else if (i_Select == 2)
		{
			return;
		}
		else
		{
			cout << "잘못 입력하셨습니다." << endl;
			continue;
		}
		if (A->iPlayer_Hp <= 0)
		{
			cout << "플레이어 사망" << endl;;
			system("pause");
			if (A->iPlayer_Job == 1)
				A->iPlayer_Hp = 200;
			else if (A->iPlayer_Job == 2)
				A->iPlayer_Hp = 100;
			else if (A->iPlayer_Job == 3)
				A->iPlayer_Hp = 150;
			return;
		}
		else if (B->iMonster_Hp <= 0)
		{
			cout << "사냥 성공!" << endl;
			system("pause");
			return;
		}
	}
}

void TEXTRPG()
{
	int i_Select= 0;
	bool b_Check = 1;
	PLAYER* A = new PLAYER;
	while (b_Check) {
		system("cls");
		cout << "1.전사 2.마법사 3.도적 4.나가기" << endl;
		cin >> i_Select;
		
		switch (i_Select)
		{
		case 1:
			//전사
			A->iPlayer_Job = 1;
			A->iPlayer_Attack = 10;
			A->iPlayer_Hp = 200;
			Game(A);
			return;
		case 2: //마법사
			A->iPlayer_Job = 2;
			A->iPlayer_Attack = 30;
			A->iPlayer_Hp = 100;
			Game(A);
			return;
		case 3: //도적
			A->iPlayer_Job = 3;
			A->iPlayer_Attack = 20;
			A->iPlayer_Hp = 150;
			Game(A);
			return;
		case 4:	
			b_Check = false;
			break;
		}
	}
	delete A;
}