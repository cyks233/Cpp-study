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
//	//���ظ�ֵ�����
//	person& operator=(person& p)
//	{
//		//�ж��Ƿ��������ڶ���������о����ͷŸɾ�
//		if (mAge != NULL)
//		{
//			delete mAge;
//			mAge = NULL;
//		}
//		//���
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