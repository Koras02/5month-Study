#include "stdafx.h"

class CCar
{
public:
	void Move()
	{
		cout << m_szName << "이(가) " << m_iSpeed << "속도로 움직입니다." << endl;
	}

public:
	// m_ : 멤버를 뜻하는 헝가리안 표기법
	char	m_szName[16];
	int		m_iSpeed;
};

struct tagCar
{
private:
	// C++이후 구조체 또한 멤버 함수를 지닐 수 있다.
	void Move()
	{
		cout << m_szName << "이(가) " << m_iSpeed << "속도로 움직입니다." << endl;
	}

	char	m_szName[16];
	int		m_iSpeed;
};

void main()
{
	CCar	Tico;
	strcpy_s(Tico.m_szName, 16, "티코");
	Tico.m_iSpeed = 100;
	Tico.Move();

	//tagCar	Matiz;
	//strcpy_s(Matiz.m_szName, 16, "마티즈");
	//Matiz.m_iSpeed = 200;
	//Matiz.Move();



	// 멤버 접근 지정자
	// 멤버에 접근할 수 있는 권한을 뜻한다.

	// ##1. private
	// 멤버에 접근할 수 있는 권한은 오로지 내부에서만 허용하겠다.
	// 외부로부터 접근을 불허하겠다.
	// -> 클래스의 기본 접근 지정자
	
	// ##2. public
	// 멤버에 접근할 수 있는 권한은 내/외부 모두 허용하겠다.
	// -> 구조체의 기본 접근 지정자

	// ##3. protected
	// 멤버 접근을 내부 혹은 상속 관계에서 허용하겠다.


	// 구조체와 클래스의 차이점
	// ##1. 기본 멤버 접근 지정자의 차이점
	// -> 클래스 : private
	// -> 구조체 : public

	// 그 외의 모든 기능은 동일하다.
	// -> 앞으로 배우게 되는 모든 클래스 문법이 구조체에서도 사용이 가능하다.

	// C++ 이후 구조체와 클래스의 경계가 모호해졌다!
	// 모호해진 경계를 구조체에서는 멤버 함수를 만들지 않겠다! 라고 약속.
	// -> 구조체는 데이터 덩어리 형태로 사용하겠다!



}