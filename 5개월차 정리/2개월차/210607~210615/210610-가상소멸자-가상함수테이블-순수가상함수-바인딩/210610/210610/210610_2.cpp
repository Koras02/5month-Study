#include "stdafx.h"

class CObj
{
public:
	explicit CObj() {}
	virtual ~CObj() {}

public:
	virtual void Func() {}
	virtual void Render() {}
};

class CPlayer : public CObj
{
public:
	explicit CPlayer() {}
	virtual ~CPlayer() {}

public:
	virtual void Func() {}
	virtual void Render() {}
};

void main()
{
	// ���� �Լ� �۵� ����
	
	// ���� �Լ� ���̺�
	// �迭�̴�. �Լ��� �ּҸ� �����ϰ� �ִ� ������ �迭

	// virtual Ű���尡 �� �ϳ��� �ִ� Ŭ������ �����Ϸ��� ������ ��
	// ���� �Լ� ���̺��� �����.
	// ����, ���� �Լ� ���̺��� ���� �Լ����� �ּҸ� �����Ѵ�.


	// ���� �Լ� ������
	// ������ ����

	// virtual Ű���尡 �� �ϳ��� �ִ� Ŭ������ �����Ϸ��� ������ ��
	// ���� �Լ� �����͸� ����� �߰� ��Ų��.
	// ���� �Լ� �����ʹ� ���� �Լ� ���̺��� �ּҸ� �����ϰ� �ִ�!


	// ���� �Լ��� �۵� ����
	// ��ü �����Ϳ��� ���� �Լ��� ȣ���� ���
	// ��ü Ÿ�� �������� �Ǵ����� �ʰ�
	// ���� �Լ� �����Ͱ� �����ϰ� �ִ� ���� �Լ� ���̺��� �Լ��� ȣ���ϰ� �ȴ�.



	// ���� �Լ� �������� ����

	//// ����� �����ص� �ߺ��� �ּҸ� �����ϱ� ���� �ּ� 1byte�� ũ�⸦ ������.
	//cout << sizeof(CPlayer) << endl;		// 1byte

	//// virtual Ű���尡 �ֱ� ������ ���� �Լ� �����Ͱ� �߰��Ǿ���!!!
	//cout << sizeof(CPlayer) << endl;		// 4bytes


	CObj*	pObj = new CObj;
	CObj*	pPlayer = new CPlayer;

	int		iA = 0;

	delete pObj;
	delete pPlayer;



}