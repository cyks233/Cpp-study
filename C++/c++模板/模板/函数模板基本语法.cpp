//#include <iostream>
//using namespace std;
//void swapInt(int &a,int &b)
//{
//	int t = a;
//	a = b;
//	b = t;
//}
//void swapDouble(double &a,double &b)
//{
//	double t = a;
//	a = b;
//	b = t;
//}
//void test01()
//{
//	int a = 10;
//	int b = 20;
//	swapInt(a, b);
//	cout << "a = " << a << " b = " << b << endl;
//	double c = 5.523;
//	double d = 7.523;
//	swapDouble(c,d);
//	cout << "c = " << c << " d = " << d << endl;
//}
////函数模板
//template<typename T>
//void mySwap(T& a, T& b)
//{
//	T t = a;
//	a = b;
//	b = t;
//}
//void test02()
//{
//	int a = 10;
//	int b = 20;
//
//	//1.自动类型推导
//	//mySwap(a, b);
//
//	//2.显示指定类型
//	mySwap<int>(a, b);
//	cout << "a = " << a << " b = " << b << endl;
//	
//	
//}
//int main()
//{
//	test02();
//	return 0;
//}