//#include <iostream>
//using namespace std;
//class person
//{
//public:
//	person()
//	{
//		cout << "�޲ι��캯������" << endl;
//	}
//	person(int a)
//	{
//		cout << "�вι��캯������" << endl;
//		age = a;
//	}
//	//�������캯��
//	person(const person& p)
//	{
//		cout << "�������캯������" << endl;
//	}
//	~person()
//	{
//		cout << "������������" << endl;
//	}
//	int age;
//};
//void test1()
//{
//	//���÷���
//	//1.���ŷ�
//	person p1;//��ͨ���캯��
//	person p2(10);//�вι��캯��
//	person p3(p1);//�������캯��
//	//person p1() ��������������ɺ������������ܵ�����ͨ���캯��
//	//2.��ʾ��
//	person p1;//��ͨ���캯��
//	person p2 = person(10);//�вι��캯��
//	person p3 = person(p1);//�������캯��
//	// person(10) �������� �ص㣺ִ���굱ǰ�к�ᱻϵͳ���̻���
//	// ע�⣺��Ҫ���ÿ��������ʼ��һ����������
//	// person��p2�� ����������Ϊ person��p2�� === person p2 ���������ض���
//	//3.��ʽת����
//	person p4 = 10;//�вι��캯��
//	person p5 = p4;//�������캯��
//}
//int main()
//{
//	test1();
//	system("pause");
//	return 0;
//}