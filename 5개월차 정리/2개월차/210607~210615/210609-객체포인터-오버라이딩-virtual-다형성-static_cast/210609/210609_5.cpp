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

class CTest
{
public:
	void CTest_Func() {}
};

void main()
{
	//// ĳ����
	//// �� ��ȯ

	//// C ��Ÿ�� ĳ����
	//int		iA = (int)3.14f;


	// ##1. static_cast
	// ##2. dynamic_cast
	// ##3. const_cast
	// ##4. reinterpret_cast
	/*
	ĳ����<��ȯ�� Ÿ��>(������)
	*/


	//// ##1. static_cast
	//// ���� ĳ����
	//// -> ������ ������ ĳ������ ����ȴ�.
	//// -> ������ �� �� ��ȯ�� ���� �ȴ�.
	//// ������ ĳ�����̶�� �θ���.
	//// -> ��� ������ ������.

	//int		iA = static_cast<int>(3.14f);		// int		iA = 3;


	//// ��ü �����͸� ����� ��� �ڽ� ��ü�� ���� �Լ��� ȣ���� �� ����.
	//// �� ���, ĳ����(�� ��ȯ)�� �̿��ϸ� �ڽ� ��ü�� ���� �Լ��� ȣ���� �� �ִ�!
	//CObj*	pObj = new CPlayer;

	//pObj->CObj_Func();			// ����
	//pObj->CPlayer_Func();		// �Ұ���

	//static_cast<CPlayer*>(pObj)->CPlayer_Func();		// ����

	//delete pObj;



	//CObj*	pObj = new CPlayer;

	//// C��Ÿ�� ĳ������ ���� �� ��ȯ�̴�!
	//// -> �ƹ��� ���� ���� �� ��ȯ�� ����Ѵ�!!!!
	//// �����ϴ�!
	//((CTest*)pObj)->CTest_Func();

	//// static_cast�� �������� ���� �Ǵ��� �ȵǴ��� �Ǵ��Ѵ�.
	//// CTest�� CObj/CPlayer�� ���� ������ ���� Ŭ�����̴�.
	//// ���� ���� �� ��ȯ�� �����ϱ� ������ ������ �߻��Ѵ�.
	//static_cast<CTest*>(pObj)->CTest_Func();

	//delete pObj;



	// �������� ��� �������� �Ǵ������� �θ�� �ڽ� ����� �ľ����� �ʴ´�.
	CObj*	pObj = new CObj;
	static_cast<CPlayer*>(pObj)->CPlayer_Func();		// �������� ���������� ������ ��Ȳ�̴�.
	delete pObj;
	

}