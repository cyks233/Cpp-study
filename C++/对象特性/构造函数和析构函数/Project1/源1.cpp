//#include <iostream>
//using namespace std;
//class person
//{
//public:
//	person()
//	{
//		cout << "无参构造函数调用" << endl;
//	}
//	person(int a)
//	{
//		cout << "有参构造函数调用" << endl;
//		age = a;
//	}
//	//拷贝构造函数
//	person(const person& p)
//	{
//		cout << "拷贝构造函数调用" << endl;
//	}
//	~person()
//	{
//		cout << "析构函数调用" << endl;
//	}
//	int age;
//};
//void test1()
//{
//	//调用方法
//	//1.括号法
//	person p1;//普通构造函数
//	person p2(10);//有参构造函数
//	person p3(p1);//拷贝构造函数
//	//person p1() 编译器会把它当成函数声明，不能调用普通构造函数
//	//2.显示法
//	person p1;//普通构造函数
//	person p2 = person(10);//有参构造函数
//	person p3 = person(p1);//拷贝构造函数
//	// person(10) 匿名对象 特点：执行完当前行后会被系统立刻回收
//	// 注意：不要利用拷贝对象初始化一个匿名对象
//	// person（p2） 编译器会认为 person（p2） === person p2 导致名称重定义
//	//3.隐式转换法
//	person p4 = 10;//有参构造函数
//	person p5 = p4;//拷贝构造函数
//}
//int main()
//{
//	test1();
//	system("pause");
//	return 0;
//}