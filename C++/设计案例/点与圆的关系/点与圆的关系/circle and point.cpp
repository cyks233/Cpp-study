#include <iostream>
using namespace std;
#include "circle.h"
#include "point.h"
////����
//class point
//{
//public:
//	//���õ�����
//	void setX(int X)
//	{
//		x = X;
//	}
//	void setY(int Y)
//	{
//		
//		y = Y;
//	}
//	//��ȡ������
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
////Բ��
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
	//����֮������ƽ��
	int distance =
		(c.getCenter().getX() - p.getX()) * (c.getCenter().getX() - p.getX()) +
		(c.getCenter().getY() - p.getY()) * (c.getCenter().getY() - p.getY());
	//�뾶��ƽ��
	int rDistance = c.getR() * c.getR();
	if (distance == rDistance)
	{
		cout << "����Բ��" << endl;
	}
	else if (distance < rDistance)
	{
		cout << "����Բ��" << endl;
	}
	else
	{
		cout << "����Բ��" << endl;
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