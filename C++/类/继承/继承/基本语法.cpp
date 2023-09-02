//#include <iostream>
//using namespace std;
////继承
//class basePage
//{
//public:
//	void header()
//	{
//		cout << "首页，公开课，登录，注册...（公共页面）" << endl;
//	}
//	void footer()
//	{
//		cout << "帮助中心，交流合作，站内地图...（公共底部）" << endl;
//	}
//	void left()
//	{
//		cout << "Java，Python，C++...（公共分类列表）" << endl;
//	}
//};
//class Java :public basePage
//{
//public:
//	void content()
//	{
//		cout << "java学科视频" << endl;
//	}
//};
//class Cpp :public basePage
//{
//public:
//	void content()
//	{
//		cout << "c++学科视频" << endl;
//	}
//};
//void test01()
//{
//	Java ja;
//	Cpp cpp;
//	ja.header();
//	ja.footer();
//	ja.left();
//	ja.content();
//	cout << "-------------------" << endl;
//	cpp.header();
//	cpp.footer();
//	cpp.left();
//	cpp.content();
//}
//int main()
//{
//	test01();
//	return 0;
//}