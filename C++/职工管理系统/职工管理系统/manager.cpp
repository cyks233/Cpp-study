#include "manager.h"
manager::manager(int id,string name,int dId)
{
	this->wId = id;
	this->wName = name;
	this->wDeptId = dId;
}
void manager::showInfo()
{
	cout << "职工编号：" << this->wId
		<< "\t职工姓名：" << this->wName
		<< "\t岗位：" << this->getDeptName()
		<< "\t岗位职责：完成老板给的任务，下达对员工的任务" << endl;
}
string manager::getDeptName()
{
	return string("经理");
}