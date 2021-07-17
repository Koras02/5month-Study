#include <iostream>

using namespace std;

// 클래스 템플릿
template <typename T>
class CObj
{
public:
	CObj() : m_A(0) {}
	CObj(T _a) : m_A(_a) {}
	~CObj() {}

private:
	T		m_A;
};

void main()
{
	// 클래스와 템플릿
	// 함수 템플릿, 템플릿 함수와 기본 사용 방법은 동일하다!
	// -> 특수화, typename 여러개 설정 등

	// 템플릿 클래스
	CObj<int>		objInt;
	CObj<float>		objFloat;
}