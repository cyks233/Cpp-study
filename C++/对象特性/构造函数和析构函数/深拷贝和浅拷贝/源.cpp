#include <iostream>
using namespace std;
class person
{
public:
	person()
	{
		cout << "person���޲ι��캯������" << endl;
	}
	person(int age,int height)
	{
		mAge = age;
		mHeight = new int(height);
		cout << "person���вι��캯������" << endl;
	}
	person(const person &p)
	{
		mAge = p.mAge;
		mHeight = new int(*p.mHeight);//���
		cout << "person�Ŀ������캯������" << endl;
	}
	~person()
	{
		//���������ٵ��������ͷŲ���
		if (mHeight != NULL)
		{
			delete mHeight;
			mHeight = NULL;
		}
		cout << "person��������������" << endl;
	}
	int mAge=0;
	int* mHeight=0;
};
int main()
{
	person p1(18, 180);
	cout << "p1������Ϊ" << p1.mAge << " ���Ϊ" << *p1.mHeight << endl;
	person p2(p1);
	cout << "p2������Ϊ" << p2.mAge << " ���Ϊ" << *p2.mHeight << endl;//�������ṩ�Ŀ������캯��������ǳ����
	return 0;
}