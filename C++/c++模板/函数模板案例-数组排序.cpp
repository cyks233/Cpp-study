#include <iostream>
using namespace std;
// 交换函数模板
template <class T>
void mySwap(T &a, T &b)
{
    T temp = a;
    a = b;
    b = temp;
}
// 选择排序函数模板
template <class T>
void mySort(T arr[], int len)
{
    for (int i = 0; i < len; i++)
    {
        int max = i;
        for (int j = i + 1; j < len; j++)
        {
            if (arr[max] < arr[j])
            {
                max = j;
            }
        }
        if (max != i)
        {
            mySwap(arr[max], arr[i]);
        }
    }
}
// 打印函数模板
template <class T>
void myPrint(T arr[], int len)
{
    for (int i = 0; i < len; i++)
    {
        cout << arr[i] << ' ';
    }
    cout << endl;
}
void test01()
{
    char charArr[] = "beadfs";
    int num = sizeof(charArr) / sizeof(char);
    mySort(charArr, num);
    myPrint(charArr, num);
}
void test02()
{
    int intArr[] = {6, 2, 4, 9, 7, 8, 15, 1};
    int num = sizeof(intArr) / sizeof(int);
    mySort(intArr, num);
    myPrint(intArr, num);
}
int main()
{
    // test01();
    test02();
    return 0;
}