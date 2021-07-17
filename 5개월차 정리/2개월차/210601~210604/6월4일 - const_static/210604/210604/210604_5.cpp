#include "stdafx.h"

class CObj
{
public:
	// static ��� �Լ�
	static void Static_Func()
	{
		// static ��� �Լ� ���� static�̶�� Ű���尡 �ٴ´�!
		// -> ���α׷� ���� �� �޸𸮿� ��ϵǾ� �ִ�!
		// ������ m_iA�� ��ü�� �����ؾ߸� �޸𸮿� ����� �ȴ�.
		++m_iNormal;		// �Ұ���
		++m_iStatic;		// ����
	}
	// �Ϲ� ��� �Լ�
	void Normal_Func()
	{
		++m_iStatic;
		++m_iNormal;
	}

private:
	int			m_iNormal;
	static int	m_iStatic;
};

void main()
{
	// static�� ��� �Լ�
}