#include "boss.h"
boss::boss(int id, string name, int dId)
{
	this->wId = id;
	this->wName = name;
	this->wDeptId = dId;
}
void boss::showInfo()
{
	cout << "ְ����ţ�" << this->wId
		<< "\tְ��������" << this->wName
		<< "\t��λ��" << this->getDeptName()
		<< "\t��λְ�𣺹���˾��һ������" << endl;
}
string boss::getDeptName()
{
	return string("�ܲ�");
}