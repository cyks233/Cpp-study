//#include <iostream>
//using namespace std;
//class base
//{//抽象类
//public:
//	//纯虚函数
//	virtual void func() = 0;
//};
//class son :public base
//{
//public:
//	void func() 
//	{
//		cout << "func函数调用" << endl;
//	};
//};
//void test01()
//{
//	/*base b; 无法实例化对象
//	new base; 无法实例化对象*/
//	//son s;  派生类必须重写抽象类中的纯虚函数，否则也属于抽象类
//	base* b = new son;
//	b->func();
//}
//int main()
//{
//	test01();
//	return 0;
//}