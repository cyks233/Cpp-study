#pragma once
#include <iostream>
#include <fstream>
#include "worker.h"
#include "employee.h"
#include "manager.h"
#include "boss.h"
using namespace std;
#define FILENAME "empData.txt"

//workerManager�������
class workerManager
{
public:
	workerManager();
	//չʾ�˵�
	void showMenu();
	//�˳�ϵͳ
	void exitSystem();
	~workerManager();
	//��¼ְ������
	int wEmpNum = 0;
	//ְ������ָ��
	worker** wEmpArray;
	//���ְ��
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