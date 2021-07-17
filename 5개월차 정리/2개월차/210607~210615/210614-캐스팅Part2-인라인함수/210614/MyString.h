#pragma once

#ifndef __MYSTRING_H__
#define __MYSTRING_H__

#define SAFE_DELETE(p) if(p) { delete p; p = nullptr; }
#define SAFE_DELETE_ARR(p) if(p) { delete[] p; p = nullptr; }

class CMyString
{
public:
	CMyString();
	CMyString(char* _pStr);
	CMyString(CMyString& _string);
	~CMyString();

public:
	void Release();
	char* Get_String();

public:
	CMyString operator+(CMyString& _string);
	CMyString operator+(char* _pStr);
	CMyString& operator+=(CMyString& _string);
	CMyString& operator+=(char* _pStr);
	CMyString& operator=(CMyString& _string);
	CMyString& operator=(char* _pStr);
	bool operator==(CMyString& _string);
	bool operator==(char* _pStr);

private:
	char*	m_pStr;
	int		m_iLen;
};


CMyString operator+(char* _pStr, CMyString& _string);
bool operator==(char* _pStr, CMyString& _string);
ostream& operator<<(ostream& _out, CMyString& _string);

#endif // !__MYSTRING_H__
