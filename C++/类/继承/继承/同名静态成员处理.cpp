//#include <iostream>
//using namespace std;
////�̳��е�ͬ����̬��Ա����ʽ
//class base
//{
//public:
//	static int mA;
//	static void func()
//	{
//		cout << "base - static func()" << endl;
//	}
//	static void func(int a)
//	{
//		cout << "base - static func(int a)" << endl;
//	}
//};
//int base::mA = 100;
//class son :public base
//{
//public:
//	static int mA;
//	static void func()
//	{
//		cout << "son - static func()" << endl;
//	}
//};
//int son::mA = 200;
////ͬ����̬��Ա����
//void test01()
//{
//	son s;
//	cout << "ͨ���������" << endl;
//	cout << "son's mA = " << s.mA << endl;
//	cout << "base's mA = " << s.base::mA << endl;
//	cout << "ͨ����������" << endl;
//	cout << "son's mA = " << son::mA << endl;
//	cout << "base's mA = " << base::mA << endl;
//	//��һ��::����ʹ�������ķ�ʽ���ʣ��ڶ���::������ʻ������������
//	cout << "base's mA = " << son::base::mA << endl;
//}
////ͬ����̬��Ա����
//void test02()
//{
//	son s;
//	cout << "ͨ���������" << endl;
//	s.func();
//	s.base::func();
//	cout << "ͨ����������" << endl;
//	son::func();
//	base::func();
//	son::base::func();
//	son::base::func(10);
//}
//int main()
//{
//	//test01();
//	test02();
//	return 0;
//}