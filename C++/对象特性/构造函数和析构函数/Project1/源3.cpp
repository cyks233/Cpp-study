#include <iostream>
using namespace std;
class person
{
public:
	person()
	{
		cout << "person��Ĭ�Ϲ��캯������" << endl;
	}
	person(int age)
	{
		mAge = age;
		cout << "person���вι��캯��" << endl;
	}
	~person()
	{
		cout << "person��Ĭ��������������" << endl;
	}
	int mAge;
};
void test01()
{
	person p1(18);
	cout << "p1�������ǣ�" << p1.mAge << endl;
}
int main()
{
	test01();
	system("pause");
	return 0;
}