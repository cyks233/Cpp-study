#include <iostream>
using namespace std;
class animal
{
public:
	int mAge;
};
//������̳� ������μ̳е����� �ؼ��� virtual
class sheep :virtual public animal{};
class tuo :virtual public animal{};
class sheepTuo :public sheep, public tuo{};
void test01()
{
	sheepTuo st;
	st.sheep::mAge = 18;
	st.tuo::mAge = 20;
	//�����μ̳�ʱ����������ӵ����ͬ�����ݣ���Ҫ��������������
	cout << "st.sheep::mAge = " << st.sheep::mAge << endl;
	cout << "st.tuo::mAge = " << st.tuo::mAge << endl;
	//�������ֻҪһ�ݾ͹��ˣ����μ̳е������������ݣ������Դ�˷�
	cout << "st.mAge = " << st.mAge << endl;
}
int main()
{
	test01();
	return 0;
}