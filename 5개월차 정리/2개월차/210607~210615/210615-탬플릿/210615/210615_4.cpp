#include "stdafx.h"

template <typename T>
class CObj
{
public:
	CObj() {}
	~CObj() {}

protected:
	T		m_A;
};

// � �ڷ����� ����ϴ� CObj�� ��ӹ����� �� �� ���� ������ ������ �߻��Ѵ�.
//class CPlayer : public CObj

//// <T>�� ���ø����� ����ϴ� type�� �̸��̴�!! ��� �˷��־�� �Ѵ�.
//class CPlayer : public CObj<T>


// �θ� Ŭ������ template���� ��������� ���
// �ڽ� Ŭ���� ���� template���� ������ �ϰ�,
// �θ� Ŭ������ � Ÿ���� ����ϴ� Ŭ���������� �˷��־�� �Ѵ�.
template <typename T>
class CPlayer : public CObj<T>
{

};

void main()
{
	// ���ø��� ���
}