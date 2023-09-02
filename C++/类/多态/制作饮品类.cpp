//#include <iostream>
//using namespace std;
//class yinPin
//{
//public:
//	virtual void zhuShui() = 0;
//	virtual void chongPao() = 0;
//	virtual void daoShui() = 0;
//	virtual void jiaLiao() = 0;
//	void zhiZuo()
//	{
//		zhuShui();
//		chongPao();
//		daoShui();
//		jiaLiao();
//	}
//};
//class makeCoffee :public yinPin
//{
//public:
//	virtual void zhuShui()
//	{
//		cout << "煮矿泉水" << endl;
//	}
//	virtual void chongPao()
//	{
//		cout << "冲泡咖啡" << endl;
//	}
//	virtual void daoShui()
//	{
//		cout << "倒出咖啡" << endl;
//	}
//	virtual void jiaLiao()
//	{
//		cout << "加入糖和牛奶" << endl;
//	}
//};
//class makeTea :public yinPin
//{
//public:
//	virtual void zhuShui()
//	{
//		cout << "煮纯净水" << endl;
//	}
//	virtual void chongPao()
//	{
//		cout << "冲泡茶叶" << endl;
//	}
//	virtual void daoShui()
//	{
//		cout << "倒出茶水" << endl;
//	}
//	virtual void jiaLiao()
//	{
//		cout << "加入枸杞" << endl;
//	}
//};
//void doWork(yinPin* yp) //yinPin* yp = new makeCoffee 基类指针指向派生类对象
//{
//	yp->zhiZuo();
//	delete yp;
//}
//void test01()
//{
//	//制作咖啡
//	doWork(new makeCoffee);
//	cout << "-------------" << endl;
//	//制作茶水
//	doWork(new makeTea);
//}
//int main()
//{
//	test01();
//	return 0;
//}