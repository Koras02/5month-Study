#include "stdafx.h"

class CObj
{
public:
	CObj() {}
	CObj(char* _pBuff) : m_pBuff(_pBuff) 
	{
		cout << m_pBuff << "�� ������ ȣ��!" << endl;
	}
	~CObj()
	{
		cout << m_pBuff << "�� �Ҹ��� ȣ��!" << endl;
	}

private:
	char*	m_pBuff;
};

void main()
{
	// �ӽ� ��ü
	// �޸𸮿� ��� ��ϵǴ� ��ü
	// �޸𸮿� ��� ��ϵǱ� ������ �̸��� ����,
	// �ڵ������ ����� ��� �Ҹ��Ѵ�.

	//// �Ϲ� ��ü
	//CObj	obj("�Ϲ� ��ü");

	//// �ӽ� ��ü
	//CObj("�ӽ� ��ü");



	CObj	obj("�Ϲ� ��ü");

	cout << "===============================" << endl;
	CObj("�ӽ� ��ü");
	cout << "===============================" << endl;

}