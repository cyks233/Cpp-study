#include "workerManager.h"
//workerManager类的实现
workerManager::workerManager()
{
	ifstream ifs;
	ifs.open(FILENAME, ios::in);
	//文件不存在
	if (!ifs.is_open())
	{
		//cout << "文件不存在" << endl;
		//初始化属性
		//初始化记录人数
		this->wEmpNum = 0;
		//初始化数组指针
		this->wEmpArray = NULL;
		//初始化文件是否为空
		this->wDataIsEmpty = true;
		ifs.close();
		return;
	}
	//文件存在，但数据为空
	char ch;
	ifs >> ch;
	if (ifs.eof())
	{
		//cout << "文件为空" << endl;
		//初始化属性
		//初始化记录人数
		this->wEmpNum = 0;
		//初始化数组指针
		this->wEmpArray = NULL;
		//初始化文件是否为空
		this->wDataIsEmpty = true;
		ifs.close();
		return;
	}
	//文件存在，记录数据
	int num = this->getEmpNum();
	this->wEmpNum = num;
	this->wEmpArray = new worker * [this->wEmpNum];
	this->initEmp();
}
void workerManager::showMenu()
{
	cout << "==================================" << endl;
	cout << "=====  欢迎使用职工管理系统  =====" << endl;
	cout << "=====     0.退出管理程序     =====" << endl;
	cout << "=====     1.增加职工信息     =====" << endl;
	cout << "=====     2.显示职工信息     =====" << endl;
	cout << "=====     3.删除离职职工     =====" << endl;
	cout << "=====     4.修改职工信息     =====" << endl;
	cout << "=====     5.查找职工信息     =====" << endl;
	cout << "=====     6.按照编号排序     =====" << endl;
	cout << "=====     7.清空所有文档     =====" << endl;
	cout << "==================================" << endl;
	cout << endl;
}

void workerManager::exitSystem()
{
	cout << "您已退出职工管理系统，欢迎下次使用" << endl;
	exit(0);//退出程序
}



void workerManager::addEmp()
{
	cout << "请输入添加的职工数量：" << endl;
	int addNum = 0;
	cin >> addNum;
	if (addNum > 0)
	{
		//添加
		//计算新空间大小
		int newSize = this->wEmpNum + addNum;
		worker** newSpace = new worker * [newSize*sizeof(worker)];
		if (this->wEmpArray != NULL)
		{
			for (int i = 0; i < this->wEmpNum; i++)
			{
				newSpace[i] = this->wEmpArray[i];
			}
		}
		//批量添加新数据
		for (int i = 0; i < addNum; i++)
		{
			int id;
			string name;
			int dSelect;

			cout << "请输入第 " << i + 1 << " 个新职工的编号" << endl;
			cin >> id;
			cout << "请输入第 " << i + 1 << " 个新职工的姓名" << endl;
			cin >> name;
			cout << "请输入第 " << i + 1 << " 个新职工的岗位编号" << endl;
			cout << "1.普通职工  " << "2.经理  " << "3.总裁" << endl;;
			cin >> dSelect;
			worker* wWorker = NULL;
			switch (dSelect)
			{
			case 1:
				wWorker = new employee(id, name, 1);
				break;
			case 2:
				wWorker = new manager(id, name, 2);
				break;
			case 3:
				wWorker = new boss(id, name, 3);
				break;
			default:
				break;
			}
			//将创建职工职责，保存到数组中
			newSpace[this->wEmpNum + i] = wWorker;
		}

		//释放原有空间
		delete[]this->wEmpArray;
		//更改新空间的指向
		this->wEmpArray = newSpace;
		//更新新空间的人数
		this->wEmpNum = newSize;
		//保存数据到文件中
		this->save();
		//提示添加成功
		cout << "成功添加 " << addNum << " 名新职工" << endl;
		//更新数据文件状态为false
		this->wDataIsEmpty = false;
	}
	else
	{
		cout << "输入数据有误" << endl;
	}
	system("pause");
	system("cls");
}

void workerManager::save()
{
	ofstream ofs;
	ofs.open(FILENAME, ios::out);
	for (int i = 0; i < this->wEmpNum; i++)
	{
		ofs << this->wEmpArray[i]->wId << ' '
			<< this->wEmpArray[i]->wName << ' '
			<< this->wEmpArray[i]->wDeptId << endl;
	}
	ofs.close();
}

int workerManager::getEmpNum()
{
	ifstream ifs;
	ifs.open(FILENAME, ios::in);
	int id;
	string name;
	int dId;
	int num = 0;
	while (ifs >> id && ifs >> name && ifs >> dId)
	{
		//记录人数
		num++;
	}
	return num;
}

void workerManager::initEmp()
{
	ifstream ifs;
	ifs.open(FILENAME, ios::in);
	int id;
	string name;
	int dId;
	int index = 0;
	while (ifs >> id && ifs >> name && ifs >> dId)
	{
		worker* w = NULL;
		if (dId == 1)
		{
			w = new employee(id, name, dId);
		}
		else if (dId == 2)
		{
			w = new manager(id, name, dId);
		}
		else if (dId == 3)
		{
			w = new boss(id, name, dId);
		}
		this->wEmpArray[index] = w;
		index++;
	}
	ifs.close();
}

void workerManager::showEmp()
{
	if (this->wDataIsEmpty)
	{
		cout << "文件不存在或记录为空！" << endl;
	}
	else
	{
		for (int i = 0; i < wEmpNum; i++)
		{
			this->wEmpArray[i]->showInfo();
		}
	}
	system("pause");
	system("cls");
}
//删除职工
void workerManager::delEmp()
{
	if (this->wDataIsEmpty)
	{
		cout << "文件不存在或记录为空！" << endl;
	}
	else
	{
		cout << "请输入想要删除的员工编号：" << endl;
		int id = 0;
		cin >> id;
		int index = this->isExist(id);
		if (index != -1)
		{
			for (int i = index; i < this->wEmpNum - 1; i++)
			{
				this->wEmpArray[i] = this->wEmpArray[i + 1];
			}
			this->wEmpNum--;
			this->save();
			cout << "删除成功！" << endl;
		}
		else
		{
			cout << "删除失败，未找到该员工！" << endl;
		}
	}
	system("pause");
	system("cls");
}
//判断职工是否存在
int workerManager::isExist(int id)
{
	int index = -1;
	for (int i = 0; i < this->wEmpNum; i++)
	{
		if (this->wEmpArray[i]->wId == id)
		{
			index = i;
			break;
		}
	}
	return index;
}

void workerManager::modEmp()
{
	if (this->wDataIsEmpty)
	{
		cout << "文件不存在或记录为空！" << endl;
	}
	else
	{
		cout << "请输入要修改的职工编号：" << endl;
		int id;
		cin >> id;

		int ret = this->isExist(id);
		if (ret != -1)
		{
			delete this->wEmpArray[ret];
			int newId = 0;
			string newName = "";
			int dSelect = 0;
			cout << "查到：" << id << "号职工，请输入新职工号" << endl;
			cin >> newId;
			cout << "请输入姓名：" << endl;
			cin >> newName;
			cout << "1.普通职工  2.经理  3.老板" << endl << "请输入岗位：" << endl;
			cin >> dSelect;
			worker* w = NULL;
			switch (dSelect)
			{
			case 1:
				w = new employee(newId, newName, dSelect);
				break;
			case 2:
				w = new manager(newId, newName, dSelect);
				break;
			case 3:
				w = new boss(newId, newName, dSelect);
				break;
			default:
				break;
			}
			//更新数据
			this->wEmpArray[ret] = w;
			cout << "修改成功！" << endl;
			this->save();
		}
		else
		{
			cout << "修改失败，查无此人！" << endl;
		}
	}
	system("pause");
	system("cls");
}

void workerManager::findEmp()
{
	if (this->wDataIsEmpty)
	{
		cout << "文件不存在或记录为空！" << endl;
	}
	else
	{
		cout << "1.按编号查找   2.按姓名查找" << endl << "请输入查找的方法：" << endl;
		int select = 0;
		cin >> select;
		if (select == 1)
		{
			int id;
			cout << "请输入查找的职工编号：" << endl;
			cin >> id;
			int ret = isExist(id);
			if (ret != -1)
			{
				cout << "查找成功，该职工信息如下：" << endl;
				this->wEmpArray[ret]->showInfo();
			}
			else
			{
				cout << "查找失败，查无此人！" << endl;
			}
		}
		else if (select == 2)
		{
			string name;
			cout << "请输入查找的职工姓名：" << endl;
			cin >> name;
			bool flag = false;
			for (int i = 0; i < wEmpNum; i++)
			{
				if (this->wEmpArray[i]->wName == name)
				{
					cout << "查找成功，职工编号为" << this->wEmpArray[i]->wId << "号的职工信息如下:" << endl;
					this->wEmpArray[i]->showInfo();
					flag = true;
				}
			}
			if (flag == false)
			{
				cout << "查找失败，查无此人！" << endl;
			}
		}
		else
		{
			cout << "输入选项有误，请重新输入" << endl;
		}
	}
	system("pause");
	system("cls");
}

void workerManager::sortEmp()
{
	if (this->wDataIsEmpty)
	{
		cout << "文件不存在或记录为空！" << endl;
		system("pause");
		system("cls");
	}
	else
	{
		cout << "1.升序排序   2.降序排序" << endl << "请选择排序方式：" << endl; 
		int select = 0;
		cin >> select;
		for (int i = 0; i < this->wEmpNum; i++)
		{
			int minOrMax = i;
			for (int j = i + 1; j < this->wEmpNum ; j++)
			{
				if (select == 1)
				{
					if (this->wEmpArray[minOrMax]->wId > this->wEmpArray[j]->wId)
					{
						minOrMax = j;
					}
				}
				else
				{
					if (this->wEmpArray[minOrMax]->wId < this->wEmpArray[j]->wId)
					{
						minOrMax = j;
					}
				}
			}
			if (i != minOrMax)
			{
				worker* temp = this->wEmpArray[i];
				this->wEmpArray[i] = this->wEmpArray[minOrMax];
				this->wEmpArray[minOrMax] = temp;
			}
		}
		cout << "排序成功！排序后的结果为：" << endl;
		this->save();
		this->showEmp();
	}
}

void workerManager::cleanEmp()
{
	cout << "确定清空？" << endl << "1.确定    2.返回" << endl;
	int select = 0;
	cin >> select;
	if (select == 1)
	{
		ofstream ofs(FILENAME, ios::trunc);
		ofs.close();
		if (this->wEmpArray != NULL)
		{
			for (int i = 0; i < this->wEmpNum; i++)
			{
				delete this->wEmpArray[i];
				this->wEmpArray[i] = NULL;
			}
			delete[]this->wEmpArray;
			this->wEmpArray = NULL;
			this->wEmpNum = 0;
			this->wDataIsEmpty = true;
		}
		cout << "清空成功！" << endl;
	}
	system("pause");
	system("cls");
}


workerManager::~workerManager()
{
	if (this->wEmpArray != NULL)
	{
		for (int i = 0; i < this->wEmpNum; i++)
		{
			if (this->wEmpArray[i] != NULL)
			{
				delete this->wEmpArray[i];
			}
		}
		delete[]this->wEmpArray;
		this->wEmpArray = NULL;
	}
}