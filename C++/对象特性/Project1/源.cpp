#include <iostream>
using namespace std;
class person
{
public:
	int mAge;
	void showClassName()
	{
		cout << "this is person class" << endl;
	}
	void showPersonAge()
	{
		//加上这段代码防止传入空指针导致出错
		if (this == NULL)
		{
			return;
		}
		//cout<<"age = "<<this->mAge<<endl; 
		//mAge前面默认加上了this指针，但是传入的指针为空
		cout << "age = " << mAge << endl;
	}
};
void test1()
{
	person* p = NULL;
	p->showClassName();
	p->showPersonAge();
}
int main()
{
	test1();
	return 0;
}