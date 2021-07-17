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

	//// map의 탐색
	//// 멤버 함수 find() 를 이용해서 탐색한다!
	//// key값이 있을 경우에는 해당 위치의 반복자를 반환
	//// key값이 없을 경우에는 end의 반복자를 반환
	//auto iter = Mymap.find(3);
	//cout << iter->first << ", " << iter->second << endl;


	//// 멤버 함수 find의 문제점
	//// find 함수는 단순 비교

	//// key값을 저장한 값은 Data 영역의 주소.
	//// 탐색을 위해 넣어준 값은 stack 영역의 주소.

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
	//	cout << "탐색 실패" << endl;



	// find 함수의 문제점 해결
	// 알고리즘 함수의 find_if를 사용한다.
	// 단, find_if는 단항 조건자를 사용한다.
	// -> 함수 객체를 사용한다!!!

	map<const char*, int>		Mymap;
	Mymap.emplace("AAA", 100);
	Mymap.emplace("BBB", 200);
	Mymap.emplace("CCC", 300);

	char	szBuff[16] = "BBB";

	auto iter = find_if(Mymap.begin(), Mymap.end(), CStrCmp(szBuff));

	if (iter != Mymap.end())
		cout << iter->first << ", " << iter->second << endl;
	else
		cout << "탐색 실패" << endl;

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



//// 단항 조건자일 경우 원소를 매개변수로 받으면, 탐색할 문자열을 받아올 수 없다!!!
//bool Func(원소)
//{
//	return !strcmp(원소.first, ? );
//}