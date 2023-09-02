//#include <iostream>
//using namespace std;
////加号运算符重载
//class person
//{
//public:
//	int mA;
//	int mB;
//	//1.成员函数重载+号
//	//person operator+(person& p)
//	//{
//	//	person temp;
//	//	temp.mA = this->mA + p.mA;
//	//	temp.mB = this->mB + p.mB;
//	//	return temp;
//	//}
//	
//};
////2.全局函数重载+号
//person operator+(person& p1, person& p2)
//{
//	person temp;
//	temp.mA = p1.mA + p2.mA;
//	temp.mB = p1.mB + p2.mB;
//	return temp;
//}
////运算符重载也可以发生函数重载
//person operator+(person& p1, int num)
//{
//	person temp;
//	temp.mA = p1.mA + num;
//	temp.mB = p1.mB + num;
//	return temp;
//}
//void test01()
//{
//	person p1,p2;
//	p1.mA = 10;
//	p1.mB = 10;
//	p2.mA = 10;
//	p2.mB = 10;
//	//成员函数本质调用
//	//person p3 = p1.operator+(p2);
//	//全局函数本质调用
//	//person p3 = operator+(p1, p2);
//	person p3 = p1 + p2;
//	person p4 = p1 + 100;
//	cout << "p3's mA = " << p3.mA << endl;
//	cout << "p3's mB = " << p3.mB << endl << endl;
//	
//	cout << "p4's mA = " << p4.mA << endl;
//	cout << "p4's mB = " << p4.mB << endl;
//}
//
//int main()
//{
//	test01();
//	return 0;
//}