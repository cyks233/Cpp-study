//#include <iostream>
//using namespace std;
//class person
//{
//public:
//	person()
//	{
//		cout << "Ĭ�Ϲ��캯������" << endl;
//	}
//	person(int age)
//	{
//		mAge = age;
//		cout << "�вι��캯������" << endl;
//	}
//	person(const person &p)
//	{
//		mAge = p.mAge;
//		cout << "�������캯������" << endl;
//	}
//	~person()
//	{
//		cout << "������������" << endl;
//	}
//	int mAge;
//};
////1. ʹ��һ���Ѿ�������ϵĶ�������ʼ��һ���µĶ���
//void test1()
//{
//	person p2(20);
//	person p3(p2);
//	cout << "p3��������" << p3.mAge << endl;
//}
////2. ֵ���ݵķ�ʽ������������ֵ
//void dowork(person p)
//{
//
//}
//void test2()
//{
//	person p;
//	dowork(p);
//}
////3. ��ֵ��ʽ���ؾֲ�����
//person dowork2()
//{
//	person p1;
//	return p1;
//}
//void test3()
//{
//	person p = dowork2();
//}
//
//int main()
//{
//	test1();
//	test2();
//	test3();
//	system("pause");
//	return 0;
//}