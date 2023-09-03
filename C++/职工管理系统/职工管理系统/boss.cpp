#include "boss.h"
boss::boss(int id, string name, int dId)
{
	this->wId = id;
	this->wName = name;
	this->wDeptId = dId;
}
void boss::showInfo()
{
	cout << "职工编号：" << this->wId
		<< "\t职工姓名：" << this->wName
		<< "\t岗位：" << this->getDeptName()
		<< "\t岗位职责：管理公司的一切事务" << endl;
}
string boss::getDeptName()
{
	return string("总裁");
}