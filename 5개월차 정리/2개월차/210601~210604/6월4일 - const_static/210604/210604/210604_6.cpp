#include "stdafx.h"

class CObj
{
public:
	static void Static_Func()
	{

	}

private:
public:
	static	int		m_iStatic;
};

void main()
{
	// static ����� ���α׷� ���� �� �޸𸮿� ����� �ȴ�!
	// -> �޸𸮿� ��ϵǾ� �ִٸ� ������ �����ϴ�!

	// ��ü�� �������� �ʰ� static ����� ������ �����ϴ�!!!
	// ��, ��� ���� �����ڰ� public�� ��쿡�� ������ �����ϴ�!!
	CObj::Static_Func();		// ����
	CObj::m_iStatic;

}