//#include <iostream>
//using namespace std;
//class base1
//{
//public:
//	int mA;
//	base1()
//	{
//		mA = 100;
//	}
//};
//class base2
//{
//public:
//	int mA;
//	base2()
//	{
//		mA = 200;
//	}
//};
//class son :public base1, public base2
//{
//public:
//	int mC,mD;
//	son()
//	{
//		mC = 300;
//		mD = 400;
//	}
//};
//void test01()
//{
//	son s;
//	cout << "size of son = " << sizeof(son) << endl;
//	cout << "base1::mA = " << s.base1::mA << endl;
//	cout << "base2::mA = " << s.base2::mA << endl;
//}
//int main()
//{
//	test01();
//	return 0;
//}