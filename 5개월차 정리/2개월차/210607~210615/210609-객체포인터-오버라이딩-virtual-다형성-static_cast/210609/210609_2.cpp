#include "stdafx.h"

class CObj
{
public:
	void Func() { cout << "CObj Func" << endl; }
};
class CPlayer : public CObj
{
public:
	void Func() { cout << "CPlayer Func" << endl; }
};

void main()
{
	// ##2. �������̵�
	// ��� ���迡�� ����ϴ� ����
	// �θ� Ŭ������ ���� ��� �Լ��� �ڽ� Ŭ������ �״�� �������ϴ� ����
	// -> ��ȯ Ÿ��, �Լ� �̸�, �Ű����� ������ ��� �����ϰ� �������ϰڴ�!
	
	// ��ȣ���� �����ִ� ����
	// ������ �Լ��� 2���� ������ �ϳ��� �Լ��� �����.



	//// ��ü ������ + �������̵�
	//// ��ü Ÿ���� CObj* Ÿ���� ��� CObj�� Func�Լ��� ȣ��ȴ�.
	//// CPlayer::Func�Լ��� ���Եȴ�.
	//CObj*	pObj = new CPlayer;
	//pObj->Func();		// CObj Func
	//delete pObj;

	// ��ü Ÿ���� CPlayer* Ÿ���� ��� CPlayer�� Func�Լ��� ȣ��ȴ�.
	// CObj::Func�Լ��� ���Եȴ�.
	CPlayer*	pObj = new CPlayer;
	pObj->Func();		// CPlayer Func
	delete pObj;


}