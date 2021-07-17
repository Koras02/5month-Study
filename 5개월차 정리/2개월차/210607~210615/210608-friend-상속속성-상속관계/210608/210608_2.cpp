#include "stdafx.h"

class CObj
{
public:
	void Public_Func() {}

protected:
	void Protected_Func() {}

private:
	void Private_Func() {}

private:
	int		m_iAtt;
	int		m_iHp;
};

// :(�ݷ�) : �θ� Ŭ������ ����ϰڴ�!
// -> �ڽ� Ŭ���� : �θ� Ŭ����

// CPlayer Ŭ������ CObjŬ������ �θ� Ŭ������ �����Ѵ�.
// CObj Ŭ������ ������ �ִ� ��� ��� ������ ��� �Լ���
// �ڽ� Ŭ������ �����ϴ� ���·� �����ش�.
class CPlayer : public CObj
{
public:
	void Func()
	{
		Public_Func();
		Protected_Func();
		Private_Func();
	}


private:
	int		m_iLevel;
};

class CMonster
{
private:
	int		m_iGold;
};

void main()
{
	// ����̶�?
	// �� ������ ����� �θ� �������� �ڽĿ��� �����ִ� ���� �ǹ��Ѵ�.

	// ���α׷��ֿ����� ���
	// ���� ���ǵ� Ŭ������ ������ �ִ� ��� ������ ��� �Լ��� 
	// �������� �ʿ���ϴ� Ŭ�������� ������ �� �ִ�.

	// �� �� �����ִ� Ŭ������ �θ� Ŭ����, ���� Ŭ����, ���̽� Ŭ���� ���
	// �����޴� Ŭ������ �ڽ� Ŭ����, ���� Ŭ���� ���

	// Ŭ�������� �����͸� ������� ������ ������ ���� �ִ� Ŭ������ ������ �Ѵ�!!!

	// protected
	// ���� Ȥ�� ��� ���迡���� ������ ����ϰڴ�!


	CPlayer		player;
	player.Public_Func();
	player.Protected_Func();
	player.Private_Func();


	/*
				|	public ���	|	protected	|	private
	============|===============|===============|=============
	public ���	|	public		|	protected	|	private
	------------|---------------|---------------|-------------
	protected	|	protected	|	protected	|	private
	------------|---------------|---------------|-------------
	private		|	���� �Ұ�		|	���� �Ұ�		|	���� �Ұ�
	----------------------------------------------------------
	*/
}