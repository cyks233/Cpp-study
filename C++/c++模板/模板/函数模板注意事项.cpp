#include <iostream>
using namespace std;
template<class T>//typename�����滻��class
//1.�Զ������Ƶ��������Ƶ���һ�µ��������� T ���ſ���ʹ��
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
//2.ģ�����Ҫȷ���� T ���������ͣ��ſ���ʹ��
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