#include <iostream>
using namespace std;
int func01(int a, int b)
{
    return a + b;
}
template <class T>
T func02(T a, T b)
{
    return a + b;
}
void test01()
{
    int a = 10;
    int b = 20;
    char c = 'a';
    cout << func01(a, c) << endl; // 自动将字符a转换成ASCII码 a - 97 字符型 隐式转换 成 整型，与 a(int) 进行运算
    //cout << func02(a, b) << endl;
    //显示指定类型
    cout << func02<int>(a, c) << endl;
}
int main()
{
    test01();
    return 0;
}