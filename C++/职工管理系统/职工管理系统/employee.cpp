#include "employee.h"
employee::employee(int id, string name, int dId)
{
	this->wId = id;
	this->wName = name;
	this->wDeptId = dId;
}
void employee::showInfo()
{
	cout << "ְ����ţ�" << this->wId
		<< "\tְ��������" << this->wName
		<< "\t��λ��" << this->getDeptName()
		<< "\t��λְ����ɾ�����������" << endl;
}
string employee::getDeptName()
{
	return string("Ա��");
}