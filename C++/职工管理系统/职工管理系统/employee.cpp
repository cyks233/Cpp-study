#include "employee.h"
employee::employee(int id, string name, int dId)
{
	this->wId = id;
	this->wName = name;
	this->wDeptId = dId;
}
void employee::showInfo()
{
	cout << "职工编号：" << this->wId
		<< "\t职工姓名：" << this->wName
		<< "\t岗位：" << this->getDeptName()
		<< "\t岗位职责：完成经理交给的任务" << endl;
}
string employee::getDeptName()
{
	return string("员工");
}