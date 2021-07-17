#include <iostream>

using namespace std;

void main()
{
	FILE*	fp_In = nullptr;

	errno_t err_In = fopen_s(&fp_In, "../Data/Image.jpg", "rb");

	if (0 == err_In)
	{
		FILE*	fp_Out = nullptr;
		errno_t err_out = fopen_s(&fp_Out, "../Data/Copy.jpg", "wb");

		if (0 == err_out)
		{
			char	ch = 0;
			
			while (true)
			{
				int iCnt = fread(&ch, sizeof(ch), 1, fp_In);

				if (1 > iCnt)
					break;

				fwrite(&ch, sizeof(ch), 1, fp_Out);
			}


			cout << "파일 쓰기 성공!" << endl;
			fclose(fp_Out);
		}
		else
			cout << "파일 쓰기 실패!" << endl;

		cout << "파일 읽기 성공!" << endl;
		fclose(fp_In);
	}
	else
		cout << "파일 읽기 실패!" << endl;



}