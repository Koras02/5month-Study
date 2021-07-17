#include "stdafx.h"

class CObj
{
public:
	CObj() : m_pBuff(nullptr) {}
	CObj(char* _pBuff)
	{
		m_pBuff = new char[strlen(_pBuff) + 1];
		strcpy_s(m_pBuff, strlen(m_pBuff) + 1,_pBuff);
	}
	~CObj()
	{
		if (!m_pBuff)
		{
			delete[] m_pBuff;
			m_pBuff = nullptr;
		}
		cout << "소멸자 호출" << endl;
	}

public: 
	CObj(CObj& _rObj)
	{
		// 얕은 복사 = 단순 대입
		//m_pBuff = _rObj.m_pBuff;

		// 깊은 복사
		// 각 객체의 서로 다른 맴버를 가질수 있도록 !!
		m_pBuff = new char[strlen(_rObj.m_pBuff) + 1];
		strcpy_s(m_pBuff, strlen(_rObj.m_pBuff) + 1, _rObj.m_pBuff);
	}

private:
	char* m_pBuff;
};

void main()
{
	// 복사 생성자의 문제점_ 얕은 복사 (단순 대입)
	// 소멸자 호출이 한번만 호출 되고 오류가 발생한다!

	// obj1객체를 만들면서 obj1::m_pBuff는 동적할당한 공간에 주소를 가진다!!
	// 이후 obj2 객체를 만들면서 obj2에 있는 m_pbuff는 obj1:: m_pBuff 의 주로를 복사 받는다.
	//-> obj1::m_pBuff 와 obj ::m_pBuff는 같은 주소를 가진다

	// 함수가 종료되면서 stack 영역을 정리할 때 obj2객체가 우선저그로 소멸
	// obj2객체가 소멸하면서 obj2:m_pbuff 가 가지고 있는 Heap영역을 할당 해체
	// 이후 obj1이 소멸하면서 obj1:m_pbuff가 가지는 
	// Heap 영역에할당을 해제하려고 했더닌 해당공간은 할당되지않은 메모리 공간이다.
	// -> obj2 객체가 소멸하면서 할당해제 했기 때문에
	
	CObj obj1("Hello");
	CObj obj2(obj1);

	// 얕은 복사의 문제점 해결 _ 깊은 복사 
	// -> 복사 받을 객체에 맴버 또한 동적할당을 실행하자!!
}