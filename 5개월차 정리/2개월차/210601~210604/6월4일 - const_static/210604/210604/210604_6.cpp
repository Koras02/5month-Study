#include "stdafx.h"

class CObj
{
public:
	static void Static_Func()
	{

	}

private:
public:
	static	int		m_iStatic;
};

void main()
{
	// static 멤버는 프로그램 실행 시 메모리에 등록이 된다!
	// -> 메모리에 등록되어 있다면 접근이 가능하다!

	// 객체를 생성하지 않고도 static 멤버에 접근이 가능하다!!!
	// 단, 멤버 접근 지정자가 public일 경우에만 접근이 가능하다!!
	CObj::Static_Func();		// 가능
	CObj::m_iStatic;

}