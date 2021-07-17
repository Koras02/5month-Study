#include <iostream>

using namespace std;

void main()
{
	int		iArr[25] = {};

	for (int i = 0; i < 25; ++i)
		iArr[i] = i + 1;

	for (int i = 0; i < 5; ++i)
	{
		for (int j = 0; j < 5; ++j)
			cout << iArr[i * 5 + j] << '\t';
		cout << endl;
	}

}