#include <iostream>
using namespace std;
class point
{
private:
	int x, y;
public:
	int setLocation(int, int);
	void printLocation();
};
int point::setLocation(int xx,int yy)
{
	x = xx;
	y = yy;
	return x, y;
}
void point::printLocation()
{
	cout << "x=" << x << ",y=" << y << endl;
}
int main()
{
	point p;
	int a = 0, b = 0;
	cin >> a >> b;
	p.setLocation(10,20);
	p.printLocation();
	p.setLocation(a, b);
	p.printLocation();
	return 0;
}