#include "stdafx.h"

class CObj
{
public:
	CObj() : m_pBuff(nullptr) {}
	CObj(char* _pBuff)
	{
		m_pBuff = new char[strlen(_pBuff) + 1];
		strcpy_s(m_pBuff, strlen(m_pBuff) + 1,_pBuff);
	}
	~CObj()
	{
		if (!m_pBuff)
		{
			delete[] m_pBuff;
			m_pBuff = nullptr;
		}
		cout << "�Ҹ��� ȣ��" << endl;
	}

public: 
	CObj(CObj& _rObj)
	{
		// ���� ���� = �ܼ� ����
		//m_pBuff = _rObj.m_pBuff;

		// ���� ����
		// �� ��ü�� ���� �ٸ� �ɹ��� ������ �ֵ��� !!
		m_pBuff = new char[strlen(_rObj.m_pBuff) + 1];
		strcpy_s(m_pBuff, strlen(_rObj.m_pBuff) + 1, _rObj.m_pBuff);
	}

private:
	char* m_pBuff;
};

void main()
{
	// ���� �������� ������_ ���� ���� (�ܼ� ����)
	// �Ҹ��� ȣ���� �ѹ��� ȣ�� �ǰ� ������ �߻��Ѵ�!

	// obj1��ü�� ����鼭 obj1::m_pBuff�� �����Ҵ��� ������ �ּҸ� ������!!
	// ���� obj2 ��ü�� ����鼭 obj2�� �ִ� m_pbuff�� obj1:: m_pBuff �� �ַθ� ���� �޴´�.
	//-> obj1::m_pBuff �� obj ::m_pBuff�� ���� �ּҸ� ������

	// �Լ��� ����Ǹ鼭 stack ������ ������ �� obj2��ü�� �켱���׷� �Ҹ�
	// obj2��ü�� �Ҹ��ϸ鼭 obj2:m_pbuff �� ������ �ִ� Heap������ �Ҵ� ��ü
	// ���� obj1�� �Ҹ��ϸ鼭 obj1:m_pbuff�� ������ 
	// Heap �������Ҵ��� �����Ϸ��� �ߴ��� �ش������ �Ҵ�������� �޸� �����̴�.
	// -> obj2 ��ü�� �Ҹ��ϸ鼭 �Ҵ����� �߱� ������
	
	CObj obj1("Hello");
	CObj obj2(obj1);

	// ���� ������ ������ �ذ� _ ���� ���� 
	// -> ���� ���� ��ü�� �ɹ� ���� �����Ҵ��� ��������!!
}