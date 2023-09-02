#include <iostream>
#include <string>
using namespace std;
class building;
class goodFriend
{
public:
	goodFriend();
	building* house;

	void visit();//让visit函数可以访问building的私有成员
	void visit2();//让visit函数不可以访问building的私有成员
};
class building
{
	friend void goodFriend::visit();
	string mBedroom;
public:
	string mLivingroom;
	building();
	
};

building::building()
{
	mLivingroom = "客厅";
	mBedroom = "卧室";
}
goodFriend::goodFriend()
{
	house = new building;
}
void goodFriend::visit()
{
	cout << "visit成员函数正在访问：" << house->mLivingroom << endl;
	cout << "visit成员函数正在访问：" << house->mBedroom<< endl;
}
void goodFriend::visit2()
{
	cout << "visit2成员函数正在访问：" << house->mLivingroom << endl;
	//cout << "visit成员函数正在访问：" << house->mBedroom << endl;
}
void test01()
{
	goodFriend gf;
	gf.visit();
	gf.visit2();
}
int main()
{
	test01();
	return 0;
}