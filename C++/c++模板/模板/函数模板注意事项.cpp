#include <iostream>
using namespace std;
template<class T>//typename可以替换成class
//1.自动类型推导，必须推导出一致的数据类型 T ，才可以使用
void mySwap(T& a, T& b)
{
	T t = a;
	a = b;
	b = t;
}
void test01()
{
	int a = 10;
	int b = 20;
	mySwap(a, b);
	cout <<"a=" << a<<",b=" << b << endl;
	char c;
	mySwap(a, c);  

}
//2.模板必须要确定出 T 的数据类型，才可以使用
template<class T>
void func()
{
	cout << "func()" << endl;
}

//void test02()
//{
//	func();
//}


int main()
{
	test01();
	return 0;
}