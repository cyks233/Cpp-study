#include "point.h"
#include "circle.h"

void circle::setR(int R)
{
	r = R;
}
void circle::setCenter(point Center)
{
	center = Center;
}
int circle::getR()
{
	return r;
}
point circle::getCenter()
{
	return center;
}
