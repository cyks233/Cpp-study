//#include <iostream>
//using namespace std;
//class person
//{
//	friend ostream& operator<<(ostream& cout, person& p);//ͨ����Ԫ�ķ�������˽�г�Ա����
//private:
//	int mA;
//	int mB;
//public:
//	person(int a,int b)
//	{
//		mA = a;
//		mB = b;
//	}
//};
////ֻ����ȫ�ֺ������� <<�����
//ostream& operator<<(ostream& cout, person& p)
//{
//	cout << "mA = " << p.mA << ",mB = " << p.mB;
//	return cout;
//}
//void test01()
//{
//	person p(10,20);
//	cout << p << " hello world" << endl;
//}
//int main()
//{
//	test01();
//	return 0;
//}