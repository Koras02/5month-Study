// 210622.cpp : �ܼ� ���� ���α׷��� ���� �������� �����մϴ�.
//

#include "stdafx.h"


int main()
{
	// map
	// map�� ����ϱ� ���ؼ��� #include <map> �߰��� �ʿ��ϴ�!

	// map ����
	// map�� ���ҷ� key�� value �ѽ��� ������.
	// -> key�� value�� Ÿ���� ����ؾ��Ѵ�!!
	map<int, int>		Mymap;

	// map�� ���� ����
	// map�� push�Լ��� �������� �ʴ´�!
	// map�� ���� ���� �� key ���� ���� �ڵ� ������ �߻��Ѵ�.
	
	//// map�� ���� ���� �� insert �Լ��� ����Ѵ�.
	//Mymap.insert(1, 100);	// �Ұ���
	//Mymap.insert(2, 200);	// �Ұ���
	//Mymap.insert(3, 300);	// �Ұ���


	// map�� ����
	// map�� ���ҷ� key�� value �� ���� ������.
	// �׷��� ���� ��� �ѽ��� �����?
	// map�� ����ü ��ü�� ���ҷ� ������!!!!!

	////// pair ����ü
	////pair<int, int>		Mypair;

	//pair<int, int>		Mypair(1, 100);
	//cout << Mypair.first << ", " << Mypair.second << endl;

	//Mypair.first = 10;
	//Mypair.second = 1000;

	//cout << Mypair.first << ", " << Mypair.second << endl;


	//// map�� ���� ����_##1. pair��ü
	//// map �����̳��� key ���� ����� �ȴ�.
	//pair<int, int>		Mypair(1, 100);
	//Mymap.insert(Mypair);

	//auto iter = Mymap.begin();

	//iter->first = 10;		// �Ұ���
	//iter->second = 1000;	// ����

	//cout << (*iter).first << ", " << iter->second << endl;

	
	//// pair �ӽ� ��ü
	//Mymap.insert(pair<int, int>(1, 100));



	//// map�� ���� ����_##2. make_pair()
	//Mymap.insert(make_pair(1, 100));
	//Mymap.insert(make_pair(2, 200));



	////// map�� ���� ����_##3. value_type
	////// map �����̳� ���ο� ���ǵǾ� �ִ� pair ����ü
	////map<int, int>::value_type		MyValueType(1, 100);

	//////MyValueType.first = 10;		// �Ұ���
	//////MyValueType.second = 1000;	// ����

	////Mymap.insert(MyValueType);

	//Mymap.insert(map<int, int>::value_type(1, 100));


	//// map�� ���� ����_##4. emplace
	//// C++11 ���� ������ �Լ�
	//// ���� �Լ��� �̸��� ȹ��ȭ ���״�.

	//Mymap.emplace(1, 100);



	//// map�� ���� ����_##5. ������ �ʱ�ȭ
	//// C++11���� ������ �ʱ�ȭ
	//// ��� �ʱ�ȭ�� ȹ��ȭ ���״�.
	//Mymap.insert({ 1, 100 });



	// map�� ���� ����_##6. []
	//Mymap[1] = 100;

	//Mymap.emplace(1, 100);
	//Mymap.emplace(2, 200);
	//Mymap.emplace(3, 300);

	////for (auto& pair : Mymap)
	////	cout << pair.first << ", " << pair.second << endl;

	//// 1 �̶�� key���� ã�ư��� value�� ��ȯ�ض�!!
	//cout << Mymap[1] << endl;

	// []�� ���� ���� ������ insert�� ���� �ٸ���!!
	cout << Mymap[1] << endl;

	// []�� insert�� ������
	// insert : �ߺ� key ���� ���� ��� ����
	// [] : �ߺ� key ���� ���� ��� value ����
	// -> ���� ���� �� []�� ������� �ʴ´�.

	// ���� ���� �� []�� �۵� ����
	// ##1. [] �ȿ� �ִ� ���� ���� key�� Ž���Ѵ�.
	// -> �ش� key�� ���� ���Ұ� ���� ��쿡�� value���� ��ȯ
	
	Mymap[1] = 100;
	// -> �ش� key�� ���� ���Ұ� ���� ��� ���Ҹ� ���� �����Ѵ�. (key 1, value 0)
	// -> ����, �ش� ������ value���� ���۷��� ���·� ��ȯ�Ѵ�.
	// -> ��ȯ�� value���� ���� �����ڸ� �̿��ؼ� ���Ҹ� �����ϴ� ���°� �ȴ�.




    return 0;
}

