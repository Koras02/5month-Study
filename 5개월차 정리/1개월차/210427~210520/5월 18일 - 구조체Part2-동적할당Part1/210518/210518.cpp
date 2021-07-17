#include <iostream>

using namespace std;

typedef struct tagSize
{
	char	chSize;
	int		iSize;
	float	fSize;
	double	dSize;
}SIZE;

typedef struct tagSize1
{
	char		chSize1;
	int			iSize1;
	long long	llSize1;
	SIZE		tSize;
}SIZE1;

typedef struct tagNode
{
	char		chNode;
	int			iNode;
	float		fNode;
	double		dNode;

	tagNode*	pNode;

	//// 자기 자신이 멤버로 있을 경우 크기를 계산할 수 없는 문제가 발생한다!
	//// -> 구조체 멤버로 구조체가 있을 경우의 크기 계산 방법!!!!!!
	//tagNode	tNode;

	//// 자기 자신을 포함 시키기 위해서는 typedef으로 재정의된 이름을 사용할 수 없다!
	//// -> 본연의 이름을 사용해야 한다!
	//NODE	tNode;		// 불가능
}NODE;

void main()
{
	//// 구조체의 크기
	//// 구조체의 크기를 구하기 위해서는 규칙이 있다!
	//// ##1. 크기를 구할 구조체를 모두 펼친다.
	//// ##2. 멤버 변수 중 가장 크기가 큰 변수를 기준으로 정한다!
	//// ##3. 기준만큼 메모리를 할당한다.
	//// ##4. 구조체 선언 순서대로 할당한 공간을 채워 넣는다.
	//// ##5. 메모리 공간이 부족할 경우 기준만큼 추가로 할당을 한다.
	//// ##6. 반복해서 채워 넣는다.

	//// 할당한 메모리 공간에 구조체 멤버 변수를 채워 넣다보면 빈 공간이 생기게 된다.
	//// 이를 byte padding이라고 말한다.
	//// 바이트 패딩은 더 이상 사용하지 않는 메모리 공간이 된다.

	//cout << sizeof(SIZE) << endl;		// 24


	//// 구조체 멤버로 구조체가 있을 경우의 크기
	//// ##1. 구조체를 모두 펼친다!
	//// ##2. 멤버 구조체 또한 펼친다.
	//// ##3. 모든 멤버를 확인하여 가장 크기가 큰 변수를 기준으로 정한다.
	//// ##4. 기준만큼 각 구조체의 크기를 계산한다.
	//// ##5. 각 구조체의 크기를 합산한 결과가 최종 크기가 된다.
	//cout << sizeof(SIZE1) << endl;		// 40


	// 구조체 멤버로 자기 자신을 가지는 방법

}