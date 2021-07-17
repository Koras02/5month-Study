#pragma once

#ifndef __STRUCT_H__
#define __STRUCT_H__

typedef struct tagInfo
{
	char szName[16];
	int  iAtt;
	int  iHp;
	int  iMaxHp;
	int  iLevel;
	int  iMaxExp;
	int  iExp;
	int  iGold;
}INFO;

#endif