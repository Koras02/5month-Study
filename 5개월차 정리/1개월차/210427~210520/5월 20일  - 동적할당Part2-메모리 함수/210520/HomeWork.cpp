#include <iostream>

using namespace std;

char* Func();
void main()
{
	char*	pBuff = Func();
	cout << "pBuff: " << pBuff << endl;

	delete[] pBuff;
	pBuff = nullptr;

	//free(pBuff);
	//pBuff = nullptr;
}

char* Func()
{
	//char* pBuff = (char*)malloc(sizeof(char) * 16);
	char* pBuff = new char[16];
	cin >> pBuff;

	return pBuff;

	//char	szBuff[16] = "";
	//cin >> szBuff;

	//return szBuff;
}