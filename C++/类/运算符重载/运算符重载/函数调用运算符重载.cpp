#include <iostream>
#include <string>
using namespace std;
class myPrint
{
public:
	//�������������
	void operator()(string test)
	{
		cout << test << endl;
	}
};
class myAdd
{
public:
	int operator()(int a,int b)
	{
		return a + b;
	}
};
void test01()
{
	myPrint print;
	print("hello world");
}
void test02()
{
	myAdd add;
	int sum = add(100, 20);
	cout << sum << endl;
	//�����������
	cout << myAdd()(100, 200) << endl;
}
int main()
{
	test01();
	test02();
	return 0;
}