#pragma once

#ifndef __STRUCT_H__
#define __STRUCT_H__

typedef struct tagGrade
{
	char	szName[16];
	int		iKor;
	int		iEng;
	int		iMath;
	int		iTotal;
	float	fAver;
}GRADE;

#endif // !__STRUCT_H__
