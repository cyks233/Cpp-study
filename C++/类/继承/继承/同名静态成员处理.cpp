//#include <iostream>
//using namespace std;
////继承中的同名静态成员处理方式
//class base
//{
//public:
//	static int mA;
//	static void func()
//	{
//		cout << "base - static func()" << endl;
//	}
//	static void func(int a)
//	{
//		cout << "base - static func(int a)" << endl;
//	}
//};
//int base::mA = 100;
//class son :public base
//{
//public:
//	static int mA;
//	static void func()
//	{
//		cout << "son - static func()" << endl;
//	}
//};
//int son::mA = 200;
////同名静态成员属性
//void test01()
//{
//	son s;
//	cout << "通过对象访问" << endl;
//	cout << "son's mA = " << s.mA << endl;
//	cout << "base's mA = " << s.base::mA << endl;
//	cout << "通过类名访问" << endl;
//	cout << "son's mA = " << son::mA << endl;
//	cout << "base's mA = " << base::mA << endl;
//	//第一个::代表使用类名的方式访问，第二个::代表访问基类的作用域下
//	cout << "base's mA = " << son::base::mA << endl;
//}
////同名静态成员函数
//void test02()
//{
//	son s;
//	cout << "通过对象访问" << endl;
//	s.func();
//	s.base::func();
//	cout << "通过类名访问" << endl;
//	son::func();
//	base::func();
//	son::base::func();
//	son::base::func(10);
//}
//int main()
//{
//	//test01();
//	test02();
//	return 0;
//}