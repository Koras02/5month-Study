 #include <iostream>

using namespace std;

void main()
{
	//char	szBuff[20] = "Hello";
	//cout << "szBuff: " << szBuff << endl;

	////szBuff = "World";		// �Ұ���
	//szBuff[0] = 'W';
	//szBuff[1] = 'o';
	//szBuff[2] = 'r';
	//szBuff[3] = 'l';
	//szBuff[4] = 'd';
	//cout << "szBuff: " << szBuff << endl;


	//// ���� �迭�� ������ ����
	//// ##1. ����
	//// strcpy_s(#1, #2, #3)
	//// #1 : ���� ���� �޸��� ���� �ּҸ� ����(�迭�� �̸�)
	//// #2 : �ִ� �󸶸�ŭ ũ��� �۾��� ������ ����
	//// #3 : ���� �� �޸��� ���� �ּҸ� ����(�迭�� �̸�, ���ڿ� ���)

	////char	szBuff[20] = "Hello";
	////cout << "szBuff: " << szBuff << endl;
	////strcpy_s(szBuff, 20, "World");
	////cout << "szBuff: " << szBuff << endl;

	//char	szDst[20] = "Hello";
	//char	szSrc[20] = "World";

	//strcpy_s(szDst, 20, szSrc);


	//// ##2. ����
	//// ���ڿ� �ڿ� �ٸ� ���ڿ��� �̾ ���δ�!
	//// strcat_s(#1, #2, #3)
	//// #1 : ���� ���� �޸��� ���� �ּҸ� ����(���� �迭)
	//// #2 : ���� �� �޸��� �ִ� ũ�⸦ ����
	//// #3 : ���� �� �޸��� ���� �ּҸ� ����(���� �迭, ���ڿ� ���)

	//char	szDst[20] = "Hello";
	//char	szSrc[20] = "World";

	//strcat_s(szDst, sizeof(szDst), szSrc);

	//cout << "szDst: " << szDst << endl;



	//// ##3. ����
	//// ���ڿ��� ���̸� ��ȯ���ִ� �Լ�
	//// ��, NULL ���ڸ� ������ ���� ���ڿ��� ���̸� ��ȯ�Ѵ�.
	//// strlen()
	//
	//char	szBuff[20] = "Hello";

	//cout << "sizeof: " << sizeof(szBuff) << endl;		// 20
	//cout << "strlen: " << strlen(szBuff) << endl;		// 5



	//// ##4. ��
	//// �� ���ڿ��� ������ �����ִ� �Լ�
	//// ��, �� ���ڿ��� ������ 0, �� ���ڿ��� �ٸ��� 0�� �ƴ� ��
	//// strcmp()

	//char szDst[20] = "Hello";
	//char szSrc[20] = "HEllo";

	//if(!strcmp(szDst, szSrc))
	//	cout << "�� ���ڿ��� ����!" << endl;
	//else
	//	cout << "�� ���ڿ��� �ٸ���!" << endl;





	// ���ڿ� �Է�
	// ���ڿ��� �Է��� ���� �迭�� ����Ѵ�!!
	// ��, ���� �迭�� ũ��� NULL ���ڸ� ����ؼ� �����ؾ��Ѵ�!!!

	char	szBuff[5] = "";

	cout << "���ڿ��� �ִ� 4���� �Է��Ͻÿ�!!!" << endl;
	cin >> szBuff;

	cout << "szBuff: " << szBuff << endl;



}