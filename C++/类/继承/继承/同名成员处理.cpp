//#include <iostream>
//using namespace std;
//class base
//{
//public:
//	base()
//	{
//		mA = 100;
//	}
//	void func()
//	{
//		cout << " base - func()  " << endl;
//	}
//	void func(int a)
//	{
//		cout << " base - func(int a)  " << endl;
//	}
//	int mA;
//};
//class son :public base
//{
//public:
//	son()
//	{
//		mA = 200;
//	}
//	void func()
//	{
//		cout << " son - func()  " << endl;
//	}
//	int mA = 200;
//};
////��Ա���Դ���ʽ
//void test01()
//{
//	son s;
//	cout << "son's mA = " << s.mA << endl;
//	cout << "base's mA = " << s.base::mA << endl;
//}
////��Ա��������ʽ
//void test02()
//{
//	son s;
//	s.func();
//	s.base::func();
//	//����������г��ֺͻ���ͬ���ĳ�Ա������
//	//�����ͬ����Ա�����ص�����������ͬ����Ա����
//	//s.func(100);
//	s.base::func(100);
//}
//int main()
//{
//	test02();
//	return 0;
//}