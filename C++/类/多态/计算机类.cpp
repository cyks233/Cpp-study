//#include <iostream>
//#include <string>
//using namespace std;
//class calculator
//{
//public:
//	int num1;
//	int num2;
//	//��ͨʵ��
//	int getResult(string oper)
//	{
//		if (oper == "+")
//		{
//			return num1 + num2;
//		}
//		else if (oper == "-")
//		{
//			return num1 - num2;
//		}
//		else if (oper == "*")
//		{
//			return num1 * num2;
//		}
//		else if (oper == "/")
//		{
//			return num1 / num2;
//		}
//		//�������չ�¹��ܣ���Ҫ�޸�Դ��
//		//������ �ᳫ ����ԭ�򣺶���չ���п��������޸Ľ��йر�
//	}
//};
//void test01()
//{
//	calculator c;
//	c.num1 = 20;
//	c.num2 = 20;
//	cout << c.num1 << "/" << c.num2 << "=" << c.getResult("/") << endl;
//}
////��̬����ʵ��
////ʵ�ּ������ĳ�����
//class abstractClaculator
//{
//public:
//	int num1;
//	int num2;
//	virtual int getResult()
//	{
//		return 0;
//	}
//};
////�ӷ���������
//class addClaculator :public abstractClaculator
//{
//	int getResult()
//	{
//		return num1 + num2;
//	}
//};
////������������
//class subClaculator :public abstractClaculator
//{
//	int getResult()
//	{
//		return num1 - num2;
//	}
//};
////�˷���������
//class mulClaculator :public abstractClaculator
//{
//	int getResult()
//	{
//		return num1 * num2;
//	}
//};
////������������
//class divClaculator :public abstractClaculator
//{
//	int getResult()
//	{
//		return num1 / num2;
//	}
//};
//void test02()
//{
//	abstractClaculator* abc = new addClaculator;
//	abc->num1 = 10;
//	abc->num2 = 10;
//	cout << abc->num1 << "+" << abc->num2 << "=" << abc->getResult() << endl;
//	delete abc;
//	abc = new subClaculator;
//	abc->num1 = 10;
//	abc->num2 = 10;
//	cout << abc->num1 << "-" << abc->num2 << "=" << abc->getResult() << endl;
//	delete abc;
//	abc = new mulClaculator;
//	abc->num1 = 10;
//	abc->num2 = 10;
//	cout << abc->num1 << "*" << abc->num2 << "=" << abc->getResult() << endl;
//	delete abc;
//	abc = new divClaculator;
//	abc->num1 = 10;
//	abc->num2 = 10;
//	cout << abc->num1 << "/" << abc->num2 << "=" << abc->getResult() << endl;
//	delete abc;
//}
//int main()
//{
//	test02();
//	return 0;
//}