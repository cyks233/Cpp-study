#pragma once
#include <iostream>
using namespace std;

//����
class point
{
public:
	//���õ�����
	void setX(int X);

	void setY(int Y);
	//��ȡ������
	int getX();

	int getY();

private:
	int x;
	int y;
};