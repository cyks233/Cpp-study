#include <iostream>
using namespace std;
class person
{
public:
	int mA;
	mutable int mB;//�����������ʹ�ڳ������У�Ҳ�����޸����ֵ
	void showPerson()
	{
		mA = 100;
	}
	void test3()
	{
	}
	//const person* const this
	//�ڳ�Ա���������const�����ε���thisָ�룬��ָ��ָ���ֵҲ�����޸�
	void showPersonConst() const
	{
		//thisָ��ı����� ָ�볣�� ָ���ָ���ǲ������޸ĵ�
		//this->mA = 100;
		//this = NULL;
		this->mB = 100;
	}
};
void test1()
{
	person p;
	p.showPersonConst();
}
void test2()
{
	const person p;
	p.mB = 100;//����ֵ���ڳ�������Ҳ�����޸�
	//p.mA = 100;
	//������ ֻ�ܵ��� ����Ա����
	p.showPersonConst();
	//p.test3();//������ �����Ե��� ��ͨ��Ա��������Ϊ ��ͨ��Ա���� ���� �޸�����
}

int main()
{
	
	return 0;
}