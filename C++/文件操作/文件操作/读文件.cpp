//#include <iostream>
//#include <fstream>
//#include <string>
//using namespace std;
//void test01()
//{
//	ifstream ifs;
//	ifs.open("data.txt", ios::in);
//	if (!ifs.is_open())
//	{
//		cout << "文件打开失败" << endl;
//		return;
//	}
//	//first
//	char buffer1[1024] = { 0 };
//	while (ifs >> buffer1)
//	{
//		cout << buffer1 << endl;
//	}
//	//second
//	char buffer2[1024] = { 0 };
//	while (ifs.getline(buffer2, sizeof(buffer2)))
//	{
//		cout << buffer2 << endl;
//	}
//	//third
//	string buffer3;
//	while (getline(ifs, buffer3))
//	{
//		cout << buffer3 << endl;
//	}
//	//fourth
//	char c;
//	while ((c = ifs.get()) != EOF)
//	{
//		cout << c;
//	}
//	ifs.close();
//}
//int main()
//{
//	test01();
//	return 0;
//}