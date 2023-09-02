//#include <iostream>
//#include <string>
//using namespace std;
//class calculator
//{
//public:
//	int num1;
//	int num2;
//	//普通实现
//	int getResult(string oper)
//	{
//		if (oper == "+")
//		{
//			return num1 + num2;
//		}
//		else if (oper == "-")
//		{
//			return num1 - num2;
//		}
//		else if (oper == "*")
//		{
//			return num1 * num2;
//		}
//		else if (oper == "/")
//		{
//			return num1 / num2;
//		}
//		//如果想扩展新功能，需要修改源码
//		//开发中 提倡 开闭原则：对扩展进行开发，对修改进行关闭
//	}
//};
//void test01()
//{
//	calculator c;
//	c.num1 = 20;
//	c.num2 = 20;
//	cout << c.num1 << "/" << c.num2 << "=" << c.getResult("/") << endl;
//}
////多态方法实现
////实现计算器的抽象类
//class abstractClaculator
//{
//public:
//	int num1;
//	int num2;
//	virtual int getResult()
//	{
//		return 0;
//	}
//};
////加法计算器类
//class addClaculator :public abstractClaculator
//{
//	int getResult()
//	{
//		return num1 + num2;
//	}
//};
////减法计算器类
//class subClaculator :public abstractClaculator
//{
//	int getResult()
//	{
//		return num1 - num2;
//	}
//};
////乘法计算器类
//class mulClaculator :public abstractClaculator
//{
//	int getResult()
//	{
//		return num1 * num2;
//	}
//};
////除法计算器类
//class divClaculator :public abstractClaculator
//{
//	int getResult()
//	{
//		return num1 / num2;
//	}
//};
//void test02()
//{
//	abstractClaculator* abc = new addClaculator;
//	abc->num1 = 10;
//	abc->num2 = 10;
//	cout << abc->num1 << "+" << abc->num2 << "=" << abc->getResult() << endl;
//	delete abc;
//	abc = new subClaculator;
//	abc->num1 = 10;
//	abc->num2 = 10;
//	cout << abc->num1 << "-" << abc->num2 << "=" << abc->getResult() << endl;
//	delete abc;
//	abc = new mulClaculator;
//	abc->num1 = 10;
//	abc->num2 = 10;
//	cout << abc->num1 << "*" << abc->num2 << "=" << abc->getResult() << endl;
//	delete abc;
//	abc = new divClaculator;
//	abc->num1 = 10;
//	abc->num2 = 10;
//	cout << abc->num1 << "/" << abc->num2 << "=" << abc->getResult() << endl;
//	delete abc;
//}
//int main()
//{
//	test02();
//	return 0;
//}