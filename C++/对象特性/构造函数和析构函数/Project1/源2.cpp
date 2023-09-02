//#include <iostream>
//using namespace std;
//class person
//{
//public:
//	person()
//	{
//		cout << "默认构造函数调用" << endl;
//	}
//	person(int age)
//	{
//		mAge = age;
//		cout << "有参构造函数调用" << endl;
//	}
//	person(const person &p)
//	{
//		mAge = p.mAge;
//		cout << "拷贝构造函数调用" << endl;
//	}
//	~person()
//	{
//		cout << "析构函数调用" << endl;
//	}
//	int mAge;
//};
////1. 使用一个已经创建完毕的对象来初始化一个新的对象
//void test1()
//{
//	person p2(20);
//	person p3(p2);
//	cout << "p3的年龄是" << p3.mAge << endl;
//}
////2. 值传递的方式给函数参数传值
//void dowork(person p)
//{
//
//}
//void test2()
//{
//	person p;
//	dowork(p);
//}
////3. 以值方式返回局部对象
//person dowork2()
//{
//	person p1;
//	return p1;
//}
//void test3()
//{
//	person p = dowork2();
//}
//
//int main()
//{
//	test1();
//	test2();
//	test3();
//	system("pause");
//	return 0;
//}