#include <iostream>
using namespace std;
class person
{
public:
	int mA;
	mutable int mB;//特殊变量，即使在常函数中，也可以修改这个值
	void showPerson()
	{
		mA = 100;
	}
	void test3()
	{
	}
	//const person* const this
	//在成员函数后面加const，修饰的是this指针，让指针指向的值也不能修改
	void showPersonConst() const
	{
		//this指针的本质是 指针常量 指针的指向是不可以修改的
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
	p.mB = 100;//特殊值，在常对象下也可以修改
	//p.mA = 100;
	//常对象 只能调用 常成员函数
	p.showPersonConst();
	//p.test3();//常对象 不可以调用 普通成员函数，因为 普通成员函数 可以 修改属性
}

int main()
{
	
	return 0;
}