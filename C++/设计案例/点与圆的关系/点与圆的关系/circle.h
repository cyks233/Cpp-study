#pragma once
#include <iostream>
using namespace std;
#include "point.h"
//‘≤¿‡
class circle
{
public:
	void setR(int R);

	void setCenter(point Center);

	int getR();

	point getCenter();

private:
	int r;
	point center;
};