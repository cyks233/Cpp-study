#include <iostream>
using namespace std;
class person
{
public:
	int mAge;
	void showClassName()
	{
		cout << "this is person class" << endl;
	}
	void showPersonAge()
	{
		//������δ����ֹ�����ָ�뵼�³���
		if (this == NULL)
		{
			return;
		}
		//cout<<"age = "<<this->mAge<<endl; 
		//mAgeǰ��Ĭ�ϼ�����thisָ�룬���Ǵ����ָ��Ϊ��
		cout << "age = " << mAge << endl;
	}
};
void test1()
{
	person* p = NULL;
	p->showClassName();
	p->showPersonAge();
}
int main()
{
	test1();
	return 0;
}