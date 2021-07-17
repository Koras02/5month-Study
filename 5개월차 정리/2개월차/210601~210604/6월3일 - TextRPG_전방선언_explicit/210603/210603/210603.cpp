// 210603.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//

#include "stdafx.h"

class CObj
{
public:
	explicit CObj() {}
	explicit CObj(int _a) { m_iA = _a; }

private:
	int		m_iA;
};

int main()
{
	//CObj	obj1;
	//CObj	obj2(10);

	//// 대입 연산자 우측에 있는 10은 사용자 정의 자료형인 클래스로 형변환이 발생한다.
	//// -> CObj Temp(10);
	//// -> CObj obj3 = Temp;
	//// 형 변환으로 인해 초기화가 가능하지만 문법적으로 혼란스러움이 발생할 수 있다.
	//// 이러한 혼란스러움을 방지하기 위해 explicit 키워드를 사용하자!!
	//CObj	obj3 = 10;


	// explicit
	// 형 변환을 막으면서 명시적 초기화만 허용하겠다.
	// 생성자 앞에 explicit 키워드를 붙여주면 된다.
	CObj	obj1;
	CObj	obj2(10);
	CObj	obj3 = 10;		// 불가능



	// 객체 생성과 소멸 과정
	// 생성 과정
	// 객체 생성 -> 메모리 할당 -> 생성자 호출

	// 소멸 과정
	// 소멸자 호출 -> 메모리 반환 -> 객체 소멸

	

    return 0;
}

