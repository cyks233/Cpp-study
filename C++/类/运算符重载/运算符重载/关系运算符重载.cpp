//#include <iostream>
//#include <string>
//using namespace std;
//class person
//{
//public:
//	string mName;
//	int mAge;
//	person(string name, int age)
//	{
//		mAge = age;
//		mName = name;
//	}
//	//关系运算符重载
//	bool operator==(person& p)
//	{
//		if (this->mName == p.mName && this->mAge == p.mAge)
//		{
//			return true;
//		}
//		return false;
//	}
//	bool operator!=(person& p)
//	{
//		if (this->mName != p.mName || this->mAge != p.mAge)
//		{
//			return true;
//		}
//		return false;
//	}
//};
//void test01()
//{
//	person p1("zhangSan", 18);
//	person p2("zhangSan", 18);
//	if (p1 != p2)
//	{
//		cout << "p1 != p2" << endl;
//	}
//	else
//	{
//		cout << "p1 = p2" << endl;
//	}
//}
//int main()
//{
//	test01();
//	return 0;
//}