#include "stdafx.h"

void main()
{
	// vector
	// vector�� ����ϱ� ���ؼ��� #include <vector> �߰��� �ʿ��ϴ�!

	// vector ����
	// ���ø� ���
	// ���ø� Ŭ������ ����� �ȴ�.
	// <> �ȿ� �����ϰ� ������ �ڷ����� ����Ѵ�!!!
	vector<int>		vecInt;
	vector<float>	vecFloat;


	// ���� ����
	// push �Լ�
	// push_back()
	vecInt.push_back(1);
	vecInt.push_back(2);
	vecInt.push_back(3);
	vecInt.push_back(4);
	vecInt.push_back(5);

	//// ���� ���
	//// �迭 ����̱� ������ �ε��� ������ �����ϴ�!
	//// -> �迭�� ����ϵ� �����Ͽ� ����� �� �ִ�!
	//for (int i = 0; i < 5; ++i)
	//	cout << vecInt[i] << endl;


	//// ���� ����
	//// pop �Լ�
	//// pop_back()
	//vecInt.pop_back();
	//vecInt.pop_back();

	//for (int i = 0; i < 3; ++i)
	//	cout << vecInt[i] << endl;


	////// size()
	////// ������ ������ ��ȯ�ϴ� �Լ�
	////cout << vecInt.size() << endl;

	//for (size_t i = 0; i < vecInt.size(); ++i)
	//	cout << vecInt[i] << endl;



	//// ��� ���� ����

	//// for���� i�� ���������� vecInt.size�� �����Ѵ�!
	//// -> ��� ���Ҹ� ������ �� ���� �ȴ�!!!
	//for (size_t i = 0; i < vecInt.size(); ++i)
	//	vecInt.pop_back();

	//cout << "vecInt.Size: " << vecInt.size() << endl;


	//// clear()
	//// ��� ���Ҹ� �����ϴ� �Լ�
	//vecInt.clear();
	//cout << "vecInt.Size: " << vecInt.size() << endl;


	//// capacity()
	//// �޸��� ������ ��ȯ�ϴ� �Լ�
	//// �迭�� ���Ҵ� 5���� ���ԵǾ� �ִ�.
	//// �迭�� �޸� �Ҵ� ������ 6���� �Ҵ�Ǿ� �ִ�!
	//cout << "vecInt.Size: " << vecInt.size() << endl;
	//cout << "vecInt.capa: " << vecInt.capacity() << endl;


	// vector�� �����Ҵ� ����� �����̳��̴�!
	// ���� �迭�� �޸𸮸� �����ϰ� ���Ҹ� �����ϴ� ���¸� ������!!
	// ��, �޸��� ������ �ʰ��ϴ� ������ �õ��� ���� ��� ���Ҵ� �� ���簡 �߻��Ѵ�.
	// -> ���Ҵ��� ����
	
	// vector�� �޸��� ���Ҵ� �� (���� �޸� ���� / 2)��ŭ �߰��� ���Ҵ��� �߻��Ѵ�.


	//// empty()
	//// vector�� ���Ұ� ����ִ��� �˻��ϴ� �Լ�
	//// vector���� ����ִ��� �����!
	//// -> ��� ���� ��� : true�� ��ȯ
	//// -> ������� ���� ��� : false�� ��ȯ

	//vecInt.clear();

	//if (vecInt.empty())
	//	cout << "����ִ�!!!!" << endl;
	//else
	//	cout << "������� �ʴ�!!!!" << endl;


	//// swap()
	//// swap�Լ��� ȣ���ϴ� ��ü�� �Ű������� �����ϴ� ��ü��
	//// ��� ���ҿ�, �޸� �Ҵ� ������ ���� �ٲ۴�!!

	//vector<int>		vecTemp;

	//cout << "vecInt.Size: " << vecInt.size() << endl;
	//cout << "vecInt.capa: " << vecInt.capacity() << endl;
	//cout << "-------------------------" << endl;
	//cout << "vecTemp.Size: " << vecTemp.size() << endl;
	//cout << "vecTemp.capa: " << vecTemp.capacity() << endl;

	//cout << "=========================" << endl;
	//vecInt.swap(vecTemp);

	//cout << "vecInt.Size: " << vecInt.size() << endl;
	//cout << "vecInt.capa: " << vecInt.capacity() << endl;
	//cout << "-------------------------" << endl;
	//cout << "vecTemp.Size: " << vecTemp.size() << endl;
	//cout << "vecTemp.capa: " << vecTemp.capacity() << endl;


	//// vector�� �޸� �Ҹ�
	////vecInt.swap(vector<int>());
	//vector<int>().swap(vecInt);

	//cout << "vecInt.Size: " << vecInt.size() << endl;
	//cout << "vecInt.capa: " << vecInt.capacity() << endl;


	// front(), back()
	// front() ù ��° ���ҿ� �����Ѵ�.
	// back() ������ ���ҿ� �����Ѵ�.
	// front�Լ��� back�Լ��� ���� ���ҿ� �����Ͽ� �б�/���Ⱑ �����ϴ�!!

	cout << vecInt.front() << endl;
	cout << vecInt.back() << endl;



}