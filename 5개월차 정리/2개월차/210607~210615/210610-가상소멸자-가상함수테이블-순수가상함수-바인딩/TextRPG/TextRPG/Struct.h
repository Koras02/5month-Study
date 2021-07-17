#pragma once

#ifndef __STRUCT_H__
#define __STRUCT_H__

typedef struct tagInfo
{
	tagInfo() {}
	tagInfo(char* _pName, int _iAtt, int _iMaxHp)
		: iAtt(_iAtt), iMaxHp(_iMaxHp), iHp(_iMaxHp), iLevel(1), iMaxExp(100)
		, iExp(0), iGold(0)
	{
		strcpy_s(szName, 16, _pName);
	}
	tagInfo(char* _pName, int _iAtt, int _iMaxHp, int _iLevel)
		: iAtt(_iAtt), iMaxHp(_iMaxHp), iHp(_iMaxHp), iLevel(_iLevel), iMaxExp(0)
		, iExp(0), iGold(0)
	{
		strcpy_s(szName, 16, _pName);
	}

	char	szName[16];
	int		iAtt;
	int		iMaxHp;
	int		iHp;
	int		iLevel;
	int		iMaxExp;
	int		iExp;
	int		iGold;
}INFO;

#endif // !__STRUCT_H__
