#include <iostream>
using namespace std;
//class date
//{
//private:
//	int month;
//	int year;
//	int day;
//public:
//	//void setBirth(int yy,int mm,int dd);
//}d;
//date::setBirth(int yy, int mm, int dd)
//{
//
//}
class clerk
{
private:
	int cId;
	char cName;
	char cSex;
	char cMonSalary;
	//date cBirthday;
public:
	clerk(char id,char name,char sex,char monSalary);				//���캯��
	clerk(clerk& c);			//�������캯��
	~clerk();					//��������
	void setInfo(char, char, char, char);
	void showInfo();
};
clerk::clerk(char id, char name, char sex, char monSalary)
{
	cId = id;
	cName = name;
	cSex = sex;
	cMonSalary = monSalary;
	cout << cId << "  ���캯��������" << endl;
}
clerk::clerk(clerk& c)
{
	cId = c.cId;
	cName = c.cName;
	cSex = c.cSex;
	cMonSalary = c.cMonSalary;
	cout << cId << "  �������캯��������" << endl;
}
clerk::~clerk()
{
	cout << cId << "  ��������������" << endl;
}
void clerk::setInfo(char id, char name, char sex, char monSalary)
{
	cId = id;
	cName = name;
	cSex = sex;
	cMonSalary = monSalary;
}
void clerk::showInfo()
{
	cout <<"Input information: " << cId << '-' << cName << '-' << cSex << '-' << cMonSalary << endl;
}
int main()
{
	clerk c1("001", "limei", "girl", "8000");
	return 0;
}