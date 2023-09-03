#pragma once
#include <iostream>
#include <fstream>
#include "worker.h"
#include "employee.h"
#include "manager.h"
#include "boss.h"
using namespace std;
#define FILENAME "empData.txt"

//workerManager类的声明
class workerManager
{
public:
	workerManager();
	//展示菜单
	void showMenu();
	//退出系统
	void exitSystem();
	~workerManager();
	//记录职工人数
	int wEmpNum = 0;
	//职工数组指针
	worker** wEmpArray;
	//添加职工
	void addEmp();
	void save();
	bool wDataIsEmpty;
	int getEmpNum();
	void initEmp();
	void showEmp();
	void delEmp();
	int isExist(int id);
	void modEmp();
	void findEmp();
	void sortEmp();
	void cleanEmp();
};