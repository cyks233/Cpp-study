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
//	/*����ָ����������ʱ�򣬲�������������е���������
//	��������������ж������ԣ�������ڴ�й¶*/
//	delete a;
//}
//int main()
//{
//	test01();
//	return 0;
//}