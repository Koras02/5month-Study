#include "stdafx.h"

class CObj
{
public:
	virtual void Func()
	{
		cout << "CObj Func" << endl;
	}
};
class CPlayer : public CObj
{
public:
	virtual void Func()
	{
		cout << "CPlayer Func" << endl;
	}
};
class CSub : public CPlayer
{
public:
	virtual void Func()
	{
		cout << "CSub Func" << endl;
	}
};
class CMonster : public CObj
{
public:
	virtual void Func()
	{
		cout << "CMonster Func" << endl;
	}
};

void main()
{
	// ��ü ������ + �������̵� + virtual

	//CObj*	pObj = new CPlayer;
	//CObj*	pObj2 = new CMonster;

	//pObj->Func();
	//pObj2->Func();

	//delete pObj;
	//delete pObj2;


	//CPlayer*	pPlayer = new CSub;
	//pPlayer->Func();
	//delete pPlayer;


	//// ���� �Լ��� �ƴ� ���
	//// ��ü Ÿ�� �������� �Լ��� ȣ���Ѵ�.
	//CSub		Sub;
	//CObj*		pObj = &Sub;
	//CPlayer*	pPlayer = &Sub;
	//CSub*		pSub = &Sub;

	//pObj->Func();		// CObj Func
	//pPlayer->Func();	// CPlayer Func
	//pSub->Func();		// CSub Func
	//Sub.Func();			// CSub Func


	// �����Լ��� ���
	// �� ��ü�� �Լ��� ȣ��ȴ�.
	CSub		Sub;
	CObj*		pObj = &Sub;
	CPlayer*	pPlayer = &Sub;
	CSub*		pSub = &Sub;

	pObj->Func();		// CSub Func
	pPlayer->Func();	// CSub Func
	pSub->Func();		// CSub Func
	Sub.Func();			// CSub Func


}