#include "manager.h"
manager::manager(int id,string name,int dId)
{
	this->wId = id;
	this->wName = name;
	this->wDeptId = dId;
}
void manager::showInfo()
{
	cout << "ְ����ţ�" << this->wId
		<< "\tְ��������" << this->wName
		<< "\t��λ��" << this->getDeptName()
		<< "\t��λְ������ϰ���������´��Ա��������" << endl;
}
string manager::getDeptName()
{
	return string("����");
}