//#include <iostream>
//using namespace std;
//class animal
//{
//public:
//	//虚函数
//	virtual void speak()
//	{
//		cout << "动物在说话" << endl;
//	}
//};
//class catM :public animal
//{
//	//重写 函数返回值类型 函数名 参数列表 完全相同
//	void speak()
//	{
//		cout << "小猫在说话" << endl;
//	}
//};
//class dog :public animal
//{
//	void speak()
//	{
//		cout << "小狗在说话" << endl;
//	}
//};
////地址早绑定 在编译阶段确定函数地址
//void doSpeak(animal& a)
//{
//	a.speak();
//}
//void test01()
//{
//	catM c;
//	doSpeak(c);
//	dog d;
//	doSpeak(d);
//}
//int main()
//{
//	test01();
//	return 0;
//}