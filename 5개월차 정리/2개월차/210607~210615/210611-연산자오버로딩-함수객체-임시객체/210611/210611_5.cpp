#include "stdafx.h"

class CObj
{
public:
	CObj() {}
	CObj(char* _pBuff) : m_pBuff(_pBuff) 
	{
		cout << m_pBuff << "의 생성자 호출!" << endl;
	}
	~CObj()
	{
		cout << m_pBuff << "의 소멸자 호출!" << endl;
	}

private:
	char*	m_pBuff;
};

void main()
{
	// 임시 객체
	// 메모리에 잠깐 등록되는 객체
	// 메모리에 잠깐 등록되기 때문에 이름이 없고,
	// 코드라인을 벗어나는 즉시 소멸한다.

	//// 일반 객체
	//CObj	obj("일반 객체");

	//// 임시 객체
	//CObj("임시 객체");



	CObj	obj("일반 객체");

	cout << "===============================" << endl;
	CObj("임시 객체");
	cout << "===============================" << endl;

}