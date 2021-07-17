#include "stdafx.h"

void main()
{
	// ��� ����
	// ����� ��ų �� �ƹ����� ��Ű�� ���� �ƴ϶� ���踦 ������ ����� ��������

	// ##1. is-a ����
	// CPlayer is a CObj
	// -> �÷��̾�� ������Ʈ�̴�!

	// CObj is a CPlayer
	// -> ������Ʈ�� �÷��̾��̴�!

	// Person is a Student
	// -> ����� �л��̴�.

	// Student is a Person
	// -> �л��� ����̴�.



	// ##2. has-a ����
	// is-a ����� ������� ���� ��� �����ϴ� ��

	// Sword, Player

	// Sword is a Player
	// -> ���� �÷��̾��̴�!

	// Player is a Sword
	// -> �÷��̾�� ���̴�!

	// �� �� ������ ����ϴ�!!!!!
	// �� ��쿡�� has-a ����� ������ �ٲ���!

	// Sword has a Player
	// -> ���� �÷��̾ ������!

	// Player has a Sword
	// -> �÷��̾�� ���� ������!



	// has-a ������ ������
	// �÷��̾�� �ϳ��� ���⸸ ��ӹ޴� ��찡 �߻��Ѵ�.

	// has-a ������ ������ �ذ�_���� ���
	// �ϳ��� Ŭ������ ��ӹ޴� ���� �ƴ϶�,
	// ���� Ŭ������ ��� �޴� ��.

	// ���� ��� ���
	// ��� ���� Ŭ������ , �� �̾ ������ ����Ѵ�.


	// ���� ����� ������
	// ��ȣ��
	// �پ��� Ŭ������ ��� �޴� ���� �ߺ��Ǵ� �̸��� �߻��� �� �ִ�.
	// �ߺ��Ǵ� �̸��� �Լ�/������ ���� ��� ��ȣ������ ���Ͽ� ������ �߻��Ѵ�.
	// -> � �Լ��� �������� �� �� ���� ��Ȳ



	// has-a ���谡 ������ ��� ��� ����� �������� �ʴ´�.
	// ��� ���谡 �ƴ� ���� ����� ��������!!!!


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

// has-a���� ���
class CPlayer : public CSword, public CAxe
{

};

// ���� ����
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