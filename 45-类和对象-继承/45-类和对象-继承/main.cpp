#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<string>

using namespace std;


////�̳�-����ҳΪ��
//class BasePage//���࣬����վͳһ���ֵĲ���
//{
//public:
//	void header()
//	{
//		cout << "��Ŀ����Ƶ����¼��ע�ᡭ��(��վ����)" << endl;
//	}
//	void footer()
//	{
//		cout << "���������ԡ���(��վ����)" << endl;
//	}
//	void left()
//	{
//		cout << "Java��Python��C++����(��վ���)" << endl;
//	}
//};
//class Java : public BasePage//�̳еĸ�ʽ��class A : �̳з�ʽ B		A�������������࣬B�Ǹ����л���
//{
//public:
//	void content()
//	{
//		cout << "Java��Ƶ�б�(��ҳ��������)" << endl;
//	}
//};
//class Python : public BasePage
//{
//public:
//	void content()
//	{
//		cout << "Python��Ƶ�б�(��ҳ��������)" << endl;
//	}
//};
//class Cpp : public BasePage//Ja Py Cpp����ѧϰҳ�������
//{
//public:
//	void content()
//	{
//
//		cout << "C++��Ƶ�б�(��ҳ��������)" << endl;
//	}
//};
//void test01()
//{
//	Java ja;
//	Python py;
//	Cpp cpp;
//	//��������̳����Ĺ��ԣ�������ĸ���
//	ja.header();
//	ja.footer();
//	ja.left();
//	ja.content();
//	cout << "----------------------------------------" << endl;
//	py.header();
//	py.footer();
//	py.left();
//	py.content();
//	cout << "----------------------------------------" << endl;
//	cpp.header();
//	cpp.footer();
//	cpp.left();
//	cpp.content();
//}
//int main()
//{
//	test01();
//	return 0;
//}





////VS������Ա������ʾ�� �鿴����ģ��(��Ľṹ)-�����������صĸ���private�̳�
////D:			��ת�̷�
////cd ·��		����·��
////dir			�鿴��ǰĿ¼����
////cl /d1 reportSingleClassLayout���� "�ļ���.cpp"
////�ļ���.cpp����TAB������䣨cl����ĸL��d1������1��- û�ɹ�����������д���г���
//class Father
//{
//public:
//	int m_a;
//protected:
//	int m_b;
//private:
//	int m_c;
//};
//class Son : public Father
//{
//public:
//	int m_d;
//};
//void test01()
//{
//	cout<<sizeof(Son);//16
//}
//int main()
//{
//	test01();
//	return 0;
//}





////��̳�	��ͬ����ĳ�Աͬ�����������ԣ���Ҫ������::���
//class Base1
//{
//public:
//	int m_a;
//	Base1()
//	{
//		m_a = 1;
//	}
//};
//class Base2
//{
//public:
//	int m_a;
//	Base2()
//	{
//		m_a = 2;
//	}
//};
//class Son : public Base1, public Base2
//{
//public:
//	static int m_a;//��̬��Ա��������
//};
//int Son::m_a = 3;//��̬��Ա�����ʼ����ע���ʽ
//
//void test01()
//{
//	Son s;
//	cout << s.Base1::m_a << endl;
//	cout << s.Base2::m_a << endl;
//	cout << s.m_a << endl;
//}
//int main()
//{
//	test01();
//	return 0;
//}





////��̬��̬
////��������û��virtual���ڱ���׶���ȷ����ַ�ķ�ʽ���������"������˵��"
//////class Animal
//////{
//////public:
//////	void Speak()
//////	{
//////		cout << "������˵��" << endl;
//////	}
//////};
//////class Cat :public Animal
//////{
//////public:
//////	void Speak()
//////	{
//////		cout << "Сè��˵��" << endl;
//////	}
//////};
//////class Dog :public Animal
//////{
//////public:
//////	void Speak()
//////	{
//////		cout << "С����˵��" << endl;
//////	}
//////};
//////void DoSpeak(Animal& animal)
//////{
//////	animal.Speak();
//////}
//////void test()
//////{
//////	Cat cat;
//////	Dog dog;
//////	DoSpeak(cat);
//////	DoSpeak(dog);
//////}
//
////��������virtual�麯���������н׶β�ȷ����ַ�ķ�ʽ��ʵ����������ĺ���������ֱ���Сè��С��
//class Animal
//{
//public:
//	virtual void Speak()//Ψһ��Ҫ�޸ĵĵط������ຯ������virtual���麯�����ɣ����ַ��ȷ��
//	{
//		cout << "������˵��" << endl;
//	}
//};
//class Cat :public Animal
//{
//public:
//	void Speak()//����virtual������virtual�����Ӱ�졣��������д�������أ���д��������ͬ������������ȫһ����
//	{
//		cout << "Сè��˵��" << endl;
//	}
//};
//class Dog :public Animal
//{
//public:
//	void Speak()
//	{
//		cout << "С����˵��" << endl;
//	}
//};
//void DoSpeak(Animal& animal)//�������˸�������&��ͨ��
//{
//	animal.Speak();//������������Ĳ�ͬ�������麯��������߲�ͬ�����·��
//}
//void test()
//{
//	Cat cat;
//	Dog dog;
//	DoSpeak(cat);
//	DoSpeak(dog);
//}
//int main()
//{
//	test();
//	return 0;
//}





//