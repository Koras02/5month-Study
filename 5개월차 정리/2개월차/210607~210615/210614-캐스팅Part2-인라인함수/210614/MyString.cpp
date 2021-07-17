#include "stdafx.h"
#include "MyString.h"


CMyString::CMyString()
	: m_pStr(nullptr), m_iLen(0)
{
}


CMyString::CMyString(char* _pStr)
{
	m_iLen = strlen(_pStr);
	m_pStr = new char[m_iLen + 1];

	strcpy_s(m_pStr, m_iLen + 1, _pStr);
}

CMyString::CMyString(CMyString& _string)
{
	m_iLen = _string.m_iLen;
	m_pStr = new char[m_iLen + 1];

	strcpy_s(m_pStr, m_iLen + 1, _string.m_pStr);
}

CMyString::~CMyString()
{
	Release();
}

void CMyString::Release()
{
	SAFE_DELETE_ARR(m_pStr);
	m_iLen = 0;
}

char* CMyString::Get_String()
{
	if (m_pStr)
		return m_pStr;
	return "";
}

CMyString CMyString::operator+(CMyString& _string)
{
	char*	pBuff = new char[m_iLen + _string.m_iLen + 1];

	strcpy_s(pBuff, m_iLen + _string.m_iLen + 1, m_pStr);
	strcat_s(pBuff, m_iLen + _string.m_iLen + 1, _string.m_pStr);

	CMyString	pTemp(pBuff);

	SAFE_DELETE_ARR(pBuff);

	return pTemp;
}

CMyString CMyString::operator+(char* _pStr)
{
	char*	pBuff = new char[m_iLen + strlen(_pStr) + 1];

	strcpy_s(pBuff, m_iLen + strlen(_pStr) + 1, m_pStr);
	strcat_s(pBuff, m_iLen + strlen(_pStr) + 1, _pStr);

	CMyString	pTemp(pBuff);

	SAFE_DELETE_ARR(pBuff);

	return pTemp;
}


CMyString& CMyString::operator+=(CMyString& _string)
{
	int		iLen = m_iLen + _string.m_iLen;
	char*	pBuff = new char[iLen + 1];

	strcpy_s(pBuff, iLen + 1, m_pStr);
	strcat_s(pBuff, iLen + 1, _string.m_pStr);

	Release();

	m_pStr = pBuff;
	m_iLen = iLen;

	return *this;
}

CMyString& CMyString::operator+=(char* _pStr)
{
	int		iLen = m_iLen + strlen(_pStr);
	char*	pBuff = new char[iLen + 1];

	strcpy_s(pBuff, iLen + 1, m_pStr);
	strcat_s(pBuff, iLen + 1, _pStr);

	Release();

	m_pStr = pBuff;
	m_iLen = iLen;

	return *this;
}

bool CMyString::operator==(char* _pStr)
{
	return !strcmp(m_pStr, _pStr);
}

bool CMyString::operator==(CMyString& _string)
{
	return !strcmp(m_pStr, _string.m_pStr);
}

CMyString& CMyString::operator=(char* _pStr)
{
	Release();

	m_iLen = strlen(_pStr);
	m_pStr = new char[m_iLen + 1];

	strcpy_s(m_pStr, m_iLen + 1, _pStr);

	return *this;
}

CMyString& CMyString::operator=(CMyString& _string)
{
	Release();

	m_iLen = _string.m_iLen;
	m_pStr = new char[m_iLen + 1];

	strcpy_s(m_pStr, m_iLen + 1, _string.m_pStr);

	return *this;
}

CMyString operator+(char* _pStr, CMyString& _string)
{
	return CMyString(_pStr) + _string;
}

bool operator==(char* _pStr, CMyString& _string)
{
	return _string == _pStr;
}

ostream& operator<<(ostream& _out, CMyString& _string)
{
	return _out << _string.Get_String();
}