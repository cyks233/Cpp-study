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
		cout << "����������" << endl;
		c = avg(a,b);
		cout << "����ƽ����Ϊ" <<setprecision(3)<< c << endl;
	}

	return 0;
}