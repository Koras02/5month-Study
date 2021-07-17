#include "stdafx.h"
#include "MainProg.h"

int main()
{
	CMainProg  mainProg;
	
	mainProg.Initialize();
	mainProg.Progress();
	mainProg.Release();

	return 0;
}


