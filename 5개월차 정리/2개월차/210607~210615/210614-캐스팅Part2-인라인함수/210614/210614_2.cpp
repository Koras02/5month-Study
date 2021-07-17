#include "stdafx.h"

class CObj
{
public:
	explicit CObj() {}
	virtual ~CObj() {}

public:
	void CObj_Func() {}
};
class CPlayer : public CObj
{
public:
	explicit CPlayer() {}
	virtual ~CPlayer() {}

public:
	void CPlayer_Func() {}
};

class CMonster : public CObj
{
public:
	explicit CMonster() {}
	virtual ~CMonster() {}

public:
	void CMonster_Func() {}
};

void Func(CObj* _pObj)
{
	if (dynamic_cast<CPlayer*>(_pObj))
		dynamic_cast<CPlayer*>(_pObj)->CPlayer_Func();

	if (dynamic_cast<CMonster*>(_pObj))
		dynamic_cast<CMonster*>(_pObj)->CMonster_Func();
}

void main()
{
	// ##2. dynamic_cast
	// ������ ĳ����

	//CObj*	pObj = new CPlayer;

	//pObj->CObj_Func();
	//dynamic_cast<CPlayer*>(pObj)->CPlayer_Func();

	//delete pObj;


	//// ������ ĳ������ ����
	//// ĳ���ÿ� �����ϸ� �ּ� ���� ��ȯ
	//// ĳ���ÿ� �����ϸ� nullptr�� ��ȯ
	CObj*	pPlayer = new CPlayer;
	CObj*	pMonster = new CMonster;

	static_cast<CPlayer*>(pPlayer)->CPlayer_Func();
	static_cast<CPlayer*>(pMonster)->CPlayer_Func();		// �����ϴ�!!


	//// pPlayerTemp�� �������� ĳ�������� �ּ� ���� ��ȯ�ȴ�.
	//// pMonsterTEmp�� �� �������� ĳ�������� nullptr�� ��ȯ�ȴ�.
	//// -> if������ �ѹ� Ȯ���ϰ� ����� ��������!!
	CPlayer*	pPlayerTemp = dynamic_cast<CPlayer*>(pPlayer);
	CPlayer*	pMonsterTemp = dynamic_cast<CPlayer*>(pMonster);

	dynamic_cast<CPlayer*>(pPlayer)->CPlayer_Func();
	dynamic_cast<CPlayer*>(pMonster)->CPlayer_Func();

	delete pPlayer;
	delete pMonster;



	// dynamic_cast ��� �� ���� ����
	// ##1. ��ü �����Ͱ��� �� ��ȯ�� ����� �����ϴ�.
	// ##2. virtual Ű���尡 �� �ϳ� �̻��̶� �־�� �� ��ȯ�� �����ϴ�.
}