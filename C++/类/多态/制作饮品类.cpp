//#include <iostream>
//using namespace std;
//class yinPin
//{
//public:
//	virtual void zhuShui() = 0;
//	virtual void chongPao() = 0;
//	virtual void daoShui() = 0;
//	virtual void jiaLiao() = 0;
//	void zhiZuo()
//	{
//		zhuShui();
//		chongPao();
//		daoShui();
//		jiaLiao();
//	}
//};
//class makeCoffee :public yinPin
//{
//public:
//	virtual void zhuShui()
//	{
//		cout << "���Ȫˮ" << endl;
//	}
//	virtual void chongPao()
//	{
//		cout << "���ݿ���" << endl;
//	}
//	virtual void daoShui()
//	{
//		cout << "��������" << endl;
//	}
//	virtual void jiaLiao()
//	{
//		cout << "�����Ǻ�ţ��" << endl;
//	}
//};
//class makeTea :public yinPin
//{
//public:
//	virtual void zhuShui()
//	{
//		cout << "�󴿾�ˮ" << endl;
//	}
//	virtual void chongPao()
//	{
//		cout << "���ݲ�Ҷ" << endl;
//	}
//	virtual void daoShui()
//	{
//		cout << "������ˮ" << endl;
//	}
//	virtual void jiaLiao()
//	{
//		cout << "�������" << endl;
//	}
//};
//void doWork(yinPin* yp) //yinPin* yp = new makeCoffee ����ָ��ָ�����������
//{
//	yp->zhiZuo();
//	delete yp;
//}
//void test01()
//{
//	//��������
//	doWork(new makeCoffee);
//	cout << "-------------" << endl;
//	//������ˮ
//	doWork(new makeTea);
//}
//int main()
//{
//	test01();
//	return 0;
//}