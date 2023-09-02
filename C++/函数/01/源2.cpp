#include <iostream>
using namespace std;
int main()
{
    int x = 3;
    do
    {
        x -= 2;
        cout << x;
    } while (!(--x));

    return 0;
}