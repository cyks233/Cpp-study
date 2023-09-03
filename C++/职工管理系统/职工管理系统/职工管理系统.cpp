#include "workerManager.h"
#include "worker.h"
#include "employee.h"
#include "manager.h"
#include "boss.h"
using namespace std;


//void test01()
//{
//	worker* w = NULL;
//	w = new employee(1, "zhangsan", 1);
//	w->showInfo();
//	delete w;
//
//	w = new manager(2, "liSi", 2);
//	w->showInfo();
//	delete w;
//
//	w = new boss(3, "wangWu", 3);
//	w->showInfo();
//	delete w;
//}

int main()
{
	workerManager wm;
	//test01();
	int choice = 0;
	while (true)
	{
		//显示菜单的成员函数
		wm.showMenu();
		cout << "imput your choose:> ";
		cin >> choice;//接收用户的选择

		switch (choice)
		{
		case 0://退出系统
			wm.exitSystem();
			break;
		case 1://增加职工
			wm.addEmp();
			break;
		case 2://显示职工
			wm.showEmp();
			break;
		case 3://删除职工
			wm.delEmp();
			break;
		case 4://修改职工
			wm.modEmp();
			break;
		case 5://查找职工
			wm.findEmp();
			break;
		case 6://编号排序
			wm.sortEmp();
			break;
		case 7://清空文档
			wm.cleanEmp();
			break;
		default:
			system("cls");
			break;
		}
	}
	return 0;
}