#include "stdafx.h"

void main()
{
	//// ##3. const_cast
	//// const ������ �����ϴ� ĳ����
	//// ���� const�� ���Ű� �Ұ����ϴ�.
	//// �����ϴ� ������ const ������ ������ �� �ִ�.

	//int		iA = 10;

	////iA = 999;

	//int*	ptr = &iA;
	//*ptr = 999;

	//const int*	ptr2 = &iA;
	//*ptr2 = 999;			// �Ұ���

	//*const_cast<int*>(ptr2) = 999;		// ����




	// ##4. reinterpret_cast
	// ��� �����Ͱ��� �� ��ȯ�� �����ϴ�!!!!

	int		iA = 65;
	cout << reinterpret_cast<char*>(&iA) << endl;

}