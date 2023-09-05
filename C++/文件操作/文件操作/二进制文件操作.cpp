#include <iostream>
using namespace std;
#include <fstream>
class person
{
public:
	char mName[64];
	int mAge;
};
void test01()
{
	ofstream ofs("data2.txt", ios::out | ios::binary);
	person p = { "zhangSan",18 };
	ofs.write((const char*)&p, sizeof(person));
	ofs.close();

	ifstream ifs("data2.txt", ios::in | ios::binary);
	if (!ifs.is_open())
	{
		cout << "文件打开失败" << endl;
		return;
	}
	
	ifs.read((char*)&p, sizeof(person));
	cout << "name = " << p.mName << " age = " << p.mAge << endl;
	ifs.close();
}
int main()
{
	test01();
	return 0;
}