#include "stdafx.h"

class CObj
{
public:
	void Public_Func() {}

protected:
	void Protected_Func() {}

private:
	void Private_Func() {}

private:
	int		m_iAtt;
	int		m_iHp;
};

// :(콜론) : 부모 클래스를 명시하겠다!
// -> 자식 클래스 : 부모 클래스

// CPlayer 클래스는 CObj클래스를 부모 클래스로 설정한다.
// CObj 클래스가 가지고 있는 모든 멤버 변수와 멤버 함수를
// 자식 클래스에 복사하는 형태로 물려준다.
class CPlayer : public CObj
{
public:
	void Func()
	{
		Public_Func();
		Protected_Func();
		Private_Func();
	}


private:
	int		m_iLevel;
};

class CMonster
{
private:
	int		m_iGold;
};

void main()
{
	// 상속이란?
	// 실 세계의 상속은 부모가 가진것을 자식에게 물려주는 것을 의미한다.

	// 프로그래밍에서의 상속
	// 기존 정의된 클래스가 가지고 있는 멤버 변수와 멤버 함수를 
	// 공통으로 필요로하는 클래스에게 물려줄 수 있다.

	// 이 때 물려주는 클래스를 부모 클래스, 슈퍼 클래스, 베이스 클래스 등등
	// 물려받는 클래스를 자식 클래스, 서브 클래스 등등

	// 클래스에서 데이터를 상속으로 물려줄 때에는 연관 있는 클래스로 만들어야 한다!!!

	// protected
	// 내부 혹은 상속 관계에서만 접근을 허용하겠다!


	CPlayer		player;
	player.Public_Func();
	player.Protected_Func();
	player.Private_Func();


	/*
				|	public 상속	|	protected	|	private
	============|===============|===============|=============
	public 멤버	|	public		|	protected	|	private
	------------|---------------|---------------|-------------
	protected	|	protected	|	protected	|	private
	------------|---------------|---------------|-------------
	private		|	접근 불가		|	접근 불가		|	접근 불가
	----------------------------------------------------------
	*/
}