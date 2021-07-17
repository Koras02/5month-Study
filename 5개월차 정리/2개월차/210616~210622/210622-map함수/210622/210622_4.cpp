#include "stdafx.h"

class CStrCmp
{
public:
	CStrCmp(const char* _pStr) : m_pStr(_pStr) {}

public:
	template <typename T>
	bool operator()(T& _Dst)
	{
		return !strcmp(_Dst.first, m_pStr);
	}

private:
	const char*		m_pStr;
};

void main()
{
	//map<int, int>		Mymap;

	//Mymap.insert(pair<int, int>(1, 100));
	//Mymap.insert(make_pair(2, 200));
	//Mymap.insert(map<int, int>::value_type(3, 300));
	//Mymap.emplace(4, 400);
	//Mymap.insert({ 5, 500 });

	//// map�� Ž��
	//// ��� �Լ� find() �� �̿��ؼ� Ž���Ѵ�!
	//// key���� ���� ��쿡�� �ش� ��ġ�� �ݺ��ڸ� ��ȯ
	//// key���� ���� ��쿡�� end�� �ݺ��ڸ� ��ȯ
	//auto iter = Mymap.find(3);
	//cout << iter->first << ", " << iter->second << endl;


	//// ��� �Լ� find�� ������
	//// find �Լ��� �ܼ� ��

	//// key���� ������ ���� Data ������ �ּ�.
	//// Ž���� ���� �־��� ���� stack ������ �ּ�.

	//map<const char*, int>		Mymap;
	//Mymap.emplace("AAA", 100);
	//Mymap.emplace("BBB", 200);
	//Mymap.emplace("CCC", 300);

	////auto iter = Mymap.find("BBB");

	//char	szBuff[16] = "BBB";
	//auto iter = Mymap.find(szBuff);

	//if (iter != Mymap.end())
	//	cout << iter->first << ", " << iter->second << endl;
	//else
	//	cout << "Ž�� ����" << endl;



	// find �Լ��� ������ �ذ�
	// �˰��� �Լ��� find_if�� ����Ѵ�.
	// ��, find_if�� ���� �����ڸ� ����Ѵ�.
	// -> �Լ� ��ü�� ����Ѵ�!!!

	map<const char*, int>		Mymap;
	Mymap.emplace("AAA", 100);
	Mymap.emplace("BBB", 200);
	Mymap.emplace("CCC", 300);

	char	szBuff[16] = "BBB";

	auto iter = find_if(Mymap.begin(), Mymap.end(), CStrCmp(szBuff));

	if (iter != Mymap.end())
		cout << iter->first << ", " << iter->second << endl;
	else
		cout << "Ž�� ����" << endl;

}

/*
class CStrCmp
{
public:
CStrCmp(const char* _pStr) : m_pStr(_pStr) {}

public:
template <typename T>
bool operator()(T& _Dst)
{
return !strcmp(_Dst.first, m_pStr);
}

private:
const char*		m_pStr;
};
*/



//// ���� �������� ��� ���Ҹ� �Ű������� ������, Ž���� ���ڿ��� �޾ƿ� �� ����!!!
//bool Func(����)
//{
//	return !strcmp(����.first, ? );
//}