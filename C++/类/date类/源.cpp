#include <iostream>
using namespace std;
class date
{
private:
	int year, month, day,hour, minute, second;
public:
	void setDate(int, int, int);
	void setTime(int, int, int);
	void printTime();
	void printDate();
};
void date::setDate(int yy, int mm, int dd)
{
	year = yy > 0 ? yy : 1;
	month = mm >= 1 && mm <= 12 ? mm : 1;
	day = dd >= 1 && dd <= 31 ? dd : 1;
}
void date::printDate()
{
	cout << year << '-' << month << '-' << day << endl;
}
void date::setTime(int h, int m, int s)
{
	hour = h >= 1 && h <= 24 ? h : 1;
	minute = m >= 1 && m <= 60 ? m : 1;
	second = s >= 1 && s <= 60 ? s : 1;
}
void date::printTime()
{
	cout << hour << ':' << minute << ':' << second << endl;
}
int main()
{
	date t;
	t.setDate(2022, 10, 14);
	t.setTime(17, 05, 30);
	t.printDate();
	t.printTime();
}