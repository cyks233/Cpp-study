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
		//��ʾ�˵��ĳ�Ա����
		wm.showMenu();
		cout << "imput your choose:> ";
		cin >> choice;//�����û���ѡ��

		switch (choice)
		{
		case 0://�˳�ϵͳ
			wm.exitSystem();
			break;
		case 1://����ְ��
			wm.addEmp();
			break;
		case 2://��ʾְ��
			wm.showEmp();
			break;
		case 3://ɾ��ְ��
			wm.delEmp();
			break;
		case 4://�޸�ְ��
			wm.modEmp();
			break;
		case 5://����ְ��
			wm.findEmp();
			break;
		case 6://�������
			wm.sortEmp();
			break;
		case 7://����ĵ�
			wm.cleanEmp();
			break;
		default:
			system("cls");
			break;
		}
	}
	return 0;
}