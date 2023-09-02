#include <iostream>
using namespace std;
class animal
{
public:
	int mAge;
};
//利用虚继承 解决菱形继承的问题 关键字 virtual
class sheep :virtual public animal{};
class tuo :virtual public animal{};
class sheepTuo :public sheep, public tuo{};
void test01()
{
	sheepTuo st;
	st.sheep::mAge = 18;
	st.tuo::mAge = 20;
	//当菱形继承时，两个基类拥有相同的数据，需要加作用域以区分
	cout << "st.sheep::mAge = " << st.sheep::mAge << endl;
	cout << "st.tuo::mAge = " << st.tuo::mAge << endl;
	//这份数据只要一份就够了，菱形继承导致数据有两份，造成资源浪费
	cout << "st.mAge = " << st.mAge << endl;
}
int main()
{
	test01();
	return 0;
}