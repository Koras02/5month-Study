#include "stdafx.h"


using namespace std;

void main()
{
	// switch �� 
	// ��� ���� �б⹮ 
	/*
	  switch ( ����(����/���) )
	  {
	   case ����(���):
	     break;
	   case ����(���):
		 break;
	   case ����(���):
	     break;
	  }
	*/


	// iSelect�� 2�� �Է��� ��� ���̴ٿ� ȯŸ�� ���ÿ� ��µȴ�.
	// �� ������ switch���� ������ �߻��ϴ� �����̴�
	// { ���� ���� } ������� switch ���� �����̱� ������ �߻�

	//int iSelect = 0;
	//cin >> iSelect;

	//switch (iSelect)
	//{
	//case 1:
	//	cout << "�ݶ�" << endl;
	//case 2:
	//	cout << "���̴�" << endl;
	//case 3:
	//	cout << "ȯŸ" << endl;
	//}

	
	
	// break
	// switch�� �Ǵ� �ݺ��� ���ο����� ����� ������ ��ɾ�.
	// switch�� �Ǵ� �ݺ����� �ڵ� ����� ���� �� break�� ������ �Ǹ�
	// �ش� switch�� �Ǵ� �ݺ����� Ż���ϴ� �뵵�� ����Ѵ�.
	//int  iSelect = 0;
	//cin >> iSelect;


	//switch (iSelect)
	//{
	//case 1:
	//	cout << "�ݶ�" << endl;
	//	break;
	//case 2:
	//	cout << "���̴�" << endl;
	//	break;
	//case 3:
	//	cout << "ȯŸ" << endl;
	//	break;


	//}

	// default 
	// if ���� else ���� ����
	// case�� �б��� ��� ���� ���� ��� default�� �����Ѵ�.

	int  iSelect = 0;
	cin >> iSelect;

	switch (iSelect)
	{
	case 1:
		cout << "�ݶ�" << endl;
		break;
	case 2:
		cout << "���̴�" << endl;
		break;
	case 3:
		cout << "ȯŸ" << endl;
		break;
	default:
		cout << "�غ�� ��ǰ�� �����ϴ�!" << endl;
		break;
	}




}