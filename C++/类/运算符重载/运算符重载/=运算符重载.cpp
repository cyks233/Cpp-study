//#include <iostream>
//using namespace std;
//class person
//{
//public:
//	person(int age)
//	{
//		mAge = new int(age);
//	}
//	~person()
//	{
//		if (mAge != NULL)
//		{
//			delete mAge;
//			mAge = NULL;
//		}
//	}
//	//重载赋值运算符
//	person& operator=(person& p)
//	{
//		//判断是否有属性在堆区，如果有就先释放干净
//		if (mAge != NULL)
//		{
//			delete mAge;
//			mAge = NULL;
//		}
//		//深拷贝
//		mAge = new int(*p.mAge);
//		return *this;
//	}
//	int* mAge;
//};
//void test01()
//{
//	person p1(18);
//	person p2(20);
//	person p3(23);
//	p3 = p1 = p2;
//	cout << "p1's age = " << *p1.mAge << endl;
//	cout << "p2's age = " << *p2.mAge << endl;
//	cout << "p3's age = " << *p3.mAge << endl;
//}
//int main()
//{
//	test01();
//	return 0;
//}