#include <iostream>
#include <time.h>

using namespace std;

void Bubble_Sort(int _iLotto[], int _iSize);
void main()
{
	srand(unsigned(time(NULL)));

	int		iArr[45] = {};
	int		iLotto[6] = {};

	for (int i = 0; i < 45; ++i)
		iArr[i] = i + 1;

	for(int j = 0; j < 5; ++j)
	{
		for (int i = 0; i < 500; ++i)
		{
			int iDst = rand() % 45;
			int iSrc = rand() % 45;

			int iTemp = iArr[iDst];
			iArr[iDst] = iArr[iSrc];
			iArr[iSrc] = iTemp;
		}

		for (int i = 0; i < 6; ++i)
			iLotto[i] = iArr[i];

		Bubble_Sort(iLotto, sizeof(iLotto) / sizeof(int));

		cout << j + 1 << "È¸Â÷: ";
		for (int i = 0; i < 6; ++i)
			cout << iLotto[i] << '\t';
		cout << endl << "====================================================" << endl;
	}
}

void Bubble_Sort(int _iLotto[], int _iSize)
{
	for (int i = 0; i < _iSize - 1; ++i)
	{
		for (int j = 0; j < _iSize - 1; ++j)
		{
			if (_iLotto[j] > _iLotto[j + 1])
			{
				int iTemp = _iLotto[j];
				_iLotto[j] = _iLotto[j + 1];
				_iLotto[j + 1] = iTemp;
			}
		}
	}
}