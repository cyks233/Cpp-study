#include <iostream>
using namespace std;
class person
{
public:
	int a, b, c;
	//��ͳ�ĸ���ֵ��ʽ
	/*person(int aa, int bb, int cc)
	{
		a = aa;
		b = bb;
		c = cc;
	}*/
	//�ó�ʼ���б�ķ�ʽ
	person(int aa, int bb, int cc):a(aa),b(bb),c(cc) {}
};
int main()
{
	person p(90, 20, 30);
	cout << p.a << ' ' << p.b << ' ' << p.c << endl;
}