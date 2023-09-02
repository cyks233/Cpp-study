#include <iostream>
using namespace std;
class cpu
{
public:
	virtual void calculate() = 0;
};
class gpu
{
public:
	virtual void display() = 0;
};
class memory
{
public:
	virtual void storage() = 0;
};
class computer 
{
	cpu* mCpu;
	gpu* mGpu;
	memory* mMem;
public:
	computer(cpu* c,gpu* g,memory* m)
	{
		mCpu = c;
		mGpu = g;
		mMem = m;
	}
	void work()
	{
		mCpu->calculate();
		mGpu->display();
		mMem->storage();
	}
	~computer()
	{
		if (mCpu != NULL)
		{
			delete mCpu;
			mCpu = NULL;
		}
		if (mGpu != NULL)
		{
			delete mGpu;
			mGpu = NULL;
		}
		if (mMem != NULL)
		{
			delete mMem;
			mMem = NULL;
		}
	}
};
class intelCpu :public cpu
{
public:
	virtual void calculate()
	{
		cout << "intel's cpu calculate now!" << endl;
	}
};
class intelGpu :public gpu
{
public:
	virtual void display()
	{
		cout << "intel's gpu display now!" << endl;
	}
};
class intelMenory :public memory
{
public:
	virtual void storage()
	{
		cout << "intel's memory storage now!" << endl;
	}
};

class amdCpu :public cpu
{
public:
	virtual void calculate()
	{
		cout << "amd's cpu calculate now!" << endl;
	}
};
class amdGpu :public gpu
{
public:
	virtual void display()
	{
		cout << "amd's gpu display now!" << endl;
	}
};
class amdMenory :public memory
{
public:
	virtual void storage()
	{
		cout << "amd's memory storage now!" << endl;
	}
};
void test01()
{
	cpu* ic = new intelCpu;
	gpu* ig = new intelGpu;
	memory* im = new intelMenory;

	cpu* ac = new amdCpu;
	gpu* ag = new amdGpu;
	memory* am = new amdMenory;

	computer* com1 = new computer(ic,ig,im);
	computer* com2 = new computer(ac, ag, am);
	
	com1->work();
	delete com1;
	cout << "-----------------------" << endl;
	com2->work();
	delete com2;
	cout << "-----------------------" << endl;
	computer* com3 = new computer(new amdCpu, new amdGpu, new intelMenory);
	com3->work();
	delete com3;
}
int main()
{
	test01();
	return 0;
}