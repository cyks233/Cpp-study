#pragma once
#include <iostream>
using namespace std;

//点类
class point
{
public:
	//设置点坐标
	void setX(int X);

	void setY(int Y);
	//获取点坐标
	int getX();

	int getY();

private:
	int x;
	int y;
};