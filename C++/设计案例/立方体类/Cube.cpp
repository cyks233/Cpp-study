#include <iostream>
using namespace std;
class cube
{
public:
//��Ϊ
	void set(int len,int wid,int hei)
	{
		length = len;
		width = wid;
		height = hei;

	}
	int get()
	{
		return length, width, height;
	}
	//���������
	int calculateS()
	{
		return 2 * (length * width) + 2 * (length * height) + 2 * (width * height);
	}
	int calculateV()
	{
		return length * width * height;
	}
	bool isSamebyclass(cube c)
	{
		if (get() == c.get())
		{
			return true;
		}
		return false;
	}
//����
private:
	int length;
	int width;
	int height;

};
bool isSame(cube &c1,cube &c2)
{
	if (c1.get() == c2.get())
	{
		return true;
	}
	return false;
}
int main()
{
	cube c1;
	c1.set(10, 10, 10);
	cout << "c1�����Ϊ" << c1.calculateS() << endl;
	cout << "c1�����Ϊ" << c1.calculateV() << endl;

	cube c2;
	c2.set(10, 10, 11);

	bool ret = isSame(c1, c2);
	if (ret)
	{
		cout << "c1��c2����ȵ�" << endl;
	}
	else
	{
		cout << "c1��c2�ǲ���ȵ�" << endl;
	}
	ret = c1.isSamebyclass(c2);
	if (ret)
	{
		cout << "��Ա�����жϣ�c1��c2����ȵ�" << endl;
	}
	else
	{
		cout << "��Ա�����жϣ�c1��c2�ǲ���ȵ�" << endl;
	}
	system("pause");
	return 0;
}