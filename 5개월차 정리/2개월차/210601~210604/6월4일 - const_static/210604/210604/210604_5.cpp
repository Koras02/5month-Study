#include "stdafx.h"

class CObj
{
public:
	// static 멤버 함수
	static void Static_Func()
	{
		// static 멤버 함수 또한 static이라는 키워드가 붙는다!
		// -> 프로그램 실행 시 메모리에 등록되어 있다!
		// 하지만 m_iA는 객체를 생성해야만 메모리에 등록이 된다.
		++m_iNormal;		// 불가능
		++m_iStatic;		// 가능
	}
	// 일반 멤버 함수
	void Normal_Func()
	{
		++m_iStatic;
		++m_iNormal;
	}

private:
	int			m_iNormal;
	static int	m_iStatic;
};

void main()
{
	// static과 멤버 함수
}