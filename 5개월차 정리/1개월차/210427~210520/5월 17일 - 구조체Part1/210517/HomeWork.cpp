#include <iostream>

using namespace std;

void main()
{
	char	szBuff[20] = "";
	int		iLen = 0;

	cout << "문자열 입력: ";
	cin >> szBuff;

	while (szBuff[iLen] != '\0')
		++iLen;
	
	int iRevIdx = iLen - 1;
	for (int i = 0; i < (iLen >> 1); ++i)
	{
		char ch = szBuff[i];
		szBuff[i] = szBuff[iRevIdx];
		szBuff[iRevIdx--] = ch;
	}

	cout << "문자열 길이: " << iLen << endl;
	cout << "뒤집은 결과: " << szBuff << endl;
}