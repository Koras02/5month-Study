#include "stdafx.h"

class CIphone
{
public:
	void Set_OS(char* _pOS)
	{
		//strcpy_s(m_szOS, 16, _pOS);

		if(!strcmp("IOS", _pOS))
			strcpy_s(m_szOS, 16, _pOS);
		else
			strcpy_s(m_szOS, 16, "IOS");
	}

	char* Get_OS()
	{
		return m_szOS;
	}


private:
	char	m_szOS[16];
};

void main()
{
	//// ##1. ����ȭ
	//// �ܺηκ��� �����͸� ��ȣ�ϰڴ�.
	//// �⺻ ��� ���� �����ڸ� private���� �����Ѵ�.

	//CIphone		iphone;
	//strcpy_s(iphone.m_szOS, 16, "IOS");
	//cout << iphone.m_szOS << endl;

	//////////////////////////////////////////////////////
	//// �ڵ尡 �������̰�, �߰��� OS�� �ٲ� ���
	//// ���� ��� ��� ����Ǿ����� ã�Ⱑ ��ƴ�!!!
	//// �̸� �ذ��ϱ� ���ؼ� ����ȭ�� �������!!!
	//strcpy_s(iphone.m_szOS, 16, "Android");
	//////////////////////////////////////////////////////

	//cout << iphone.m_szOS << endl;


	// private�� �����͸� �ٷ�� ���
	// Get / Set �Լ��� �������.
	
	// ��� �������� private���� �����ϰ�, ��� �Լ��� public���� �����Ѵ�.
	// Get�Լ� : �����͸� �д� �뵵
	// Set�Լ� : �����͸� ���� �뵵

	CIphone		iphone;
	iphone.Set_OS("IOS");
	cout << iphone.Get_OS() << endl;

	////////////////////////////////////////////////////
	// Set�Լ��� �̿��� ��� ������� ���ؼ� 
	// ����, ���, ��� �ٲ���� �ľ��ϱⰡ ����!!!
	iphone.Set_OS("Android");
	////////////////////////////////////////////////////

	cout << iphone.Get_OS() << endl;
}