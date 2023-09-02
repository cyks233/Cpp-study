//#include <iostream>
//using namespace std;
//class base
//{
//public:
//	int mA;
//protected:
//	int mB;
//private:
//	int mC;
//};
//class son :public base
//{
//public:
//	int mD;
//};
//void test01()
//{
//	//基类中所有非静态成员属性都会被派生类继承下去
//	//基类中私有成员属性是被编译器隐藏了，所以访问不到，但确实被继承下去了
//	cout << "size of son = " << sizeof(son) << endl;
//}
//int main()
//{
//	test01();
//	return 0;
//}