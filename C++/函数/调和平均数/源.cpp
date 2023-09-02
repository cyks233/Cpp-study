#include <iostream>
#include <iomanip>
using namespace std;
double avg(double x, double y)
{
	double avg = (2.0 * x * y) / (x + y);
	return avg;
}
int main()
{
	double a, b, c;
	while ((cin >> a >> b) && a != 0 && b != 0)
	{
		cout << "输入两个数" << endl;
		c = avg(a,b);
		cout << "调和平均数为" <<setprecision(3)<< c << endl;
	}

	return 0;
}