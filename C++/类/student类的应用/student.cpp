#include <iostream>
#include <string>
#include "student.h"
using namespace std;
student::student(char* s, int t)
{
	name = new char[strlen(s) + 1];
	strcpy(name, s);
	score = t;
}
student::student(student& p)
{
	name = new char[strlen(p.name) + 1];
	strcpy(name, p.name);
	score = p.score;
}
student::~student()
{
	delete[]name;
}
void student::display(void)
{
	cout << "ÐÕÃû£º" << name << ",³É¼¨£º" << score << endl;
}
int student::getS(void)
{
	return score;
}