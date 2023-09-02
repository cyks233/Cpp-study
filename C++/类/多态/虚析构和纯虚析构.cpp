//#include <iostream>
//#include <string>
//using namespace std;
//class animal
//{
//public:
//	animal()
//	{
//		cout << " animal() " << endl;
//	}
//	virtual void speak() = 0;
//	//virtual ~animal()
//	//{
//	//	cout << " ~animal() " << endl;
//	//}
//	virtual ~animal() = 0;
//};
//animal::~animal()
//{
//	cout << " virtual ~animal() = 0" << endl;
//}
//class cat :public animal
//{
//public:
//	string* cName;
//	cat(string name)
//	{
//		cout << " cat() " << endl;;
//		cName = new string(name);
//	}
//	virtual void speak()
//	{
//		cout <<*cName<< " cat speak" << endl;
//	}
//	~cat()
//	{
//		if (cName != NULL)
//		{
//			cout << " ~cat() " << endl;
//			delete cName;
//			cName = NULL;
//		}
//	}
//};
//void test01()
//{
//	animal* a = new cat("tom");
//	a->speak();
//	/*基类指针在析构的时候，不会调用派生类中的析构函数
//	导致派生类如果有堆区属性，会出现内存泄露*/
//	delete a;
//}
//int main()
//{
//	test01();
//	return 0;
//}