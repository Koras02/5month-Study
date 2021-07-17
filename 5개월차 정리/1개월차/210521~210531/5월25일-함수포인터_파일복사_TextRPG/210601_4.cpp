#include "stdafx.h"

class CIphone
{
public:
	void Set_OS(char* _pOS)
	{
		//strcpy_s(m_szOS, 16, _pOS);

		if(!strcmp("IOS", _pOS))
			strcpy_s(m_szOS, 16, _pOS);
		else
			strcpy_s(m_szOS, 16, "IOS");
	}

	char* Get_OS()
	{
		return m_szOS;
	}


private:
	char	m_szOS[16];
};

void main()
{
	//// ##1. 은닉화
	//// 외부로부터 데이터를 보호하겠다.
	//// 기본 멤버 접근 지정자를 private으로 설정한다.

	//CIphone		iphone;
	//strcpy_s(iphone.m_szOS, 16, "IOS");
	//cout << iphone.m_szOS << endl;

	//////////////////////////////////////////////////////
	//// 코드가 수만줄이고, 중간에 OS를 바꿀 경우
	//// 언제 어디서 어떻게 변경되었는지 찾기가 어렵다!!!
	//// 이를 해결하기 위해서 은닉화를 사용하자!!!
	//strcpy_s(iphone.m_szOS, 16, "Android");
	//////////////////////////////////////////////////////

	//cout << iphone.m_szOS << endl;


	// private된 데이터를 다루는 방법
	// Get / Set 함수를 사용하자.
	
	// 멤버 변수들은 private으로 설정하고, 멤버 함수는 public으로 설정한다.
	// Get함수 : 데이터를 읽는 용도
	// Set함수 : 데이터를 쓰는 용도

	CIphone		iphone;
	iphone.Set_OS("IOS");
	cout << iphone.Get_OS() << endl;

	////////////////////////////////////////////////////
	// Set함수를 이용할 경우 디버깅을 통해서 
	// 언제, 어디서, 어떻게 바뀌는지 파악하기가 쉽다!!!
	iphone.Set_OS("Android");
	////////////////////////////////////////////////////

	cout << iphone.Get_OS() << endl;
}