#include <iostream>

using namespace std;

class CObj
{
public:
	// ���� �Լ�
	virtual void Func()
	{
		cout << "CObj Func" << endl;
	}

public:
	void CObj_Func()
	{

	}
};

void main()
{
	// ##3. virtual
	// ����

	// �� ���迡�� �����̶�?
	// �������� �ʴ� ���� �����ϴ� ��ó�� ������ �ϴ� ��.

	// ���α׷��ֿ��� �����̶�?
	// �����ϴ� ���� �������� �ʴ� ��ó�� �Ͽ���!


	CObj*	pObj = new CObj;

	pObj->Func();

	pObj->CObj_Func();

	delete pObj;

}