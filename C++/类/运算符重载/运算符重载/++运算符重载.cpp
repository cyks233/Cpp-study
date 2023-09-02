//#include <iostream>
//using namespace std;
//class myInteger
//{
//	friend ostream& operator<<(ostream& cout, myInteger myInt);
//private:
//	int mNum;
//public:
//	myInteger()
//	{
//		mNum = 0;
//	}
//	//前置++运算符重载
//	myInteger& operator++()
//	{
//		//先++运算
//		mNum++;
//		//再返回自身
//		return *this;
//	}
//	//后置++运算符重载
//	myInteger operator++(int)
//	{
//		myInteger temp;
//		temp = *this;
//		mNum++;
//		return temp;
//	}
//	//前置--运算符重载
//	myInteger& operator--()
//	{
//		mNum--;
//		return *this;
//	}
//	//后置--运算符重载
//	myInteger operator--(int)
//	{
//		myInteger temp;
//		temp = *this;
//		mNum--;
//		return temp;
//	}
//};
//ostream& operator<<(ostream& cout, myInteger myInt)
//{
//	cout << myInt.mNum;
//	return cout;
//}
//void test01()
//{
//	myInteger myInt;
//	cout << ++(++myInt) << endl;
//	cout << myInt << endl;
//}
//void test02()
//{
//	myInteger myInt;
//	cout << myInt++ << endl;
//	cout << myInt << endl;
//}
//void test03()
//{
//	myInteger myInt;
//	cout << --myInt << endl;
//	cout << myInt << endl;
//}
//void test04()
//{
//	myInteger myInt;
//	cout << myInt-- << endl;
//	cout << myInt << endl;
//}
//int main()
//{
//	test01();
//	test02();
//	test03();
//	test04();
//	return 0;
//}