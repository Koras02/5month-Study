#include <iostream>

using namespace std;

// Ŭ���� ���ø�
template <typename T>
class CObj
{
public:
	CObj() : m_A(0) {}
	CObj(T _a) : m_A(_a) {}
	~CObj() {}

private:
	T		m_A;
};

void main()
{
	// Ŭ������ ���ø�
	// �Լ� ���ø�, ���ø� �Լ��� �⺻ ��� ����� �����ϴ�!
	// -> Ư��ȭ, typename ������ ���� ��

	// ���ø� Ŭ����
	CObj<int>		objInt;
	CObj<float>		objFloat;
}