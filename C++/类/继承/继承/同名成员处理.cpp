//#include <iostream>
//using namespace std;
//class base
//{
//public:
//	base()
//	{
//		mA = 100;
//	}
//	void func()
//	{
//		cout << " base - func()  " << endl;
//	}
//	void func(int a)
//	{
//		cout << " base - func(int a)  " << endl;
//	}
//	int mA;
//};
//class son :public base
//{
//public:
//	son()
//	{
//		mA = 200;
//	}
//	void func()
//	{
//		cout << " son - func()  " << endl;
//	}
//	int mA = 200;
//};
////成员属性处理方式
//void test01()
//{
//	son s;
//	cout << "son's mA = " << s.mA << endl;
//	cout << "base's mA = " << s.base::mA << endl;
//}
////成员函数处理方式
//void test02()
//{
//	son s;
//	s.func();
//	s.base::func();
//	//如果派生类中出现和基类同名的成员函数，
//	//基类的同名成员会隐藏掉基类中所有同名成员函数
//	//s.func(100);
//	s.base::func(100);
//}
//int main()
//{
//	test02();
//	return 0;
//}