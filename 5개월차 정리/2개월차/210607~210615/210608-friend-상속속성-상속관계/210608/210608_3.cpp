#include "stdafx.h"

void main()
{
	// 상속 관계
	// 상속을 시킬 때 아무렇게 시키는 것이 아니라 관계를 따져서 상속을 구현하자

	// ##1. is-a 관계
	// CPlayer is a CObj
	// -> 플레이어는 오브젝트이다!

	// CObj is a CPlayer
	// -> 오브젝트는 플레이어이다!

	// Person is a Student
	// -> 사람은 학생이다.

	// Student is a Person
	// -> 학생은 사람이다.



	// ##2. has-a 관계
	// is-a 관계로 어색함이 생길 경우 적용하는 것

	// Sword, Player

	// Sword is a Player
	// -> 검은 플레이어이다!

	// Player is a Sword
	// -> 플레이어는 검이다!

	// 둘 다 문장이 어색하다!!!!!
	// 이 경우에는 has-a 관계로 구성을 바꾸자!

	// Sword has a Player
	// -> 검은 플레이어를 가진다!

	// Player has a Sword
	// -> 플레이어는 검을 가진다!



	// has-a 관계의 문제점
	// 플레이어는 하나의 무기만 상속받는 경우가 발생한다.

	// has-a 관계의 문제점 해결_다중 상속
	// 하나의 클래스만 상속받는 것이 아니라,
	// 여러 클래스를 상속 받는 것.

	// 다중 상속 방법
	// 상속 받을 클래스를 , 로 이어서 여러개 명시한다.


	// 다중 상속의 문제점
	// 모호성
	// 다양한 클래스를 상속 받다 보면 중복되는 이름이 발생할 수 있다.
	// 중복되는 이름의 함수/변수가 있을 경우 모호성으로 인하여 오류가 발생한다.
	// -> 어떤 함수에 접근할지 알 수 없는 상황



	// has-a 관계가 성립할 경우 상속 관계로 구현하지 않는다.
	// 상속 관계가 아닌 포함 관계로 구성하자!!!!


}

class CAxe
{
public:
	void Swing()
	{
		cout << "Axe Swing" << endl;
	}
};

class CSword
{
public:
	void Swing()
	{
		cout << "Sword Swing" << endl;
	}
};

// has-a관계 상속
class CPlayer : public CSword, public CAxe
{

};

// 포함 관계
class CMonster
{
public:
	void Swing()
	{
		//m_Sword.Swing();
		m_Axe.Swing();
	}

private:
	CSword		m_Sword;
	CAxe		m_Axe;
};

void Func()
{
	CPlayer		player;
	player.Swing();
}