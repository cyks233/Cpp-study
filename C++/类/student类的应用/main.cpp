#include <iostream>
#include "student.h"
using namespace std;
student* getMax(student* p)
{
	student* q = p;
	for (int i = 0; i < 3; i++, p++)
	{
		if (q->getS() < p->getS())
		{
			q = p;
		}
	}
	return q;
}
int main()
{
	int i;
	student a[3] = { student("a",70),student("b",75),student("c") }, * p;
	for (i = 0; i < 3; i++)
	{
		a[i].display();
	}
	p = getMax(a);
	cout << "������õ�ѧ���ǣ�" << endl;
	p->display();
	return 0;
}