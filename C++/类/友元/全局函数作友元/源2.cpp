#include <iostream>
#include <string>
using namespace std;
class building;
class goodFriend
{
public:
	goodFriend();
	building* house;

	void visit();//��visit�������Է���building��˽�г�Ա
	void visit2();//��visit���������Է���building��˽�г�Ա
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
	mLivingroom = "����";
	mBedroom = "����";
}
goodFriend::goodFriend()
{
	house = new building;
}
void goodFriend::visit()
{
	cout << "visit��Ա�������ڷ��ʣ�" << house->mLivingroom << endl;
	cout << "visit��Ա�������ڷ��ʣ�" << house->mBedroom<< endl;
}
void goodFriend::visit2()
{
	cout << "visit2��Ա�������ڷ��ʣ�" << house->mLivingroom << endl;
	//cout << "visit��Ա�������ڷ��ʣ�" << house->mBedroom << endl;
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