#include <iostream>
using namespace std;
class person
{
public:
	int a, b, c;
	//传统的赋初值方式
	/*person(int aa, int bb, int cc)
	{
		a = aa;
		b = bb;
		c = cc;
	}*/
	//用初始化列表的方式
	person(int aa, int bb, int cc):a(aa),b(bb),c(cc) {}
};
int main()
{
	person p(90, 20, 30);
	cout << p.a << ' ' << p.b << ' ' << p.c << endl;
}