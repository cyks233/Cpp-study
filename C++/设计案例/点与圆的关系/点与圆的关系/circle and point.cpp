#include <iostream>
using namespace std;
#include "circle.h"
#include "point.h"
////点类
//class point
//{
//public:
//	//设置点坐标
//	void setX(int X)
//	{
//		x = X;
//	}
//	void setY(int Y)
//	{
//		
//		y = Y;
//	}
//	//获取点坐标
//	int getX()
//	{
//		return x;
//	}
//	int getY()
//	{
//		return y;
//	}
//private:
//	int x;
//	int y;
//};
////圆类
//class circle
//{
//public:
//	void setR(int R)
//	{
//		r = R;
//	}
//	void setCenter(point Center)
//	{
//		 center = Center;
//	}
//	int getR()
//	{
//		return r;
//	}
//	point getCenter()
//	{
//		return center;
//	}
//private:
//	int r;
//	point center;
//};
void isIncircle(circle &c,point &p)
{
	//两点之间距离的平方
	int distance =
		(c.getCenter().getX() - p.getX()) * (c.getCenter().getX() - p.getX()) +
		(c.getCenter().getY() - p.getY()) * (c.getCenter().getY() - p.getY());
	//半径的平方
	int rDistance = c.getR() * c.getR();
	if (distance == rDistance)
	{
		cout << "点在圆上" << endl;
	}
	else if (distance < rDistance)
	{
		cout << "点在圆内" << endl;
	}
	else
	{
		cout << "点在圆外" << endl;
	}
}
int main()
{
	circle c;
	c.setR(10);
	point center;
	center.setX(10);
	center.setY(0);
	c.setCenter(center);
	point p;
	p.setX(10);
	p.setY(10);
	isIncircle(c, p);


	system("pause");
	return 0;
}