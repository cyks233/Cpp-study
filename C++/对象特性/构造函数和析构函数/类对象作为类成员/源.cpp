#include <iostream>
using namespace std;
class person
{
public:
	int age;
	person(int age)
	{
		this->age = age;
	}
	person& personAddAge(person& p)
	{
		this->age += p.age;
		return *this;
	}
};
void test1()
{
	person p1(18);
	cout << "p1's age = " << p1.age << endl;
}
void test2()
{
	person p1(10);
	person p2(10);
	p2.personAddAge(p1).personAddAge(p1).personAddAge(p1).personAddAge(p1);
	cout << "p2's age = " << p2.age << endl;
}
int main()
{
	test1();
	test2();
	return 0;
}