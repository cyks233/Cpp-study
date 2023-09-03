#include "workerManager.h"
//workerManager���ʵ��
workerManager::workerManager()
{
	ifstream ifs;
	ifs.open(FILENAME, ios::in);
	//�ļ�������
	if (!ifs.is_open())
	{
		//cout << "�ļ�������" << endl;
		//��ʼ������
		//��ʼ����¼����
		this->wEmpNum = 0;
		//��ʼ������ָ��
		this->wEmpArray = NULL;
		//��ʼ���ļ��Ƿ�Ϊ��
		this->wDataIsEmpty = true;
		ifs.close();
		return;
	}
	//�ļ����ڣ�������Ϊ��
	char ch;
	ifs >> ch;
	if (ifs.eof())
	{
		//cout << "�ļ�Ϊ��" << endl;
		//��ʼ������
		//��ʼ����¼����
		this->wEmpNum = 0;
		//��ʼ������ָ��
		this->wEmpArray = NULL;
		//��ʼ���ļ��Ƿ�Ϊ��
		this->wDataIsEmpty = true;
		ifs.close();
		return;
	}
	//�ļ����ڣ���¼����
	int num = this->getEmpNum();
	this->wEmpNum = num;
	this->wEmpArray = new worker * [this->wEmpNum];
	this->initEmp();
}
void workerManager::showMenu()
{
	cout << "==================================" << endl;
	cout << "=====  ��ӭʹ��ְ������ϵͳ  =====" << endl;
	cout << "=====     0.�˳��������     =====" << endl;
	cout << "=====     1.����ְ����Ϣ     =====" << endl;
	cout << "=====     2.��ʾְ����Ϣ     =====" << endl;
	cout << "=====     3.ɾ����ְְ��     =====" << endl;
	cout << "=====     4.�޸�ְ����Ϣ     =====" << endl;
	cout << "=====     5.����ְ����Ϣ     =====" << endl;
	cout << "=====     6.���ձ������     =====" << endl;
	cout << "=====     7.��������ĵ�     =====" << endl;
	cout << "==================================" << endl;
	cout << endl;
}

void workerManager::exitSystem()
{
	cout << "�����˳�ְ������ϵͳ����ӭ�´�ʹ��" << endl;
	exit(0);//�˳�����
}



void workerManager::addEmp()
{
	cout << "��������ӵ�ְ��������" << endl;
	int addNum = 0;
	cin >> addNum;
	if (addNum > 0)
	{
		//���
		//�����¿ռ��С
		int newSize = this->wEmpNum + addNum;
		worker** newSpace = new worker * [newSize*sizeof(worker)];
		if (this->wEmpArray != NULL)
		{
			for (int i = 0; i < this->wEmpNum; i++)
			{
				newSpace[i] = this->wEmpArray[i];
			}
		}
		//�������������
		for (int i = 0; i < addNum; i++)
		{
			int id;
			string name;
			int dSelect;

			cout << "������� " << i + 1 << " ����ְ���ı��" << endl;
			cin >> id;
			cout << "������� " << i + 1 << " ����ְ��������" << endl;
			cin >> name;
			cout << "������� " << i + 1 << " ����ְ���ĸ�λ���" << endl;
			cout << "1.��ְͨ��  " << "2.����  " << "3.�ܲ�" << endl;;
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
			//������ְ��ְ�𣬱��浽������
			newSpace[this->wEmpNum + i] = wWorker;
		}

		//�ͷ�ԭ�пռ�
		delete[]this->wEmpArray;
		//�����¿ռ��ָ��
		this->wEmpArray = newSpace;
		//�����¿ռ������
		this->wEmpNum = newSize;
		//�������ݵ��ļ���
		this->save();
		//��ʾ��ӳɹ�
		cout << "�ɹ���� " << addNum << " ����ְ��" << endl;
		//���������ļ�״̬Ϊfalse
		this->wDataIsEmpty = false;
	}
	else
	{
		cout << "������������" << endl;
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
		//��¼����
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
		cout << "�ļ������ڻ��¼Ϊ�գ�" << endl;
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
//ɾ��ְ��
void workerManager::delEmp()
{
	if (this->wDataIsEmpty)
	{
		cout << "�ļ������ڻ��¼Ϊ�գ�" << endl;
	}
	else
	{
		cout << "��������Ҫɾ����Ա����ţ�" << endl;
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
			cout << "ɾ���ɹ���" << endl;
		}
		else
		{
			cout << "ɾ��ʧ�ܣ�δ�ҵ���Ա����" << endl;
		}
	}
	system("pause");
	system("cls");
}
//�ж�ְ���Ƿ����
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
		cout << "�ļ������ڻ��¼Ϊ�գ�" << endl;
	}
	else
	{
		cout << "������Ҫ�޸ĵ�ְ����ţ�" << endl;
		int id;
		cin >> id;

		int ret = this->isExist(id);
		if (ret != -1)
		{
			delete this->wEmpArray[ret];
			int newId = 0;
			string newName = "";
			int dSelect = 0;
			cout << "�鵽��" << id << "��ְ������������ְ����" << endl;
			cin >> newId;
			cout << "������������" << endl;
			cin >> newName;
			cout << "1.��ְͨ��  2.����  3.�ϰ�" << endl << "�������λ��" << endl;
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
			//��������
			this->wEmpArray[ret] = w;
			cout << "�޸ĳɹ���" << endl;
			this->save();
		}
		else
		{
			cout << "�޸�ʧ�ܣ����޴��ˣ�" << endl;
		}
	}
	system("pause");
	system("cls");
}

void workerManager::findEmp()
{
	if (this->wDataIsEmpty)
	{
		cout << "�ļ������ڻ��¼Ϊ�գ�" << endl;
	}
	else
	{
		cout << "1.����Ų���   2.����������" << endl << "��������ҵķ�����" << endl;
		int select = 0;
		cin >> select;
		if (select == 1)
		{
			int id;
			cout << "��������ҵ�ְ����ţ�" << endl;
			cin >> id;
			int ret = isExist(id);
			if (ret != -1)
			{
				cout << "���ҳɹ�����ְ����Ϣ���£�" << endl;
				this->wEmpArray[ret]->showInfo();
			}
			else
			{
				cout << "����ʧ�ܣ����޴��ˣ�" << endl;
			}
		}
		else if (select == 2)
		{
			string name;
			cout << "��������ҵ�ְ��������" << endl;
			cin >> name;
			bool flag = false;
			for (int i = 0; i < wEmpNum; i++)
			{
				if (this->wEmpArray[i]->wName == name)
				{
					cout << "���ҳɹ���ְ�����Ϊ" << this->wEmpArray[i]->wId << "�ŵ�ְ����Ϣ����:" << endl;
					this->wEmpArray[i]->showInfo();
					flag = true;
				}
			}
			if (flag == false)
			{
				cout << "����ʧ�ܣ����޴��ˣ�" << endl;
			}
		}
		else
		{
			cout << "����ѡ����������������" << endl;
		}
	}
	system("pause");
	system("cls");
}

void workerManager::sortEmp()
{
	if (this->wDataIsEmpty)
	{
		cout << "�ļ������ڻ��¼Ϊ�գ�" << endl;
		system("pause");
		system("cls");
	}
	else
	{
		cout << "1.��������   2.��������" << endl << "��ѡ������ʽ��" << endl; 
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
		cout << "����ɹ��������Ľ��Ϊ��" << endl;
		this->save();
		this->showEmp();
	}
}

void workerManager::cleanEmp()
{
	cout << "ȷ����գ�" << endl << "1.ȷ��    2.����" << endl;
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
		cout << "��ճɹ���" << endl;
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