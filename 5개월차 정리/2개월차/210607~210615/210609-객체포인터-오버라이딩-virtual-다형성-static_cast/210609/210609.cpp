// 210609.cpp : �ܼ� ���� ���α׷��� ���� �������� �����մϴ�.
//

#include "stdafx.h"

class CObj
{
public:
	void CObj_Func() {}
};
class CPlayer : public CObj
{
public:
	void CPlayer_Func() {}
};

int main()
{
	// ##1. ��ü ������
	// ��ü�� �ּҸ� ������ �� �ִ� ������
	// �ڱ� �ڽ��� �ּ� �Ǵ� �ڱ� �ڽ��� ��ӹ޴� ��ü�� �ּҸ� ������ �� �ִ� ������


	//// �ڱ� �ڽ��� �ּ�
	//CObj*	pObj = new CObj;
	//delete pObj;


	//// �ڱ� �ڽ��� ��ӹ޴� ��ü�� �ּ�
	//CObj*	pPlayer = new CPlayer;
	//delete pObj;


	//// ��ü �������� ��� ����
	//// ����� ������ �õ��� ��� �� ��ü �������� �Ǵ����� �ʰ�,
	//// ��ü Ÿ�� �������� ������ �Ǵ��Ѵ�.

	//// �� ��ü : CObj
	//// ��ü Ÿ�� : CObj*
	//CObj*	pObj = new CObj;
	//pObj->CObj_Func();
	//delete pObj;

	//// �� ��ü : CPlayer
	//// ��ü Ÿ��: CObj*
	//CObj*	pPlayer = new CPlayer;
	//pPlayer->CObj_Func();
	//pPlayer->CPlayer_Func();		// �Ұ���
	//delete pPlayer;




	CPlayer*	pObj = new CObj;


    return 0;
}

