#include "stdafx.h"

template <typename T>
class CObj
{
public:
	CObj() {}
	~CObj() {}

protected:
	T		m_A;
};

// 어떤 자료형을 사용하는 CObj를 상속받을지 알 수 없기 때문에 오류가 발생한다.
//class CPlayer : public CObj

//// <T>는 템플릿에서 사용하는 type의 이름이다!! 라고 알려주어야 한다.
//class CPlayer : public CObj<T>


// 부모 클래스가 template으로 만들어졌을 경우
// 자식 클래스 또한 template으로 만들어야 하고,
// 부모 클래스가 어떤 타입을 사용하는 클래스인지도 알려주어야 한다.
template <typename T>
class CPlayer : public CObj<T>
{

};

void main()
{
	// 템플릿의 상속
}