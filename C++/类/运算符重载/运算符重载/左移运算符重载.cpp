//#include <iostream>
//using namespace std;
//class person
//{
//	friend ostream& operator<<(ostream& cout, person& p);//通过友元的方法访问私有成员函数
//private:
//	int mA;
//	int mB;
//public:
//	person(int a,int b)
//	{
//		mA = a;
//		mB = b;
//	}
//};
////只能用全局函数重载 <<运算符
//ostream& operator<<(ostream& cout, person& p)
//{
//	cout << "mA = " << p.mA << ",mB = " << p.mB;
//	return cout;
//}
//void test01()
//{
//	person p(10,20);
//	cout << p << " hello world" << endl;
//}
//int main()
//{
//	test01();
//	return 0;
//}