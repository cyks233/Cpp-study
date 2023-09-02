#include <iostream>
using namespace std;
class person
{
public:
	person()
	{
		cout << "person的默认构造函数调用" << endl;
	}
	person(int age)
	{
		mAge = age;
		cout << "person的有参构造函数" << endl;
	}
	~person()
	{
		cout << "person的默认析构函数调用" << endl;
	}
	int mAge;
};
void test01()
{
	person p1(18);
	cout << "p1的年龄是：" << p1.mAge << endl;
}
int main()
{
	test01();
	system("pause");
	return 0;
}