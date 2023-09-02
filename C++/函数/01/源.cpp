#include <iostream>
using namespace std;
void simon(int n)
{
	cout << "simon says touch your toes " << n << " times." << endl;
}
int main1()
{
	simon(3);
	cout << "pick an integer:";
	int count;
	cin >> count;
	simon(count);
	cout << "done!" << endl;
	return 0;
}