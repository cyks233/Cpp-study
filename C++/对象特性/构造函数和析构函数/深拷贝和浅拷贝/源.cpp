#include <iostream>
using namespace std;
class person
{
public:
	person()
	{
		cout << "person的无参构造函数调用" << endl;
	}
	person(int age,int height)
	{
		mAge = age;
		mHeight = new int(height);
		cout << "person的有参构造函数调用" << endl;
	}
	person(const person &p)
	{
		mAge = p.mAge;
		mHeight = new int(*p.mHeight);//深拷贝
		cout << "person的拷贝构造函数调用" << endl;
	}
	~person()
	{
		//将堆区开辟的数据作释放操作
		if (mHeight != NULL)
		{
			delete mHeight;
			mHeight = NULL;
		}
		cout << "person的析构函数调用" << endl;
	}
	int mAge=0;
	int* mHeight=0;
};
int main()
{
	person p1(18, 180);
	cout << "p1的年龄为" << p1.mAge << " 身高为" << *p1.mHeight << endl;
	person p2(p1);
	cout << "p2的年龄为" << p2.mAge << " 身高为" << *p2.mHeight << endl;//编译器提供的拷贝构造函数进行了浅拷贝
	return 0;
}