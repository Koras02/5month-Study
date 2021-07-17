#include "stdafx.h"

class CObj
{
public:
	CObj()
	{

	}
	CObj(int _a)
		// 이니셜라이저는 메모리 할당과 동시에 초기화 효과를 가진다!
		// m_iA는 static 변수로서 메모리를 할당하지 않는다.
		// -> Data 영역에 등록되기 때문에 Stack이든 Heap이든 추가로 할당하지 않는다.
		//: m_iA(_a)
	{
		//// 초기화라고 할 수 있을까? 아니다!!!!
		//// 생성자의 호출 시점과 static 변수가 등록되는 시점이 다르다!
		//// static은 Data 영역에 등록된다!
		//// -> 프로그램 실행 시 메모리에 등록된다.
		//// 생성자는 프로그램 실행 후 객체를 생성하는 코드라인을 수행할 때 메모리에 등록된다.
		//m_iA = _a;
	}

public:
	void Func()
	{
		++m_iA;
		cout << "m_iA: " << m_iA << endl;
	}


private:
	static int		m_iA;
};

//// 전역 변수를 만드는 것!!!
//// -> static 멤버 변수의 초기화가 아니다!!!
//int	m_iA = 0;

// static 변수의 초기화
// static은 지역적인 특성을 가지기 때문에 어떤 클래스 내부에 있는 변수인지 알려주어야 한다.
int CObj::m_iA = 0;

void main()
{
	// static과 클래스
	// ##1. static 멤버 변수
	// static 멤버 변수의 초기화는 전역에서 진행한다.


	// static 멤버 변수는 해당 클래스로 만든 모든 객체가 공유한다!!!!

	// 객체마다 static 멤버 변수를 각각 할당하기 위해서는
	// 사용자가 객체를 몇개 만드는지 컴파일러가 알고 있어야 한다!!!
	// 하지만, 컴파일러는 사용자가 몇개의 객체를 만드는지 알 수 없다!!!!
	// -> 객체마다 static 멤버 변수를 추가할 수 없다!!

	// 그래서, 모든 객체는 하나의 static 멤버 변수를 공유해서 사용한다.
	CObj	obj1;
	obj1.Func();
	obj1.Func();
	obj1.Func();

	CObj	obj2;
	obj2.Func();

	CObj	obj3;


}